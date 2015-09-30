#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15992_gshared (InternalEnumerator_1_t2258 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15992(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2258 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15992_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15993_gshared (InternalEnumerator_1_t2258 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15993(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2258 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15993_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15994_gshared (InternalEnumerator_1_t2258 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15994(__this, method) (( void (*) (InternalEnumerator_1_t2258 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15994_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15995_gshared (InternalEnumerator_1_t2258 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15995(__this, method) (( bool (*) (InternalEnumerator_1_t2258 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15995_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Color32>::get_Current()
extern "C" Color32_t311  InternalEnumerator_1_get_Current_m15996_gshared (InternalEnumerator_1_t2258 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15996(__this, method) (( Color32_t311  (*) (InternalEnumerator_1_t2258 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15996_gshared)(__this, method)
