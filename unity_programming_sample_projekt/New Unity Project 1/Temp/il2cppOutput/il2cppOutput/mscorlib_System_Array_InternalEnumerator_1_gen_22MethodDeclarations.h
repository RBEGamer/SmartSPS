#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14474_gshared (InternalEnumerator_1_t2020 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14474(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2020 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14474_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14475_gshared (InternalEnumerator_1_t2020 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14475(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2020 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14475_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14476_gshared (InternalEnumerator_1_t2020 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14476(__this, method) (( void (*) (InternalEnumerator_1_t2020 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14476_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector4>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14477_gshared (InternalEnumerator_1_t2020 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14477(__this, method) (( bool (*) (InternalEnumerator_1_t2020 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14477_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector4>::get_Current()
extern "C" Vector4_t277  InternalEnumerator_1_get_Current_m14478_gshared (InternalEnumerator_1_t2020 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14478(__this, method) (( Vector4_t277  (*) (InternalEnumerator_1_t2020 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14478_gshared)(__this, method)
