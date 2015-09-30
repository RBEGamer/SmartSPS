#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m14241_gshared (KeyValuePair_2_t2142 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m14241(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2142 *, Object_t *, Object_t *, const MethodInfo*))KeyValuePair_2__ctor_m14241_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m14242_gshared (KeyValuePair_2_t2142 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m14242(__this, method) (( Object_t * (*) (KeyValuePair_2_t2142 *, const MethodInfo*))KeyValuePair_2_get_Key_m14242_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m14243_gshared (KeyValuePair_2_t2142 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m14243(__this, ___value, method) (( void (*) (KeyValuePair_2_t2142 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m14243_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m14244_gshared (KeyValuePair_2_t2142 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m14244(__this, method) (( Object_t * (*) (KeyValuePair_2_t2142 *, const MethodInfo*))KeyValuePair_2_get_Value_m14244_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m14245_gshared (KeyValuePair_2_t2142 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m14245(__this, ___value, method) (( void (*) (KeyValuePair_2_t2142 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Value_m14245_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m14246_gshared (KeyValuePair_2_t2142 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m14246(__this, method) (( String_t* (*) (KeyValuePair_2_t2142 *, const MethodInfo*))KeyValuePair_2_ToString_m14246_gshared)(__this, method)
