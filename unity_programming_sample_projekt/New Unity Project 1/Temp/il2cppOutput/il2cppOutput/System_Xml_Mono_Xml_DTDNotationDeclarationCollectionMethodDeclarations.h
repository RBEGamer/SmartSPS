#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t694;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t689;
// System.String
struct String_t;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t713;

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDNotationDeclarationCollection__ctor_m3302 (DTDNotationDeclarationCollection_t694 * __this, DTDObjectModel_t689 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C" void DTDNotationDeclarationCollection_Add_m3303 (DTDNotationDeclarationCollection_t694 * __this, String_t* ___name, DTDNotationDeclaration_t713 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
