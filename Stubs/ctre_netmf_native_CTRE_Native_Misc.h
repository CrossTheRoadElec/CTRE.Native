//-----------------------------------------------------------------------------
//
//                   ** WARNING! ** 
//    This file was generated automatically by a tool.
//    Re-running the tool will overwrite this file.
//    You should copy this file to a custom location
//    before adding any customization in the copy to
//    prevent loss of your changes when the tool is
//    re-run.
//
//-----------------------------------------------------------------------------


#ifndef _CTRE_NETMF_NATIVE_CTRE_NATIVE_MISC_H_
#define _CTRE_NETMF_NATIVE_CTRE_NATIVE_MISC_H_

namespace CTRE
{
    namespace Native
    {
        struct Misc
        {
            // Helper Functions to access fields of managed object
            // Declaration of stubs. These functions are implemented by Interop code developers
            static INT32 TimeToProcess( HRESULT &hr );
            static INT32 Bitmap_ConvertBPP( CLR_RT_TypedArray_UINT8 param0, CLR_RT_TypedArray_UINT8 param1, UINT32 param2, HRESULT &hr );
            static UINT8 GetBitmap( CLR_RT_TypedArray_UINT8 param0, UNSUPPORTED_TYPE param1, UINT32 param2, HRESULT &hr );
        };
    }
}
#endif  //_CTRE_NETMF_NATIVE_CTRE_NATIVE_MISC_H_
