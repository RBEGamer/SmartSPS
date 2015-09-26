﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t1218;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1216;
// System.Reflection.MemberInfo
struct MemberInfo_t;

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C" void ModuleBuilderTokenGenerator__ctor_m7523 (ModuleBuilderTokenGenerator_t1218 * __this, ModuleBuilder_t1216 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m7524 (ModuleBuilderTokenGenerator_t1218 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
