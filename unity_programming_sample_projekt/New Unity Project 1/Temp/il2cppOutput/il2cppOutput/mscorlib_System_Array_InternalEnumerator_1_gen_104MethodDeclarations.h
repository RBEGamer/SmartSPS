#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_104.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18716_gshared (InternalEnumerator_1_t2518 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18716(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2518 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18716_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_gshared (InternalEnumerator_1_t2518 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2518 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18718_gshared (InternalEnumerator_1_t2518 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18718(__this, method) (( void (*) (InternalEnumerator_1_t2518 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18718_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18719_gshared (InternalEnumerator_1_t2518 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18719(__this, method) (( bool (*) (InternalEnumerator_1_t2518 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18719_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1270  InternalEnumerator_1_get_Current_m18720_gshared (InternalEnumerator_1_t2518 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18720(__this, method) (( Decimal_t1270  (*) (InternalEnumerator_1_t2518 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18720_gshared)(__this, method)
