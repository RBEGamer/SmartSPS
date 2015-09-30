#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t1080;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t960;
// System.Exception
struct Exception_t33;
// System.Net.FtpWebResponse
struct FtpWebResponse_t1081;
// System.IO.Stream
struct Stream_t738;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m5450 (FtpAsyncResult_t1080 * __this, AsyncCallback_t192 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m5451 (FtpAsyncResult_t1080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t960 * FtpAsyncResult_get_AsyncWaitHandle_m5452 (FtpAsyncResult_t1080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m5453 (FtpAsyncResult_t1080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m5454 (FtpAsyncResult_t1080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t33 * FtpAsyncResult_get_Exception_m5455 (FtpAsyncResult_t1080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t1081 * FtpAsyncResult_get_Response_m5456 (FtpAsyncResult_t1080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m5457 (FtpAsyncResult_t1080 * __this, Stream_t738 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m5458 (FtpAsyncResult_t1080 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m5459 (FtpAsyncResult_t1080 * __this, bool ___synch, Exception_t33 * ___exc, FtpWebResponse_t1081 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m5460 (FtpAsyncResult_t1080 * __this, bool ___synch, FtpWebResponse_t1081 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m5461 (FtpAsyncResult_t1080 * __this, bool ___synch, Exception_t33 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m5462 (FtpAsyncResult_t1080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
