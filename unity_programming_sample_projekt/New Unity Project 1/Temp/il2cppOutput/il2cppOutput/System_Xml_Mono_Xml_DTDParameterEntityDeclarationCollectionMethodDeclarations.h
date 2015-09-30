#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t692;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t689;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t714;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDParameterEntityDeclarationCollection__ctor_m3374 (DTDParameterEntityDeclarationCollection_t692 * __this, DTDObjectModel_t689 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDParameterEntityDeclaration_t714 * DTDParameterEntityDeclarationCollection_get_Item_m3375 (DTDParameterEntityDeclarationCollection_t692 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C" void DTDParameterEntityDeclarationCollection_Add_m3376 (DTDParameterEntityDeclarationCollection_t692 * __this, String_t* ___name, DTDParameterEntityDeclaration_t714 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
