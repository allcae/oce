// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_ClosureMode_HeaderFile
#define _TDF_ClosureMode_HeaderFile

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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif


//! This class provides options closure management. <br>
class TDF_ClosureMode  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates an objet with all modes set to <aMode>. <br>
  Standard_EXPORT   TDF_ClosureMode(const Standard_Boolean aMode = Standard_True);
  //! Sets the mode "Descendants" to <aStatus>. <br>
//! <br>
//!          "Descendants" mode means we add to the data set <br>
//!          the children labels of each USER GIVEN label. We <br>
//!          do not do that with the labels found applying <br>
//!          UpToFirstLevel option. <br>
//! <br>
        void Descendants(const Standard_Boolean aStatus) ;
  //! Returns true if the mode "Descendants" is set. <br>
//! <br>
        Standard_Boolean Descendants() const;
  //! Sets the mode "References" to <aStatus>. <br>
//! <br>
//!          "References" mode means we add to the data set <br>
//!          the descendants of an attribute, by calling the <br>
//!          attribute method Descendants(). <br>
//! <br>
        void References(const Standard_Boolean aStatus) ;
  //! Returns true if the mode "References" is set. <br>
//! <br>
        Standard_Boolean References() const;





protected:





private:



Standard_Integer myFlags;


};


#include <TDF_ClosureMode.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif