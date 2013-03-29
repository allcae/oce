// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_Array1OfMultiPointConstraint_HeaderFile
#define _AppDef_Array1OfMultiPointConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class AppDef_MultiPointConstraint;



class AppDef_Array1OfMultiPointConstraint  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   AppDef_Array1OfMultiPointConstraint(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   AppDef_Array1OfMultiPointConstraint(const AppDef_MultiPointConstraint& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const AppDef_MultiPointConstraint& V) ;
  
  Standard_EXPORT     void Destroy() ;
~AppDef_Array1OfMultiPointConstraint()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const AppDef_Array1OfMultiPointConstraint& Assign(const AppDef_Array1OfMultiPointConstraint& Other) ;
   const AppDef_Array1OfMultiPointConstraint& operator =(const AppDef_Array1OfMultiPointConstraint& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const AppDef_MultiPointConstraint& Value) ;
  
       const AppDef_MultiPointConstraint& Value(const Standard_Integer Index) const;
     const AppDef_MultiPointConstraint& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        AppDef_MultiPointConstraint& ChangeValue(const Standard_Integer Index) ;
      AppDef_MultiPointConstraint& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   AppDef_Array1OfMultiPointConstraint(const AppDef_Array1OfMultiPointConstraint& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item AppDef_MultiPointConstraint
#define Array1Item_hxx <AppDef_MultiPointConstraint.hxx>
#define TCollection_Array1 AppDef_Array1OfMultiPointConstraint
#define TCollection_Array1_hxx <AppDef_Array1OfMultiPointConstraint.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif