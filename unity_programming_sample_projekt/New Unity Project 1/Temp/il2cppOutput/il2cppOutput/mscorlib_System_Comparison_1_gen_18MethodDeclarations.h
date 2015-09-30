#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2164;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14537_gshared (Comparison_1_t2164 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14537(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2164 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14537_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14538_gshared (Comparison_1_t2164 * __this, UIVertex_t203  ___x, UIVertex_t203  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14538(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2164 *, UIVertex_t203 , UIVertex_t203 , const MethodInfo*))Comparison_1_Invoke_m14538_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14539_gshared (Comparison_1_t2164 * __this, UIVertex_t203  ___x, UIVertex_t203  ___y, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14539(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2164 *, UIVertex_t203 , UIVertex_t203 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14539_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14540_gshared (Comparison_1_t2164 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14540(__this, ___result, method) (( int32_t (*) (Comparison_1_t2164 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14540_gshared)(__this, ___result, method)
