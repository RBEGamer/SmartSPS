#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t1801;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1260;
// System.ResolveEventArgs
struct ResolveEventArgs_t1857;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m11795 (ResolveEventHandler_t1801 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1260 * ResolveEventHandler_Invoke_m11796 (ResolveEventHandler_t1801 * __this, Object_t * ___sender, ResolveEventArgs_t1857 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1260 * pinvoke_delegate_wrapper_ResolveEventHandler_t1801(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1857 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m11797 (ResolveEventHandler_t1801 * __this, Object_t * ___sender, ResolveEventArgs_t1857 * ___args, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1260 * ResolveEventHandler_EndInvoke_m11798 (ResolveEventHandler_t1801 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
