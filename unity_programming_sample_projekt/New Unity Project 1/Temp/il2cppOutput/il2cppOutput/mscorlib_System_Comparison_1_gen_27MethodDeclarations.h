#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2257;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15938_gshared (Comparison_1_t2257 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15938(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2257 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15938_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15939_gshared (Comparison_1_t2257 * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15939(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2257 *, Vector3_t10 , Vector3_t10 , const MethodInfo*))Comparison_1_Invoke_m15939_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15940_gshared (Comparison_1_t2257 * __this, Vector3_t10  ___x, Vector3_t10  ___y, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15940(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2257 *, Vector3_t10 , Vector3_t10 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15940_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15941_gshared (Comparison_1_t2257 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15941(__this, ___result, method) (( int32_t (*) (Comparison_1_t2257 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15941_gshared)(__this, ___result, method)
