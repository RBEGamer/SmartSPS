#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t712;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t689;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t695;

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclaration__ctor_m3359 (DTDEntityDeclaration_t712 * __this, DTDObjectModel_t689 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
extern "C" String_t* DTDEntityDeclaration_get_NotationName_m3360 (DTDEntityDeclaration_t712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
extern "C" void DTDEntityDeclaration_set_NotationName_m3361 (DTDEntityDeclaration_t712 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
extern "C" bool DTDEntityDeclaration_get_HasExternalReference_m3362 (DTDEntityDeclaration_t712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
extern "C" String_t* DTDEntityDeclaration_get_EntityValue_m3363 (DTDEntityDeclaration_t712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
extern "C" void DTDEntityDeclaration_ScanEntityValue_m3364 (DTDEntityDeclaration_t712 * __this, ArrayList_t695 * ___refs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
