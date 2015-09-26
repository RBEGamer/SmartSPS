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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74.h"
// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16387_gshared (InternalEnumerator_1_t2205 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16387(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2205 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16387_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16388_gshared (InternalEnumerator_1_t2205 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16388(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2205 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16388_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16389_gshared (InternalEnumerator_1_t2205 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16389(__this, method) (( void (*) (InternalEnumerator_1_t2205 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16389_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16390_gshared (InternalEnumerator_1_t2205 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16390(__this, method) (( bool (*) (InternalEnumerator_1_t2205 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16390_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern "C" Slot_t1122  InternalEnumerator_1_get_Current_m16391_gshared (InternalEnumerator_1_t2205 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16391(__this, method) (( Slot_t1122  (*) (InternalEnumerator_1_t2205 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16391_gshared)(__this, method)
