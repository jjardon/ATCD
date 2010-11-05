/**
 * @author William R. Otte <wotte@dre.vanderbilt.edu>
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * $Id$
 *
 * Wrapper facade for NDDS.
 */

#ifndef PUBLISHER_T_H_
#define PUBLISHER_T_H_

#include "dds4ccm/idl/dds_rtf2_dcpsC.h"

# include "ndds/ndds_cpp.h"

namespace CIAO
{
  namespace DDS4CCM
  {
    template <typename DDS_TYPE>
    class DDS_DataWriter_T;

    template <typename DDS_TYPE>
    class DDS_DataWriterListener_T;

    template <typename DDS_TYPE>
    class DDS_PublisherListener_T;

    template <typename DDS_TYPE>
    class DDS_DomainParticipant_T;

    template <typename DDS_TYPE>
    class DDS_Publisher_T :
      public virtual ::DDS::Publisher,
      public virtual ::CORBA::LocalObject
    {
    typedef DDS_Topic_T<DDS_TYPE> Topic_type;

    typedef DDS_DataWriter_T<DDS_TYPE> DataWriter_type;
    typedef DDS_DataWriterListener_T<DDS_TYPE> DataWriterListener_type;

    typedef DDS_PublisherListener_T<DDS_TYPE> PublisherListener_type;
    typedef DDS_DomainParticipant_T<DDS_TYPE> DomainParticipant_type;
    public:
      /// Constructor
      DDS_Publisher_T (DDSPublisher * dw);

      /// Destructor
      virtual ~DDS_Publisher_T (void);

      virtual
        ::DDS::DataWriter_ptr create_datawriter (::DDS::Topic_ptr a_topic,
                                                 const ::DDS::DataWriterQos & qos,
                                                 ::DDS::DataWriterListener_ptr a_listener,
                                                 ::DDS::StatusMask mask);

      virtual ::DDS::DataWriter_ptr create_datawriter_with_profile (
          ::DDS::Topic_ptr a_topic,
          const char* library_name,
          const char *profile_name,
          ::DDS::DataWriterListener_ptr a_listener,
          ::DDS::StatusMask mask);

      virtual
        ::DDS::ReturnCode_t delete_datawriter (::DDS::DataWriter_ptr a_datawriter);

      virtual
        ::DDS::DataWriter_ptr lookup_datawriter (const char * impl_name);

      virtual
        ::DDS::ReturnCode_t delete_contained_entities (void);

      virtual
        ::DDS::ReturnCode_t set_qos (const ::DDS::PublisherQos & qos);

      virtual
        ::DDS::ReturnCode_t get_qos (::DDS::PublisherQos & qos);

      virtual
        ::DDS::ReturnCode_t set_listener (::DDS::PublisherListener_ptr a_listener,
                                          ::DDS::StatusMask mask);

      virtual
        ::DDS::PublisherListener_ptr get_listener (void);

      virtual
        ::DDS::ReturnCode_t suspend_publications (void);

      virtual
        ::DDS::ReturnCode_t resume_publications (void);

      virtual
        ::DDS::ReturnCode_t begin_coherent_changes (void);

      virtual
        ::DDS::ReturnCode_t end_coherent_changes (void);

      virtual
        ::DDS::ReturnCode_t wait_for_acknowledgments (const ::DDS::Duration_t & max_wait);

      virtual
        ::DDS::DomainParticipant_ptr get_participant (void);

      virtual
        ::DDS::ReturnCode_t set_default_datawriter_qos (const ::DDS::DataWriterQos & qos);

      virtual
        ::DDS::ReturnCode_t get_default_datawriter_qos (::DDS::DataWriterQos & qos);

      virtual
        ::DDS::ReturnCode_t copy_from_topic_qos (::DDS::DataWriterQos & a_dataimpl_qos,
                                                 const ::DDS::TopicQos & a_impl_qos);

      virtual
        ::DDS::ReturnCode_t enable (void);

      virtual
        ::DDS::StatusCondition_ptr get_statuscondition (void);

      virtual
        ::DDS::StatusMask get_status_changes (void);

      virtual
        ::DDS::InstanceHandle_t get_instance_handle (void);

      DDSPublisher * get_impl (void);

      void set_impl (DDSPublisher *p);

    private:
      DDSPublisher *impl_;

      DDSPublisher *impl (void);
    };
  }
}

#include "dds4ccm/impl/ndds/Publisher_T.cpp"

#endif /* PUBLISHER_T_H_ */