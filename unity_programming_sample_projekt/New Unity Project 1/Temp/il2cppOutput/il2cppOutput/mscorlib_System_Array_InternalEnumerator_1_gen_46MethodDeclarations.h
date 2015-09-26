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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15800_gshared (InternalEnumerator_1_t2131 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15800(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2131 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15800_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15801_gshared (InternalEnumerator_1_t2131 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15801(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2131 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15801_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15802_gshared (InternalEnumerator_1_t2131 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15802(__this, method) (( void (*) (InternalEnumerator_1_t2131 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15802_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15803_gshared (InternalEnumerator_1_t2131 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15803(__this, method) (( bool (*) (InternalEnumerator_1_t2131 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15803_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
extern "C" HitInfo_t536  InternalEnumerator_1_get_Current_m15804_gshared (InternalEnumerator_1_t2131 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15804(__this, method) (( HitInfo_t536  (*) (InternalEnumerator_1_t2131 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15804_gshared)(__this, method)
