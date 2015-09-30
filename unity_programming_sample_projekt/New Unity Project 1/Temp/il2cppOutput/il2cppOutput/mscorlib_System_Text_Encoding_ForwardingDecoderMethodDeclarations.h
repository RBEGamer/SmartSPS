#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Encoding/ForwardingDecoder
struct ForwardingDecoder_t1771;
// System.Text.Encoding
struct Encoding_t52;
// System.Byte[]
struct ByteU5BU5D_t444;
// System.Char[]
struct CharU5BU5D_t60;

// System.Void System.Text.Encoding/ForwardingDecoder::.ctor(System.Text.Encoding)
extern "C" void ForwardingDecoder__ctor_m10702 (ForwardingDecoder_t1771 * __this, Encoding_t52 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ForwardingDecoder_GetChars_m10703 (ForwardingDecoder_t1771 * __this, ByteU5BU5D_t444* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t60* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
