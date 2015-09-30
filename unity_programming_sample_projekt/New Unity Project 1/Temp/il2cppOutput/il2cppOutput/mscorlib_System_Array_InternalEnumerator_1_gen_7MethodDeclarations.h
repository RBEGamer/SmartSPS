#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<remote_uploader/node_database_information>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7.h"
// remote_uploader/node_database_information
#include "AssemblyU2DCSharp_remote_uploader_node_database_information.h"

// System.Void System.Array/InternalEnumerator`1<remote_uploader/node_database_information>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12236_gshared (InternalEnumerator_1_t1983 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12236(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1983 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12236_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<remote_uploader/node_database_information>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12237_gshared (InternalEnumerator_1_t1983 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12237(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1983 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12237_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<remote_uploader/node_database_information>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12238_gshared (InternalEnumerator_1_t1983 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12238(__this, method) (( void (*) (InternalEnumerator_1_t1983 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12238_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<remote_uploader/node_database_information>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12239_gshared (InternalEnumerator_1_t1983 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12239(__this, method) (( bool (*) (InternalEnumerator_1_t1983 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12239_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<remote_uploader/node_database_information>::get_Current()
extern "C" node_database_information_t21  InternalEnumerator_1_get_Current_m12240_gshared (InternalEnumerator_1_t1983 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12240(__this, method) (( node_database_information_t21  (*) (InternalEnumerator_1_t1983 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12240_gshared)(__this, method)
