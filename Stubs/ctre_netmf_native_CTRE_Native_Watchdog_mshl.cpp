//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "ctre_netmf_native.h"
#include "ctre_netmf_native_CTRE_Native_Watchdog.h"

using namespace CTRE::Native;


HRESULT Library_ctre_netmf_native_CTRE_Native_Watchdog::Feed___STATIC__I4__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        INT32 retVal = Watchdog::Feed( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_Watchdog::GetEnableBits___STATIC__I4__BYREF_U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock0, 0, param0 ) );

        INT32 retVal = Watchdog::GetEnableBits( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 0 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_Watchdog::RegisterSafeOutput___STATIC__I4__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        INT32 retVal = Watchdog::RegisterSafeOutput( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_Watchdog::RegisterSafePWMOutput___STATIC__I4__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        INT32 retVal = Watchdog::RegisterSafePWMOutput( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}