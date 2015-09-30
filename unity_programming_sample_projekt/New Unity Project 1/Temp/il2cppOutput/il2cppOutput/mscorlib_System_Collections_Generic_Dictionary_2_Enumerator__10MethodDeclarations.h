#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2454;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18411_gshared (Enumerator_t2461 * __this, Dictionary_2_t2454 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18411(__this, ___dictionary, method) (( void (*) (Enumerator_t2461 *, Dictionary_2_t2454 *, const MethodInfo*))Enumerator__ctor_m18411_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18412_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18412(__this, method) (( Object_t * (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18412_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1240  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18413_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18413(__this, method) (( DictionaryEntry_t1240  (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18413_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18414_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18414(__this, method) (( Object_t * (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18414_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18415_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18415(__this, method) (( Object_t * (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18416_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18416(__this, method) (( bool (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_MoveNext_m18416_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2456  Enumerator_get_Current_m18417_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18417(__this, method) (( KeyValuePair_2_t2456  (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_get_Current_m18417_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18418_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18418(__this, method) (( Object_t * (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_get_CurrentKey_m18418_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m18419_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18419(__this, method) (( bool (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_get_CurrentValue_m18419_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m18420_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18420(__this, method) (( void (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_VerifyState_m18420_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18421_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18421(__this, method) (( void (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_VerifyCurrent_m18421_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m18422_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18422(__this, method) (( void (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_Dispose_m18422_gshared)(__this, method)
