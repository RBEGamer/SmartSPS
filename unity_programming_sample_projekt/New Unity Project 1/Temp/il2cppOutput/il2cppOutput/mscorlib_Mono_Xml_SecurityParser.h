﻿#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1106;
// System.Collections.Stack
struct Stack_t937;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1104  : public SmallXmlParser_t1105
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1106 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1106 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t937 * ___stack_15;
};
