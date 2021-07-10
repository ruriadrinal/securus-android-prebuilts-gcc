/*** Autogenerated by WIDL 1.5.31 from include/windows.storage.streams.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __windows_storage_streams_h__
#define __windows_storage_streams_h__

/* Forward declarations */

#ifndef __IBuffer_FWD_DEFINED__
#define __IBuffer_FWD_DEFINED__
typedef interface IBuffer IBuffer;
#endif

#ifndef __IBufferFactory_FWD_DEFINED__
#define __IBufferFactory_FWD_DEFINED__
typedef interface IBufferFactory IBufferFactory;
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IBufferFactory_FWD_DEFINED__
#define __IBufferFactory_FWD_DEFINED__
typedef interface IBufferFactory IBufferFactory;
#endif

#ifndef __IBuffer_FWD_DEFINED__
#define __IBuffer_FWD_DEFINED__
typedef interface IBuffer IBuffer;
#endif

/*****************************************************************************
 * IBuffer interface
 */
#ifndef __IBuffer_INTERFACE_DEFINED__
#define __IBuffer_INTERFACE_DEFINED__

DEFINE_GUID(IID_IBuffer, 0x905a0fe0, 0xbc53, 0x11df, 0x8c,0x49, 0x00,0x1e,0x4f,0xc6,0x86,0xda);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("905a0fe0-bc53-11df-8c49-001e4fc686da")
IBuffer : public IInspectable
{
    virtual HRESULT STDMETHODCALLTYPE get_Capacity(
        UINT32 *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Length(
        UINT32 *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_Length(
        UINT32 value) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBuffer, 0x905a0fe0, 0xbc53, 0x11df, 0x8c,0x49, 0x00,0x1e,0x4f,0xc6,0x86,0xda)
#endif
#else
typedef struct IBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBuffer* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBuffer* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBuffer* This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        IBuffer* This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        IBuffer* This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        IBuffer* This,
        TrustLevel *trustLevel);

    /*** IBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Capacity)(
        IBuffer* This,
        UINT32 *value);

    HRESULT (STDMETHODCALLTYPE *get_Length)(
        IBuffer* This,
        UINT32 *value);

    HRESULT (STDMETHODCALLTYPE *put_Length)(
        IBuffer* This,
        UINT32 value);

    END_INTERFACE
} IBufferVtbl;
interface IBuffer {
    CONST_VTBL IBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IBuffer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IBuffer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IBuffer_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define IBuffer_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define IBuffer_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define IBuffer_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IBuffer methods ***/
#define IBuffer_get_Capacity(This,value) (This)->lpVtbl->get_Capacity(This,value)
#define IBuffer_get_Length(This,value) (This)->lpVtbl->get_Length(This,value)
#define IBuffer_put_Length(This,value) (This)->lpVtbl->put_Length(This,value)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IBuffer_QueryInterface(IBuffer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IBuffer_AddRef(IBuffer* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IBuffer_Release(IBuffer* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT IBuffer_GetIids(IBuffer* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT IBuffer_GetRuntimeClassName(IBuffer* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT IBuffer_GetTrustLevel(IBuffer* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IBuffer methods ***/
static FORCEINLINE HRESULT IBuffer_get_Capacity(IBuffer* This,UINT32 *value) {
    return This->lpVtbl->get_Capacity(This,value);
}
static FORCEINLINE HRESULT IBuffer_get_Length(IBuffer* This,UINT32 *value) {
    return This->lpVtbl->get_Length(This,value);
}
static FORCEINLINE HRESULT IBuffer_put_Length(IBuffer* This,UINT32 value) {
    return This->lpVtbl->put_Length(This,value);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IBuffer_get_Capacity_Proxy(
    IBuffer* This,
    UINT32 *value);
void __RPC_STUB IBuffer_get_Capacity_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IBuffer_get_Length_Proxy(
    IBuffer* This,
    UINT32 *value);
void __RPC_STUB IBuffer_get_Length_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IBuffer_put_Length_Proxy(
    IBuffer* This,
    UINT32 value);
void __RPC_STUB IBuffer_put_Length_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IBuffer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBufferFactory interface
 */
#ifndef __IBufferFactory_INTERFACE_DEFINED__
#define __IBufferFactory_INTERFACE_DEFINED__

DEFINE_GUID(IID_IBufferFactory, 0x71af914d, 0xc10f, 0x484b, 0xbc,0x50, 0x14,0xbc,0x62,0x3b,0x3a,0x27);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("71af914d-c10f-484b-bc50-14bc623b3a27")
IBufferFactory : public IInspectable
{
    virtual HRESULT STDMETHODCALLTYPE Create(
        UINT32 capacity,
        IBuffer **value) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBufferFactory, 0x71af914d, 0xc10f, 0x484b, 0xbc,0x50, 0x14,0xbc,0x62,0x3b,0x3a,0x27)
#endif
#else
typedef struct IBufferFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBufferFactory* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBufferFactory* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBufferFactory* This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        IBufferFactory* This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        IBufferFactory* This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        IBufferFactory* This,
        TrustLevel *trustLevel);

    /*** IBufferFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *Create)(
        IBufferFactory* This,
        UINT32 capacity,
        IBuffer **value);

    END_INTERFACE
} IBufferFactoryVtbl;
interface IBufferFactory {
    CONST_VTBL IBufferFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IBufferFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IBufferFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IBufferFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define IBufferFactory_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define IBufferFactory_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define IBufferFactory_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IBufferFactory methods ***/
#define IBufferFactory_Create(This,capacity,value) (This)->lpVtbl->Create(This,capacity,value)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IBufferFactory_QueryInterface(IBufferFactory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IBufferFactory_AddRef(IBufferFactory* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IBufferFactory_Release(IBufferFactory* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT IBufferFactory_GetIids(IBufferFactory* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT IBufferFactory_GetRuntimeClassName(IBufferFactory* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT IBufferFactory_GetTrustLevel(IBufferFactory* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IBufferFactory methods ***/
static FORCEINLINE HRESULT IBufferFactory_Create(IBufferFactory* This,UINT32 capacity,IBuffer **value) {
    return This->lpVtbl->Create(This,capacity,value);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IBufferFactory_Create_Proxy(
    IBufferFactory* This,
    UINT32 capacity,
    IBuffer **value);
void __RPC_STUB IBufferFactory_Create_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IBufferFactory_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_storage_streams_h__ */
