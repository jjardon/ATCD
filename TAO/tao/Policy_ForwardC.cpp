// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:301


#include "Policy_ForwardC.h"
#include "tao/Any_Basic_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "Policy_ForwardC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_arg_traits.cpp:59

// Arg traits specializations.
namespace TAO
{
};

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CORBA_PolicyType[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  33,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f5242), 
  ACE_NTOHL (0x412f506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x54797065), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/PolicyType:1.0
    11,
  ACE_NTOHL (0x506f6c69), 
  ACE_NTOHL (0x63795479), 
  ACE_NTOHL (0x70650000),  // name = PolicyType
    CORBA::tk_ulong,

};

static CORBA::TypeCode _tc_TAO_tc_CORBA_PolicyType (
    CORBA::tk_alias,
    sizeof (_oc_CORBA_PolicyType),
    (char *) &_oc_CORBA_PolicyType,
    0,
    sizeof (CORBA::PolicyType)
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr _tc_PolicyType =
    &_tc_TAO_tc_CORBA_PolicyType;
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_cs.cpp:66

#if !defined (_CORBA_POLICYLIST_CS_)
#define _CORBA_POLICYLIST_CS_

CORBA::PolicyList::PolicyList (void)
{}

CORBA::PolicyList::PolicyList (
    CORBA::ULong max
  )
  : TAO_Unbounded_Object_Sequence<
        CORBA::Policy,
        CORBA::Policy_var
      >
    (max)
{}

CORBA::PolicyList::PolicyList (
    CORBA::ULong max,
    CORBA::ULong length,
    CORBA::Policy_ptr * buffer,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Object_Sequence<
        CORBA::Policy,
        CORBA::Policy_var
      >
    (max, length, buffer, release)
{}

CORBA::PolicyList::PolicyList (
    const PolicyList &seq
  )
  : TAO_Unbounded_Object_Sequence<
        CORBA::Policy,
        CORBA::Policy_var
      >
    (seq)
{}

CORBA::PolicyList::~PolicyList (void)
{}

void CORBA::PolicyList::_tao_any_destructor (
    void * _tao_void_pointer
  )
{
  PolicyList * _tao_tmp_pointer =
    ACE_static_cast (PolicyList *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CORBA_PolicyList[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  33,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f5242), 
  ACE_NTOHL (0x412f506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x4c697374), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/PolicyList:1.0
    11,
  ACE_NTOHL (0x506f6c69), 
  ACE_NTOHL (0x63794c69), 
  ACE_NTOHL (0x73740000),  // name = PolicyList
    CORBA::tk_sequence, // typecode kind
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_objref, // typecode kind
    52, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      29,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f5242), 
      ACE_NTOHL (0x412f506f), 
      ACE_NTOHL (0x6c696379), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/Policy:1.0
            7,
      ACE_NTOHL (0x506f6c69), 
      ACE_NTOHL (0x63790000),  // name = Policy
      
    0U,

};

static CORBA::TypeCode _tc_TAO_tc_CORBA_PolicyList (
    CORBA::tk_alias,
    sizeof (_oc_CORBA_PolicyList),
    (char *) &_oc_CORBA_PolicyList,
    0,
    sizeof (CORBA::PolicyList)
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr _tc_PolicyList =
    &_tc_TAO_tc_CORBA_PolicyList;
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_cs.cpp:66

#if !defined (_CORBA_POLICYTYPESEQ_CS_)
#define _CORBA_POLICYTYPESEQ_CS_

CORBA::PolicyTypeSeq::PolicyTypeSeq (void)
{}

CORBA::PolicyTypeSeq::PolicyTypeSeq (
    CORBA::ULong max
  )
  : TAO_Unbounded_Sequence<
        CORBA::PolicyType
      >
    (max)
{}

CORBA::PolicyTypeSeq::PolicyTypeSeq (
    CORBA::ULong max,
    CORBA::ULong length,
    CORBA::ULong * buffer,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Sequence<
        CORBA::PolicyType
      >
    (max, length, buffer, release)
{}

CORBA::PolicyTypeSeq::PolicyTypeSeq (
    const PolicyTypeSeq &seq
  )
  : TAO_Unbounded_Sequence<
        CORBA::PolicyType
      >
    (seq)
{}

CORBA::PolicyTypeSeq::~PolicyTypeSeq (void)
{}

void CORBA::PolicyTypeSeq::_tao_any_destructor (
    void * _tao_void_pointer
  )
{
  PolicyTypeSeq * _tao_tmp_pointer =
    ACE_static_cast (PolicyTypeSeq *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CORBA_PolicyTypeSeq[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  36,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f5242), 
  ACE_NTOHL (0x412f506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x54797065), 
  ACE_NTOHL (0x5365713a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CORBA/PolicyTypeSeq:1.0
    14,
  ACE_NTOHL (0x506f6c69), 
  ACE_NTOHL (0x63795479), 
  ACE_NTOHL (0x70655365), 
  ACE_NTOHL (0x71000000),  // name = PolicyTypeSeq
    CORBA::tk_sequence, // typecode kind
  80, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_alias, // typecode kind for typedefs
    64, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      33,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f5242), 
      ACE_NTOHL (0x412f506f), 
      ACE_NTOHL (0x6c696379), 
      ACE_NTOHL (0x54797065), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/PolicyType:1.0
            11,
      ACE_NTOHL (0x506f6c69), 
      ACE_NTOHL (0x63795479), 
      ACE_NTOHL (0x70650000),  // name = PolicyType
            CORBA::tk_ulong,


    0U,

};

static CORBA::TypeCode _tc_TAO_tc_CORBA_PolicyTypeSeq (
    CORBA::tk_alias,
    sizeof (_oc_CORBA_PolicyTypeSeq),
    (char *) &_oc_CORBA_PolicyTypeSeq,
    0,
    sizeof (CORBA::PolicyTypeSeq)
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr _tc_PolicyTypeSeq =
    &_tc_TAO_tc_CORBA_PolicyTypeSeq;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CORBA_SetOverrideType[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  38,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f5242), 
  ACE_NTOHL (0x412f5365), 
  ACE_NTOHL (0x744f7665), 
  ACE_NTOHL (0x72726964), 
  ACE_NTOHL (0x65547970), 
  ACE_NTOHL (0x653a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/CORBA/SetOverrideType:1.0
  16,
  ACE_NTOHL (0x5365744f), 
  ACE_NTOHL (0x76657272), 
  ACE_NTOHL (0x69646554), 
  ACE_NTOHL (0x79706500),  // name = SetOverrideType
  2, // member count
  13,
  ACE_NTOHL (0x5345545f), 
  ACE_NTOHL (0x4f564552), 
  ACE_NTOHL (0x52494445), 
  ACE_NTOHL (0x0),  // name = SET_OVERRIDE
  13,
  ACE_NTOHL (0x4144445f), 
  ACE_NTOHL (0x4f564552), 
  ACE_NTOHL (0x52494445), 
  ACE_NTOHL (0x0),  // name = ADD_OVERRIDE
  };

static CORBA::TypeCode _tc_TAO_tc_CORBA_SetOverrideType (
    CORBA::tk_enum,
    sizeof (_oc_CORBA_SetOverrideType),
    (char *) &_oc_CORBA_SetOverrideType,
    0,
    sizeof (CORBA::SetOverrideType)
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr _tc_SetOverrideType =
    &_tc_TAO_tc_CORBA_SetOverrideType;
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CORBA::PolicyList &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::PolicyList>::insert_copy (
      _tao_any,
      CORBA::PolicyList::_tao_any_destructor,
      CORBA::_tc_PolicyList,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CORBA::PolicyList *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::PolicyList>::insert (
      _tao_any,
      CORBA::PolicyList::_tao_any_destructor,
      CORBA::_tc_PolicyList,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CORBA::PolicyList *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const CORBA::PolicyList *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CORBA::PolicyList *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CORBA::PolicyList>::extract (
        _tao_any,
        CORBA::PolicyList::_tao_any_destructor,
        CORBA::_tc_PolicyList,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CORBA::PolicyTypeSeq &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::PolicyTypeSeq>::insert_copy (
      _tao_any,
      CORBA::PolicyTypeSeq::_tao_any_destructor,
      CORBA::_tc_PolicyTypeSeq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CORBA::PolicyTypeSeq *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::PolicyTypeSeq>::insert (
      _tao_any,
      CORBA::PolicyTypeSeq::_tao_any_destructor,
      CORBA::_tc_PolicyTypeSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CORBA::PolicyTypeSeq *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const CORBA::PolicyTypeSeq *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CORBA::PolicyTypeSeq *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CORBA::PolicyTypeSeq>::extract (
        _tao_any,
        CORBA::PolicyTypeSeq::_tao_any_destructor,
        CORBA::_tc_PolicyTypeSeq,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_enum/any_op_cs.cpp:52

void operator<<= (
    CORBA::Any &_tao_any,
    CORBA::SetOverrideType _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<CORBA::SetOverrideType>::insert (
      _tao_any,
      CORBA::_tc_SetOverrideType,
      _tao_elem
    );
}

CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CORBA::SetOverrideType &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<CORBA::SetOverrideType>::extract (
        _tao_any,
        CORBA::_tc_SetOverrideType,
        _tao_elem 
      );
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_CORBA_PolicyList_CPP_
#define _TAO_CDR_OP_CORBA_PolicyList_CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::PolicyList &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len = _tao_sequence.length ();
  
  if (strm << _tao_seq_len)
    {
      // Encode all elements.
      CORBA::Boolean _tao_marshal_flag = 1;
      
      for (CORBA::ULong i = 0; i < _tao_seq_len && _tao_marshal_flag; ++i)
        {
          _tao_marshal_flag =
            TAO::Objref_Traits<CORBA::Policy>::tao_marshal (
                _tao_sequence[i].in (), strm
              );
        }
      
      return _tao_marshal_flag;
    }
  
  return 0;
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::PolicyList &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;
  
  if (strm >> _tao_seq_len)
    {
      // Add a check to the length of the sequence
      // to make sure it does not exceed the length
      // of the stream. (See bug 58.)
      if (_tao_seq_len > strm.length ())
        {
          return 0;
        }
      
      // Set the length of the sequence.
      _tao_sequence.length (_tao_seq_len);
      
      // If length is 0 we return true.
      if (0 >= _tao_seq_len) 
        {
          return 1;
        }
      
      // Retrieve all the elements.
      CORBA::Boolean _tao_marshal_flag = 1;
      
      for (CORBA::ULong i = 0; i < _tao_seq_len && _tao_marshal_flag; ++i)
        {
          _tao_marshal_flag = (strm >> _tao_sequence[i].out ());
        }
      
      return _tao_marshal_flag;
    
    }
  
  return 0;
}

#endif /* _TAO_CDR_OP_CORBA_PolicyList_CPP_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_CORBA_PolicyTypeSeq_CPP_
#define _TAO_CDR_OP_CORBA_PolicyTypeSeq_CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::PolicyTypeSeq &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len = _tao_sequence.length ();
  
  if (strm << _tao_seq_len)
    {
      // Encode all elements.
      return strm.write_ulong_array (_tao_sequence.get_buffer (), _tao_sequence.length ());
    }
  
  return 0;
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::PolicyTypeSeq &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;
  
  if (strm >> _tao_seq_len)
    {
      // Add a check to the length of the sequence
      // to make sure it does not exceed the length
      // of the stream. (See bug 58.)
      if (_tao_seq_len > strm.length ())
        {
          return 0;
        }
      
      // Set the length of the sequence.
      _tao_sequence.length (_tao_seq_len);
      
      // If length is 0 we return true.
      if (0 >= _tao_seq_len) 
        {
          return 1;
        }
      
      // Retrieve all the elements.
      return strm.read_ulong_array (_tao_sequence.get_buffer (), _tao_sequence.length ());
    
    }
  
  return 0;
}

#endif /* _TAO_CDR_OP_CORBA_PolicyTypeSeq_CPP_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/root.cpp:1703

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class TAO::Objref_Traits<CORBA::Policy>;

  template class
    TAO::Any_Impl_T<
        CORBA::Policy
      >;

  template class
    TAO_Object_Manager<
        CORBA::Policy,
        CORBA::Policy_va,
      >;

  template class
    TAO_MngSeq_Var_T<
        CORBA::PolicyList,
        TAO_Object_Manager<
            CORBA::Policy,
            CORBA::Policy_var
          >
      >;

  template class
    TAO_Seq_Var_Base_T<
        CORBA::PolicyList,
        TAO_Object_Manager<
            CORBA::Policy,
            CORBA::Policy_var
          >
      >;

  template class
    TAO_MngSeq_Out_T<
        CORBA::PolicyList,
        CORBA::PolicyList_var,
        TAO_Object_Manager<
            CORBA::Policy,
            CORBA::Policy_var
          >
      >;

#if !defined (_CORBA_POLICYLIST_CS_)
#define _CORBA_POLICYLIST_CS_

  template class
    TAO_Unbounded_Object_Sequence<
        CORBA::Policy,
        CORBA::Policy_var
      >;

#endif /* end #if !defined */

  template class
    TAO::Any_Dual_Impl_T<
        CORBA::PolicyList
      >;

  template class
    TAO_FixedSeq_Var_T<
        CORBA::PolicyTypeSeq,
        CORBA::PolicyType
      >;

  template class
    TAO_Seq_Var_Base_T<
        CORBA::PolicyTypeSeq,
        CORBA::PolicyType
      >;

  template class
    TAO_Seq_Out_T<
        CORBA::PolicyTypeSeq,
        CORBA::PolicyTypeSeq_var,
        CORBA::PolicyType
      >;

  template class
    TAO::Any_Dual_Impl_T<
        CORBA::PolicyTypeSeq
      >;

  template class
    TAO::Any_Basic_Impl_T<
        CORBA::SetOverrideType
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate TAO::Objref_Traits<CORBA::Policy>

# pragma instantiate \
    TAO::Any_Impl_T< \
        CORBA::Policy \
      >

# pragma instantiate \
    TAO_MngSeq_Var_T< \
        CORBA::PolicyList, \
        TAO_Object_Manager< \
            CORBA::Policy, \
            CORBA::Policy_var \
          > \
      >

# pragma instantiate \
    TAO_Seq_Var_Base_T< \
        CORBA::PolicyList, \
        TAO_Object_Manager< \
            CORBA::Policy, \
            CORBA::Policy_var \
          > \
      >

# pragma instantiate \
    TAO_MngSeq_Out_T< \
        CORBA::PolicyList, \
        CORBA::PolicyList_var, \
        TAO_Object_Manager< \
            CORBA::Policy, \
            CORBA::Policy_var \
          > \
      >

#if !defined (_CORBA_POLICYLIST_CS_)
#define _CORBA_POLICYLIST_CS_

# pragma instantiate \
    TAO_Unbounded_Object_Sequence< \
        CORBA::Policy, \
        CORBA::Policy_var \
      >

#endif /* end #if !defined */

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        CORBA::PolicyList \
      >

# pragma instantiate \
    TAO_FixedSeq_Var_T< \
        CORBA::PolicyTypeSeq, \
        CORBA::PolicyType \
      >

# pragma instantiate \
    TAO_Seq_Var_Base_T< \
        CORBA::PolicyTypeSeq, \
        CORBA::PolicyType \
      >

# pragma instantiate \
    TAO_Seq_Out_T< \
        CORBA::PolicyTypeSeq, \
        CORBA::PolicyTypeSeq_var, \
        CORBA::PolicyType \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        CORBA::PolicyTypeSeq \
      >

# pragma instantiate \
    TAO::Any_Basic_Impl_T< \
        CORBA::SetOverrideType \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

