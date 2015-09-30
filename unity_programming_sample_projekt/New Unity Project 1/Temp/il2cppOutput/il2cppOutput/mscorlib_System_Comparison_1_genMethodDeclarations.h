#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t69;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1539_gshared (Comparison_1_t69 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1539(__this, ___object, ___method, method) (( void (*) (Comparison_1_t69 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1539_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12429_gshared (Comparison_1_t69 * __this, RaycastResult_t100  ___x, RaycastResult_t100  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12429(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t69 *, RaycastResult_t100 , RaycastResult_t100 , const MethodInfo*))Comparison_1_Invoke_m12429_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12430_gshared (Comparison_1_t69 * __this, RaycastResult_t100  ___x, RaycastResult_t100  ___y, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12430(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t69 *, RaycastResult_t100 , RaycastResult_t100 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12430_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12431_gshared (Comparison_1_t69 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12431(__this, ___result, method) (( int32_t (*) (Comparison_1_t69 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12431_gshared)(__this, ___result, method)
