#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t2415;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_40.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m17960_gshared (Enumerator_t2417 * __this, List_1_t2415 * ___l, const MethodInfo* method);
#define Enumerator__ctor_m17960(__this, ___l, method) (( void (*) (Enumerator_t2417 *, List_1_t2415 *, const MethodInfo*))Enumerator__ctor_m17960_gshared)(__this, ___l, method)
// System.Object System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17961_gshared (Enumerator_t2417 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17961(__this, method) (( Object_t * (*) (Enumerator_t2417 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17961_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m17962_gshared (Enumerator_t2417 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17962(__this, method) (( void (*) (Enumerator_t2417 *, const MethodInfo*))Enumerator_Dispose_m17962_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m17963_gshared (Enumerator_t2417 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17963(__this, method) (( void (*) (Enumerator_t2417 *, const MethodInfo*))Enumerator_VerifyState_m17963_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17964_gshared (Enumerator_t2417 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17964(__this, method) (( bool (*) (Enumerator_t2417 *, const MethodInfo*))Enumerator_MoveNext_m17964_gshared)(__this, method)
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2142  Enumerator_get_Current_m17965_gshared (Enumerator_t2417 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17965(__this, method) (( KeyValuePair_2_t2142  (*) (Enumerator_t2417 *, const MethodInfo*))Enumerator_get_Current_m17965_gshared)(__this, method)
