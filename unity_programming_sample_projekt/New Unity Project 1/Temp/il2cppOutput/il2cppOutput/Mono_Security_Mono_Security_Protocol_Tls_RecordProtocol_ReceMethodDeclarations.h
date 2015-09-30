#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t909;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t444;
// System.IO.Stream
struct Stream_t738;
// System.Exception
struct Exception_t33;
// System.Threading.WaitHandle
struct WaitHandle_t960;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m4496 (ReceiveRecordAsyncResult_t909 * __this, AsyncCallback_t192 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t444* ___initialBuffer, Stream_t738 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t738 * ReceiveRecordAsyncResult_get_Record_m4497 (ReceiveRecordAsyncResult_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t444* ReceiveRecordAsyncResult_get_ResultingBuffer_m4498 (ReceiveRecordAsyncResult_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t444* ReceiveRecordAsyncResult_get_InitialBuffer_m4499 (ReceiveRecordAsyncResult_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4500 (ReceiveRecordAsyncResult_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t33 * ReceiveRecordAsyncResult_get_AsyncException_m4501 (ReceiveRecordAsyncResult_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m4502 (ReceiveRecordAsyncResult_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t960 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4503 (ReceiveRecordAsyncResult_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m4504 (ReceiveRecordAsyncResult_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4505 (ReceiveRecordAsyncResult_t909 * __this, Exception_t33 * ___ex, ByteU5BU5D_t444* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4506 (ReceiveRecordAsyncResult_t909 * __this, Exception_t33 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4507 (ReceiveRecordAsyncResult_t909 * __this, ByteU5BU5D_t444* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
