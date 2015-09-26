﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Object>
struct GenericComparer_1_t2203;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.GenericComparer`1<System.Object>::.ctor()
extern "C" void GenericComparer_1__ctor_m16382_gshared (GenericComparer_1_t2203 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m16382(__this, method) (( void (*) (GenericComparer_1_t2203 *, const MethodInfo*))GenericComparer_1__ctor_m16382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Object>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m16383_gshared (GenericComparer_1_t2203 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m16383(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2203 *, Object_t *, Object_t *, const MethodInfo*))GenericComparer_1_Compare_m16383_gshared)(__this, ___x, ___y, method)