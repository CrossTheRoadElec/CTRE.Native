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


#ifndef _CTRE_NETMF_NATIVE_CTRE_NATIVE_HDU_H_
#define _CTRE_NETMF_NATIVE_CTRE_NATIVE_HDU_H_

namespace CTRE
{
    namespace Native
    {
        struct HDU
        {
            // Helper Functions to access fields of managed object
            // Declaration of stubs. These functions are implemented by Interop code developers
            static INT32 GetJoy( INT32 * param0, CLR_RT_TypedArray_INT32 param1, UINT32 param2, CLR_RT_TypedArray_float param3, UINT32 param4, HRESULT &hr );
            static void SetMode( UINT32 param0, HRESULT &hr );
            static UINT32 GetMode( HRESULT &hr );
        };
    }
}
#endif  //_CTRE_NETMF_NATIVE_CTRE_NATIVE_HDU_H_
