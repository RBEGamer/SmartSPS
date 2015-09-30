#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2205;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m15145_gshared (UnityAction_1_t2205 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m15145(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2205 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m15145_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15146_gshared (UnityAction_1_t2205 * __this, Vector2_t11  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m15146(__this, ___arg0, method) (( void (*) (UnityAction_1_t2205 *, Vector2_t11 , const MethodInfo*))UnityAction_1_Invoke_m15146_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15147_gshared (UnityAction_1_t2205 * __this, Vector2_t11  ___arg0, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15147(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2205 *, Vector2_t11 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15147_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15148_gshared (UnityAction_1_t2205 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m15148(__this, ___result, method) (( void (*) (UnityAction_1_t2205 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15148_gshared)(__this, ___result, method)
