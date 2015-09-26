#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1830;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11850_gshared (Enumerator_t1837 * __this, Dictionary_2_t1830 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11850(__this, ___dictionary, method) (( void (*) (Enumerator_t1837 *, Dictionary_2_t1830 *, const MethodInfo*))Enumerator__ctor_m11850_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11851_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11851(__this, method) (( Object_t * (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11851_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t987  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11852_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11852(__this, method) (( DictionaryEntry_t987  (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11852_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11853_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11853(__this, method) (( Object_t * (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11853_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11854_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11854(__this, method) (( Object_t * (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11854_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11855_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11855(__this, method) (( bool (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_MoveNext_m11855_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1833  Enumerator_get_Current_m11856_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11856(__this, method) (( KeyValuePair_2_t1833  (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_get_Current_m11856_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11857_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11857(__this, method) (( Object_t * (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_get_CurrentKey_m11857_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11858_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11858(__this, method) (( int32_t (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_get_CurrentValue_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11859_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11859(__this, method) (( void (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_VerifyState_m11859_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11860_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11860(__this, method) (( void (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_VerifyCurrent_m11860_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11861_gshared (Enumerator_t1837 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11861(__this, method) (( void (*) (Enumerator_t1837 *, const MethodInfo*))Enumerator_Dispose_m11861_gshared)(__this, method)
