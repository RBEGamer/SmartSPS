#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t587;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t588;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t997;
// System.Security.Policy.Evidence
struct Evidence_t1229;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1319;
// System.Object
struct Object_t;

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_add_UnhandledException_m3060 (AppDomain_t587 * __this, UnhandledExceptionEventHandler_t588 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_remove_UnhandledException_m9317 (AppDomain_t587 * __this, UnhandledExceptionEventHandler_t588 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m9318 (AppDomain_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t587 * AppDomain_getCurDomain_m9319 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t587 * AppDomain_get_CurrentDomain_m3058 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t997 * AppDomain_LoadAssembly_m9320 (AppDomain_t587 * __this, String_t* ___assemblyRef, Evidence_t1229 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t997 * AppDomain_Load_m9321 (AppDomain_t587 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t997 * AppDomain_Load_m9322 (AppDomain_t587 * __this, String_t* ___assemblyString, Evidence_t1229 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1319 * AppDomain_InternalSetContext_m9323 (Object_t * __this /* static, unused */, Context_t1319 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1319 * AppDomain_InternalGetContext_m9324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1319 * AppDomain_InternalGetDefaultContext_m9325 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m9326 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m9327 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m9328 (AppDomain_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C" Assembly_t997 * AppDomain_DoTypeResolve_m9329 (AppDomain_t587 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
