#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t306;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1822_gshared (UnityAction_1_t306 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1822(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t306 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1822_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13520_gshared (UnityAction_1_t306 * __this, Color_t27  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13520(__this, ___arg0, method) (( void (*) (UnityAction_1_t306 *, Color_t27 , const MethodInfo*))UnityAction_1_Invoke_m13520_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13521_gshared (UnityAction_1_t306 * __this, Color_t27  ___arg0, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13521(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t306 *, Color_t27 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13521_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13522_gshared (UnityAction_1_t306 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13522(__this, ___result, method) (( void (*) (UnityAction_1_t306 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13522_gshared)(__this, ___result, method)
