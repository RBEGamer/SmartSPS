#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1890;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1881;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12494_gshared (ShimEnumerator_t1890 * __this, Dictionary_2_t1881 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12494(__this, ___host, method) (( void (*) (ShimEnumerator_t1890 *, Dictionary_2_t1881 *, const MethodInfo*))ShimEnumerator__ctor_m12494_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12495_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12495(__this, method) (( bool (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_MoveNext_m12495_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t987  ShimEnumerator_get_Entry_m12496_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12496(__this, method) (( DictionaryEntry_t987  (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_get_Entry_m12496_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12497_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12497(__this, method) (( Object_t * (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_get_Key_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12498_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12498(__this, method) (( Object_t * (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_get_Value_m12498_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12499_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12499(__this, method) (( Object_t * (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_get_Current_m12499_gshared)(__this, method)
