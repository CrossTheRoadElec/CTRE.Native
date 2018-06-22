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


#ifndef _CTRE_NETMF_NATIVE_CTRE_NATIVE_CAN_H_
#define _CTRE_NETMF_NATIVE_CTRE_NATIVE_CAN_H_

namespace CTRE
{
    namespace Native
    {
        struct CAN
        {
            // Helper Functions to access fields of managed object
            // Declaration of stubs. These functions are implemented by Interop code developers
            static INT32 Send( UINT32 param0, UINT64 param1, UINT32 param2, UINT32 param3, HRESULT &hr );
            static INT32 Receive( UINT32 param0, UINT64 * param1, UINT32 * param2, HRESULT &hr );
            static INT32 GetSendBuffer( UINT32 param0, UINT64 * param1, HRESULT &hr );
            static INT32 OpenStream( UINT32 * param0, UINT32 param1, UINT32 param2, HRESULT &hr );
            static INT32 GetStreamSize( UINT32 param0, UINT32 * param1, HRESULT &hr );
            static INT32 ReadStream( UINT32 param0, UINT32 * param1, UINT64 * param2, UINT32 * param3, UINT32 * param4, HRESULT &hr );
            static void CloseStream( UINT32 param0, HRESULT &hr );
        };
    }
}
#endif  //_CTRE_NETMF_NATIVE_CTRE_NATIVE_CAN_H_
