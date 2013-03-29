// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_ContextPick_HeaderFile
#define _Visual3d_ContextPick_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Visual3d_TypeOfOrder_HeaderFile
#include <Visual3d_TypeOfOrder.hxx>
#endif
class Visual3d_ContextPickDefinitionError;


//! This class allows the creation and update of <br>
//!	    a pick context for one view of the viewer. <br>
//!	    A context allows the control of different parameters <br>
//!	    before the activation of a pick. <br>
class Visual3d_ContextPick  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a context from default values <br>
  Standard_EXPORT   Visual3d_ContextPick();
  //! Creates a context with the values defined <br>
//!  Warning: Raises ContextPickDefinitionError if <Depth> or <br>
//!	    <Aperture> is a negative value. <br>
  Standard_EXPORT   Visual3d_ContextPick(const Standard_Real Aperture,const Standard_Integer Depth,const Visual3d_TypeOfOrder Order);
  //! Modifies the size of the pick window. <br>
//!  Category: Methods to modifies the class definition <br>
//!  Warning: Raises ContextPickDefinitionError if <Aperture> is <br>
//!	    a negative value. <br>
  Standard_EXPORT     void SetAperture(const Standard_Real Aperture) ;
  //! Modifies the pick depth a priori. <br>
//!  Category: Methods to modifies the class definition <br>
//!  Warning: Raises ContextPickDefinitionError if <Depth> is <br>
//!	    a negative value. <br>
  Standard_EXPORT     void SetDepth(const Standard_Integer Depth) ;
  //! Modifies the order of picking. <br>
  Standard_EXPORT     void SetOrder(const Visual3d_TypeOfOrder Order) ;
  //! Returns the size of the pick window <me>. <br>
  Standard_EXPORT     Standard_Real Aperture() const;
  //! Returns the effective pick depth of <me>. <br>
  Standard_EXPORT     Standard_Integer Depth() const;
  //! Returns the order of picking of <me>. <br>
  Standard_EXPORT     Visual3d_TypeOfOrder Order() const;





protected:





private:



Standard_Real MyAperture;
Standard_Integer MyDepth;
Visual3d_TypeOfOrder MyOrder;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif