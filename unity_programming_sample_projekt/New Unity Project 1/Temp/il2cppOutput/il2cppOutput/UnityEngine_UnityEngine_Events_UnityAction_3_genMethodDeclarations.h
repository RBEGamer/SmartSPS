#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t2136;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_3__ctor_m15820_gshared (UnityAction_3_t2136 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_3__ctor_m15820(__this, ___object, ___method, method) (( void (*) (UnityAction_3_t2136 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_3__ctor_m15820_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m15821_gshared (UnityAction_3_t2136 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
#define UnityAction_3_Invoke_m15821(__this, ___arg0, ___arg1, ___arg2, method) (( void (*) (UnityAction_3_t2136 *, Object_t *, Object_t *, Object_t *, const MethodInfo*))UnityAction_3_Invoke_m15821_gshared)(__this, ___arg0, ___arg1, ___arg2, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_3_BeginInvoke_m15822_gshared (UnityAction_3_t2136 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_3_BeginInvoke_m15822(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (UnityAction_3_t2136 *, Object_t *, Object_t *, Object_t *, AsyncCallback_t187 *, Object_t *, const MethodInfo*))UnityAction_3_BeginInvoke_m15822_gshared)(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_3_EndInvoke_m15823_gshared (UnityAction_3_t2136 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_3_EndInvoke_m15823(__this, ___result, method) (( void (*) (UnityAction_3_t2136 *, Object_t *, const MethodInfo*))UnityAction_3_EndInvoke_m15823_gshared)(__this, ___result, method)
