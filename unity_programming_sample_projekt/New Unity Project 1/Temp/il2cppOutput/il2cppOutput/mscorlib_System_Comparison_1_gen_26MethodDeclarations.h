#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t1998;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14130_gshared (Comparison_1_t1998 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14130(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1998 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14130_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14131_gshared (Comparison_1_t1998 * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14131(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1998 *, Vector3_t10 , Vector3_t10 , const MethodInfo*))Comparison_1_Invoke_m14131_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14132_gshared (Comparison_1_t1998 * __this, Vector3_t10  ___x, Vector3_t10  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14132(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1998 *, Vector3_t10 , Vector3_t10 , AsyncCallback_t187 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14132_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14133_gshared (Comparison_1_t1998 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14133(__this, ___result, method) (( int32_t (*) (Comparison_1_t1998 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14133_gshared)(__this, ___result, method)
