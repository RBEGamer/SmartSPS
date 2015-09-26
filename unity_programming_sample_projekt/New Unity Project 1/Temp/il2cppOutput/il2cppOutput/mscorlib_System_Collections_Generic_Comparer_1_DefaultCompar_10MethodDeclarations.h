#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2242;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m16635_gshared (DefaultComparer_t2242 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16635(__this, method) (( void (*) (DefaultComparer_t2242 *, const MethodInfo*))DefaultComparer__ctor_m16635_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m16636_gshared (DefaultComparer_t2242 * __this, DateTimeOffset_t1561  ___x, DateTimeOffset_t1561  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m16636(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2242 *, DateTimeOffset_t1561 , DateTimeOffset_t1561 , const MethodInfo*))DefaultComparer_Compare_m16636_gshared)(__this, ___x, ___y, method)
