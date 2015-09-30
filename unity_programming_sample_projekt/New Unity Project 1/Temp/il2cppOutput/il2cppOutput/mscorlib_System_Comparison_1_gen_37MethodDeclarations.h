#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2379;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17494_gshared (Comparison_1_t2379 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17494(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2379 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17494_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17495_gshared (Comparison_1_t2379 * __this, UILineInfo_t359  ___x, UILineInfo_t359  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17495(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2379 *, UILineInfo_t359 , UILineInfo_t359 , const MethodInfo*))Comparison_1_Invoke_m17495_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17496_gshared (Comparison_1_t2379 * __this, UILineInfo_t359  ___x, UILineInfo_t359  ___y, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17496(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2379 *, UILineInfo_t359 , UILineInfo_t359 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17496_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17497_gshared (Comparison_1_t2379 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17497(__this, ___result, method) (( int32_t (*) (Comparison_1_t2379 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17497_gshared)(__this, ___result, method)
