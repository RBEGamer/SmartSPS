#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2265;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16077_gshared (Predicate_1_t2265 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16077(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2265 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16077_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16078_gshared (Predicate_1_t2265 * __this, Color32_t311  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16078(__this, ___obj, method) (( bool (*) (Predicate_1_t2265 *, Color32_t311 , const MethodInfo*))Predicate_1_Invoke_m16078_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16079_gshared (Predicate_1_t2265 * __this, Color32_t311  ___obj, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16079(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2265 *, Color32_t311 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16079_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16080_gshared (Predicate_1_t2265 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16080(__this, ___result, method) (( bool (*) (Predicate_1_t2265 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16080_gshared)(__this, ___result, method)
