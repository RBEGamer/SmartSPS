#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2537;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m18879_gshared (DefaultComparer_t2537 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18879(__this, method) (( void (*) (DefaultComparer_t2537 *, const MethodInfo*))DefaultComparer__ctor_m18879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m18880_gshared (DefaultComparer_t2537 * __this, Guid_t1835  ___x, Guid_t1835  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m18880(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2537 *, Guid_t1835 , Guid_t1835 , const MethodInfo*))DefaultComparer_Compare_m18880_gshared)(__this, ___x, ___y, method)
