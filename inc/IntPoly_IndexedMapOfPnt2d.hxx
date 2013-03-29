// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPoly_IndexedMapOfPnt2d_HeaderFile
#define _IntPoly_IndexedMapOfPnt2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d_HeaderFile
#include <Handle_IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class gp_Pnt2d;
class IntPoly_Pnt2dHasher;
class IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d;



class IntPoly_IndexedMapOfPnt2d  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IntPoly_IndexedMapOfPnt2d(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     IntPoly_IndexedMapOfPnt2d& Assign(const IntPoly_IndexedMapOfPnt2d& Other) ;
    IntPoly_IndexedMapOfPnt2d& operator =(const IntPoly_IndexedMapOfPnt2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~IntPoly_IndexedMapOfPnt2d()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const gp_Pnt2d& K) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const gp_Pnt2d& K) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const gp_Pnt2d& K) const;
  
  Standard_EXPORT    const gp_Pnt2d& FindKey(const Standard_Integer I) const;
   const gp_Pnt2d& operator ()(const Standard_Integer I) const
{
  return FindKey(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const gp_Pnt2d& K) const;





protected:





private:

  
  Standard_EXPORT   IntPoly_IndexedMapOfPnt2d(const IntPoly_IndexedMapOfPnt2d& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif