#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"
// System.Xml.XmlNamespaceManager/NsDecl
#include "System_Xml_System_Xml_XmlNamespaceManager_NsDecl.h"

// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18109_gshared (InternalEnumerator_1_t2433 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18109(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2433 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18109_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18110_gshared (InternalEnumerator_1_t2433 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18110(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2433 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18110_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18111_gshared (InternalEnumerator_1_t2433 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18111(__this, method) (( void (*) (InternalEnumerator_1_t2433 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18111_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18112_gshared (InternalEnumerator_1_t2433 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18112(__this, method) (( bool (*) (InternalEnumerator_1_t2433 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18112_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Current()
extern "C" NsDecl_t739  InternalEnumerator_1_get_Current_m18113_gshared (InternalEnumerator_1_t2433 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18113(__this, method) (( NsDecl_t739  (*) (InternalEnumerator_1_t2433 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18113_gshared)(__this, method)
