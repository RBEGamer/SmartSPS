#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2099;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2089;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13666_gshared (ShimEnumerator_t2099 * __this, Dictionary_2_t2089 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13666(__this, ___host, method) (( void (*) (ShimEnumerator_t2099 *, Dictionary_2_t2089 *, const MethodInfo*))ShimEnumerator__ctor_m13666_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13667_gshared (ShimEnumerator_t2099 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13667(__this, method) (( bool (*) (ShimEnumerator_t2099 *, const MethodInfo*))ShimEnumerator_MoveNext_m13667_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1240  ShimEnumerator_get_Entry_m13668_gshared (ShimEnumerator_t2099 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13668(__this, method) (( DictionaryEntry_t1240  (*) (ShimEnumerator_t2099 *, const MethodInfo*))ShimEnumerator_get_Entry_m13668_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13669_gshared (ShimEnumerator_t2099 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13669(__this, method) (( Object_t * (*) (ShimEnumerator_t2099 *, const MethodInfo*))ShimEnumerator_get_Key_m13669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13670_gshared (ShimEnumerator_t2099 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13670(__this, method) (( Object_t * (*) (ShimEnumerator_t2099 *, const MethodInfo*))ShimEnumerator_get_Value_m13670_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13671_gshared (ShimEnumerator_t2099 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13671(__this, method) (( Object_t * (*) (ShimEnumerator_t2099 *, const MethodInfo*))ShimEnumerator_get_Current_m13671_gshared)(__this, method)
