/* -*- C++ -*- $Id$ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "FT_CORBAS.h"

#if (TAO_HAS_FT_CORBA == 1)

#include "Operation_Table.h"
#include "Object_Adapter.h"
#include "tao/Stub.h"
#include "tao/ORB_Core.h"
#include "tao/Server_Request.h"
#include "tao/NVList.h"

// The code needs to be cleaned up a bit here.. - Bala
#if !defined (__ACE_INLINE__)
#include "FT_CORBAS.i"
#endif /* !defined INLINE */

class TAO_FT_RequestDurationPolicy_Perfect_Hash_OpTable : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);
public:
 const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};
/* starting time is 15:23:34 */
/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /project/acetmp/bala/ACE_wrappers/bin/gperf -m -M -J -c -C -D -E -T -f 0 -F 0 -a -o -t -p -K opname_ -L C++ -Z TAO_FT_RequestDurationPolicy_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_FT_RequestDurationPolicy_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
#if defined (ACE_MVS)
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28,  0,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28,  0,
     28,  0,  0,  0, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28,  0, 28, 28, 28, 28,  0, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28,
#else
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28,  0, 28,  0, 28,  0,
      0,  0, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28,  0, 28, 28, 28,
     28,  0, 28, 28, 28, 28, 28, 28,
#endif /* ACE_MVS */
    };
  return len + asso_values[str[len - 1]] + asso_values[str[0]];
}

const class TAO_operation_db_entry *
TAO_FT_RequestDurationPolicy_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 27,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 27,
      HASH_VALUE_RANGE = 24,
      DUPLICATES = 0
    };

  static const class TAO_operation_db_entry  wordlist[] =
    {
      {"",0},{"",0},{"",0},{"",0},
      {"copy",  &FT_POA_RequestDurationPolicy::copy_skel},
      {"_is_a",  &FT_POA_RequestDurationPolicy::_is_a_skel},
      {"",0},
      {"destroy", &FT_POA_RequestDurationPolicy::destroy_skel},
      {"",0},{"",0},{"",0},{"",0},{"",0},
      {"_non_existent", FT_POA_RequestDurationPolicy::_non_existent_skel},
      {"",0},{"",0},
      {"_get_policy_type", &FT_POA_RequestDurationPolicy::_get_policy_type_skel},
      {"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},
      {"",0},
      {"_get_request_duration_value",&FT_POA_RequestDurationPolicy::_get_request_duration_value_skel},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname_;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}
/* ending time is 15:23:34 */
static TAO_FT_RequestDurationPolicy_Perfect_Hash_OpTable tao_FT_RequestDurationPolicy_optable;

FT::RequestDurationPolicy_ptr _TAO_collocation_POA_FT_RequestDurationPolicy_Stub_Factory (
    CORBA::Object_ptr obj
  )
{
  TAO_Stub *stub = obj->_stubobj ();

  switch (stub->servant_orb_var ()->orb_core ()->get_collocation_strategy ())
    {
    case TAO_ORB_Core::THRU_POA:
      {
      FT::RequestDurationPolicy_ptr retval = 0;
      ACE_NEW_RETURN (
          retval,
          FT_POA_tao_thru_poa_collocated_RequestDurationPolicy (stub),
          0
        );
      return retval;
      }
    case TAO_ORB_Core::DIRECT:
      break;
    default:
      break;
    }
  return 0;
}

int _TAO_collocation_POA_FT_RequestDurationPolicy_Stub_Factory_Initializer (long dummy)
{
  ACE_UNUSED_ARG (dummy);

  _TAO_collocation_FT_RequestDurationPolicy_Stub_Factory_function_pointer =
    _TAO_collocation_POA_FT_RequestDurationPolicy_Stub_Factory;

  return 0;
}

static int _TAO_collocation_POA_FT_RequestDurationPolicy_Stub_Factory_Initializer_Scarecrow =
  _TAO_collocation_POA_FT_RequestDurationPolicy_Stub_Factory_Initializer (ACE_reinterpret_cast (long, _TAO_collocation_POA_FT_RequestDurationPolicy_Stub_Factory_Initializer));

// skeleton constructor
FT_POA_RequestDurationPolicy::FT_POA_RequestDurationPolicy (void)
{
  this->optable_ = &tao_FT_RequestDurationPolicy_optable;
}

// copy ctor
FT_POA_RequestDurationPolicy::FT_POA_RequestDurationPolicy (const FT_POA_RequestDurationPolicy& rhs)
  :   ACE_NESTED_CLASS (POA_CORBA,Policy) (rhs),
    TAO_ServantBase (rhs)
{}

// skeleton destructor
FT_POA_RequestDurationPolicy::~FT_POA_RequestDurationPolicy (void)
{
}

void FT_POA_RequestDurationPolicy::_get_request_duration_value_skel (
    CORBA::ServerRequest &_tao_server_request,
    void *_tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
)
{
  FT_POA_RequestDurationPolicy *_tao_impl = (FT_POA_RequestDurationPolicy *)_tao_object_reference;

  TimeBase::TimeT _tao_retval = 0;

      _tao_retval = _tao_impl->request_duration_value (
        ACE_TRY_ENV
      );

      ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(
    (_tao_out << _tao_retval)
  ))
    ACE_THROW (CORBA::MARSHAL () );

}

void FT_POA_RequestDurationPolicy::_is_a_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  TAO_InputCDR &_tao_in = _tao_server_request.incoming ();
  FT_POA_RequestDurationPolicy *_tao_impl = (FT_POA_RequestDurationPolicy *) _tao_object_reference;
  CORBA::Boolean _tao_retval = 0;
  CORBA::String_var value;
  if (!(_tao_in >> value.out ()))
    ACE_THROW (CORBA::MARSHAL ());

  _tao_retval = _tao_impl->_is_a (value.in (), ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(_tao_out << CORBA::Any::from_boolean (_tao_retval)))
    ACE_THROW (CORBA::MARSHAL ());
}

void FT_POA_RequestDurationPolicy::_non_existent_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  FT_POA_RequestDurationPolicy *_tao_impl = (FT_POA_RequestDurationPolicy *) _tao_object_reference;
  CORBA::Boolean _tao_retval = _tao_impl->_non_existent (ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(_tao_out << CORBA::Any::from_boolean (_tao_retval)))
    ACE_THROW (CORBA::MARSHAL ());
}

CORBA::Boolean FT_POA_RequestDurationPolicy::_is_a (
    const char* value,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/FT/RequestDurationPolicy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Policy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, CORBA::_tc_Object->id (ACE_TRY_ENV))))
      return 1;
    else
      return 0;
}

void* FT_POA_RequestDurationPolicy::_downcast (
    const char* logical_type_id
  )
{
if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/FT/RequestDurationPolicy:1.0") == 0)
    return ACE_static_cast (FT_POA_RequestDurationPolicy_ptr, this);
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Policy:1.0") == 0)
    return ACE_static_cast (POA_CORBA::Policy_ptr, this);
    if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Object:1.0") == 0)
    return ACE_static_cast(PortableServer::Servant, this);
  return 0;
}

void FT_POA_RequestDurationPolicy::_dispatch (CORBA::ServerRequest &req, void *context, CORBA::Environment &ACE_TRY_ENV)
{
  this->synchronous_upcall_dispatch(req, context, this, ACE_TRY_ENV);
}

const char* FT_POA_RequestDurationPolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/FT/RequestDurationPolicy:1.0";
}

FT::RequestDurationPolicy*
FT_POA_RequestDurationPolicy::_this (CORBA_Environment &ACE_TRY_ENV)
{
  TAO_Stub *stub = this->_create_stub (ACE_TRY_ENV);
  ACE_CHECK_RETURN (0);
  if (stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ())
    switch (stub->servant_orb_var ()->orb_core ()->get_collocation_strategy ())
      {
      case TAO_ORB_Core::THRU_POA:
        {
          ::FT::RequestDurationPolicy_ptr retval = 0;
          ACE_NEW_RETURN (
              retval,
              FT_POA_tao_thru_poa_collocated_RequestDurationPolicy (stub),
              0
            );
          return retval;
        }
      case TAO_ORB_Core::DIRECT:
        ACE_THROW_RETURN (CORBA::BAD_PARAM (), 0);
      default:
        ACE_THROW_RETURN (CORBA::BAD_PARAM (), 0);
      }
  else
    {
      // stub->_incr_refcnt ();
      CORBA::Object_ptr tmp = CORBA::Object::_nil ();
      ACE_NEW_RETURN (tmp, CORBA::Object (stub), 0);
      CORBA::Object_var obj = tmp;
      return ::FT::RequestDurationPolicy::_unchecked_narrow (obj.in ());
    }
}

FT_POA_tao_thru_poa_collocated_RequestDurationPolicy::FT_POA_tao_thru_poa_collocated_RequestDurationPolicy (
  TAO_Stub *stub
)
  :  ACE_NESTED_CLASS (POA_CORBA,_tao_thru_poa_collocated_CORBA_Policy) (stub),
    CORBA_Object (stub, 1)
{
}

CORBA::Boolean FT_POA_tao_thru_poa_collocated_RequestDurationPolicy::_is_a(
    const CORBA::Char *logical_type_id,
    CORBA_Environment &ACE_TRY_ENV
  )

{
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "_is_a",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN (0);
  return ACE_reinterpret_cast (
      FT_POA_RequestDurationPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/RequestDurationPolicy:1.0"
        )
    )->_is_a (logical_type_id, ACE_TRY_ENV);
}


CORBA::Boolean FT_POA_tao_thru_poa_collocated_RequestDurationPolicy::_non_existent(
    CORBA_Environment &ACE_TRY_ENV
  )

{
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "_non_existent",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN (0);
  return ACE_reinterpret_cast (
      FT_POA_RequestDurationPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/RequestDurationPolicy:1.0"
        )
    )->_non_existent (ACE_TRY_ENV);
}


TimeBase::TimeT
FT_POA_tao_thru_poa_collocated_RequestDurationPolicy::request_duration_value  (
    CORBA::Environment &ACE_TRY_ENV
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  TimeBase::TimeT _tao_retval = 0;
  ACE_UNUSED_ARG (_tao_retval);
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "request_duration_value",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN  (_tao_retval);
  return ACE_reinterpret_cast (
      FT_POA_RequestDurationPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/RequestDurationPolicy:1.0"
        )
    )->request_duration_value (
      ACE_TRY_ENV
    );

}



class TAO_FT_HeartbeatPolicy_Perfect_Hash_OpTable : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);
public:
 const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};
/* starting time is 15:23:34 */
/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /project/acetmp/bala/ACE_wrappers/bin/gperf -m -M -J -c -C -D -E -T -f 0 -F 0 -a -o -t -p -K opname_ -L C++ -Z TAO_FT_HeartbeatPolicy_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_FT_HeartbeatPolicy_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
#if defined (ACE_MVS)
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28,  0,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28,  0,
     28,  0,  0,  0, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28,  0, 28, 28, 28, 28,  0, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28,
#else
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28,  0, 28,  0, 28,  0,
      0,  0, 28, 28, 28, 28, 28, 28, 28, 28,
     28, 28, 28, 28, 28, 28,  0, 28, 28, 28,
     28,  0, 28, 28, 28, 28, 28, 28,
#endif /* ACE_MVS */
    };
  return len + asso_values[str[len - 1]] + asso_values[str[0]];
}

const class TAO_operation_db_entry *
TAO_FT_HeartbeatPolicy_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 27,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 27,
      HASH_VALUE_RANGE = 24,
      DUPLICATES = 0
    };

  static const class TAO_operation_db_entry  wordlist[] =
    {
      {"",0},{"",0},{"",0},{"",0},
      {"copy",  &FT_POA_HeartbeatPolicy::copy_skel},
      {"_is_a",  &FT_POA_HeartbeatPolicy::_is_a_skel},
      {"",0},
      {"destroy",  &FT_POA_HeartbeatPolicy::destroy_skel},
      {"",0},{"",0},{"",0},{"",0},{"",0},
      {"_non_existent",  &FT_POA_HeartbeatPolicy::_non_existent_skel},
      {"",0},{"",0},
      {"_get_policy_type", &FT_POA_HeartbeatPolicy::_get_policy_type_skel},
      {"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},
      {"",0},
      {"_get_heartbeat_policy_value", &FT_POA_HeartbeatPolicy::_get_heartbeat_policy_value_skel},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname_;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}
/* ending time is 15:23:34 */
static TAO_FT_HeartbeatPolicy_Perfect_Hash_OpTable tao_FT_HeartbeatPolicy_optable;

FT::HeartbeatPolicy_ptr _TAO_collocation_POA_FT_HeartbeatPolicy_Stub_Factory (
    CORBA::Object_ptr obj
  )
{
  TAO_Stub *stub = obj->_stubobj ();

  switch (stub->servant_orb_var ()->orb_core ()->get_collocation_strategy ())
    {
    case TAO_ORB_Core::THRU_POA:
      {
      FT::HeartbeatPolicy_ptr retval = 0;
      ACE_NEW_RETURN (
          retval,
          FT_POA_tao_thru_poa_collocated_HeartbeatPolicy (stub),
          0
        );
      return retval;
      }
    case TAO_ORB_Core::DIRECT:
      break;
    default:
      break;
    }
  return 0;
}

int _TAO_collocation_POA_FT_HeartbeatPolicy_Stub_Factory_Initializer (long dummy)
{
  ACE_UNUSED_ARG (dummy);

  _TAO_collocation_FT_HeartbeatPolicy_Stub_Factory_function_pointer =
    _TAO_collocation_POA_FT_HeartbeatPolicy_Stub_Factory;

  return 0;
}

static int _TAO_collocation_POA_FT_HeartbeatPolicy_Stub_Factory_Initializer_Scarecrow =
  _TAO_collocation_POA_FT_HeartbeatPolicy_Stub_Factory_Initializer (ACE_reinterpret_cast (long, _TAO_collocation_POA_FT_HeartbeatPolicy_Stub_Factory_Initializer));

// skeleton constructor
FT_POA_HeartbeatPolicy::FT_POA_HeartbeatPolicy (void)
{
  this->optable_ = &tao_FT_HeartbeatPolicy_optable;
}

// copy ctor
FT_POA_HeartbeatPolicy::FT_POA_HeartbeatPolicy (const FT_POA_HeartbeatPolicy& rhs)
  :   ACE_NESTED_CLASS (POA_CORBA,Policy) (rhs),
    TAO_ServantBase (rhs)
{}

// skeleton destructor
FT_POA_HeartbeatPolicy::~FT_POA_HeartbeatPolicy (void)
{
}

void FT_POA_HeartbeatPolicy::_get_heartbeat_policy_value_skel (
    CORBA::ServerRequest &_tao_server_request,
    void *_tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
)
{
  FT_POA_HeartbeatPolicy *_tao_impl = (FT_POA_HeartbeatPolicy *)_tao_object_reference;

  FT::HeartbeatPolicyValue _tao_retval;

      _tao_retval = _tao_impl->heartbeat_policy_value (
        ACE_TRY_ENV
      );

      ACE_CHECK;


  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(
    (_tao_out << _tao_retval)
  ))
    ACE_THROW (CORBA::MARSHAL () );

}

void FT_POA_HeartbeatPolicy::_is_a_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  TAO_InputCDR &_tao_in = _tao_server_request.incoming ();
  FT_POA_HeartbeatPolicy *_tao_impl = (FT_POA_HeartbeatPolicy *) _tao_object_reference;
  CORBA::Boolean _tao_retval = 0;
  CORBA::String_var value;
  if (!(_tao_in >> value.out ()))
    ACE_THROW (CORBA::MARSHAL ());

  _tao_retval = _tao_impl->_is_a (value.in (), ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(_tao_out << CORBA::Any::from_boolean (_tao_retval)))
    ACE_THROW (CORBA::MARSHAL ());
}

void FT_POA_HeartbeatPolicy::_non_existent_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  FT_POA_HeartbeatPolicy *_tao_impl = (FT_POA_HeartbeatPolicy *) _tao_object_reference;
  CORBA::Boolean _tao_retval = _tao_impl->_non_existent (ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(_tao_out << CORBA::Any::from_boolean (_tao_retval)))
    ACE_THROW (CORBA::MARSHAL ());
}

CORBA::Boolean FT_POA_HeartbeatPolicy::_is_a (
    const char* value,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/FT/HeartbeatPolicy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Policy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, CORBA::_tc_Object->id (ACE_TRY_ENV))))
      return 1;
    else
      return 0;
}

void* FT_POA_HeartbeatPolicy::_downcast (
    const char* logical_type_id
  )
{
if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/FT/HeartbeatPolicy:1.0") == 0)
    return ACE_static_cast (FT_POA_HeartbeatPolicy_ptr, this);
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Policy:1.0") == 0)
    return ACE_static_cast (POA_CORBA::Policy_ptr, this);
    if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Object:1.0") == 0)
    return ACE_static_cast(PortableServer::Servant, this);
  return 0;
}

void FT_POA_HeartbeatPolicy::_dispatch (CORBA::ServerRequest &req, void *context, CORBA::Environment &ACE_TRY_ENV)
{
  this->synchronous_upcall_dispatch(req, context, this, ACE_TRY_ENV);
}

const char* FT_POA_HeartbeatPolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/FT/HeartbeatPolicy:1.0";
}

FT::HeartbeatPolicy*
FT_POA_HeartbeatPolicy::_this (CORBA_Environment &ACE_TRY_ENV)
{
  TAO_Stub *stub = this->_create_stub (ACE_TRY_ENV);
  ACE_CHECK_RETURN (0);
  if (stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ())
    switch (stub->servant_orb_var ()->orb_core ()->get_collocation_strategy ())
      {
      case TAO_ORB_Core::THRU_POA:
        {
          ::FT::HeartbeatPolicy_ptr retval = 0;
          ACE_NEW_RETURN (
              retval,
              FT_POA_tao_thru_poa_collocated_HeartbeatPolicy (stub),
              0
            );
          return retval;
        }
      case TAO_ORB_Core::DIRECT:
        ACE_THROW_RETURN (CORBA::BAD_PARAM (), 0);
      default:
        ACE_THROW_RETURN (CORBA::BAD_PARAM (), 0);
      }
  else
    {
      // stub->_incr_refcnt ();
      CORBA::Object_ptr tmp = CORBA::Object::_nil ();
      ACE_NEW_RETURN (tmp, CORBA::Object (stub), 0);
      CORBA::Object_var obj = tmp;
      return FT::HeartbeatPolicy::_unchecked_narrow (obj.in ());
    }
}

FT_POA_tao_thru_poa_collocated_HeartbeatPolicy::FT_POA_tao_thru_poa_collocated_HeartbeatPolicy (
  TAO_Stub *stub
)
  :  ACE_NESTED_CLASS (POA_CORBA,_tao_thru_poa_collocated_CORBA_Policy) (stub),
    CORBA_Object (stub, 1)
{
}

CORBA::Boolean FT_POA_tao_thru_poa_collocated_HeartbeatPolicy::_is_a(
    const CORBA::Char *logical_type_id,
    CORBA_Environment &ACE_TRY_ENV
  )

{
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "_is_a",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN (0);
  return ACE_reinterpret_cast (
      FT_POA_HeartbeatPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/HeartbeatPolicy:1.0"
        )
    )->_is_a (logical_type_id, ACE_TRY_ENV);
}


CORBA::Boolean FT_POA_tao_thru_poa_collocated_HeartbeatPolicy::_non_existent(
    CORBA_Environment &ACE_TRY_ENV
  )

{
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "_non_existent",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN (0);
  return ACE_reinterpret_cast (
      FT_POA_HeartbeatPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/HeartbeatPolicy:1.0"
        )
    )->_non_existent (ACE_TRY_ENV);
}


FT::HeartbeatPolicyValue FT_POA_tao_thru_poa_collocated_HeartbeatPolicy::heartbeat_policy_value  (
    CORBA::Environment &ACE_TRY_ENV
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  FT::HeartbeatPolicyValue _tao_retval;
  ACE_UNUSED_ARG (_tao_retval);
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "heartbeat_policy_value",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN  (_tao_retval);
  return ACE_reinterpret_cast (
      FT_POA_HeartbeatPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/HeartbeatPolicy:1.0"
        )
    )->heartbeat_policy_value (
      ACE_TRY_ENV
    );

}



class TAO_FT_HeartbeatEnabledPolicy_Perfect_Hash_OpTable : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);
public:
 const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};
/* starting time is 15:23:34 */
/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /project/acetmp/bala/ACE_wrappers/bin/gperf -m -M -J -c -C -D -E -T -f 0 -F 0 -a -o -t -p -K opname_ -L C++ -Z TAO_FT_HeartbeatEnabledPolicy_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_FT_HeartbeatEnabledPolicy_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
#if defined (ACE_MVS)
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36,  0,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36,  0,
     36,  0,  0,  0, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36,  0, 36, 36, 36, 36,  0, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36,
#else
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36,  0, 36,  0, 36,  0,
      0,  0, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36,  0, 36, 36, 36,
     36,  0, 36, 36, 36, 36, 36, 36,
#endif /* ACE_MVS */
    };
  return len + asso_values[str[len - 1]] + asso_values[str[0]];
}

const class TAO_operation_db_entry *
TAO_FT_HeartbeatEnabledPolicy_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 35,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 35,
      HASH_VALUE_RANGE = 32,
      DUPLICATES = 0
    };

  static const class TAO_operation_db_entry  wordlist[] =
    {
      {"",0},{"",0},{"",0},{"",0},
      {"copy", &FT_POA_HeartbeatEnabledPolicy::copy_skel},
      {"_is_a", &FT_POA_HeartbeatEnabledPolicy::_is_a_skel},
      {"",0},
      {"destroy", &FT_POA_HeartbeatEnabledPolicy::destroy_skel},
      {"",0},{"",0},{"",0},{"",0},{"",0},
      {"_non_existent", &FT_POA_HeartbeatEnabledPolicy::_non_existent_skel},
      {"",0},{"",0},
      {"_get_policy_type", &FT_POA_HeartbeatEnabledPolicy::_get_policy_type_skel},
      {"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},
      {"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},{"",0},

      {"_get_heartbeat_enabled_policy_value", &FT_POA_HeartbeatEnabledPolicy::_get_heartbeat_enabled_policy_value_skel},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname_;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}
/* ending time is 15:23:34 */
static TAO_FT_HeartbeatEnabledPolicy_Perfect_Hash_OpTable tao_FT_HeartbeatEnabledPolicy_optable;

FT::HeartbeatEnabledPolicy_ptr _TAO_collocation_POA_FT_HeartbeatEnabledPolicy_Stub_Factory (
    CORBA::Object_ptr obj
  )
{
  TAO_Stub *stub = obj->_stubobj ();

  switch (stub->servant_orb_var ()->orb_core ()->get_collocation_strategy ())
    {
    case TAO_ORB_Core::THRU_POA:
      {
      FT::HeartbeatEnabledPolicy_ptr retval = 0;
      ACE_NEW_RETURN (
          retval,
          FT_POA_tao_thru_poa_collocated_HeartbeatEnabledPolicy (stub),
          0
        );
      return retval;
      }
    case TAO_ORB_Core::DIRECT:
      break;
    default:
      break;
    }
  return 0;
}

int _TAO_collocation_POA_FT_HeartbeatEnabledPolicy_Stub_Factory_Initializer (long dummy)
{
  ACE_UNUSED_ARG (dummy);

  _TAO_collocation_FT_HeartbeatEnabledPolicy_Stub_Factory_function_pointer =
    _TAO_collocation_POA_FT_HeartbeatEnabledPolicy_Stub_Factory;

  return 0;
}

static int _TAO_collocation_POA_FT_HeartbeatEnabledPolicy_Stub_Factory_Initializer_Scarecrow =
  _TAO_collocation_POA_FT_HeartbeatEnabledPolicy_Stub_Factory_Initializer (ACE_reinterpret_cast (long, _TAO_collocation_POA_FT_HeartbeatEnabledPolicy_Stub_Factory_Initializer));

// skeleton constructor
FT_POA_HeartbeatEnabledPolicy::FT_POA_HeartbeatEnabledPolicy (void)
{
  this->optable_ = &tao_FT_HeartbeatEnabledPolicy_optable;
}

// copy ctor
FT_POA_HeartbeatEnabledPolicy::FT_POA_HeartbeatEnabledPolicy (const FT_POA_HeartbeatEnabledPolicy& rhs)
  :   ACE_NESTED_CLASS (POA_CORBA,Policy) (rhs),
    TAO_ServantBase (rhs)
{}

// skeleton destructor
FT_POA_HeartbeatEnabledPolicy::~FT_POA_HeartbeatEnabledPolicy (void)
{
}

void FT_POA_HeartbeatEnabledPolicy::_get_heartbeat_enabled_policy_value_skel (
    CORBA::ServerRequest &_tao_server_request,
    void *_tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
)
{
  FT_POA_HeartbeatEnabledPolicy *_tao_impl = (FT_POA_HeartbeatEnabledPolicy *)_tao_object_reference;

  CORBA::Boolean _tao_retval = 0;

      _tao_retval = _tao_impl->heartbeat_enabled_policy_value (
        ACE_TRY_ENV
      );

      ACE_CHECK;


  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(
    (_tao_out << CORBA::Any::from_boolean (_tao_retval))
  ))
    ACE_THROW (CORBA::MARSHAL () );

}

void FT_POA_HeartbeatEnabledPolicy::_is_a_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  TAO_InputCDR &_tao_in = _tao_server_request.incoming ();
  FT_POA_HeartbeatEnabledPolicy *_tao_impl = (FT_POA_HeartbeatEnabledPolicy *) _tao_object_reference;
  CORBA::Boolean _tao_retval = 0;
  CORBA::String_var value;
  if (!(_tao_in >> value.out ()))
    ACE_THROW (CORBA::MARSHAL ());

  _tao_retval = _tao_impl->_is_a (value.in (), ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(_tao_out << CORBA::Any::from_boolean (_tao_retval)))
    ACE_THROW (CORBA::MARSHAL ());
}

void FT_POA_HeartbeatEnabledPolicy::_non_existent_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  FT_POA_HeartbeatEnabledPolicy *_tao_impl = (FT_POA_HeartbeatEnabledPolicy *) _tao_object_reference;
  CORBA::Boolean _tao_retval = _tao_impl->_non_existent (ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(_tao_out << CORBA::Any::from_boolean (_tao_retval)))
    ACE_THROW (CORBA::MARSHAL ());
}

CORBA::Boolean FT_POA_HeartbeatEnabledPolicy::_is_a (
    const char* value,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/FT/HeartbeatEnabledPolicy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Policy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, CORBA::_tc_Object->id (ACE_TRY_ENV))))
      return 1;
    else
      return 0;
}

void* FT_POA_HeartbeatEnabledPolicy::_downcast (
    const char* logical_type_id
  )
{
if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/FT/HeartbeatEnabledPolicy:1.0") == 0)
    return ACE_static_cast (FT_POA_HeartbeatEnabledPolicy_ptr, this);
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Policy:1.0") == 0)
    return ACE_static_cast (POA_CORBA::Policy_ptr, this);
    if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Object:1.0") == 0)
    return ACE_static_cast(PortableServer::Servant, this);
  return 0;
}

void FT_POA_HeartbeatEnabledPolicy::_dispatch (CORBA::ServerRequest &req, void *context, CORBA::Environment &ACE_TRY_ENV)
{
  this->synchronous_upcall_dispatch(req, context, this, ACE_TRY_ENV);
}

const char* FT_POA_HeartbeatEnabledPolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/FT/HeartbeatEnabledPolicy:1.0";
}

FT::HeartbeatEnabledPolicy*
FT_POA_HeartbeatEnabledPolicy::_this (CORBA_Environment &ACE_TRY_ENV)
{
  TAO_Stub *stub = this->_create_stub (ACE_TRY_ENV);
  ACE_CHECK_RETURN (0);
  if (stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ())
    switch (stub->servant_orb_var ()->orb_core ()->get_collocation_strategy ())
      {
      case TAO_ORB_Core::THRU_POA:
        {
          FT::HeartbeatEnabledPolicy_ptr retval = 0;
          ACE_NEW_RETURN (
              retval,
              FT_POA_tao_thru_poa_collocated_HeartbeatEnabledPolicy (stub),
              0
            );
          return retval;
        }
      case TAO_ORB_Core::DIRECT:
        ACE_THROW_RETURN (CORBA::BAD_PARAM (), 0);
      default:
        ACE_THROW_RETURN (CORBA::BAD_PARAM (), 0);
      }
  else
    {
      // stub->_incr_refcnt ();
      CORBA::Object_ptr tmp = CORBA::Object::_nil ();
      ACE_NEW_RETURN (tmp, CORBA::Object (stub), 0);
      CORBA::Object_var obj = tmp;
      return ::FT::HeartbeatEnabledPolicy::_unchecked_narrow (obj.in ());
    }
}

FT_POA_tao_thru_poa_collocated_HeartbeatEnabledPolicy::FT_POA_tao_thru_poa_collocated_HeartbeatEnabledPolicy (
  TAO_Stub *stub
)
  :  ACE_NESTED_CLASS (POA_CORBA,_tao_thru_poa_collocated_CORBA_Policy) (stub),
    CORBA_Object (stub, 1)
{
}

CORBA::Boolean FT_POA_tao_thru_poa_collocated_HeartbeatEnabledPolicy::_is_a(
    const CORBA::Char *logical_type_id,
    CORBA_Environment &ACE_TRY_ENV
  )

{
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "_is_a",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN (0);
  return ACE_reinterpret_cast (
      FT_POA_HeartbeatEnabledPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/HeartbeatEnabledPolicy:1.0"
        )
    )->_is_a (logical_type_id, ACE_TRY_ENV);
}


CORBA::Boolean FT_POA_tao_thru_poa_collocated_HeartbeatEnabledPolicy::_non_existent(
    CORBA_Environment &ACE_TRY_ENV
  )

{
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "_non_existent",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN (0);
  return ACE_reinterpret_cast (
      FT_POA_HeartbeatEnabledPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/HeartbeatEnabledPolicy:1.0"
        )
    )->_non_existent (ACE_TRY_ENV);
}


CORBA::Boolean FT_POA_tao_thru_poa_collocated_HeartbeatEnabledPolicy::heartbeat_enabled_policy_value  (
    CORBA::Environment &ACE_TRY_ENV
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  CORBA::Boolean _tao_retval = 0;
  ACE_UNUSED_ARG (_tao_retval);
  TAO_Object_Adapter::Servant_Upcall servant_upcall (
      this->_stubobj ()->servant_orb_var ()->orb_core ()
    );
  servant_upcall.prepare_for_upcall (
      this->_object_key (),
      "heartbeat_enabled_policy_value",
      ACE_TRY_ENV
    );
  ACE_CHECK_RETURN  (_tao_retval);
  return ACE_reinterpret_cast (
      FT_POA_HeartbeatEnabledPolicy_ptr,
      servant_upcall.servant ()->_downcast (
          "IDL:omg.org/FT/HeartbeatEnabledPolicy:1.0"
        )
    )->heartbeat_enabled_policy_value (
      ACE_TRY_ENV
    );

}



#endif /*TAO_HAS_FT_CORBA == 1*/
