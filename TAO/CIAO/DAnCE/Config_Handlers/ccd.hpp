/* $Id$
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 * 
 * If you find errors or feel that there are bugfixes to be made,
 * please contact the current XSC maintainer:
 *             Will Otte <wotte@dre.vanderbilt.edu>
 */


// Fixes the VC6 warning 4786.
#include "vc6-4786.h"
 
// Fix for Borland compilers, which seem to have a broken
// <string> include.
#ifdef __BORLANDC__
# include <string.h>
#endif

#include "Config_Handlers_Export.h"
#ifndef CCD_HPP
#define CCD_HPP

// Forward declarations.
//
namespace CIAO
{
  namespace Config_Handlers
  {
    class ComponentInterfaceDescription;
  }
}

#include <memory>
#include <vector>
#include "XMLSchema/Types.hpp"

#include "Basic_Deployment_Data.hpp"

namespace CIAO
{
  namespace Config_Handlers
  {
    class Config_Handlers_Export ComponentInterfaceDescription : public ::XSCRT::Type
    {
      //@@ VC6 anathema
      typedef ::XSCRT::Type Base__;

      // label
      // 
      public:
      bool label_p () const;
      ::XMLSchema::string< ACE_TCHAR > const& label () const;
      ::XMLSchema::string< ACE_TCHAR >& label ();
      void label (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > label_;

      // UUID
      // 
      public:
      bool UUID_p () const;
      ::XMLSchema::string< ACE_TCHAR > const& UUID () const;
      ::XMLSchema::string< ACE_TCHAR >& UUID ();
      void UUID (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > UUID_;

      // specificType
      // 
      public:
      bool specificType_p () const;
      ::XMLSchema::string< ACE_TCHAR > const& specificType () const;
      ::XMLSchema::string< ACE_TCHAR >& specificType ();
      void specificType (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > specificType_;

      // supportedType
      // 
      public:
      typedef ::std::vector< ::XMLSchema::string< ACE_TCHAR > >::iterator supportedType_iterator;
      typedef ::std::vector< ::XMLSchema::string< ACE_TCHAR > >::const_iterator supportedType_const_iterator;
      supportedType_iterator begin_supportedType ();
      supportedType_iterator end_supportedType ();
      supportedType_const_iterator begin_supportedType () const;
      supportedType_const_iterator end_supportedType () const;
      void add_supportedType (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::vector< ::XMLSchema::string< ACE_TCHAR > > supportedType_;

      // idlFile
      // 
      public:
      typedef ::std::vector< ::XMLSchema::string< ACE_TCHAR > >::iterator idlFile_iterator;
      typedef ::std::vector< ::XMLSchema::string< ACE_TCHAR > >::const_iterator idlFile_const_iterator;
      idlFile_iterator begin_idlFile ();
      idlFile_iterator end_idlFile ();
      idlFile_const_iterator begin_idlFile () const;
      idlFile_const_iterator end_idlFile () const;
      void add_idlFile (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::vector< ::XMLSchema::string< ACE_TCHAR > > idlFile_;

      // configProperty
      // 
      public:
      typedef ::std::vector< ::CIAO::Config_Handlers::Property >::iterator configProperty_iterator;
      typedef ::std::vector< ::CIAO::Config_Handlers::Property >::const_iterator configProperty_const_iterator;
      configProperty_iterator begin_configProperty ();
      configProperty_iterator end_configProperty ();
      configProperty_const_iterator begin_configProperty () const;
      configProperty_const_iterator end_configProperty () const;
      void add_configProperty (::CIAO::Config_Handlers::Property const& );

      protected:
      ::std::vector< ::CIAO::Config_Handlers::Property > configProperty_;

      // port
      // 
      public:
      typedef ::std::vector< ::CIAO::Config_Handlers::ComponentPortDescription >::iterator port_iterator;
      typedef ::std::vector< ::CIAO::Config_Handlers::ComponentPortDescription >::const_iterator port_const_iterator;
      port_iterator begin_port ();
      port_iterator end_port ();
      port_const_iterator begin_port () const;
      port_const_iterator end_port () const;
      void add_port (::CIAO::Config_Handlers::ComponentPortDescription const& );

      protected:
      ::std::vector< ::CIAO::Config_Handlers::ComponentPortDescription > port_;

      // property
      // 
      public:
      typedef ::std::vector< ::CIAO::Config_Handlers::ComponentPropertyDescription >::iterator property_iterator;
      typedef ::std::vector< ::CIAO::Config_Handlers::ComponentPropertyDescription >::const_iterator property_const_iterator;
      property_iterator begin_property ();
      property_iterator end_property ();
      property_const_iterator begin_property () const;
      property_const_iterator end_property () const;
      void add_property (::CIAO::Config_Handlers::ComponentPropertyDescription const& );

      protected:
      ::std::vector< ::CIAO::Config_Handlers::ComponentPropertyDescription > property_;

      // infoProperty
      // 
      public:
      typedef ::std::vector< ::CIAO::Config_Handlers::Property >::iterator infoProperty_iterator;
      typedef ::std::vector< ::CIAO::Config_Handlers::Property >::const_iterator infoProperty_const_iterator;
      infoProperty_iterator begin_infoProperty ();
      infoProperty_iterator end_infoProperty ();
      infoProperty_const_iterator begin_infoProperty () const;
      infoProperty_const_iterator end_infoProperty () const;
      void add_infoProperty (::CIAO::Config_Handlers::Property const& );

      protected:
      ::std::vector< ::CIAO::Config_Handlers::Property > infoProperty_;

      // contentLocation
      // 
      public:
      bool contentLocation_p () const;
      ::XMLSchema::string< ACE_TCHAR > const& contentLocation () const;
      ::XMLSchema::string< ACE_TCHAR >& contentLocation ();
      void contentLocation (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > contentLocation_;

      public:
      ComponentInterfaceDescription ();

      ComponentInterfaceDescription (::XSCRT::XML::Element< ACE_TCHAR > const&);
      ComponentInterfaceDescription (ComponentInterfaceDescription const& s);

      ComponentInterfaceDescription&
      operator= (ComponentInterfaceDescription const& s);

      private:
      char regulator__;
    };
  }
}

namespace CIAO
{
  namespace Config_Handlers
  {
  }
}

#endif // CCD_HPP
