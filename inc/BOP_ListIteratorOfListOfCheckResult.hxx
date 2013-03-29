// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListIteratorOfListOfCheckResult_HeaderFile
#define _BOP_ListIteratorOfListOfCheckResult_HeaderFile

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
#ifndef _Handle_BOP_ListNodeOfListOfCheckResult_HeaderFile
#include <Handle_BOP_ListNodeOfListOfCheckResult.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BOP_ListOfCheckResult;
class BOP_CheckResult;
class BOP_ListNodeOfListOfCheckResult;



class BOP_ListIteratorOfListOfCheckResult  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BOP_ListIteratorOfListOfCheckResult();
  
  Standard_EXPORT   BOP_ListIteratorOfListOfCheckResult(const BOP_ListOfCheckResult& L);
  
  Standard_EXPORT     void Initialize(const BOP_ListOfCheckResult& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     BOP_CheckResult& Value() const;


friend class BOP_ListOfCheckResult;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item BOP_CheckResult
#define Item_hxx <BOP_CheckResult.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfCheckResult
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfCheckResult.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfCheckResult
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfCheckResult.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfCheckResult
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfCheckResult_Type_()
#define TCollection_List BOP_ListOfCheckResult
#define TCollection_List_hxx <BOP_ListOfCheckResult.hxx>

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