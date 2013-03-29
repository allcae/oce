// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_SequenceOfPrimitives_HeaderFile
#define _Graphic2d_SequenceOfPrimitives_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif
#ifndef _Handle_Graphic2d_SequenceNodeOfSequenceOfPrimitives_HeaderFile
#include <Handle_Graphic2d_SequenceNodeOfSequenceOfPrimitives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Graphic2d_Primitive;
class Graphic2d_SequenceNodeOfSequenceOfPrimitives;



class Graphic2d_SequenceOfPrimitives  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Graphic2d_SequenceOfPrimitives();
  
  Standard_EXPORT     void Clear() ;
~Graphic2d_SequenceOfPrimitives()
{
  Clear();
}
  
  Standard_EXPORT    const Graphic2d_SequenceOfPrimitives& Assign(const Graphic2d_SequenceOfPrimitives& Other) ;
   const Graphic2d_SequenceOfPrimitives& operator =(const Graphic2d_SequenceOfPrimitives& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Graphic2d_Primitive)& T) ;
  
        void Append(Graphic2d_SequenceOfPrimitives& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Graphic2d_Primitive)& T) ;
  
        void Prepend(Graphic2d_SequenceOfPrimitives& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Graphic2d_Primitive)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Graphic2d_SequenceOfPrimitives& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Graphic2d_Primitive)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Graphic2d_SequenceOfPrimitives& S) ;
  
  Standard_EXPORT    const Handle_Graphic2d_Primitive& First() const;
  
  Standard_EXPORT    const Handle_Graphic2d_Primitive& Last() const;
  
        void Split(const Standard_Integer Index,Graphic2d_SequenceOfPrimitives& Sub) ;
  
  Standard_EXPORT    const Handle_Graphic2d_Primitive& Value(const Standard_Integer Index) const;
   const Handle_Graphic2d_Primitive& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Graphic2d_Primitive)& I) ;
  
  Standard_EXPORT     Handle_Graphic2d_Primitive& ChangeValue(const Standard_Integer Index) ;
    Handle_Graphic2d_Primitive& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Graphic2d_SequenceOfPrimitives(const Graphic2d_SequenceOfPrimitives& Other);




};

#define SeqItem Handle_Graphic2d_Primitive
#define SeqItem_hxx <Graphic2d_Primitive.hxx>
#define TCollection_SequenceNode Graphic2d_SequenceNodeOfSequenceOfPrimitives
#define TCollection_SequenceNode_hxx <Graphic2d_SequenceNodeOfSequenceOfPrimitives.hxx>
#define Handle_TCollection_SequenceNode Handle_Graphic2d_SequenceNodeOfSequenceOfPrimitives
#define TCollection_SequenceNode_Type_() Graphic2d_SequenceNodeOfSequenceOfPrimitives_Type_()
#define TCollection_Sequence Graphic2d_SequenceOfPrimitives
#define TCollection_Sequence_hxx <Graphic2d_SequenceOfPrimitives.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif