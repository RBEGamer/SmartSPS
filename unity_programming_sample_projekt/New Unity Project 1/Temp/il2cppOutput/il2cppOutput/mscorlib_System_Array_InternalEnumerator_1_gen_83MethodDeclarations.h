#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_83.h"
// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18603_gshared (InternalEnumerator_1_t2495 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18603(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2495 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18603_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18604_gshared (InternalEnumerator_1_t2495 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18604(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2495 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18604_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18605_gshared (InternalEnumerator_1_t2495 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18605(__this, method) (( void (*) (InternalEnumerator_1_t2495 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18605_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18606_gshared (InternalEnumerator_1_t2495 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18606(__this, method) (( bool (*) (InternalEnumerator_1_t2495 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18606_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern "C" Slot_t1381  InternalEnumerator_1_get_Current_m18607_gshared (InternalEnumerator_1_t2495 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18607(__this, method) (( Slot_t1381  (*) (InternalEnumerator_1_t2495 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18607_gshared)(__this, method)
