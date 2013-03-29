// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MNaming_HeaderFile
#define _MNaming_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_MDF_ASDriverHSequence_HeaderFile
#include <Handle_MDF_ASDriverHSequence.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Handle_MDF_ARDriverHSequence_HeaderFile
#include <Handle_MDF_ARDriverHSequence.hxx>
#endif
class MDF_ASDriverHSequence;
class CDM_MessageDriver;
class MDF_ARDriverHSequence;
class MNaming_NamedShapeRetrievalDriver;
class MNaming_NamingRetrievalDriver;
class MNaming_NamingRetrievalDriver_1;
class MNaming_NamedShapeStorageDriver;
class MNaming_NamingStorageDriver;



class MNaming  {
public:

  DEFINE_STANDARD_ALLOC

  //! Adds the attribute storage drivers to <aDriverSeq>. <br>
  Standard_EXPORT   static  void AddStorageDrivers(const Handle(MDF_ASDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMessageDriver) ;
  //! Adds the attribute retrieval drivers to <aDriverSeq>. <br>
  Standard_EXPORT   static  void AddRetrievalDrivers(const Handle(MDF_ARDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMessageDriver) ;





protected:





private:




friend class MNaming_NamedShapeRetrievalDriver;
friend class MNaming_NamingRetrievalDriver;
friend class MNaming_NamingRetrievalDriver_1;
friend class MNaming_NamedShapeStorageDriver;
friend class MNaming_NamingStorageDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif