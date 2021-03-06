#ifndef DANCE_SPLIT_PLAN_CPP
#define DANCE_SPLIT_PLAN_CPP

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "Split_Plan.h"
#include "dance/Logger/Log_Macros.h"

#ifdef _OPENMP
#include <omp.h>
#endif

namespace DAnCE
{
  template <class SPLITTER, class UUIDGEN>
  Split_Plan<SPLITTER, UUIDGEN>::Split_Plan ()
  {
    DANCE_TRACE ("Split_Plan::constructor");
  }

  template <class SPLITTER, class UUIDGEN>
  typename Split_Plan<SPLITTER, UUIDGEN>::TSubPlans &
  Split_Plan<SPLITTER, UUIDGEN>::plans ()
  {
    DANCE_TRACE ("Split_Plan::plans");

    return this->sub_plans_;
  }

  template <class SPLITTER, class UUIDGEN>
  void Split_Plan<SPLITTER, UUIDGEN>::split_plan (
                                                  const Deployment::DeploymentPlan &plan,
                                                  const typename Split_Plan<SPLITTER, UUIDGEN>::TSplitFilter &filter)
  {
    DANCE_TRACE ("Split_Plan::split_plan");

    TSubUUIDGen   sub_uuid_gen;
    TPlanSplitter plan_splitter (plan);

    // clear any bound sub plans
    this->sub_plans_.unbind_all ();

    DANCE_DEBUG (DANCE_LOG_TRACE, (LM_TRACE, DLINFO
                                   ACE_TEXT("Split_Plan::split_plan - ")
                                   ACE_TEXT("Creating sub-plans\n")));

    /*
     *  Selection phase
     */

    // Create and prepare the necessary sub-plans
    for (CORBA::ULong i = 0; i < plan.instance.length(); ++i)
      {
        DANCE_DEBUG (DANCE_LOG_TRACE, (LM_TRACE, DLINFO
                                       ACE_TEXT("Split_Plan::split_plan - ")
                                       ACE_TEXT("Matching instance %C\n"),
                                       plan.instance[i].name.in ()));

        // match instance against filter criteria
        if (!plan_splitter.match_instance (i, filter))
          continue; // next instance

        // Empty sub plan and key
        Deployment::DeploymentPlan  sub_plan;
        TSubPlanKey sub_plan_key;

        // check if instance belongs to any existing sub plan
        if (!this->find_sub_plan (plan_splitter, i, sub_plan_key, sub_plan))
          {
            // generic initialization of new sub plan

            // use UUID generator to generate UUID for sub plan
            sub_uuid_gen.generate_sub_uuid (plan,
                                            sub_plan, this->sub_plans_.current_size ());

            DANCE_DEBUG (DANCE_LOG_TRACE, (LM_TRACE, DLINFO
                                           ACE_TEXT("Split_Plan::split_plan - ")
                                           ACE_TEXT("Initializing new sub plan %C\n"),
                                           sub_plan.UUID.in ()));

            // setup association sequence lengths
            sub_plan.implementation.length (0);
            sub_plan.instance.length (0);
            sub_plan.connection.length (0);
            sub_plan.externalProperty.length (0);
            sub_plan.dependsOn.length (0);
            sub_plan.artifact.length (0);

            // @@ There is an optimization point here,
            // since we really don't have to pass the entire
            // CIAOServerResources into each individual child plan.
            sub_plan.infoProperty = plan.infoProperty;

            // add new property referring to parent plan
            Deployment::Property parent_property;
            parent_property.name = CORBA::string_dup (
                                                      "edu.vanderbilt.dre.DAnCE.ParentPlan");
            parent_property.value <<= plan.UUID.in ();
            CORBA::ULong prop_idx = sub_plan.infoProperty.length ();
            sub_plan.infoProperty.length (prop_idx+1);
            sub_plan.infoProperty[prop_idx] = parent_property;

            // initialize locality constraints
            CORBA::ULong num_localities = plan.localityConstraint.length ();
            Deployment::PlanLocalities default_loc (num_localities);
            default_loc.length (num_localities);

            for (CORBA::ULong i = 0; i < num_localities; ++i)
              {
                default_loc[i].constraint = Deployment::PlanNoConstraint;
              }

            sub_plan.localityConstraint = default_loc;
          }
        else
          {
            DANCE_DEBUG (DANCE_LOG_TRACE, (LM_TRACE, DLINFO
                                           ACE_TEXT("Split_Plan::split_plan - ")
                                           ACE_TEXT("Instance %C matched to sub plan %C\n"),
                                           plan.instance[i].name.in (),
                                           sub_plan.UUID.in ()));
          }

        DANCE_DEBUG (DANCE_LOG_TRACE, (LM_TRACE, DLINFO
                                       ACE_TEXT("Split_Plan::split_plan - ")
                                       ACE_TEXT("Preparing sub plan %C for instance %C\n"),
                                       sub_plan.UUID.in (),
                                       plan.instance[i].name.in ()));

        // Prepare the sub plan for this instance
        plan_splitter.prepare_sub_plan (i, sub_plan, sub_plan_key);

        // (re-)register sub plan
        this->sub_plans_.bind (sub_plan_key, sub_plan);
      }

    DANCE_DEBUG (DANCE_LOG_EVENT_TRACE,
                 (LM_DEBUG, DLINFO
                  ACE_TEXT("Split_Plan::split_plan - ")
                  ACE_TEXT("Selection phase produced %u child plans, ")
                  ACE_TEXT("proceeding to copying phase\n"),
                  this->sub_plans_.current_size ()));

    // build instance lists
    TSubPlanList sub_plan_list;
    for (TSubPlanIterator iter_plans = this->sub_plans_.begin ();
         iter_plans != this->sub_plans_.end ();
         ++iter_plans)
      {
        // get the sub plan and key for current instance
        TSubPlanKey& sub_plan_key = (*iter_plans).ext_id_;
        SubPlanList list_item;
        list_item.first = sub_plan_key;

        sub_plan_list.push_back (list_item);
      }

#ifdef _OPENMP
#pragma omp parallel for
    for (int i = 0; i < static_cast<int> (sub_plan_list.size ()); ++i)
#else
      for (CORBA::ULong i = 0; i < sub_plan_list.size (); ++i)
#endif
      {
        // get the sub plan and key for current instance
        TSubPlanKey& sub_plan_key = sub_plan_list[i].first;
        std::list < CORBA::ULong > &instances = sub_plan_list[i].second;

        for (CORBA::ULong i = 0; i < plan.instance.length (); ++i)
          {
            if (plan_splitter.match_sub_plan (i, sub_plan_key))
              instances.push_back (i);
          }
      }

    /*
     *  Copying phase
     */

      // (1) Iterate over the <instance> field of the global DeploymentPlan
      //     structure.
      // (2) Retrieve the necessary information to contruct the sub plans
      //     one by one.
#ifdef _OPENMP
#pragma omp parallel for
    for (int i = 0; i < static_cast <int> (sub_plan_list.size ()); ++i)
#else
      for (CORBA::ULong i = 0; i < (sub_plan_list.size ()); ++i)
#endif
        {
          // get the sub plan and key for current instance
          TSubPlanKey& sub_plan_key = sub_plan_list[i].first;

          ::Deployment::DeploymentPlan sub_plan;

          this->sub_plans_.find (sub_plan_key, sub_plan);

          // Get instance list
          std::list <CORBA::ULong> &instances = sub_plan_list[i].second;

          for (InstanceList::const_iterator i = instances.begin ();
               i != instances.end ();
               ++i)
            {
              CORBA::ULong pos = *i;

              DANCE_DEBUG (DANCE_LOG_TRACE, (LM_TRACE, DLINFO
                                             ACE_TEXT("Split_Plan::split_plan - ")
                                             ACE_TEXT("Processing instance: %C\n"),
                                             plan.instance[pos].name.in()));

              // Get the instance deployment description
              const Deployment::InstanceDeploymentDescription & my_instance =
                plan.instance[pos];

              // Fill in the contents of the sub plan entry.

              // Append the "MonolithicDeploymentDescriptions implementation"
              // field with a new "implementation", which is specified by the
              // <implementationRef> field of <my_instance> entry.
              Deployment::MonolithicDeploymentDescription const & my_implementation
                = plan.implementation[my_instance.implementationRef];

              CORBA::ULong index_imp = sub_plan.implementation.length ();
              sub_plan.implementation.length (index_imp + 1);
              sub_plan.implementation[index_imp] = my_implementation;

              // update the "ArtifactDeploymentDescriptions" <artifact> field
              // of the sub plan with the artifacts referenced by the <artifactRef>
              // sequence of the added implementation

              // Initialize with the correct sequence length.
              CORBA::ULongSeq ulong_seq;
              ulong_seq.length (my_implementation.artifactRef.length ());

              // append the "ArtifactDeploymentDescriptions"
              CORBA::ULong const impl_length =
                my_implementation.artifactRef.length ();
              CORBA::ULong const artifact_offset = sub_plan.artifact.length ();

              // extend <artifact> sequence to required size
              sub_plan.artifact.length (artifact_offset + impl_length);

              for (CORBA::ULong iter = 0;
                   iter < impl_length;
                   iter ++)
                {
                  CORBA::ULong artifact_ref = my_implementation.artifactRef[iter];

                  // Fill in the <artifact> field of the sub plan
                  sub_plan.artifact[artifact_offset + iter] =
                    plan.artifact[artifact_ref];

                  // Fill in the artifactRef field of the
                  // MonolithicDeploymentDescription
                  ulong_seq[iter] = artifact_offset + iter;
                }

              // Change the <artifactRef> field of the added "implementation" to
              // reference the artifact field of the sub plan
              sub_plan.implementation[index_imp].artifactRef = ulong_seq;

              // Append the "InstanceDeploymentDescription instance" field with
              // a new "instance", which is almost the same as the "instance" in
              // the global plan except the <implementationRef> field.
              CORBA::ULong index_ins = sub_plan.instance.length ();
              sub_plan.instance.length (index_ins + 1);
              sub_plan.instance[index_ins] = my_instance;

              // Update the <implementationRef> field of the "instance".
              sub_plan.instance[index_ins].implementationRef = index_imp;

              DANCE_DEBUG (DANCE_LOG_TRACE, (LM_TRACE, DLINFO
                                             ACE_TEXT("Split_Plan::split_plan - ")
                                             ACE_TEXT("Processing connections.\n")));
              // Copy connections
              for (CORBA::ULong j = 0; j < plan.connection.length (); ++j)
                {
                  DANCE_DEBUG (DANCE_LOG_DETAILED_TRACE, (LM_TRACE, DLINFO
                                                          ACE_TEXT("Split_Plan::split_plan - ")
                                                          ACE_TEXT("Connection: %C\n"),
                                                          plan.connection[j].name.in ()));
                  for (CORBA::ULong k = 0;
                       k < plan.connection[j].internalEndpoint.length (); ++k)
                    {
                      DANCE_DEBUG (DANCE_LOG_DETAILED_TRACE, (LM_TRACE, DLINFO
                                                              ACE_TEXT("Split_Plan::split_plan - ")
                                                              ACE_TEXT("Endpoint: %C(%C)\n"),
                                                              plan.connection[j].internalEndpoint[k].portName.in (),
                                                              plan.connection[j].internalEndpoint[k].provider ?
                                                              "provider" : "client"));

                      // check if connection endpoint references the instance (i)
                      // we're adding to the sub plan
                      if (pos == plan.connection[j].internalEndpoint[k].instanceRef)
                        {
                          Deployment::PlanConnectionDescription *
                            connection_copied = 0;

                          // check if we already copied this connection
                          // (for an earlier endpoint match)
                          for (CORBA::ULong m = 0;
                               m < sub_plan.connection.length (); ++m)
                            {
                              if (ACE_OS::strcmp (plan.connection[j].name.in (),
                                                  sub_plan.connection[m].name.in ()) == 0)
                                {
                                  connection_copied = &sub_plan.connection[m];
                                  break;
                                }
                            }

                          if (!connection_copied)
                            {
                              // Copy the connection
                              CORBA::ULong const index_con =
                                sub_plan.connection.length();
                              sub_plan.connection.length (index_con + 1);
                              sub_plan.connection[index_con] = plan.connection[j];
                              connection_copied = &sub_plan.connection[index_con];
                              connection_copied->internalEndpoint.length (0);
                            }

                          // Copy the endpoint
                          CORBA::ULong const index_ep =
                            connection_copied->internalEndpoint.length();

                          DANCE_DEBUG (DANCE_LOG_DETAILED_TRACE, (LM_TRACE, DLINFO
                                                                  ACE_TEXT("Split_Plan::split_plan - ")
                                                                  ACE_TEXT ("Copying endpoint %u into endpoint %u\n"),
                                                                  k, index_ep));

                          connection_copied->internalEndpoint.length (
                                                                      index_ep + 1);
                          connection_copied->internalEndpoint[index_ep] =
                            plan.connection[j].internalEndpoint[k];
                          connection_copied->internalEndpoint[index_ep].instanceRef
                            = index_ins;
                        }
                    }
                }

              // copy any locality constraints matching the instance we're
              // adding to the sub plan
              for (CORBA::ULong j = 0;
                   j < plan.localityConstraint.length (); ++j)
                {
                  const Deployment::PlanLocality &loc =
                    plan.localityConstraint[j];
                  for (CORBA::ULong k = 0;
                       k < loc.constrainedInstanceRef.length (); ++k)
                    {
                      // we are the same instance...
                      if (loc.constrainedInstanceRef[k] == pos)
                        {
                          // add our new instance ref to the sub plan's
                          // corresponding contraint.
                          CORBA::ULong sub_loc_len =
                            sub_plan.localityConstraint[j].constrainedInstanceRef.length ();

                          DANCE_DEBUG (DANCE_LOG_DETAILED_TRACE,
                                       (LM_TRACE,
                                        DLINFO ACE_TEXT ("Split_Plan::split_plan - ")
                                        ACE_TEXT ("Found matching locality constraint ")
                                        ACE_TEXT ("%u:%u,")
                                        ACE_TEXT (" adding to %u:%u as %u\n"),
                                        j, k, j, sub_loc_len, index_ins));

                          // set the correct constraint type
                          sub_plan.localityConstraint[j].constraint =
                            loc.constraint;

                          // add instance reference to matched contraint
                          // thank god someone made an 18 and 20+ char
                          // member variable...
                          sub_plan.localityConstraint[j].constrainedInstanceRef.length (
                                                                                        sub_loc_len + 1);
                          sub_plan.localityConstraint[j].constrainedInstanceRef[
                                                                                sub_loc_len] = index_ins;
                        }
                    }
                }
            }
          // rebing updated sub plan
          this->sub_plans_.rebind (sub_plan_key, sub_plan);
        }
    /*
     *  Finalization
     */

    // finalize all sub plans
    for (TSubPlanIterator iter_plans = this->sub_plans_.begin ();
         iter_plans != this->sub_plans_.end ();
         ++iter_plans)
      {
        // get the sub plan and key for current instance
        ::Deployment::DeploymentPlan& sub_plan = (*iter_plans).int_id_;
        TSubPlanKey& sub_plan_key = (*iter_plans).ext_id_;

        // finalize sub plan
        plan_splitter.finalize_sub_plan (sub_plan, sub_plan_key);
      }
  }

  template <class SPLITTER, class UUIDGEN>
  bool
  Split_Plan<SPLITTER, UUIDGEN>::find_sub_plan (
                                                const TPlanSplitter &plan_splitter,
                                                CORBA::ULong instance,
                                                TSubPlanKey &sub_plan_key,
                                                Deployment::DeploymentPlan &sub_plan)
  {
    DANCE_TRACE ("Split_Plan::find_sub_plan");

    for (TSubPlanIterator iter_plans = this->sub_plans_.begin ();
         iter_plans != this->sub_plans_.end ();
         ++iter_plans)
      {
        if (plan_splitter.match_sub_plan (instance, (*iter_plans).ext_id_))
          {
            // get the sub plan and key for current instance
            sub_plan_key = (*iter_plans).ext_id_;
            this->sub_plans_.unbind (sub_plan_key, sub_plan);
            return true;
          }
      }
    return false;
  }
}

#endif /* DANCE_SPLIT_PLAN_CPP */
