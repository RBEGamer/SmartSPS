#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"
// System.Xml.XmlNamespaceManager/NsScope
#include "System_Xml_System_Xml_XmlNamespaceManager_NsScope.h"

// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18114_gshared (InternalEnumerator_1_t2434 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18114(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2434 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18114_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18115_gshared (InternalEnumerator_1_t2434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18115(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2434 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18115_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18116_gshared (InternalEnumerator_1_t2434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18116(__this, method) (( void (*) (InternalEnumerator_1_t2434 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18116_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18117_gshared (InternalEnumerator_1_t2434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18117(__this, method) (( bool (*) (InternalEnumerator_1_t2434 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18117_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::get_Current()
extern "C" NsScope_t740  InternalEnumerator_1_get_Current_m18118_gshared (InternalEnumerator_1_t2434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18118(__this, method) (( NsScope_t740  (*) (InternalEnumerator_1_t2434 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18118_gshared)(__this, method)
