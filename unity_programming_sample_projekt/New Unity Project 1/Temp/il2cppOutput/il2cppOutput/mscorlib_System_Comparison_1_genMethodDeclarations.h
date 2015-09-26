﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t63;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1524_gshared (Comparison_1_t63 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1524(__this, ___object, ___method, method) (( void (*) (Comparison_1_t63 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1524_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m10647_gshared (Comparison_1_t63 * __this, RaycastResult_t94  ___x, RaycastResult_t94  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m10647(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t63 *, RaycastResult_t94 , RaycastResult_t94 , const MethodInfo*))Comparison_1_Invoke_m10647_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m10648_gshared (Comparison_1_t63 * __this, RaycastResult_t94  ___x, RaycastResult_t94  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m10648(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t63 *, RaycastResult_t94 , RaycastResult_t94 , AsyncCallback_t187 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m10648_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m10649_gshared (Comparison_1_t63 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m10649(__this, ___result, method) (( int32_t (*) (Comparison_1_t63 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m10649_gshared)(__this, ___result, method)
