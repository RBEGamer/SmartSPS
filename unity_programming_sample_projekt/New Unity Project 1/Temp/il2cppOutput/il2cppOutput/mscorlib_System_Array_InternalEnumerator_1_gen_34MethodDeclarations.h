#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34.h"

// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16877_gshared (InternalEnumerator_1_t2336 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16877(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2336 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16877_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16878_gshared (InternalEnumerator_1_t2336 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16878(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2336 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16878_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16879_gshared (InternalEnumerator_1_t2336 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16879(__this, method) (( void (*) (InternalEnumerator_1_t2336 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16879_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16880_gshared (InternalEnumerator_1_t2336 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16880(__this, method) (( bool (*) (InternalEnumerator_1_t2336 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16880_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m16881_gshared (InternalEnumerator_1_t2336 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16881(__this, method) (( uint8_t (*) (InternalEnumerator_1_t2336 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16881_gshared)(__this, method)
