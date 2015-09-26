#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1160;
// System.Text.DecoderFallback
struct DecoderFallback_t1503;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1504;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m8976 (Decoder_t1160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m8977 (Decoder_t1160 * __this, DecoderFallback_t1503 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1504 * Decoder_get_FallbackBuffer_m8978 (Decoder_t1160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
