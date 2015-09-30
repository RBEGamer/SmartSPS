#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// Mono.Xml2.XmlTextReader/TagName
#include "System_Xml_Mono_Xml2_XmlTextReader_TagName.h"

// System.Void Mono.Xml2.XmlTextReader/TagName::.ctor(System.String,System.String,System.String)
extern "C" void TagName__ctor_m3596 (TagName_t756 * __this, String_t* ___n, String_t* ___l, String_t* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TagName_t756_marshal(const TagName_t756& unmarshaled, TagName_t756_marshaled& marshaled);
extern "C" void TagName_t756_marshal_back(const TagName_t756_marshaled& marshaled, TagName_t756& unmarshaled);
extern "C" void TagName_t756_marshal_cleanup(TagName_t756_marshaled& marshaled);
