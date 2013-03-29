// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_IntPackedMap_1_HeaderFile
#define _PDataStd_IntPackedMap_1_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataStd_IntPackedMap_1_HeaderFile
#include <Handle_PDataStd_IntPackedMap_1.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfInteger_HeaderFile
#include <Handle_PColStd_HArray1OfInteger.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif
class PColStd_HArray1OfInteger;


class PDataStd_IntPackedMap_1 : public PDF_Attribute {

public:

  
  Standard_EXPORT   PDataStd_IntPackedMap_1();
  //! Inits the internal container <br>
//!  if  (upper  -  lower)  ==  0  and (upper  |  lower) == 0, the corresponding <br>
//!  array is empty (not requested) <br>
  Standard_EXPORT     void Init(const Standard_Integer theLow,const Standard_Integer theUp) ;
  //! Returns true if the internal container is empty <br>
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  //! Returns an upper bound of the internal container <br>
  Standard_EXPORT     Standard_Integer Upper() const;
  //! Returns a lower bound of the internal container <br>
  Standard_EXPORT     Standard_Integer Lower() const;
  
  Standard_EXPORT     Standard_Integer GetValue(const Standard_Integer theIndex) const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer theIndex,const Standard_Integer theValue) ;
  
  Standard_EXPORT     void SetDelta(const Standard_Boolean delta) ;
  
  Standard_EXPORT     Standard_Boolean GetDelta() const;

PDataStd_IntPackedMap_1(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfInteger) _CSFDB_GetPDataStd_IntPackedMap_1myIntValues() const { return myIntValues; }
    void _CSFDB_SetPDataStd_IntPackedMap_1myIntValues(const Handle(PColStd_HArray1OfInteger)& p) { myIntValues = p; }
    Standard_Boolean _CSFDB_GetPDataStd_IntPackedMap_1myDelta() const { return myDelta; }
    void _CSFDB_SetPDataStd_IntPackedMap_1myDelta(const Standard_Boolean p) { myDelta = p; }



  DEFINE_STANDARD_RTTI(PDataStd_IntPackedMap_1)

protected:




private: 


Handle_PColStd_HArray1OfInteger myIntValues;
Standard_Boolean myDelta;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif