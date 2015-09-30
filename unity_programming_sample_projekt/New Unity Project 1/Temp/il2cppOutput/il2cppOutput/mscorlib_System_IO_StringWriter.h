#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t320;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct  StringWriter_t770  : public TextWriter_t769
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t320 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;
};
