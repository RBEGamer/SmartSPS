#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_47.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17625_gshared (InternalEnumerator_1_t2390 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17625(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2390 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17625_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17626_gshared (InternalEnumerator_1_t2390 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17626(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2390 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17626_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17627_gshared (InternalEnumerator_1_t2390 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17627(__this, method) (( void (*) (InternalEnumerator_1_t2390 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17627_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17628_gshared (InternalEnumerator_1_t2390 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17628(__this, method) (( bool (*) (InternalEnumerator_1_t2390 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17628_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
extern "C" HitInfo_t539  InternalEnumerator_1_get_Current_m17629_gshared (InternalEnumerator_1_t2390 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17629(__this, method) (( HitInfo_t539  (*) (InternalEnumerator_1_t2390 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17629_gshared)(__this, method)
