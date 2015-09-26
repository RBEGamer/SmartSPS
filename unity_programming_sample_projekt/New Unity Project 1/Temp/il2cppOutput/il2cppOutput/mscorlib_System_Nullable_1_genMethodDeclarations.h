﻿#pragma once
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
extern "C" void Nullable_1__ctor_m10182_gshared (Nullable_1_t1666 * __this, TimeSpan_t896  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10182(__this, ___value, method) (( void (*) (Nullable_1_t1666 *, TimeSpan_t896 , const MethodInfo*))Nullable_1__ctor_m10182_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10183_gshared (Nullable_1_t1666 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10183(__this, method) (( bool (*) (Nullable_1_t1666 *, const MethodInfo*))Nullable_1_get_HasValue_m10183_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t896  Nullable_1_get_Value_m10184_gshared (Nullable_1_t1666 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10184(__this, method) (( TimeSpan_t896  (*) (Nullable_1_t1666 *, const MethodInfo*))Nullable_1_get_Value_m10184_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m16647_gshared (Nullable_1_t1666 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m16647(__this, ___other, method) (( bool (*) (Nullable_1_t1666 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m16647_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m16648_gshared (Nullable_1_t1666 * __this, Nullable_1_t1666  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m16648(__this, ___other, method) (( bool (*) (Nullable_1_t1666 *, Nullable_1_t1666 , const MethodInfo*))Nullable_1_Equals_m16648_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m16649_gshared (Nullable_1_t1666 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m16649(__this, method) (( int32_t (*) (Nullable_1_t1666 *, const MethodInfo*))Nullable_1_GetHashCode_m16649_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m16650_gshared (Nullable_1_t1666 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m16650(__this, method) (( String_t* (*) (Nullable_1_t1666 *, const MethodInfo*))Nullable_1_ToString_m16650_gshared)(__this, method)