#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m16160_gshared (KeyValuePair_2_t2165 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m16160(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2165 *, Object_t *, bool, const MethodInfo*))KeyValuePair_2__ctor_m16160_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m16161_gshared (KeyValuePair_2_t2165 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m16161(__this, method) (( Object_t * (*) (KeyValuePair_2_t2165 *, const MethodInfo*))KeyValuePair_2_get_Key_m16161_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m16162_gshared (KeyValuePair_2_t2165 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m16162(__this, ___value, method) (( void (*) (KeyValuePair_2_t2165 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m16162_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C" bool KeyValuePair_2_get_Value_m16163_gshared (KeyValuePair_2_t2165 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m16163(__this, method) (( bool (*) (KeyValuePair_2_t2165 *, const MethodInfo*))KeyValuePair_2_get_Value_m16163_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m16164_gshared (KeyValuePair_2_t2165 * __this, bool ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m16164(__this, ___value, method) (( void (*) (KeyValuePair_2_t2165 *, bool, const MethodInfo*))KeyValuePair_2_set_Value_m16164_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m16165_gshared (KeyValuePair_2_t2165 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m16165(__this, method) (( String_t* (*) (KeyValuePair_2_t2165 *, const MethodInfo*))KeyValuePair_2_ToString_m16165_gshared)(__this, method)
