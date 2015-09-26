#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t1946;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m13344_gshared (UnityAction_1_t1946 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m13344(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1946 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13344_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13345_gshared (UnityAction_1_t1946 * __this, Vector2_t11  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13345(__this, ___arg0, method) (( void (*) (UnityAction_1_t1946 *, Vector2_t11 , const MethodInfo*))UnityAction_1_Invoke_m13345_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13346_gshared (UnityAction_1_t1946 * __this, Vector2_t11  ___arg0, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13346(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1946 *, Vector2_t11 , AsyncCallback_t187 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13346_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13347_gshared (UnityAction_1_t1946 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13347(__this, ___result, method) (( void (*) (UnityAction_1_t1946 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13347_gshared)(__this, ___result, method)
