#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t61;

// System.Void System.Xml.XmlTextWriter/StringUtil::.cctor()
extern "C" void StringUtil__cctor_m3759 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern "C" int32_t StringUtil_IndexOf_m3760 (Object_t * __this /* static, unused */, String_t* ___src, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern "C" String_t* StringUtil_Format_m3761 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t61* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
