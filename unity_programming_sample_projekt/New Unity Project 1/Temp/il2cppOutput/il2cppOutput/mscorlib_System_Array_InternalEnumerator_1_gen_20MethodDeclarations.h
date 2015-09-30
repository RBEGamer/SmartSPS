#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14933_gshared (InternalEnumerator_1_t2190 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14933(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2190 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14933_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14934_gshared (InternalEnumerator_1_t2190 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14934(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2190 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14934_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14935_gshared (InternalEnumerator_1_t2190 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14935(__this, method) (( void (*) (InternalEnumerator_1_t2190 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14935_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14936_gshared (InternalEnumerator_1_t2190 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14936(__this, method) (( bool (*) (InternalEnumerator_1_t2190 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14936_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::get_Current()
extern "C" UILineInfo_t359  InternalEnumerator_1_get_Current_m14937_gshared (InternalEnumerator_1_t2190 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14937(__this, method) (( UILineInfo_t359  (*) (InternalEnumerator_1_t2190 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14937_gshared)(__this, method)
