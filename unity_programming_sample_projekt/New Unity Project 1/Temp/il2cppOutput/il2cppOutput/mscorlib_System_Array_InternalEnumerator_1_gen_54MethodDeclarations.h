#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
// Mono.Xml2.XmlTextReader/TagName
#include "System_Xml_Mono_Xml2_XmlTextReader_TagName.h"

// System.Void System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18124_gshared (InternalEnumerator_1_t2436 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18124(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2436 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18124_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18125_gshared (InternalEnumerator_1_t2436 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18125(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2436 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18125_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18126_gshared (InternalEnumerator_1_t2436 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18126(__this, method) (( void (*) (InternalEnumerator_1_t2436 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18126_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18127_gshared (InternalEnumerator_1_t2436 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18127(__this, method) (( bool (*) (InternalEnumerator_1_t2436 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18127_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::get_Current()
extern "C" TagName_t756  InternalEnumerator_1_get_Current_m18128_gshared (InternalEnumerator_1_t2436 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18128(__this, method) (( TagName_t756  (*) (InternalEnumerator_1_t2436 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18128_gshared)(__this, method)
