#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t1620;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void CrossContextDelegate__ctor_m10133 (CrossContextDelegate_t1620 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::Invoke()
extern "C" void CrossContextDelegate_Invoke_m10134 (CrossContextDelegate_t1620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CrossContextDelegate_t1620(Il2CppObject* delegate);
// System.IAsyncResult System.Runtime.Remoting.Contexts.CrossContextDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CrossContextDelegate_BeginInvoke_m10135 (CrossContextDelegate_t1620 * __this, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::EndInvoke(System.IAsyncResult)
extern "C" void CrossContextDelegate_EndInvoke_m10136 (CrossContextDelegate_t1620 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
