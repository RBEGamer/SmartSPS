#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t691;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t689;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t709;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclarationCollection__ctor_m3296 (DTDAttListDeclarationCollection_t691 * __this, DTDObjectModel_t689 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C" DTDAttListDeclaration_t709 * DTDAttListDeclarationCollection_get_Item_m3297 (DTDAttListDeclarationCollection_t691 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C" void DTDAttListDeclarationCollection_Add_m3298 (DTDAttListDeclarationCollection_t691 * __this, String_t* ___name, DTDAttListDeclaration_t709 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
