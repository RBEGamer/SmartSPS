#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m11509_gshared (KeyValuePair_2_t1805 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m11509(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t1805 *, int32_t, Object_t *, const MethodInfo*))KeyValuePair_2__ctor_m11509_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m11510_gshared (KeyValuePair_2_t1805 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m11510(__this, method) (( int32_t (*) (KeyValuePair_2_t1805 *, const MethodInfo*))KeyValuePair_2_get_Key_m11510_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m11511_gshared (KeyValuePair_2_t1805 * __this, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m11511(__this, ___value, method) (( void (*) (KeyValuePair_2_t1805 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Key_m11511_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m11512_gshared (KeyValuePair_2_t1805 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m11512(__this, method) (( Object_t * (*) (KeyValuePair_2_t1805 *, const MethodInfo*))KeyValuePair_2_get_Value_m11512_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m11513_gshared (KeyValuePair_2_t1805 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m11513(__this, ___value, method) (( void (*) (KeyValuePair_2_t1805 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Value_m11513_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m11514_gshared (KeyValuePair_2_t1805 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m11514(__this, method) (( String_t* (*) (KeyValuePair_2_t1805 *, const MethodInfo*))KeyValuePair_2_ToString_m11514_gshared)(__this, method)
