#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m11811_gshared (Nullable_1_t1913 * __this, TimeSpan_t1151  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11811(__this, ___value, method) (( void (*) (Nullable_1_t1913 *, TimeSpan_t1151 , const MethodInfo*))Nullable_1__ctor_m11811_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11812_gshared (Nullable_1_t1913 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11812(__this, method) (( bool (*) (Nullable_1_t1913 *, const MethodInfo*))Nullable_1_get_HasValue_m11812_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1151  Nullable_1_get_Value_m11813_gshared (Nullable_1_t1913 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11813(__this, method) (( TimeSpan_t1151  (*) (Nullable_1_t1913 *, const MethodInfo*))Nullable_1_get_Value_m11813_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m18870_gshared (Nullable_1_t1913 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m18870(__this, ___other, method) (( bool (*) (Nullable_1_t1913 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m18870_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m18871_gshared (Nullable_1_t1913 * __this, Nullable_1_t1913  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m18871(__this, ___other, method) (( bool (*) (Nullable_1_t1913 *, Nullable_1_t1913 , const MethodInfo*))Nullable_1_Equals_m18871_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m18872_gshared (Nullable_1_t1913 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m18872(__this, method) (( int32_t (*) (Nullable_1_t1913 *, const MethodInfo*))Nullable_1_GetHashCode_m18872_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m18873_gshared (Nullable_1_t1913 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m18873(__this, method) (( String_t* (*) (Nullable_1_t1913 *, const MethodInfo*))Nullable_1_ToString_m18873_gshared)(__this, method)
