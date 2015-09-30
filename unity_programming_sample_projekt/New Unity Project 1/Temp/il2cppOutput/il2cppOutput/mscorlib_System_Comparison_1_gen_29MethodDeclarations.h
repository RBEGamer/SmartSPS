#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2278;
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

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16231_gshared (Comparison_1_t2278 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16231(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2278 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16231_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16232_gshared (Comparison_1_t2278 * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16232(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2278 *, Vector2_t11 , Vector2_t11 , const MethodInfo*))Comparison_1_Invoke_m16232_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16233_gshared (Comparison_1_t2278 * __this, Vector2_t11  ___x, Vector2_t11  ___y, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16233(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2278 *, Vector2_t11 , Vector2_t11 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16233_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16234_gshared (Comparison_1_t2278 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16234(__this, ___result, method) (( int32_t (*) (Comparison_1_t2278 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16234_gshared)(__this, ___result, method)
