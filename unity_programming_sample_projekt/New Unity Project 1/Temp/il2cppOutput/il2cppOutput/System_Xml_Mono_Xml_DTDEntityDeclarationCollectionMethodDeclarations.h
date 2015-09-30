#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t693;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t689;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t712;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclarationCollection__ctor_m3299 (DTDEntityDeclarationCollection_t693 * __this, DTDObjectModel_t689 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDEntityDeclaration_t712 * DTDEntityDeclarationCollection_get_Item_m3300 (DTDEntityDeclarationCollection_t693 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDEntityDeclarationCollection_Add_m3301 (DTDEntityDeclarationCollection_t693 * __this, String_t* ___name, DTDEntityDeclaration_t712 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
