#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2163;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16190_gshared (Enumerator_t2170 * __this, Dictionary_2_t2163 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16190(__this, ___dictionary, method) (( void (*) (Enumerator_t2170 *, Dictionary_2_t2163 *, const MethodInfo*))Enumerator__ctor_m16190_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16191_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16191(__this, method) (( Object_t * (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16191_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t987  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16192_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16192(__this, method) (( DictionaryEntry_t987  (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16192_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16193_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16193(__this, method) (( Object_t * (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16193_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16194_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16194(__this, method) (( Object_t * (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16194_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16195_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16195(__this, method) (( bool (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_MoveNext_m16195_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2165  Enumerator_get_Current_m16196_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16196(__this, method) (( KeyValuePair_2_t2165  (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_get_Current_m16196_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16197_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16197(__this, method) (( Object_t * (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_get_CurrentKey_m16197_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m16198_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16198(__this, method) (( bool (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_get_CurrentValue_m16198_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m16199_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16199(__this, method) (( void (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_VerifyState_m16199_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16200_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16200(__this, method) (( void (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_VerifyCurrent_m16200_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m16201_gshared (Enumerator_t2170 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16201(__this, method) (( void (*) (Enumerator_t2170 *, const MethodInfo*))Enumerator_Dispose_m16201_gshared)(__this, method)
