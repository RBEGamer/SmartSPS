#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2370;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17350_gshared (Comparison_1_t2370 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17350(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2370 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17350_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17351_gshared (Comparison_1_t2370 * __this, UICharInfo_t361  ___x, UICharInfo_t361  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17351(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2370 *, UICharInfo_t361 , UICharInfo_t361 , const MethodInfo*))Comparison_1_Invoke_m17351_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17352_gshared (Comparison_1_t2370 * __this, UICharInfo_t361  ___x, UICharInfo_t361  ___y, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17352(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2370 *, UICharInfo_t361 , UICharInfo_t361 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17352_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17353_gshared (Comparison_1_t2370 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17353(__this, ___result, method) (( int32_t (*) (Comparison_1_t2370 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17353_gshared)(__this, ___result, method)
