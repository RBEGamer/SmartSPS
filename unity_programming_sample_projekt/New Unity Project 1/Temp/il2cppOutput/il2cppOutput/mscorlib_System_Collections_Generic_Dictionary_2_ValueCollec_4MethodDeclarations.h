#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1830;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11845_gshared (Enumerator_t1836 * __this, Dictionary_2_t1830 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m11845(__this, ___host, method) (( void (*) (Enumerator_t1836 *, Dictionary_2_t1830 *, const MethodInfo*))Enumerator__ctor_m11845_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11846_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11846(__this, method) (( Object_t * (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11846_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11847_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11847(__this, method) (( void (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_Dispose_m11847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11848_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11848(__this, method) (( bool (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_MoveNext_m11848_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m11849_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11849(__this, method) (( int32_t (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_get_Current_m11849_gshared)(__this, method)
