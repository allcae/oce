// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSControl_TransferWriter_HeaderFile
#define _XSControl_TransferWriter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XSControl_TransferWriter_HeaderFile
#include <Handle_XSControl_TransferWriter.hxx>
#endif

#ifndef _Handle_XSControl_Controller_HeaderFile
#include <Handle_XSControl_Controller.hxx>
#endif
#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _IFSelect_ReturnStatus_HeaderFile
#include <IFSelect_ReturnStatus.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class XSControl_Controller;
class Transfer_FinderProcess;
class Standard_Transient;
class Interface_InterfaceModel;
class TopoDS_Shape;
class Interface_CheckIterator;


//! TransferWriter gives help to control transfer to write a file <br>
//!           after having converted data from Cascade/Imagine <br>
//! <br>
//!           It works with a Controller (which itself can work with an <br>
//!           Actor to Write) and a FinderProcess. It records results and <br>
//!           checks <br>
class XSControl_TransferWriter : public MMgt_TShared {

public:

  //! Creates a TransferWriter, empty, ready to run <br>
//!           with an empty FinderProcess (but no controller, etc) <br>
  Standard_EXPORT   XSControl_TransferWriter();
  //! Returns the FinderProcess itself <br>
  Standard_EXPORT     Handle_Transfer_FinderProcess FinderProcess() const;
  //! Sets a new FinderProcess and forgets the former one <br>
  Standard_EXPORT     void SetFinderProcess(const Handle(Transfer_FinderProcess)& FP) ;
  //! Returns the currently used Controller <br>
  Standard_EXPORT     Handle_XSControl_Controller Controller() const;
  //! Sets a new Controller, also sets a new FinderProcess <br>
  Standard_EXPORT     void SetController(const Handle(XSControl_Controller)& ctl) ;
  //! Clears recorded data according a mode <br>
//!           0 clears FinderProcess (results, checks) <br>
//!          -1 create a new FinderProcess <br>
  Standard_EXPORT     void Clear(const Standard_Integer mode) ;
  //! Returns the current Transfer Mode (an Integer) <br>
//!           It will be interpreted by the Controller to run Transfers <br>
//!           This call form could be later replaced by more specific ones <br>
//!             (parameters suited for each norm / transfer case) <br>
  Standard_EXPORT     Standard_Integer TransferMode() const;
  //! Changes the Transfer Mode <br>
  Standard_EXPORT     void SetTransferMode(const Standard_Integer mode) ;
  //! Prints statistics on current Trace File, according what,mode <br>
//!           See PrintStatsProcess for details <br>
  Standard_EXPORT     void PrintStats(const Standard_Integer what,const Standard_Integer mode = 0) const;
  //! Tells if a transient object (from an application) is a valid <br>
//!           candidate for a transfer to a model <br>
//!           Asks the Controller (RecognizeWriteTransient) <br>
//!           If <obj> is a HShape, calls RecognizeShape <br>
  Standard_EXPORT     Standard_Boolean RecognizeTransient(const Handle(Standard_Transient)& obj) ;
  //! Transfers a Transient object (from an application) to a model <br>
//!           of current norm, according to the last call to SetTransferMode <br>
//!           Works by calling the Controller <br>
//!           Returns status : =0 if OK, >0 if error during transfer, <0 if <br>
//!               transfer badly initialised <br>
  Standard_EXPORT     IFSelect_ReturnStatus TransferWriteTransient(const Handle(Interface_InterfaceModel)& model,const Handle(Standard_Transient)& obj) ;
  //! Tells if a Shape is valid for a transfer to a model <br>
//!           Asks the Controller (RecognizeWriteShape) <br>
  Standard_EXPORT     Standard_Boolean RecognizeShape(const TopoDS_Shape& shape) ;
  //! Transfers a Shape from CasCade to a model of current norm, <br>
//!           according to the last call to SetTransferMode <br>
//!           Works by calling the Controller <br>
//!           Returns status : =0 if OK, >0 if error during transfer, <0 if <br>
//!               transfer badly initialised <br>
  Standard_EXPORT     IFSelect_ReturnStatus TransferWriteShape(const Handle(Interface_InterfaceModel)& model,const TopoDS_Shape& shape) ;
  //! Returns the check-list of last transfer (write), i.e. the <br>
//!           check-list currently recorded in the FinderProcess <br>
  Standard_EXPORT     Interface_CheckIterator CheckList() const;
  //! Returns the check-list of last transfer (write), but tries <br>
//!           to bind to each check, the resulting entity in the model <br>
//!           instead of keeping the original Mapper, whenever known <br>
  Standard_EXPORT     Interface_CheckIterator ResultCheckList(const Handle(Interface_InterfaceModel)& model) const;
  //! Forecast to print statitics about a FinderProcess <br>
  Standard_EXPORT   static  void PrintStatsProcess(const Handle(Transfer_FinderProcess)& TP,const Standard_Integer what,const Standard_Integer mode = 0) ;




  DEFINE_STANDARD_RTTI(XSControl_TransferWriter)

protected:




private: 


Handle_XSControl_Controller theController;
Handle_Transfer_FinderProcess theTransferWrite;
Standard_Integer theTransferMode;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif