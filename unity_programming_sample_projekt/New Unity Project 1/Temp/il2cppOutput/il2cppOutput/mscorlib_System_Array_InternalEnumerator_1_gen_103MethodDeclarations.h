#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_103.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18711_gshared (InternalEnumerator_1_t2517 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18711(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2517 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18711_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_gshared (InternalEnumerator_1_t2517 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2517 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18713_gshared (InternalEnumerator_1_t2517 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18713(__this, method) (( void (*) (InternalEnumerator_1_t2517 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18713_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18714_gshared (InternalEnumerator_1_t2517 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18714(__this, method) (( bool (*) (InternalEnumerator_1_t2517 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18714_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t54  InternalEnumerator_1_get_Current_m18715_gshared (InternalEnumerator_1_t2517 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18715(__this, method) (( DateTime_t54  (*) (InternalEnumerator_1_t2517 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18715_gshared)(__this, method)
