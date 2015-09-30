#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t307;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1775_gshared (UnityAction_1_t307 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1775(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t307 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1775_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13530_gshared (UnityAction_1_t307 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13530(__this, ___arg0, method) (( void (*) (UnityAction_1_t307 *, float, const MethodInfo*))UnityAction_1_Invoke_m13530_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13531_gshared (UnityAction_1_t307 * __this, float ___arg0, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13531(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t307 *, float, AsyncCallback_t192 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13531_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13532_gshared (UnityAction_1_t307 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13532(__this, ___result, method) (( void (*) (UnityAction_1_t307 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13532_gshared)(__this, ___result, method)
