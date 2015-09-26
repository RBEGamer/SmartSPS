#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"

// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16307_gshared (InternalEnumerator_1_t2188 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16307(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2188 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16307_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16308_gshared (InternalEnumerator_1_t2188 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16308(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2188 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16308_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16309_gshared (InternalEnumerator_1_t2188 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16309(__this, method) (( void (*) (InternalEnumerator_1_t2188 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16309_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16310_gshared (InternalEnumerator_1_t2188 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16310(__this, method) (( bool (*) (InternalEnumerator_1_t2188 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16310_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
extern "C" int8_t InternalEnumerator_1_get_Current_m16311_gshared (InternalEnumerator_1_t2188 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16311(__this, method) (( int8_t (*) (InternalEnumerator_1_t2188 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16311_gshared)(__this, method)
