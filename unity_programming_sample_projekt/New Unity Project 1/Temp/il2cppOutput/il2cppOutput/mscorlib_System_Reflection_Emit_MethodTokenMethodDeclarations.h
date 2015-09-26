#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodToken.h"

// System.Void System.Reflection.Emit.MethodToken::.ctor(System.Int32)
extern "C" void MethodToken__ctor_m7511 (MethodToken_t1215 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodToken::.cctor()
extern "C" void MethodToken__cctor_m7512 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodToken::Equals(System.Object)
extern "C" bool MethodToken_Equals_m7513 (MethodToken_t1215 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodToken::GetHashCode()
extern "C" int32_t MethodToken_GetHashCode_m7514 (MethodToken_t1215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodToken::get_Token()
extern "C" int32_t MethodToken_get_Token_m7515 (MethodToken_t1215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
