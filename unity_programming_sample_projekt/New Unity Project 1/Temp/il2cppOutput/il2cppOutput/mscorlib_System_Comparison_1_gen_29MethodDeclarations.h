#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2030;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14569_gshared (Comparison_1_t2030 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14569(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2030 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14569_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14570_gshared (Comparison_1_t2030 * __this, Vector4_t277  ___x, Vector4_t277  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14570(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2030 *, Vector4_t277 , Vector4_t277 , const MethodInfo*))Comparison_1_Invoke_m14570_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14571_gshared (Comparison_1_t2030 * __this, Vector4_t277  ___x, Vector4_t277  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14571(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2030 *, Vector4_t277 , Vector4_t277 , AsyncCallback_t187 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14571_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14572_gshared (Comparison_1_t2030 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14572(__this, ___result, method) (( int32_t (*) (Comparison_1_t2030 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14572_gshared)(__this, ___result, method)
