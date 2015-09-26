#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2173;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2163;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16214_gshared (ShimEnumerator_t2173 * __this, Dictionary_2_t2163 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16214(__this, ___host, method) (( void (*) (ShimEnumerator_t2173 *, Dictionary_2_t2163 *, const MethodInfo*))ShimEnumerator__ctor_m16214_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16215_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16215(__this, method) (( bool (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_MoveNext_m16215_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t987  ShimEnumerator_get_Entry_m16216_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16216(__this, method) (( DictionaryEntry_t987  (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_get_Entry_m16216_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16217_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16217(__this, method) (( Object_t * (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_get_Key_m16217_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16218_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16218(__this, method) (( Object_t * (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_get_Value_m16218_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16219_gshared (ShimEnumerator_t2173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16219(__this, method) (( Object_t * (*) (ShimEnumerator_t2173 *, const MethodInfo*))ShimEnumerator_get_Current_m16219_gshared)(__this, method)
