#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65.h"

// System.Void System.Array/InternalEnumerator`1<System.Boolean>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18387_gshared (InternalEnumerator_1_t2458 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18387(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2458 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18387_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18388_gshared (InternalEnumerator_1_t2458 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18388(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2458 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18388_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18389_gshared (InternalEnumerator_1_t2458 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18389(__this, method) (( void (*) (InternalEnumerator_1_t2458 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18389_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Boolean>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18390_gshared (InternalEnumerator_1_t2458 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18390(__this, method) (( bool (*) (InternalEnumerator_1_t2458 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18390_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Boolean>::get_Current()
extern "C" bool InternalEnumerator_1_get_Current_m18391_gshared (InternalEnumerator_1_t2458 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18391(__this, method) (( bool (*) (InternalEnumerator_1_t2458 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18391_gshared)(__this, method)
