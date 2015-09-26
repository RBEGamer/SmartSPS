#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2009;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14278_gshared (Comparison_1_t2009 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14278(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2009 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14278_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14279_gshared (Comparison_1_t2009 * __this, Color32_t307  ___x, Color32_t307  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14279(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2009 *, Color32_t307 , Color32_t307 , const MethodInfo*))Comparison_1_Invoke_m14279_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14280_gshared (Comparison_1_t2009 * __this, Color32_t307  ___x, Color32_t307  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14280(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2009 *, Color32_t307 , Color32_t307 , AsyncCallback_t187 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14280_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14281_gshared (Comparison_1_t2009 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14281(__this, ___result, method) (( int32_t (*) (Comparison_1_t2009 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14281_gshared)(__this, ___result, method)
