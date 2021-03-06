//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "ctre_netmf_native.h"
#include "ctre_netmf_native_CTRE_Native_CAN.h"

using namespace CTRE::Native;


HRESULT Library_ctre_netmf_native_CTRE_Native_CAN::Send___STATIC__I4__U4__U8__U4__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        UINT64 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT64( stack, 1, param1 ) );

        UINT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 2, param2 ) );

        UINT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 3, param3 ) );

        INT32 retVal = CAN::Send( param0, param1, param2, param3, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_CAN::Receive___STATIC__I4__U4__BYREF_U8__BYREF_U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        UINT64 * param1;
        UINT8 heapblock1[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT64_ByRef( stack, heapblock1, 1, param1 ) );

        UINT32 * param2;
        UINT8 heapblock2[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock2, 2, param2 ) );

        INT32 retVal = CAN::Receive( param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock1, 1 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock2, 2 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_CAN::GetSendBuffer___STATIC__I4__U4__BYREF_U8( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        UINT64 * param1;
        UINT8 heapblock1[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT64_ByRef( stack, heapblock1, 1, param1 ) );

        INT32 retVal = CAN::GetSendBuffer( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock1, 1 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_CAN::OpenStream___STATIC__I4__BYREF_U4__U4__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock0, 0, param0 ) );

        UINT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 1, param1 ) );

        UINT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 2, param2 ) );

        INT32 retVal = CAN::OpenStream( param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 0 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_CAN::GetStreamSize___STATIC__I4__U4__BYREF_U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        UINT32 * param1;
        UINT8 heapblock1[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock1, 1, param1 ) );

        INT32 retVal = CAN::GetStreamSize( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock1, 1 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_CAN::ReadStream___STATIC__I4__U4__BYREF_U4__BYREF_U8__BYREF_U4__BYREF_U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        UINT32 * param1;
        UINT8 heapblock1[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock1, 1, param1 ) );

        UINT64 * param2;
        UINT8 heapblock2[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT64_ByRef( stack, heapblock2, 2, param2 ) );

        UINT32 * param3;
        UINT8 heapblock3[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock3, 3, param3 ) );

        UINT32 * param4;
        UINT8 heapblock4[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock4, 4, param4 ) );

        INT32 retVal = CAN::ReadStream( param0, param1, param2, param3, param4, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock1, 1 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock2, 2 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock3, 3 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock4, 4 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_ctre_netmf_native_CTRE_Native_CAN::CloseStream___STATIC__VOID__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        CAN::CloseStream( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}
