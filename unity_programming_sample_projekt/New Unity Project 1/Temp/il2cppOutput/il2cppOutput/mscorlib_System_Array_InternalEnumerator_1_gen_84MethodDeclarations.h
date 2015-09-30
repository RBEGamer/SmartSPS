#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_84.h"
// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18608_gshared (InternalEnumerator_1_t2496 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18608(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2496 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18608_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18609_gshared (InternalEnumerator_1_t2496 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18609(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2496 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18609_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18610_gshared (InternalEnumerator_1_t2496 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18610(__this, method) (( void (*) (InternalEnumerator_1_t2496 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18610_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18611_gshared (InternalEnumerator_1_t2496 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18611(__this, method) (( bool (*) (InternalEnumerator_1_t2496 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18611_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
extern "C" Slot_t1390  InternalEnumerator_1_get_Current_m18612_gshared (InternalEnumerator_1_t2496 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18612(__this, method) (( Slot_t1390  (*) (InternalEnumerator_1_t2496 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18612_gshared)(__this, method)
