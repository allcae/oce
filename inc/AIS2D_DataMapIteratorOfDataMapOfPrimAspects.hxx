// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_DataMapIteratorOfDataMapOfPrimAspects_HeaderFile
#define _AIS2D_DataMapIteratorOfDataMapOfPrimAspects_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif
#ifndef _Handle_Prs2d_AspectRoot_HeaderFile
#include <Handle_Prs2d_AspectRoot.hxx>
#endif
#ifndef _Handle_AIS2D_DataMapNodeOfDataMapOfPrimAspects_HeaderFile
#include <Handle_AIS2D_DataMapNodeOfDataMapOfPrimAspects.hxx>
#endif
class Standard_NoSuchObject;
class Graphic2d_Primitive;
class Prs2d_AspectRoot;
class TColStd_MapTransientHasher;
class AIS2D_DataMapOfPrimAspects;
class AIS2D_DataMapNodeOfDataMapOfPrimAspects;



class AIS2D_DataMapIteratorOfDataMapOfPrimAspects  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   AIS2D_DataMapIteratorOfDataMapOfPrimAspects();
  
  Standard_EXPORT   AIS2D_DataMapIteratorOfDataMapOfPrimAspects(const AIS2D_DataMapOfPrimAspects& aMap);
  
  Standard_EXPORT     void Initialize(const AIS2D_DataMapOfPrimAspects& aMap) ;
  
  Standard_EXPORT    const Handle_Graphic2d_Primitive& Key() const;
  
  Standard_EXPORT    const Handle_Prs2d_AspectRoot& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif