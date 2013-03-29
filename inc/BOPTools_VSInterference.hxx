// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_VSInterference_HeaderFile
#define _BOPTools_VSInterference_HeaderFile

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
#ifndef _BOPTools_ShapeShapeInterference_HeaderFile
#include <BOPTools_ShapeShapeInterference.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif



//!  Class for storing info about an Verex/Face interference <br>
//! <br>
class BOPTools_VSInterference  : public BOPTools_ShapeShapeInterference {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty constructor <br>
  Standard_EXPORT   BOPTools_VSInterference();
  
//! Constructor <br>
//! anIndex1, <br>
//! anIndex2 see BOPTools_ShapeShapeInterference for details <br>
//! U, V  -  values of parameters on the surface <br>
  Standard_EXPORT   BOPTools_VSInterference(const Standard_Integer anIndex1,const Standard_Integer anIndex2,const Standard_Real U,const Standard_Real V);
  
//! Modifier <br>
  Standard_EXPORT     void SetUV(const Standard_Real U,const Standard_Real V) ;
  
//! Selector <br>
  Standard_EXPORT     void UV(Standard_Real& U,Standard_Real& V) const;





protected:





private:



Standard_Real myU;
Standard_Real myV;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif