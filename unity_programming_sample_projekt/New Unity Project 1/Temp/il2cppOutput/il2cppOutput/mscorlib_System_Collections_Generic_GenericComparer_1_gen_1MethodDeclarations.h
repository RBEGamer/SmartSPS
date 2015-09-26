#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t1703;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m10185_gshared (GenericComparer_1_t1703 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m10185(__this, method) (( void (*) (GenericComparer_1_t1703 *, const MethodInfo*))GenericComparer_1__ctor_m10185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m16651_gshared (GenericComparer_1_t1703 * __this, Guid_t1583  ___x, Guid_t1583  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m16651(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1703 *, Guid_t1583 , Guid_t1583 , const MethodInfo*))GenericComparer_1_Compare_m16651_gshared)(__this, ___x, ___y, method)
