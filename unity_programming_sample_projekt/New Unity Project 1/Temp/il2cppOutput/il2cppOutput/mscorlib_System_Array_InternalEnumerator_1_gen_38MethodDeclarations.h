#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38.h"
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15369_gshared (InternalEnumerator_1_t2099 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15369(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2099 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15369_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15370_gshared (InternalEnumerator_1_t2099 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15370(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2099 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15370_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15371_gshared (InternalEnumerator_1_t2099 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15371(__this, method) (( void (*) (InternalEnumerator_1_t2099 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15371_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15372_gshared (InternalEnumerator_1_t2099 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15372(__this, method) (( bool (*) (InternalEnumerator_1_t2099 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15372_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::get_Current()
extern "C" ContactPoint2D_t471  InternalEnumerator_1_get_Current_m15373_gshared (InternalEnumerator_1_t2099 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15373(__this, method) (( ContactPoint2D_t471  (*) (InternalEnumerator_1_t2099 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15373_gshared)(__this, method)
