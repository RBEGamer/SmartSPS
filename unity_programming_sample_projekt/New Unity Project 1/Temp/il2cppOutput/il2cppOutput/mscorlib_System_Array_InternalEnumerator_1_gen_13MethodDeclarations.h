#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13511_gshared (InternalEnumerator_1_t2084 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13511(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2084 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13511_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13512_gshared (InternalEnumerator_1_t2084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13512(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2084 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13512_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13513_gshared (InternalEnumerator_1_t2084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13513(__this, method) (( void (*) (InternalEnumerator_1_t2084 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13513_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13514_gshared (InternalEnumerator_1_t2084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13514(__this, method) (( bool (*) (InternalEnumerator_1_t2084 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13514_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern "C" RaycastHit_t31  InternalEnumerator_1_get_Current_m13515_gshared (InternalEnumerator_1_t2084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13515(__this, method) (( RaycastHit_t31  (*) (InternalEnumerator_1_t2084 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13515_gshared)(__this, method)
