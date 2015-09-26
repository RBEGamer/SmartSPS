#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"

// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16282_gshared (InternalEnumerator_1_t2183 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16282(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2183 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16282_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16283_gshared (InternalEnumerator_1_t2183 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16283(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2183 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16283_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16284_gshared (InternalEnumerator_1_t2183 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16284(__this, method) (( void (*) (InternalEnumerator_1_t2183 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16284_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16285_gshared (InternalEnumerator_1_t2183 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16285(__this, method) (( bool (*) (InternalEnumerator_1_t2183 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16285_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
extern "C" Mark_t938  InternalEnumerator_1_get_Current_m16286_gshared (InternalEnumerator_1_t2183 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16286(__this, method) (( Mark_t938  (*) (InternalEnumerator_1_t2183 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16286_gshared)(__this, method)
