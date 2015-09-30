#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlResolver
struct XmlResolver_t696;
// System.Uri
struct Uri_t711;
// System.String
struct String_t;

// System.Void System.Xml.XmlResolver::.ctor()
extern "C" void XmlResolver__ctor_m3583 (XmlResolver_t696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C" Uri_t711 * XmlResolver_ResolveUri_m3584 (XmlResolver_t696 * __this, Uri_t711 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C" String_t* XmlResolver_EscapeRelativeUriBody_m3585 (XmlResolver_t696 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
