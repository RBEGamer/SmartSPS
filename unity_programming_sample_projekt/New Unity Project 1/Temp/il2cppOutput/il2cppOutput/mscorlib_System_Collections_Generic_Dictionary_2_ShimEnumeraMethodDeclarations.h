#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1814;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1803;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11568_gshared (ShimEnumerator_t1814 * __this, Dictionary_2_t1803 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11568(__this, ___host, method) (( void (*) (ShimEnumerator_t1814 *, Dictionary_2_t1803 *, const MethodInfo*))ShimEnumerator__ctor_m11568_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11569_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11569(__this, method) (( bool (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_MoveNext_m11569_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t987  ShimEnumerator_get_Entry_m11570_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11570(__this, method) (( DictionaryEntry_t987  (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_get_Entry_m11570_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11571_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11571(__this, method) (( Object_t * (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_get_Key_m11571_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11572_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11572(__this, method) (( Object_t * (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_get_Value_m11572_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11573_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11573(__this, method) (( Object_t * (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_get_Current_m11573_gshared)(__this, method)
