#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1192;
// System.IO.Stream
struct Stream_t739;
// System.Text.Encoding
struct Encoding_t52;
// System.Char[]
struct CharU5BU5D_t197;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m7342 (UnexceptionalStreamWriter_t1192 * __this, Stream_t739 * ___stream, Encoding_t52 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m7343 (UnexceptionalStreamWriter_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m7344 (UnexceptionalStreamWriter_t1192 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m7345 (UnexceptionalStreamWriter_t1192 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m7346 (UnexceptionalStreamWriter_t1192 * __this, CharU5BU5D_t197* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m7347 (UnexceptionalStreamWriter_t1192 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
