#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t1360;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t320;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1350;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1664;
// System.Exception
struct Exception_t32;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t610;
// System.Collections.IDictionary
struct IDictionary_t921;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m8168 (ReturnMessage_t1360 * __this, Object_t * ___ret, ObjectU5BU5D_t320* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1350 * ___callCtx, Object_t * ___mcm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m8169 (ReturnMessage_t1360 * __this, Exception_t32 * ___e, Object_t * ___mcm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m8170 (ReturnMessage_t1360 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t320* ReturnMessage_get_Args_m8171 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1350 * ReturnMessage_get_LogicalCallContext_m8172 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t610 * ReturnMessage_get_MethodBase_m8173 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m8174 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern "C" Object_t * ReturnMessage_get_MethodSignature_m8175 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern "C" Object_t * ReturnMessage_get_Properties_m8176 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m8177 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m8178 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m8179 (ReturnMessage_t1360 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t32 * ReturnMessage_get_Exception_m8180 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t320* ReturnMessage_get_OutArgs_m8181 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m8182 (ReturnMessage_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
