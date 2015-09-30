#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2073;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2062;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13359_gshared (ShimEnumerator_t2073 * __this, Dictionary_2_t2062 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13359(__this, ___host, method) (( void (*) (ShimEnumerator_t2073 *, Dictionary_2_t2062 *, const MethodInfo*))ShimEnumerator__ctor_m13359_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13360_gshared (ShimEnumerator_t2073 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13360(__this, method) (( bool (*) (ShimEnumerator_t2073 *, const MethodInfo*))ShimEnumerator_MoveNext_m13360_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1240  ShimEnumerator_get_Entry_m13361_gshared (ShimEnumerator_t2073 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13361(__this, method) (( DictionaryEntry_t1240  (*) (ShimEnumerator_t2073 *, const MethodInfo*))ShimEnumerator_get_Entry_m13361_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13362_gshared (ShimEnumerator_t2073 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13362(__this, method) (( Object_t * (*) (ShimEnumerator_t2073 *, const MethodInfo*))ShimEnumerator_get_Key_m13362_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13363_gshared (ShimEnumerator_t2073 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13363(__this, method) (( Object_t * (*) (ShimEnumerator_t2073 *, const MethodInfo*))ShimEnumerator_get_Value_m13363_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13364_gshared (ShimEnumerator_t2073 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13364(__this, method) (( Object_t * (*) (ShimEnumerator_t2073 *, const MethodInfo*))ShimEnumerator_get_Current_m13364_gshared)(__this, method)
