// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_HeaderFile
#define _AIS2D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_AIS2D_InteractiveContext_HeaderFile
#include <Handle_AIS2D_InteractiveContext.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif
class AIS2D_InteractiveContext;
class AIS2D_InteractiveObject;
class AIS2D_InteractiveContext;
class AIS2D_InteractiveObject;
class AIS2D_ProjShape;
class AIS2D_LocalStatus;
class AIS2D_GlobalStatus;
class AIS2D_LocalContext;
class AIS2D_PrimitiveArchit;
class AIS2D_SequenceOfIO;
class AIS2D_HSequenceOfIO;
class AIS2D_SequenceOfPrimArchit;
class AIS2D_HSequenceOfPrimArchit;
class AIS2D_DataMapOfIOStatus;
class AIS2D_ListOfIO;
class AIS2D_DataMapOfPrimAspects;
class AIS2D_DataMapOfLC;
class AIS2D_DataMapOfLocStat;
class AIS2D_SequenceNodeOfSequenceOfIO;
class AIS2D_SequenceNodeOfSequenceOfPrimArchit;
class AIS2D_DataMapNodeOfDataMapOfIOStatus;
class AIS2D_DataMapIteratorOfDataMapOfIOStatus;
class AIS2D_ListNodeOfListOfIO;
class AIS2D_ListIteratorOfListOfIO;
class AIS2D_DataMapNodeOfDataMapOfPrimAspects;
class AIS2D_DataMapIteratorOfDataMapOfPrimAspects;
class AIS2D_DataMapNodeOfDataMapOfLC;
class AIS2D_DataMapIteratorOfDataMapOfLC;
class AIS2D_DataMapNodeOfDataMapOfLocStat;
class AIS2D_DataMapIteratorOfDataMapOfLocStat;


//! FOR APPLICATION INTERACTIVE SERVICES <br>
//! <br>
//!          This package provides the classes and methods <br>
//!          to the maintenance of the high level 2D visualization . <br>
//!          The central entity is Interactive Context for easily <br>
//!          piloting presentation and selection. <br>
//!          AIS2D package proposes the classes of standard Interactive Objects <br>
//!          and this one allows to implement users classes of interactive objects, <br>
//!          by respecting a certain rules of creating of Interactive Object. <br>
class AIS2D  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Boolean Save(const Handle(AIS2D_InteractiveContext)& aCntx,const Standard_CString aFile) ;
  
  Standard_EXPORT   static  Handle_AIS2D_InteractiveObject Retrieve(const Handle(AIS2D_InteractiveContext)& aCntx,const Standard_CString aFile) ;





protected:





private:




friend class AIS2D_InteractiveContext;
friend class AIS2D_InteractiveObject;
friend class AIS2D_ProjShape;
friend class AIS2D_LocalStatus;
friend class AIS2D_GlobalStatus;
friend class AIS2D_LocalContext;
friend class AIS2D_PrimitiveArchit;
friend class AIS2D_SequenceOfIO;
friend class AIS2D_HSequenceOfIO;
friend class AIS2D_SequenceOfPrimArchit;
friend class AIS2D_HSequenceOfPrimArchit;
friend class AIS2D_DataMapOfIOStatus;
friend class AIS2D_ListOfIO;
friend class AIS2D_DataMapOfPrimAspects;
friend class AIS2D_DataMapOfLC;
friend class AIS2D_DataMapOfLocStat;
friend class AIS2D_SequenceNodeOfSequenceOfIO;
friend class AIS2D_SequenceNodeOfSequenceOfPrimArchit;
friend class AIS2D_DataMapNodeOfDataMapOfIOStatus;
friend class AIS2D_DataMapIteratorOfDataMapOfIOStatus;
friend class AIS2D_ListNodeOfListOfIO;
friend class AIS2D_ListIteratorOfListOfIO;
friend class AIS2D_DataMapNodeOfDataMapOfPrimAspects;
friend class AIS2D_DataMapIteratorOfDataMapOfPrimAspects;
friend class AIS2D_DataMapNodeOfDataMapOfLC;
friend class AIS2D_DataMapIteratorOfDataMapOfLC;
friend class AIS2D_DataMapNodeOfDataMapOfLocStat;
friend class AIS2D_DataMapIteratorOfDataMapOfLocStat;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif