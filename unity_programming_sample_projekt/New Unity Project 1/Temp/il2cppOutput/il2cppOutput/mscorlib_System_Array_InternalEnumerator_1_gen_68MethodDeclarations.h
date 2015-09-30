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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_68.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"

// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18498_gshared (InternalEnumerator_1_t2473 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18498(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2473 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18498_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18499_gshared (InternalEnumerator_1_t2473 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18499(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2473 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18499_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18500_gshared (InternalEnumerator_1_t2473 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18500(__this, method) (( void (*) (InternalEnumerator_1_t2473 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18500_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18501_gshared (InternalEnumerator_1_t2473 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18501(__this, method) (( bool (*) (InternalEnumerator_1_t2473 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18501_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
extern "C" Mark_t1192  InternalEnumerator_1_get_Current_m18502_gshared (InternalEnumerator_1_t2473 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18502(__this, method) (( Mark_t1192  (*) (InternalEnumerator_1_t2473 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18502_gshared)(__this, method)
