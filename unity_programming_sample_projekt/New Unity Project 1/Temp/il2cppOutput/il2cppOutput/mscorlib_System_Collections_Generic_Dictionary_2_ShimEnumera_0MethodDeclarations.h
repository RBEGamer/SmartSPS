#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1840;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1830;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11874_gshared (ShimEnumerator_t1840 * __this, Dictionary_2_t1830 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11874(__this, ___host, method) (( void (*) (ShimEnumerator_t1840 *, Dictionary_2_t1830 *, const MethodInfo*))ShimEnumerator__ctor_m11874_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11875_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11875(__this, method) (( bool (*) (ShimEnumerator_t1840 *, const MethodInfo*))ShimEnumerator_MoveNext_m11875_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t987  ShimEnumerator_get_Entry_m11876_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11876(__this, method) (( DictionaryEntry_t987  (*) (ShimEnumerator_t1840 *, const MethodInfo*))ShimEnumerator_get_Entry_m11876_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11877_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11877(__this, method) (( Object_t * (*) (ShimEnumerator_t1840 *, const MethodInfo*))ShimEnumerator_get_Key_m11877_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11878_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11878(__this, method) (( Object_t * (*) (ShimEnumerator_t1840 *, const MethodInfo*))ShimEnumerator_get_Value_m11878_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11879_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11879(__this, method) (( Object_t * (*) (ShimEnumerator_t1840 *, const MethodInfo*))ShimEnumerator_get_Current_m11879_gshared)(__this, method)
