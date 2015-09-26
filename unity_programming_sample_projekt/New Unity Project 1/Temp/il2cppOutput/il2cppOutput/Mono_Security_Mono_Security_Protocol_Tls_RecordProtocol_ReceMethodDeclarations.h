#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t737;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t441;
// System.IO.Stream
struct Stream_t739;
// System.Exception
struct Exception_t32;
// System.Threading.WaitHandle
struct WaitHandle_t789;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3764 (ReceiveRecordAsyncResult_t737 * __this, AsyncCallback_t187 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t441* ___initialBuffer, Stream_t739 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t739 * ReceiveRecordAsyncResult_get_Record_m3765 (ReceiveRecordAsyncResult_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t441* ReceiveRecordAsyncResult_get_ResultingBuffer_m3766 (ReceiveRecordAsyncResult_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t441* ReceiveRecordAsyncResult_get_InitialBuffer_m3767 (ReceiveRecordAsyncResult_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3768 (ReceiveRecordAsyncResult_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t32 * ReceiveRecordAsyncResult_get_AsyncException_m3769 (ReceiveRecordAsyncResult_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3770 (ReceiveRecordAsyncResult_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t789 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3771 (ReceiveRecordAsyncResult_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3772 (ReceiveRecordAsyncResult_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3773 (ReceiveRecordAsyncResult_t737 * __this, Exception_t32 * ___ex, ByteU5BU5D_t441* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3774 (ReceiveRecordAsyncResult_t737 * __this, Exception_t32 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3775 (ReceiveRecordAsyncResult_t737 * __this, ByteU5BU5D_t441* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
