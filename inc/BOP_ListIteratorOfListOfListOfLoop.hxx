// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListIteratorOfListOfListOfLoop_HeaderFile
#define _BOP_ListIteratorOfListOfListOfLoop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfListOfLoop_HeaderFile
#include <Handle_BOP_ListNodeOfListOfListOfLoop.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BOP_ListOfListOfLoop;
class BOP_ListOfLoop;
class BOP_ListNodeOfListOfListOfLoop;



class BOP_ListIteratorOfListOfListOfLoop  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BOP_ListIteratorOfListOfListOfLoop();
  
  Standard_EXPORT   BOP_ListIteratorOfListOfListOfLoop(const BOP_ListOfListOfLoop& L);
  
  Standard_EXPORT     void Initialize(const BOP_ListOfListOfLoop& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     BOP_ListOfLoop& Value() const;


friend class BOP_ListOfListOfLoop;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item BOP_ListOfLoop
#define Item_hxx <BOP_ListOfLoop.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfListOfLoop.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfListOfLoop
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfListOfLoop_Type_()
#define TCollection_List BOP_ListOfListOfLoop
#define TCollection_List_hxx <BOP_ListOfListOfLoop.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif