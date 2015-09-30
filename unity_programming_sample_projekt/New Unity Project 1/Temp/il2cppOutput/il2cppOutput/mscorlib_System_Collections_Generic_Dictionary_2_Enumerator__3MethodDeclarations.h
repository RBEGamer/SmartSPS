#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2140;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14266_gshared (Enumerator_t2146 * __this, Dictionary_2_t2140 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14266(__this, ___dictionary, method) (( void (*) (Enumerator_t2146 *, Dictionary_2_t2140 *, const MethodInfo*))Enumerator__ctor_m14266_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14267_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14267(__this, method) (( Object_t * (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14267_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1240  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14268_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14268(__this, method) (( DictionaryEntry_t1240  (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14268_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14269_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14269(__this, method) (( Object_t * (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14269_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14270_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14270(__this, method) (( Object_t * (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14271_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14271(__this, method) (( bool (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_MoveNext_m14271_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2142  Enumerator_get_Current_m14272_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14272(__this, method) (( KeyValuePair_2_t2142  (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_get_Current_m14272_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14273_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14273(__this, method) (( Object_t * (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_get_CurrentKey_m14273_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14274_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14274(__this, method) (( Object_t * (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_get_CurrentValue_m14274_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14275_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14275(__this, method) (( void (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_VerifyState_m14275_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14276_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14276(__this, method) (( void (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_VerifyCurrent_m14276_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14277_gshared (Enumerator_t2146 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14277(__this, method) (( void (*) (Enumerator_t2146 *, const MethodInfo*))Enumerator_Dispose_m14277_gshared)(__this, method)
