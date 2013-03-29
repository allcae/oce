// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_WESCorrector_HeaderFile
#define _BOP_WESCorrector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOP_PWireEdgeSet_HeaderFile
#include <BOP_PWireEdgeSet.hxx>
#endif
#ifndef _BOP_WireEdgeSet_HeaderFile
#include <BOP_WireEdgeSet.hxx>
#endif
#ifndef _BOP_ListOfConnexityBlock_HeaderFile
#include <BOP_ListOfConnexityBlock.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class BOP_WireEdgeSet;



//!  The algorithm to change the Wire Edges Set (WES) contents. <br>
//!   The NewWES will contain only wires instead of wires and edges. <br>
class BOP_WESCorrector  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty constructor; <br>
  Standard_EXPORT   BOP_WESCorrector();
  
//! Modifier <br>
  Standard_EXPORT     void SetWES(const BOP_WireEdgeSet& aWES) ;
  
//! Performs the algorithm that  consists  of  two  steps <br>
//! 1. Make conexity blocks (  DoConnexityBlocks()  ) <br>
//! 2. Make corrections     (  DoCorrections()  ) <br>
  Standard_EXPORT     void Do() ;
  
//! Selector <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
//! Selector <br>
//! contents see BOP_WESCorrector.cxx <br>
  Standard_EXPORT     Standard_Integer ErrorStatus() const;
  
//! Selector <br>
  Standard_EXPORT     BOP_WireEdgeSet& WES() ;
  
//! Selector <br>
  Standard_EXPORT     BOP_WireEdgeSet& NewWES() ;





protected:





private:

  
  Standard_EXPORT     void DoConnexityBlocks() ;
  
  Standard_EXPORT     void DoCorrections() ;


BOP_PWireEdgeSet myWES;
BOP_WireEdgeSet myNewWES;
BOP_ListOfConnexityBlock myConnexityBlocks;
Standard_Boolean myIsDone;
Standard_Integer myErrorStatus;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif