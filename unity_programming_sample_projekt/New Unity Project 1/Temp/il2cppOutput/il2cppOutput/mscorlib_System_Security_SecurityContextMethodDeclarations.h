#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1490;
// System.Threading.CompressedStack
struct CompressedStack_t1491;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m8909 (SecurityContext_t1490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m8910 (SecurityContext_t1490 * __this, SecurityContext_t1490 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1490 * SecurityContext_Capture_m8911 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m8912 (SecurityContext_t1490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1491 * SecurityContext_get_CompressedStack_m8913 (SecurityContext_t1490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
