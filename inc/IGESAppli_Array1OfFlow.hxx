// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_Array1OfFlow_HeaderFile
#define _IGESAppli_Array1OfFlow_HeaderFile

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
#ifndef _Handle_IGESAppli_Flow_HeaderFile
#include <Handle_IGESAppli_Flow.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESAppli_Flow;



class IGESAppli_Array1OfFlow  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IGESAppli_Array1OfFlow(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESAppli_Array1OfFlow(const Handle(IGESAppli_Flow)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESAppli_Flow)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESAppli_Array1OfFlow()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESAppli_Array1OfFlow& Assign(const IGESAppli_Array1OfFlow& Other) ;
   const IGESAppli_Array1OfFlow& operator =(const IGESAppli_Array1OfFlow& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESAppli_Flow)& Value) ;
  
       const Handle_IGESAppli_Flow& Value(const Standard_Integer Index) const;
     const Handle_IGESAppli_Flow& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESAppli_Flow& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESAppli_Flow& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESAppli_Array1OfFlow(const IGESAppli_Array1OfFlow& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESAppli_Flow
#define Array1Item_hxx <IGESAppli_Flow.hxx>
#define TCollection_Array1 IGESAppli_Array1OfFlow
#define TCollection_Array1_hxx <IGESAppli_Array1OfFlow.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif