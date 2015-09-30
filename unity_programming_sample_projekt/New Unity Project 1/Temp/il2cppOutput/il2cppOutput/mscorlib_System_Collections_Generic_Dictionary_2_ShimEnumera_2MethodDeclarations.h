#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2464;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2454;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18435_gshared (ShimEnumerator_t2464 * __this, Dictionary_2_t2454 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18435(__this, ___host, method) (( void (*) (ShimEnumerator_t2464 *, Dictionary_2_t2454 *, const MethodInfo*))ShimEnumerator__ctor_m18435_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18436_gshared (ShimEnumerator_t2464 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18436(__this, method) (( bool (*) (ShimEnumerator_t2464 *, const MethodInfo*))ShimEnumerator_MoveNext_m18436_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1240  ShimEnumerator_get_Entry_m18437_gshared (ShimEnumerator_t2464 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18437(__this, method) (( DictionaryEntry_t1240  (*) (ShimEnumerator_t2464 *, const MethodInfo*))ShimEnumerator_get_Entry_m18437_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18438_gshared (ShimEnumerator_t2464 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18438(__this, method) (( Object_t * (*) (ShimEnumerator_t2464 *, const MethodInfo*))ShimEnumerator_get_Key_m18438_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18439_gshared (ShimEnumerator_t2464 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18439(__this, method) (( Object_t * (*) (ShimEnumerator_t2464 *, const MethodInfo*))ShimEnumerator_get_Value_m18439_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18440_gshared (ShimEnumerator_t2464 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18440(__this, method) (( Object_t * (*) (ShimEnumerator_t2464 *, const MethodInfo*))ShimEnumerator_get_Current_m18440_gshared)(__this, method)
