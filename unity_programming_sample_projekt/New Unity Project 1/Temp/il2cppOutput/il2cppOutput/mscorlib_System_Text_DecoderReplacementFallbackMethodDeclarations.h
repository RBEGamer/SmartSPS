﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1508;
// System.String
struct String_t;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1504;
// System.Object
struct Object_t;

// System.Void System.Text.DecoderReplacementFallback::.ctor()
extern "C" void DecoderReplacementFallback__ctor_m8997 (DecoderReplacementFallback_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallback::.ctor(System.String)
extern "C" void DecoderReplacementFallback__ctor_m8998 (DecoderReplacementFallback_t1508 * __this, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.DecoderReplacementFallback::get_DefaultString()
extern "C" String_t* DecoderReplacementFallback_get_DefaultString_m8999 (DecoderReplacementFallback_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.DecoderReplacementFallback::CreateFallbackBuffer()
extern "C" DecoderFallbackBuffer_t1504 * DecoderReplacementFallback_CreateFallbackBuffer_m9000 (DecoderReplacementFallback_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallback::Equals(System.Object)
extern "C" bool DecoderReplacementFallback_Equals_m9001 (DecoderReplacementFallback_t1508 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallback::GetHashCode()
extern "C" int32_t DecoderReplacementFallback_GetHashCode_m9002 (DecoderReplacementFallback_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;