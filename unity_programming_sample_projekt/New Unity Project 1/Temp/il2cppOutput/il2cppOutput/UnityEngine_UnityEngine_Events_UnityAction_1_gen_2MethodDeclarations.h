#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t341;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1749_gshared (UnityAction_1_t341 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1749(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t341 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1749_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m14094_gshared (UnityAction_1_t341 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m14094(__this, ___arg0, method) (( void (*) (UnityAction_1_t341 *, bool, const MethodInfo*))UnityAction_1_Invoke_m14094_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m14095_gshared (UnityAction_1_t341 * __this, bool ___arg0, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m14095(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t341 *, bool, AsyncCallback_t192 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m14095_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m14096_gshared (UnityAction_1_t341 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m14096(__this, ___result, method) (( void (*) (UnityAction_1_t341 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m14096_gshared)(__this, ___result, method)
