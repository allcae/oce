// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_Algo_HeaderFile
#define _BRepAlgoAPI_Algo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BOPCol_BaseAllocator.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Message_ProgressIndicator.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
class Message_ProgressIndicator;
class TopoDS_Shape;


//! provides the root interface for algorithms
class BRepAlgoAPI_Algo  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns error status of the algorithm
  //! ==0 - no errors occured
  //! !=0 - is in the event of various error conditions
  Standard_EXPORT   Standard_Integer ErrorStatus()  const;
  
  //! Returns warning  status of the algorithm
  //! ==0 - no warning occured
  //! !=0 - is in the event of various warning conditions
  Standard_EXPORT   Standard_Integer WarningStatus()  const;
  
  Standard_EXPORT  const  BOPCol_BaseAllocator& Allocator()  const;
  
  //! Set the flag of parallel processing
  //! if <theFlag> is true  the parallel processing is switched on
  //! if <theFlag> is false the parallel processing is switched off
  Standard_EXPORT   void SetRunParallel (const Standard_Boolean theFlag) ;
  
  //! Returns the flag of parallel processing
  Standard_EXPORT   Standard_Boolean RunParallel()  const;
  
  //! Set the Progress Indicator object.
  Standard_EXPORT   void SetProgressIndicator (const Handle(Message_ProgressIndicator)& theObj) ;
  
  Standard_EXPORT virtual  const  TopoDS_Shape& Shape()  const;




protected:

  
  //! Empty constructor
  Standard_EXPORT BRepAlgoAPI_Algo();
Standard_EXPORT virtual ~BRepAlgoAPI_Algo();
  
  //! Empty constructor
  Standard_EXPORT BRepAlgoAPI_Algo(const BOPCol_BaseAllocator& theAllocator);
  
  //! Breaks the execution if the break signal
  //! is indicated by myProgressIndicator.
  Standard_EXPORT   void UserBreak()  const;
  
  Standard_EXPORT virtual   void Clear() ;


  BOPCol_BaseAllocator myAllocator;
  Standard_Integer myErrorStatus;
  Standard_Integer myWarningStatus;
  Standard_Boolean myRunParallel;
  Handle(Message_ProgressIndicator) myProgressIndicator;


private:





};







#endif // _BRepAlgoAPI_Algo_HeaderFile
