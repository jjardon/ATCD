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


#include "TimeBaseC.h"
#include "tao/Any_Dual_Impl_T.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "TimeBaseC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_arg_traits.cpp:59

// Arg traits specializations.
namespace TAO
{
};

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_TimeBase_TimeT[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  31,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x54696d65), 
  ACE_NTOHL (0x42617365), 
  ACE_NTOHL (0x2f54696d), 
  ACE_NTOHL (0x65543a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
    6,
  ACE_NTOHL (0x54696d65), 
  ACE_NTOHL (0x54000000),  // name = TimeT
    CORBA::tk_ulonglong,

};

static CORBA::TypeCode _tc_TAO_tc_TimeBase_TimeT (
    CORBA::tk_alias,
    sizeof (_oc_TimeBase_TimeT),
    (char *) &_oc_TimeBase_TimeT,
    0,
    sizeof (TimeBase::TimeT)
  );

namespace TimeBase
{
  ::CORBA::TypeCode_ptr _tc_TimeT =
    &_tc_TAO_tc_TimeBase_TimeT;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_TimeBase_InaccuracyT[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  37,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x54696d65), 
  ACE_NTOHL (0x42617365), 
  ACE_NTOHL (0x2f496e61), 
  ACE_NTOHL (0x63637572), 
  ACE_NTOHL (0x61637954), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/TimeBase/InaccuracyT:1.0
    12,
  ACE_NTOHL (0x496e6163), 
  ACE_NTOHL (0x63757261), 
  ACE_NTOHL (0x63795400),  // name = InaccuracyT
    CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x42617365), 
    ACE_NTOHL (0x2f54696d), 
    ACE_NTOHL (0x65543a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
        6,
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x54000000),  // name = TimeT
        CORBA::tk_ulonglong,


};

static CORBA::TypeCode _tc_TAO_tc_TimeBase_InaccuracyT (
    CORBA::tk_alias,
    sizeof (_oc_TimeBase_InaccuracyT),
    (char *) &_oc_TimeBase_InaccuracyT,
    0,
    sizeof (TimeBase::InaccuracyT)
  );

namespace TimeBase
{
  ::CORBA::TypeCode_ptr _tc_InaccuracyT =
    &_tc_TAO_tc_TimeBase_InaccuracyT;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_TimeBase_TdfT[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  30,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x54696d65), 
  ACE_NTOHL (0x42617365), 
  ACE_NTOHL (0x2f546466), 
  ACE_NTOHL (0x543a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/TimeBase/TdfT:1.0
    5,
  ACE_NTOHL (0x54646654), 
  ACE_NTOHL (0x0),  // name = TdfT
    CORBA::tk_short,

};

static CORBA::TypeCode _tc_TAO_tc_TimeBase_TdfT (
    CORBA::tk_alias,
    sizeof (_oc_TimeBase_TdfT),
    (char *) &_oc_TimeBase_TdfT,
    0,
    sizeof (TimeBase::TdfT)
  );

namespace TimeBase
{
  ::CORBA::TypeCode_ptr _tc_TdfT =
    &_tc_TAO_tc_TimeBase_TdfT;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_TimeBase_UtcT[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  30,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x54696d65), 
  ACE_NTOHL (0x42617365), 
  ACE_NTOHL (0x2f557463), 
  ACE_NTOHL (0x543a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/TimeBase/UtcT:1.0
    5,
  ACE_NTOHL (0x55746354), 
  ACE_NTOHL (0x0),  // name = UtcT
  4, // member count
    5,
  ACE_NTOHL (0x74696d65), 
  ACE_NTOHL (0x0),  // name = time
    CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x42617365), 
    ACE_NTOHL (0x2f54696d), 
    ACE_NTOHL (0x65543a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
        6,
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x54000000),  // name = TimeT
        CORBA::tk_ulonglong,


  8,
  ACE_NTOHL (0x696e6163), 
  ACE_NTOHL (0x636c6f00),  // name = inacclo
    CORBA::tk_ulong,

  8,
  ACE_NTOHL (0x696e6163), 
  ACE_NTOHL (0x63686900),  // name = inacchi
    CORBA::tk_ushort,

  4,
  ACE_NTOHL (0x74646600),  // name = tdf
    CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    30,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x42617365), 
    ACE_NTOHL (0x2f546466), 
    ACE_NTOHL (0x543a312e), 
    ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/TimeBase/TdfT:1.0
        5,
    ACE_NTOHL (0x54646654), 
    ACE_NTOHL (0x0),  // name = TdfT
        CORBA::tk_short,


};

static CORBA::TypeCode _tc_TAO_tc_TimeBase_UtcT (
    CORBA::tk_struct,
    sizeof (_oc_TimeBase_UtcT),
    (char *) &_oc_TimeBase_UtcT,
    0,
    sizeof (TimeBase::UtcT)
  );

namespace TimeBase
{
  ::CORBA::TypeCode_ptr _tc_UtcT =
    &_tc_TAO_tc_TimeBase_UtcT;
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/structure_cs.cpp:66

void 
TimeBase::UtcT::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  UtcT *_tao_tmp_pointer =
    ACE_static_cast (UtcT *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_TimeBase_IntervalT[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  35,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x54696d65), 
  ACE_NTOHL (0x42617365), 
  ACE_NTOHL (0x2f496e74), 
  ACE_NTOHL (0x65727661), 
  ACE_NTOHL (0x6c543a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/IntervalT:1.0
    10,
  ACE_NTOHL (0x496e7465), 
  ACE_NTOHL (0x7276616c), 
  ACE_NTOHL (0x54000000),  // name = IntervalT
  2, // member count
    12,
  ACE_NTOHL (0x6c6f7765), 
  ACE_NTOHL (0x725f626f), 
  ACE_NTOHL (0x756e6400),  // name = lower_bound
    CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x42617365), 
    ACE_NTOHL (0x2f54696d), 
    ACE_NTOHL (0x65543a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
        6,
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x54000000),  // name = TimeT
        CORBA::tk_ulonglong,


  12,
  ACE_NTOHL (0x75707065), 
  ACE_NTOHL (0x725f626f), 
  ACE_NTOHL (0x756e6400),  // name = upper_bound
    CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x42617365), 
    ACE_NTOHL (0x2f54696d), 
    ACE_NTOHL (0x65543a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
        6,
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x54000000),  // name = TimeT
        CORBA::tk_ulonglong,


};

static CORBA::TypeCode _tc_TAO_tc_TimeBase_IntervalT (
    CORBA::tk_struct,
    sizeof (_oc_TimeBase_IntervalT),
    (char *) &_oc_TimeBase_IntervalT,
    0,
    sizeof (TimeBase::IntervalT)
  );

namespace TimeBase
{
  ::CORBA::TypeCode_ptr _tc_IntervalT =
    &_tc_TAO_tc_TimeBase_IntervalT;
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/structure_cs.cpp:66

void 
TimeBase::IntervalT::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  IntervalT *_tao_tmp_pointer =
    ACE_static_cast (IntervalT *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const TimeBase::UtcT &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TimeBase::UtcT>::insert_copy (
      _tao_any,
      TimeBase::UtcT::_tao_any_destructor,
      TimeBase::_tc_UtcT,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    TimeBase::UtcT *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TimeBase::UtcT>::insert (
      _tao_any,
      TimeBase::UtcT::_tao_any_destructor,
      TimeBase::_tc_UtcT,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    TimeBase::UtcT *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const TimeBase::UtcT *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const TimeBase::UtcT *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TimeBase::UtcT>::extract (
        _tao_any,
        TimeBase::UtcT::_tao_any_destructor,
        TimeBase::_tc_UtcT,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const TimeBase::IntervalT &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TimeBase::IntervalT>::insert_copy (
      _tao_any,
      TimeBase::IntervalT::_tao_any_destructor,
      TimeBase::_tc_IntervalT,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    TimeBase::IntervalT *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TimeBase::IntervalT>::insert (
      _tao_any,
      TimeBase::IntervalT::_tao_any_destructor,
      TimeBase::_tc_IntervalT,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    TimeBase::IntervalT *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const TimeBase::IntervalT *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const TimeBase::IntervalT *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TimeBase::IntervalT>::extract (
        _tao_any,
        TimeBase::IntervalT::_tao_any_destructor,
        TimeBase::_tc_IntervalT,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/root.cpp:1703

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO_Fixed_Var_T<
        TimeBase::UtcT
      >;

  template class
    TAO_Var_Base_T<
        TimeBase::UtcT
      >;

  template class
    TAO::Any_Dual_Impl_T<
        TimeBase::UtcT
      >;

  template class
    TAO_Fixed_Var_T<
        TimeBase::IntervalT
      >;

  template class
    TAO_Var_Base_T<
        TimeBase::IntervalT
      >;

  template class
    TAO::Any_Dual_Impl_T<
        TimeBase::IntervalT
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO_Fixed_Var_T< \
        TimeBase::UtcT \
      >

# pragma instantiate \
    TAO_Var_Base_T< \
        TimeBase::UtcT \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        TimeBase::UtcT \
      >

# pragma instantiate \
    TAO_Fixed_Var_T< \
        TimeBase::IntervalT \
      >

# pragma instantiate \
    TAO_Var_Base_T< \
        TimeBase::IntervalT \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        TimeBase::IntervalT \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

