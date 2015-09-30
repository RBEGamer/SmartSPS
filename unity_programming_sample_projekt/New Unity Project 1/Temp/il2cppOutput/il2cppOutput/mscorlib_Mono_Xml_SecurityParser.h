#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1366;
// System.Collections.Stack
struct Stack_t719;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1364  : public SmallXmlParser_t1365
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1366 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1366 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t719 * ___stack_15;
};
