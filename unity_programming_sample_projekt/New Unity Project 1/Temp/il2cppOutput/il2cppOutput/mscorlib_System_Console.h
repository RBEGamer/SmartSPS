#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t769;
// System.IO.TextReader
struct TextReader_t736;
// System.Text.Encoding
struct Encoding_t52;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1251  : public Object_t
{
};
struct Console_t1251_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t769 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t769 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t736 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t52 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t52 * ___outputEncoding_4;
};
