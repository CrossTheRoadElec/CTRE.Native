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


#ifndef _CTRE_NETMF_NATIVE_CTRE_NATIVE_WATCHDOG_H_
#define _CTRE_NETMF_NATIVE_CTRE_NATIVE_WATCHDOG_H_

namespace CTRE
{
    namespace Native
    {
        struct Watchdog
        {
            // Helper Functions to access fields of managed object
            // Declaration of stubs. These functions are implemented by Interop code developers
            static INT32 Feed( UINT32 param0, HRESULT &hr );
            static INT32 GetEnableBits( UINT32 * param0, HRESULT &hr );
            static INT32 RegisterSafeOutput( UINT32 param0, HRESULT &hr );
            static INT32 RegisterSafePWMOutput( UINT32 param0, HRESULT &hr );
        };
    }
}
#endif  //_CTRE_NETMF_NATIVE_CTRE_NATIVE_WATCHDOG_H_
