#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t690;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t689;
// System.String
struct String_t;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t707;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m3294 (DTDElementDeclarationCollection_t690 * __this, DTDObjectModel_t689 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m3295 (DTDElementDeclarationCollection_t690 * __this, String_t* ___name, DTDElementDeclaration_t707 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
