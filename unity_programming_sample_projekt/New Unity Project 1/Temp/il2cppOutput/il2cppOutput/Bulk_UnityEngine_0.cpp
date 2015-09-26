#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>

// System.Array
#include "mscorlib_System_Array.h"

// <Module>
#include "UnityEngine_U3CModuleU3E.h"
// <Module>
#include "UnityEngine_U3CModuleU3EMethodDeclarations.h"
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequest.h"
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequestMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundle.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
// System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void AssetBundleCreateRequest__ctor_m2134 (AssetBundleCreateRequest_t391 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2486(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern "C" AssetBundle_t394 * AssetBundleCreateRequest_get_assetBundle_m2135 (AssetBundleCreateRequest_t391 * __this, const MethodInfo* method)
{
	typedef AssetBundle_t394 * (*AssetBundleCreateRequest_get_assetBundle_m2135_ftn) (AssetBundleCreateRequest_t391 *);
	static AssetBundleCreateRequest_get_assetBundle_m2135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_get_assetBundle_m2135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()
extern "C" void AssetBundleCreateRequest_DisableCompatibilityChecks_m2136 (AssetBundleCreateRequest_t391 * __this, const MethodInfo* method)
{
	typedef void (*AssetBundleCreateRequest_DisableCompatibilityChecks_m2136_ftn) (AssetBundleCreateRequest_t391 *);
	static AssetBundleCreateRequest_DisableCompatibilityChecks_m2136_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_DisableCompatibilityChecks_m2136_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequest.h"
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequestMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
// System.Void UnityEngine.AssetBundleRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void AssetBundleRequest__ctor_m2137 (AssetBundleRequest_t393 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2486(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
extern "C" Object_t38 * AssetBundleRequest_get_asset_m2138 (AssetBundleRequest_t393 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t394 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		Object_t38 * L_3 = AssetBundle_LoadAsset_m2140(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
extern "C" ObjectU5BU5D_t569* AssetBundleRequest_get_allAssets_m2139 (AssetBundleRequest_t393 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t394 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		ObjectU5BU5D_t569* L_3 = AssetBundle_LoadAssetWithSubAssets_Internal_m2142(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral140;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral142;
extern "C" Object_t38 * AssetBundle_LoadAsset_m2140 (AssetBundle_t394 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral142 = il2cpp_codegen_string_literal_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NullReferenceException_t586 * L_1 = (NullReferenceException_t586 *)il2cpp_codegen_object_new (NullReferenceException_t586_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3056(L_1, _stringLiteral140, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m153(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t370 * L_4 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_4, _stringLiteral141, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0027:
	{
		Type_t * L_5 = ___type;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		NullReferenceException_t586 * L_6 = (NullReferenceException_t586 *)il2cpp_codegen_object_new (NullReferenceException_t586_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3056(L_6, _stringLiteral142, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0038:
	{
		String_t* L_7 = ___name;
		Type_t * L_8 = ___type;
		Object_t38 * L_9 = AssetBundle_LoadAsset_Internal_m2141(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t38 * AssetBundle_LoadAsset_Internal_m2141 (AssetBundle_t394 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef Object_t38 * (*AssetBundle_LoadAsset_Internal_m2141_ftn) (AssetBundle_t394 *, String_t*, Type_t *);
	static AssetBundle_LoadAsset_Internal_m2141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAsset_Internal_m2141_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t569* AssetBundle_LoadAssetWithSubAssets_Internal_m2142 (AssetBundle_t394 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t569* (*AssetBundle_LoadAssetWithSubAssets_Internal_m2142_ftn) (AssetBundle_t394 *, String_t*, Type_t *);
	static AssetBundle_LoadAssetWithSubAssets_Internal_m2142_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAssetWithSubAssets_Internal_m2142_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptionsMethodDeclarations.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatformMethodDeclarations.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogTypeMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForSeconds__ctor_m1708 (WaitForSeconds_t334 * __this, float ___seconds, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2610(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds;
		__this->___m_Seconds_0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t334_marshal(const WaitForSeconds_t334& unmarshaled, WaitForSeconds_t334_marshaled& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.___m_Seconds_0;
}
extern "C" void WaitForSeconds_t334_marshal_back(const WaitForSeconds_t334_marshaled& marshaled, WaitForSeconds_t334& unmarshaled)
{
	unmarshaled.___m_Seconds_0 = marshaled.___m_Seconds_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t334_marshal_cleanup(WaitForSeconds_t334_marshaled& marshaled)
{
}
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForFixedUpdate__ctor_m2143 (WaitForFixedUpdate_t399 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2610(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForEndOfFrame__ctor_m1982 (WaitForEndOfFrame_t362 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2610(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void UnityEngine.Coroutine::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void Coroutine__ctor_m2144 (Coroutine_t194 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2610(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2145 (Coroutine_t194 * __this, const MethodInfo* method)
{
	typedef void (*Coroutine_ReleaseCoroutine_m2145_ftn) (Coroutine_t194 *);
	static Coroutine_ReleaseCoroutine_m2145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Coroutine_ReleaseCoroutine_m2145_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Coroutine::Finalize()
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Coroutine_Finalize_m2146 (Coroutine_t194 * __this, const MethodInfo* method)
{
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Coroutine_ReleaseCoroutine_m2145(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t194_marshal(const Coroutine_t194& unmarshaled, Coroutine_t194_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void Coroutine_t194_marshal_back(const Coroutine_t194_marshaled& marshaled, Coroutine_t194& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t194_marshal_cleanup(Coroutine_t194_marshaled& marshaled)
{
}
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Void UnityEngine.ScriptableObject::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern "C" void ScriptableObject__ctor_m2147 (ScriptableObject_t400 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		ScriptableObject_Internal_CreateScriptableObject_m2148(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2148 (Object_t * __this /* static, unused */, ScriptableObject_t400 * ___self, const MethodInfo* method)
{
	typedef void (*ScriptableObject_Internal_CreateScriptableObject_m2148_ftn) (ScriptableObject_t400 *);
	static ScriptableObject_Internal_CreateScriptableObject_m2148_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_Internal_CreateScriptableObject_m2148_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" ScriptableObject_t400 * ScriptableObject_CreateInstance_m2149 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method)
{
	typedef ScriptableObject_t400 * (*ScriptableObject_CreateInstance_m2149_ftn) (String_t*);
	static ScriptableObject_CreateInstance_m2149_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstance_m2149_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(___className);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" ScriptableObject_t400 * ScriptableObject_CreateInstance_m2150 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ScriptableObject_t400 * L_1 = ScriptableObject_CreateInstanceFromType_m2151(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t400 * ScriptableObject_CreateInstanceFromType_m2151 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ScriptableObject_t400 * (*ScriptableObject_CreateInstanceFromType_m2151_ftn) (Type_t *);
	static ScriptableObject_CreateInstanceFromType_m2151_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstanceFromType_m2151_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t400_marshal(const ScriptableObject_t400& unmarshaled, ScriptableObject_t400_marshaled& marshaled)
{
}
extern "C" void ScriptableObject_t400_marshal_back(const ScriptableObject_t400_marshaled& marshaled, ScriptableObject_t400& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t400_marshal_cleanup(ScriptableObject_t400_marshaled& marshaled)
{
}
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandler.h"
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandlerMethodDeclarations.h"
// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Void UnityEngine.UnhandledExceptionHandler::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void UnhandledExceptionHandler__ctor_m2152 (UnhandledExceptionHandler_t401 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
extern TypeInfo* UnhandledExceptionEventHandler_t588_il2cpp_TypeInfo_var;
extern const MethodInfo* UnhandledExceptionHandler_HandleUnhandledException_m2154_MethodInfo_var;
extern "C" void UnhandledExceptionHandler_RegisterUECatcher_m2153 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnhandledExceptionEventHandler_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		UnhandledExceptionHandler_HandleUnhandledException_m2154_MethodInfo_var = il2cpp_codegen_method_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	{
		AppDomain_t587 * L_0 = AppDomain_get_CurrentDomain_m3058(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)UnhandledExceptionHandler_HandleUnhandledException_m2154_MethodInfo_var };
		UnhandledExceptionEventHandler_t588 * L_2 = (UnhandledExceptionEventHandler_t588 *)il2cpp_codegen_object_new (UnhandledExceptionEventHandler_t588_il2cpp_TypeInfo_var);
		UnhandledExceptionEventHandler__ctor_m3059(L_2, NULL, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		AppDomain_add_UnhandledException_m3060(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
// System.Object
#include "mscorlib_System_Object.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandlerMethodDeclarations.h"
extern TypeInfo* Exception_t32_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral143;
extern "C" void UnhandledExceptionHandler_HandleUnhandledException_m2154 (Object_t * __this /* static, unused */, Object_t * ___sender, UnhandledExceptionEventArgs_t570 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		_stringLiteral143 = il2cpp_codegen_string_literal_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t32 * V_0 = {0};
	{
		UnhandledExceptionEventArgs_t570 * L_0 = ___args;
		NullCheck(L_0);
		Object_t * L_1 = UnhandledExceptionEventArgs_get_ExceptionObject_m3061(L_0, /*hidden argument*/NULL);
		V_0 = ((Exception_t32 *)IsInstClass(L_1, Exception_t32_il2cpp_TypeInfo_var));
		Exception_t32 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t32 * L_3 = V_0;
		UnhandledExceptionHandler_PrintException_m2155(NULL /*static, unused*/, _stringLiteral143, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2156(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
// System.String
#include "mscorlib_System_String.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral144;
extern "C" void UnhandledExceptionHandler_PrintException_m2155 (Object_t * __this /* static, unused */, String_t* ___title, Exception_t32 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___title;
		Exception_t32 * L_1 = ___e;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m141(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Debug_LogError_m1528(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Exception_t32 * L_4 = ___e;
		NullCheck(L_4);
		Exception_t32 * L_5 = (Exception_t32 *)VirtFuncInvoker0< Exception_t32 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_4);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t32 * L_6 = ___e;
		NullCheck(L_6);
		Exception_t32 * L_7 = (Exception_t32 *)VirtFuncInvoker0< Exception_t32 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_6);
		UnhandledExceptionHandler_PrintException_m2155(NULL /*static, unused*/, _stringLiteral144, L_7, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()
extern "C" void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2156 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2156_ftn) ();
	static UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()");
	_il2cpp_icall_func();
}
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderb.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GameCenterPlatform__ctor_m2157 (GameCenterPlatform_t402 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"
extern TypeInfo* AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern TypeInfo* UserProfileU5BU5D_t409_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3062_MethodInfo_var;
extern "C" void GameCenterPlatform__cctor_m2158 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		UserProfileU5BU5D_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		List_1_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		List_1__ctor_m3062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483946);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t408*)SZArrayNew(AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_friends_10 = ((UserProfileU5BU5D_t409*)SZArrayNew(UserProfileU5BU5D_t409_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_users_11 = ((UserProfileU5BU5D_t409*)SZArrayNew(UserProfileU5BU5D_t409_il2cpp_TypeInfo_var, 0));
		List_1_t411 * L_0 = (List_1_t411 *)il2cpp_codegen_object_new (List_1_t411_il2cpp_TypeInfo_var);
		List_1__ctor_m3062(L_0, /*hidden argument*/List_1__ctor_m3062_MethodInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2159 (GameCenterPlatform_t402 * __this, Object_t * ___user, Action_1_t403 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t403 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1 = L_0;
		GameCenterPlatform_Internal_LoadFriends_m2167(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2160 (GameCenterPlatform_t402 * __this, Object_t * ___user, Action_1_t403 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t403 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0 = L_0;
		GameCenterPlatform_Internal_Authenticate_m2161(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C" void GameCenterPlatform_Internal_Authenticate_m2161 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m2161_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m2161_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m2161_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C" bool GameCenterPlatform_Internal_Authenticated_m2162 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m2162_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m2162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m2162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C" String_t* GameCenterPlatform_Internal_UserName_m2163 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m2163_ftn) ();
	static GameCenterPlatform_Internal_UserName_m2163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m2163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C" String_t* GameCenterPlatform_Internal_UserID_m2164 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m2164_ftn) ();
	static GameCenterPlatform_Internal_UserID_m2164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m2164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C" bool GameCenterPlatform_Internal_Underage_m2165 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m2165_ftn) ();
	static GameCenterPlatform_Internal_Underage_m2165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m2165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C" Texture2D_t158 * GameCenterPlatform_Internal_UserImage_m2166 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t158 * (*GameCenterPlatform_Internal_UserImage_m2166_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m2166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m2166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C" void GameCenterPlatform_Internal_LoadFriends_m2167 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m2167_ftn) ();
	static GameCenterPlatform_Internal_LoadFriends_m2167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m2167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C" void GameCenterPlatform_Internal_LoadAchievementDescriptions_m2168 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m2168_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m2168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m2168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C" void GameCenterPlatform_Internal_LoadAchievements_m2169 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m2169_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievements_m2169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m2169_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
// System.String
#include "mscorlib_System_String.h"
// System.Double
#include "mscorlib_System_Double.h"
extern "C" void GameCenterPlatform_Internal_ReportProgress_m2170 (Object_t * __this /* static, unused */, String_t* ___id, double ___progress, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m2170_ftn) (String_t*, double);
	static GameCenterPlatform_Internal_ReportProgress_m2170_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m2170_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)");
	_il2cpp_icall_func(___id, ___progress);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
// System.Int64
#include "mscorlib_System_Int64.h"
extern "C" void GameCenterPlatform_Internal_ReportScore_m2171 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m2171_ftn) (int64_t, String_t*);
	static GameCenterPlatform_Internal_ReportScore_m2171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m2171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)");
	_il2cpp_icall_func(___score, ___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C" void GameCenterPlatform_Internal_LoadScores_m2172 (Object_t * __this /* static, unused */, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m2172_ftn) (String_t*);
	static GameCenterPlatform_Internal_LoadScores_m2172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m2172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)");
	_il2cpp_icall_func(___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C" void GameCenterPlatform_Internal_ShowAchievementsUI_m2173 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m2173_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m2173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m2173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C" void GameCenterPlatform_Internal_ShowLeaderboardUI_m2174 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m2174_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m2174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m2174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void GameCenterPlatform_Internal_LoadUsers_m2175 (Object_t * __this /* static, unused */, StringU5BU5D_t48* ___userIds, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m2175_ftn) (StringU5BU5D_t48*);
	static GameCenterPlatform_Internal_LoadUsers_m2175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m2175_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])");
	_il2cpp_icall_func(___userIds);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C" void GameCenterPlatform_Internal_ResetAllAchievements_m2176 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m2176_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m2176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m2176_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2177 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2177_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2177_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2177_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ResetAllAchievements_m2178 (Object_t * __this /* static, unused */, Action_1_t403 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t403 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12 = L_0;
		GameCenterPlatform_Internal_ResetAllAchievements_m2176(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2179 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2177(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2180 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int32_t L_1 = ___timeScope;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2181(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2181 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2181_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2181_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2181_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearAchievementDescriptions_m2182 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t408* L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t408* L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_1);
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t408*)SZArrayNew(AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var, L_3));
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetAchievementDescription_m2183 (Object_t * __this /* static, unused */, GcAchievementDescriptionData_t520  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t408* L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_1 = ___number;
		AchievementDescription_t531 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m2888((&___data), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((AchievementDescription_t531 **)(AchievementDescription_t531 **)SZArrayLdElema(L_0, L_1, sizeof(AchievementDescription_t531 *))) = (AchievementDescription_t531 *)L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral145;
extern "C" void GameCenterPlatform_SetAchievementDescriptionImage_m2184 (Object_t * __this /* static, unused */, Texture2D_t158 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t408* L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_0);
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		Debug_Log_m73(NULL /*static, unused*/, _stringLiteral145, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t408* L_3 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_4 = ___number;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Texture2D_t158 * L_6 = ___texture;
		NullCheck((*(AchievementDescription_t531 **)(AchievementDescription_t531 **)SZArrayLdElema(L_3, L_5, sizeof(AchievementDescription_t531 *))));
		AchievementDescription_SetImage_m2926((*(AchievementDescription_t531 **)(AchievementDescription_t531 **)SZArrayLdElema(L_3, L_5, sizeof(AchievementDescription_t531 *))), L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3063_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral146;
extern "C" void GameCenterPlatform_TriggerAchievementDescriptionCallback_m2185 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3063_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		_stringLiteral146 = il2cpp_codegen_string_literal_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t404 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t408* L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t408* L_2 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		Debug_Log_m73(NULL /*static, unused*/, _stringLiteral146, /*hidden argument*/NULL);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t404 * L_3 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		AchievementDescriptionU5BU5D_t408* L_4 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_3);
		Action_1_Invoke_m3063(L_3, (IAchievementDescriptionU5BU5D_t589*)(IAchievementDescriptionU5BU5D_t589*)L_4, /*hidden argument*/Action_1_Invoke_m3063_MethodInfo_var);
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_AuthenticateCallbackWrapper_m2186 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t403 * G_B3_0 = {0};
	Action_1_t403 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Action_1_t403 * G_B4_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m2196(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t403 * L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		int32_t L_2 = ___result;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		NullCheck(G_B4_1);
		Action_1_Invoke_m3064(G_B4_1, G_B4_0, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearFriends_m2187 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2214(NULL /*static, unused*/, (&((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriends_m2188 (Object_t * __this /* static, unused */, GcUserProfileData_t519  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m2887((&___data), (&((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriendImage_m2189 (Object_t * __this /* static, unused */, Texture2D_t158 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Texture2D_t158 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2213(NULL /*static, unused*/, (&((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerFriendsCallbackWrapper_m2190 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t403 * G_B5_0 = {0};
	Action_1_t403 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Action_1_t403 * G_B6_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t409* L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		LocalUser_t410 * L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		UserProfileU5BU5D_t409* L_2 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		NullCheck(L_1);
		LocalUser_SetFriends_m2899(L_1, (IUserProfileU5BU5D_t529*)(IUserProfileU5BU5D_t529*)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_3 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_4 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		int32_t L_5 = ___result;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0036:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m3064(G_B6_1, G_B6_0, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementU5BU5D_t590_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3065_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral147;
extern "C" void GameCenterPlatform_AchievementCallbackWrapper_m2191 (Object_t * __this /* static, unused */, GcAchievementDataU5BU5D_t571* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		AchievementU5BU5D_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		Action_1_Invoke_m3065_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		_stringLiteral147 = il2cpp_codegen_string_literal_from_index(147);
		s_Il2CppMethodIntialized = true;
	}
	AchievementU5BU5D_t590* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t405 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		GcAchievementDataU5BU5D_t571* L_1 = ___result;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m73(NULL /*static, unused*/, _stringLiteral147, /*hidden argument*/NULL);
	}

IL_001c:
	{
		GcAchievementDataU5BU5D_t571* L_2 = ___result;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t590*)SZArrayNew(AchievementU5BU5D_t590_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_003f;
	}

IL_002c:
	{
		AchievementU5BU5D_t590* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t571* L_5 = ___result;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		Achievement_t530 * L_7 = GcAchievementData_ToAchievement_m2889(((GcAchievementData_t521 *)(GcAchievementData_t521 *)SZArrayLdElema(L_5, L_6, sizeof(GcAchievementData_t521 ))), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, L_7);
		*((Achievement_t530 **)(Achievement_t530 **)SZArrayLdElema(L_3, L_4, sizeof(Achievement_t530 *))) = (Achievement_t530 *)L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t571* L_10 = ___result;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t405 * L_11 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		AchievementU5BU5D_t590* L_12 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_m3065(L_11, (IAchievementU5BU5D_t591*)(IAchievementU5BU5D_t591*)L_12, /*hidden argument*/Action_1_Invoke_m3065_MethodInfo_var);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_ProgressCallbackWrapper_m2192 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m3064(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreCallbackWrapper_m2193 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m3064(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t592_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3066_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreLoaderCallbackWrapper_m2194 (Object_t * __this /* static, unused */, GcScoreDataU5BU5D_t572* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		ScoreU5BU5D_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		Action_1_Invoke_m3066_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483950);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t592* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t406 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t572* L_1 = ___result;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t592*)SZArrayNew(ScoreU5BU5D_t592_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		ScoreU5BU5D_t592* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t572* L_4 = ___result;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t532 * L_6 = GcScoreData_ToScore_m2890(((GcScoreData_t522 *)(GcScoreData_t522 *)SZArrayLdElema(L_4, L_5, sizeof(GcScoreData_t522 ))), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t532 **)(Score_t532 **)SZArrayLdElema(L_2, L_3, sizeof(Score_t532 *))) = (Score_t532 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t572* L_9 = ___result;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t406 * L_10 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		ScoreU5BU5D_t592* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m3066(L_10, (IScoreU5BU5D_t533*)(IScoreU5BU5D_t533*)L_11, /*hidden argument*/Action_1_Invoke_m3066_MethodInfo_var);
	}

IL_0041:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern TypeInfo* LocalUser_t410_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" Object_t * GameCenterPlatform_get_localUser_m2195 (GameCenterPlatform_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		LocalUser_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		LocalUser_t410 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		LocalUser_t410 * L_1 = (LocalUser_t410 *)il2cpp_codegen_object_new (LocalUser_t410_il2cpp_TypeInfo_var);
		LocalUser__ctor_m2898(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m2162(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		LocalUser_t410 * L_3 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m63(NULL /*static, unused*/, L_4, _stringLiteral6, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m2196(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		LocalUser_t410 * L_6 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		return L_6;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_PopulateLocalUser_m2196 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		LocalUser_t410 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m2162(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m2900(L_0, L_1, /*hidden argument*/NULL);
		LocalUser_t410 * L_2 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m2163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m2906(L_2, L_3, /*hidden argument*/NULL);
		LocalUser_t410 * L_4 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m2164(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m2907(L_4, L_5, /*hidden argument*/NULL);
		LocalUser_t410 * L_6 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_7 = GameCenterPlatform_Internal_Underage_m2165(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		LocalUser_SetUnderage_m2901(L_6, L_7, /*hidden argument*/NULL);
		LocalUser_t410 * L_8 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		Texture2D_t158 * L_9 = GameCenterPlatform_Internal_UserImage_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		UserProfile_SetImage_m2908(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
extern TypeInfo* AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3063_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievementDescriptions_m2197 (GameCenterPlatform_t402 * __this, Action_1_t404 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3063_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2205(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t404 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m3063(L_1, (IAchievementDescriptionU5BU5D_t589*)(IAchievementDescriptionU5BU5D_t589*)((AchievementDescriptionU5BU5D_t408*)SZArrayNew(AchievementDescriptionU5BU5D_t408_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m3063_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t404 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2 = L_2;
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m2168(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportProgress_m2198 (GameCenterPlatform_t402 * __this, String_t* ___id, double ___progress, Action_1_t403 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2205(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t403 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m3064(L_1, 0, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t403 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4 = L_2;
		String_t* L_3 = ___id;
		double L_4 = ___progress;
		GameCenterPlatform_Internal_ReportProgress_m2170(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
extern TypeInfo* AchievementU5BU5D_t590_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3065_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievements_m2199 (GameCenterPlatform_t402 * __this, Action_1_t405 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementU5BU5D_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3065_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2205(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t405 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m3065(L_1, (IAchievementU5BU5D_t591*)(IAchievementU5BU5D_t591*)((AchievementU5BU5D_t590*)SZArrayNew(AchievementU5BU5D_t590_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m3065_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t405 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3 = L_2;
		GameCenterPlatform_Internal_LoadAchievements_m2169(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportScore_m2200 (GameCenterPlatform_t402 * __this, int64_t ___score, String_t* ___board, Action_1_t403 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2205(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t403 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m3064(L_1, 0, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t403 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5 = L_2;
		int64_t L_3 = ___score;
		String_t* L_4 = ___board;
		GameCenterPlatform_Internal_ReportScore_m2171(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
extern TypeInfo* ScoreU5BU5D_t592_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3066_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2201 (GameCenterPlatform_t402 * __this, String_t* ___category, Action_1_t406 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3066_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483950);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2205(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t406 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m3066(L_1, (IScoreU5BU5D_t533*)(IScoreU5BU5D_t533*)((ScoreU5BU5D_t592*)SZArrayNew(ScoreU5BU5D_t592_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m3066_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t406 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6 = L_2;
		String_t* L_3 = ___category;
		GameCenterPlatform_Internal_LoadScores_m2172(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t413_il2cpp_TypeInfo_var;
extern TypeInfo* GcLeaderboard_t412_il2cpp_TypeInfo_var;
extern TypeInfo* ILeaderboard_t574_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2202 (GameCenterPlatform_t402 * __this, Object_t * ___board, Action_1_t403 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Leaderboard_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		GcLeaderboard_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		ILeaderboard_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t413 * V_0 = {0};
	GcLeaderboard_t412 * V_1 = {0};
	Range_t534  V_2 = {0};
	Range_t534  V_3 = {0};
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2205(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t403 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m3064(L_1, 0, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t403 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7 = L_2;
		Object_t * L_3 = ___board;
		V_0 = ((Leaderboard_t413 *)CastclassClass(L_3, Leaderboard_t413_il2cpp_TypeInfo_var));
		Leaderboard_t413 * L_4 = V_0;
		GcLeaderboard_t412 * L_5 = (GcLeaderboard_t412 *)il2cpp_codegen_object_new (GcLeaderboard_t412_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_m2218(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		List_1_t411 * L_6 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		GcLeaderboard_t412 * L_7 = V_1;
		NullCheck(L_6);
		VirtActionInvoker1< GcLeaderboard_t412 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0) */, L_6, L_7);
		Leaderboard_t413 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t48* L_9 = Leaderboard_GetUserFilter_m2947(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		GcLeaderboard_t412 * L_10 = V_1;
		Object_t * L_11 = ___board;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t574_il2cpp_TypeInfo_var, L_11);
		Object_t * L_13 = ___board;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t574_il2cpp_TypeInfo_var, L_13);
		Leaderboard_t413 * L_15 = V_0;
		NullCheck(L_15);
		StringU5BU5D_t48* L_16 = Leaderboard_GetUserFilter_m2947(L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		GcLeaderboard_Internal_LoadScoresWithUsers_m2226(L_10, L_12, L_14, L_16, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_005d:
	{
		GcLeaderboard_t412 * L_17 = V_1;
		Object_t * L_18 = ___board;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t574_il2cpp_TypeInfo_var, L_18);
		Object_t * L_20 = ___board;
		NullCheck(L_20);
		Range_t534  L_21 = (Range_t534 )InterfaceFuncInvoker0< Range_t534  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t574_il2cpp_TypeInfo_var, L_20);
		V_2 = L_21;
		int32_t L_22 = ((&V_2)->___from_0);
		Object_t * L_23 = ___board;
		NullCheck(L_23);
		Range_t534  L_24 = (Range_t534 )InterfaceFuncInvoker0< Range_t534  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t574_il2cpp_TypeInfo_var, L_23);
		V_3 = L_24;
		int32_t L_25 = ((&V_3)->___count_1);
		Object_t * L_26 = ___board;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t574_il2cpp_TypeInfo_var, L_26);
		Object_t * L_28 = ___board;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t574_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_17);
		GcLeaderboard_Internal_LoadScores_m2225(L_17, L_19, L_22, L_25, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_LeaderboardCallbackWrapper_m2203 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m3064(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t413_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t593_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3067_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3068_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3069_MethodInfo_var;
extern "C" bool GameCenterPlatform_GetLoading_m2204 (GameCenterPlatform_t402 * __this, Object_t * ___board, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Leaderboard_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Enumerator_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(300);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_GetEnumerator_m3067_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483951);
		Enumerator_get_Current_m3068_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483952);
		Enumerator_MoveNext_m3069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483953);
		s_Il2CppMethodIntialized = true;
	}
	GcLeaderboard_t412 * V_0 = {0};
	Enumerator_t593  V_1 = {0};
	bool V_2 = false;
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2205(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		List_1_t411 * L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		NullCheck(L_1);
		Enumerator_t593  L_2 = List_1_GetEnumerator_m3067(L_1, /*hidden argument*/List_1_GetEnumerator_m3067_MethodInfo_var);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001d:
		{
			GcLeaderboard_t412 * L_3 = Enumerator_get_Current_m3068((&V_1), /*hidden argument*/Enumerator_get_Current_m3068_MethodInfo_var);
			V_0 = L_3;
			GcLeaderboard_t412 * L_4 = V_0;
			Object_t * L_5 = ___board;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m2220(L_4, ((Leaderboard_t413 *)CastclassClass(L_5, Leaderboard_t413_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_0036:
		{
			GcLeaderboard_t412 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m2227(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0042:
		{
			bool L_9 = Enumerator_MoveNext_m3069((&V_1), /*hidden argument*/Enumerator_MoveNext_m3069_MethodInfo_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t593  L_10 = V_1;
		Enumerator_t593  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t593_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_005f:
	{
		return 0;
	}

IL_0061:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern TypeInfo* ILocalUser_t573_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral148;
extern "C" bool GameCenterPlatform_VerifyAuthentication_m2205 (GameCenterPlatform_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t573_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		_stringLiteral148 = il2cpp_codegen_string_literal_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = GameCenterPlatform_get_localUser_m2195(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t573_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m73(NULL /*static, unused*/, _stringLiteral148, /*hidden argument*/NULL);
		return 0;
	}

IL_001c:
	{
		return 1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowAchievementsUI_m2206 (GameCenterPlatform_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m2173(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2207 (GameCenterPlatform_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m2174(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearUsers_m2208 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2214(NULL /*static, unused*/, (&((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUser_m2209 (Object_t * __this /* static, unused */, GcUserProfileData_t519  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m2887((&___data), (&((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUserImage_m2210 (Object_t * __this /* static, unused */, Texture2D_t158 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Texture2D_t158 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2213(NULL /*static, unused*/, (&((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3070_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerUsersCallbackWrapper_m2211 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3070_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483954);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t407 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t407 * L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		UserProfileU5BU5D_t409* L_2 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_users_11;
		NullCheck(L_1);
		Action_1_Invoke_m3070(L_1, (IUserProfileU5BU5D_t529*)(IUserProfileU5BU5D_t529*)L_2, /*hidden argument*/Action_1_Invoke_m3070_MethodInfo_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
extern TypeInfo* UserProfileU5BU5D_t409_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3070_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadUsers_m2212 (GameCenterPlatform_t402 * __this, StringU5BU5D_t48* ___userIds, Action_1_t407 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3070_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483954);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2205(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t407 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m3070(L_1, (IUserProfileU5BU5D_t529*)(IUserProfileU5BU5D_t529*)((UserProfileU5BU5D_t409*)SZArrayNew(UserProfileU5BU5D_t409_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m3070_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t407 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8 = L_2;
		StringU5BU5D_t48* L_3 = ___userIds;
		GameCenterPlatform_Internal_LoadUsers_m2175(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* Texture2D_t158_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral149;
extern Il2CppCodeGenString* _stringLiteral150;
extern "C" void GameCenterPlatform_SafeSetUserImage_m2213 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t409** ___array, Texture2D_t158 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		_stringLiteral149 = il2cpp_codegen_string_literal_from_index(149);
		_stringLiteral150 = il2cpp_codegen_string_literal_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t409** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t409**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t409**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0011:
	{
		Debug_Log_m73(NULL /*static, unused*/, _stringLiteral149, /*hidden argument*/NULL);
		Texture2D_t158 * L_3 = (Texture2D_t158 *)il2cpp_codegen_object_new (Texture2D_t158_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2268(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture = L_3;
	}

IL_0026:
	{
		UserProfileU5BU5D_t409** L_4 = ___array;
		NullCheck((*((UserProfileU5BU5D_t409**)L_4)));
		int32_t L_5 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t409**)L_4)))->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___number;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		UserProfileU5BU5D_t409** L_7 = ___array;
		int32_t L_8 = ___number;
		NullCheck((*((UserProfileU5BU5D_t409**)L_7)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t409**)L_7)), L_8);
		int32_t L_9 = L_8;
		Texture2D_t158 * L_10 = ___texture;
		NullCheck((*(UserProfile_t528 **)(UserProfile_t528 **)SZArrayLdElema((*((UserProfileU5BU5D_t409**)L_7)), L_9, sizeof(UserProfile_t528 *))));
		UserProfile_SetImage_m2908((*(UserProfile_t528 **)(UserProfile_t528 **)SZArrayLdElema((*((UserProfileU5BU5D_t409**)L_7)), L_9, sizeof(UserProfile_t528 *))), L_10, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_Log_m73(NULL /*static, unused*/, _stringLiteral150, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern TypeInfo* UserProfileU5BU5D_t409_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SafeClearArray_m2214 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t409** ___array, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t409** L_0 = ___array;
		if (!(*((UserProfileU5BU5D_t409**)L_0)))
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_t409** L_1 = ___array;
		NullCheck((*((UserProfileU5BU5D_t409**)L_1)));
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t409**)L_1)))->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}

IL_0011:
	{
		UserProfileU5BU5D_t409** L_3 = ___array;
		int32_t L_4 = ___size;
		*((Object_t **)(L_3)) = (Object_t *)((UserProfileU5BU5D_t409*)SZArrayNew(UserProfileU5BU5D_t409_il2cpp_TypeInfo_var, L_4));
	}

IL_0019:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern TypeInfo* Leaderboard_t413_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateLeaderboard_m2215 (GameCenterPlatform_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Leaderboard_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t413 * V_0 = {0};
	{
		Leaderboard_t413 * L_0 = (Leaderboard_t413 *)il2cpp_codegen_object_new (Leaderboard_t413_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m2941(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_t413 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern TypeInfo* Achievement_t530_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateAchievement_m2216 (GameCenterPlatform_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	Achievement_t530 * V_0 = {0};
	{
		Achievement_t530 * L_0 = (Achievement_t530 *)il2cpp_codegen_object_new (Achievement_t530_il2cpp_TypeInfo_var);
		Achievement__ctor_m2915(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t530 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern TypeInfo* GameCenterPlatform_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3064_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerResetAchievementCallback_m2217 (Object_t * __this /* static, unused */, bool ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		Action_1_Invoke_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_0 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t402_il2cpp_TypeInfo_var);
		Action_1_t403 * L_1 = ((GameCenterPlatform_t402_StaticFields*)GameCenterPlatform_t402_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		bool L_2 = ___result;
		NullCheck(L_1);
		Action_1_Invoke_m3064(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3064_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GcLeaderboard__ctor_m2218 (GcLeaderboard_t412 * __this, Leaderboard_t413 * ___board, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		Leaderboard_t413 * L_0 = ___board;
		__this->___m_GenericLeaderboard_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
extern "C" void GcLeaderboard_Finalize_m2219 (GcLeaderboard_t412 * __this, const MethodInfo* method)
{
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GcLeaderboard_Dispose_m2228(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" bool GcLeaderboard_Contains_m2220 (GcLeaderboard_t412 * __this, Leaderboard_t413 * ___board, const MethodInfo* method)
{
	{
		Leaderboard_t413 * L_0 = (__this->___m_GenericLeaderboard_1);
		Leaderboard_t413 * L_1 = ___board;
		return ((((Object_t*)(Leaderboard_t413 *)L_0) == ((Object_t*)(Leaderboard_t413 *)L_1))? 1 : 0);
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
extern TypeInfo* ScoreU5BU5D_t592_il2cpp_TypeInfo_var;
extern "C" void GcLeaderboard_SetScores_m2221 (GcLeaderboard_t412 * __this, GcScoreDataU5BU5D_t572* ___scoreDatas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t592* V_0 = {0};
	int32_t V_1 = 0;
	{
		Leaderboard_t413 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		GcScoreDataU5BU5D_t572* L_1 = ___scoreDatas;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t592*)SZArrayNew(ScoreU5BU5D_t592_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002e;
	}

IL_001b:
	{
		ScoreU5BU5D_t592* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t572* L_4 = ___scoreDatas;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t532 * L_6 = GcScoreData_ToScore_m2890(((GcScoreData_t522 *)(GcScoreData_t522 *)SZArrayLdElema(L_4, L_5, sizeof(GcScoreData_t522 ))), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t532 **)(Score_t532 **)SZArrayLdElema(L_2, L_3, sizeof(Score_t532 *))) = (Score_t532 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t572* L_9 = ___scoreDatas;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_t413 * L_10 = (__this->___m_GenericLeaderboard_1);
		ScoreU5BU5D_t592* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m2945(L_10, (IScoreU5BU5D_t533*)(IScoreU5BU5D_t533*)L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
extern "C" void GcLeaderboard_SetLocalScore_m2222 (GcLeaderboard_t412 * __this, GcScoreData_t522  ___scoreData, const MethodInfo* method)
{
	{
		Leaderboard_t413 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t413 * L_1 = (__this->___m_GenericLeaderboard_1);
		Score_t532 * L_2 = GcScoreData_ToScore_m2890((&___scoreData), /*hidden argument*/NULL);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m2943(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern "C" void GcLeaderboard_SetMaxRange_m2223 (GcLeaderboard_t412 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		Leaderboard_t413 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t413 * L_1 = (__this->___m_GenericLeaderboard_1);
		uint32_t L_2 = ___maxRange;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m2944(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GcLeaderboard_SetTitle_m2224 (GcLeaderboard_t412 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		Leaderboard_t413 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t413 * L_1 = (__this->___m_GenericLeaderboard_1);
		String_t* L_2 = ___title;
		NullCheck(L_1);
		Leaderboard_SetTitle_m2946(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GcLeaderboard_Internal_LoadScores_m2225 (GcLeaderboard_t412 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m2225_ftn) (GcLeaderboard_t412 *, String_t*, int32_t, int32_t, int32_t, int32_t);
	static GcLeaderboard_Internal_LoadScores_m2225_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m2225_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___category, ___from, ___count, ___playerScope, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void GcLeaderboard_Internal_LoadScoresWithUsers_m2226 (GcLeaderboard_t412 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t48* ___userIDs, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScoresWithUsers_m2226_ftn) (GcLeaderboard_t412 *, String_t*, int32_t, StringU5BU5D_t48*);
	static GcLeaderboard_Internal_LoadScoresWithUsers_m2226_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScoresWithUsers_m2226_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])");
	_il2cpp_icall_func(__this, ___category, ___timeScope, ___userIDs);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C" bool GcLeaderboard_Loading_m2227 (GcLeaderboard_t412 * __this, const MethodInfo* method)
{
	typedef bool (*GcLeaderboard_Loading_m2227_ftn) (GcLeaderboard_t412 *);
	static GcLeaderboard_Loading_m2227_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m2227_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C" void GcLeaderboard_Dispose_m2228 (GcLeaderboard_t412 * __this, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Dispose_m2228_ftn) (GcLeaderboard_t412 *);
	static GcLeaderboard_Dispose_m2228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m2228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
// System.Void UnityEngine.Mesh::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
extern "C" void Mesh__ctor_m1793 (Mesh_t159 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		Mesh_Internal_Create_m2229(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern "C" void Mesh_Internal_Create_m2229 (Object_t * __this /* static, unused */, Mesh_t159 * ___mono, const MethodInfo* method)
{
	typedef void (*Mesh_Internal_Create_m2229_ftn) (Mesh_t159 *);
	static Mesh_Internal_Create_m2229_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_Internal_Create_m2229_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)");
	_il2cpp_icall_func(___mono);
}
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Mesh_Clear_m2230 (Mesh_t159 * __this, bool ___keepVertexLayout, const MethodInfo* method)
{
	typedef void (*Mesh_Clear_m2230_ftn) (Mesh_t159 *, bool);
	static Mesh_Clear_m2230_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_Clear_m2230_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::Clear(System.Boolean)");
	_il2cpp_icall_func(__this, ___keepVertexLayout);
}
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m2116 (Mesh_t159 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		Mesh_Clear_m2230(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t175* Mesh_get_vertices_m2103 (Mesh_t159 * __this, const MethodInfo* method)
{
	typedef Vector3U5BU5D_t175* (*Mesh_get_vertices_m2103_ftn) (Mesh_t159 *);
	static Mesh_get_vertices_m2103_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_vertices_m2103_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_vertices()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
extern "C" void Mesh_SetVertices_m2117 (Mesh_t159 * __this, List_1_t272 * ___inVertices, const MethodInfo* method)
{
	{
		List_1_t272 * L_0 = ___inVertices;
		Mesh_SetVerticesInternal_m2231(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void Mesh_SetVerticesInternal_m2231 (Mesh_t159 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*Mesh_SetVerticesInternal_m2231_ftn) (Mesh_t159 *, Object_t *);
	static Mesh_SetVerticesInternal_m2231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetVerticesInternal_m2231_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t175* Mesh_get_normals_m2110 (Mesh_t159 * __this, const MethodInfo* method)
{
	typedef Vector3U5BU5D_t175* (*Mesh_get_normals_m2110_ftn) (Mesh_t159 *);
	static Mesh_get_normals_m2110_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_normals_m2110_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_normals()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetNormals_m2120 (Mesh_t159 * __this, List_1_t272 * ___inNormals, const MethodInfo* method)
{
	{
		List_1_t272 * L_0 = ___inNormals;
		Mesh_SetNormalsInternal_m2232(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C" void Mesh_SetNormalsInternal_m2232 (Mesh_t159 * __this, Object_t * ___normals, const MethodInfo* method)
{
	typedef void (*Mesh_SetNormalsInternal_m2232_ftn) (Mesh_t159 *, Object_t *);
	static Mesh_SetNormalsInternal_m2232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetNormalsInternal_m2232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetNormalsInternal(System.Object)");
	_il2cpp_icall_func(__this, ___normals);
}
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C" Vector4U5BU5D_t387* Mesh_get_tangents_m2111 (Mesh_t159 * __this, const MethodInfo* method)
{
	typedef Vector4U5BU5D_t387* (*Mesh_get_tangents_m2111_ftn) (Mesh_t159 *);
	static Mesh_get_tangents_m2111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_tangents_m2111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_tangents()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
extern "C" void Mesh_SetTangents_m2121 (Mesh_t159 * __this, List_1_t275 * ___inTangents, const MethodInfo* method)
{
	{
		List_1_t275 * L_0 = ___inTangents;
		Mesh_SetTangentsInternal_m2233(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C" void Mesh_SetTangentsInternal_m2233 (Mesh_t159 * __this, Object_t * ___tangents, const MethodInfo* method)
{
	typedef void (*Mesh_SetTangentsInternal_m2233_ftn) (Mesh_t159 *, Object_t *);
	static Mesh_SetTangentsInternal_m2233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetTangentsInternal_m2233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetTangentsInternal(System.Object)");
	_il2cpp_icall_func(__this, ___tangents);
}
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t174* Mesh_get_uv_m2107 (Mesh_t159 * __this, const MethodInfo* method)
{
	typedef Vector2U5BU5D_t174* (*Mesh_get_uv_m2107_ftn) (Mesh_t159 *);
	static Mesh_get_uv_m2107_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_uv_m2107_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_uv()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C" Vector2U5BU5D_t174* Mesh_get_uv2_m2109 (Mesh_t159 * __this, const MethodInfo* method)
{
	typedef Vector2U5BU5D_t174* (*Mesh_get_uv2_m2109_ftn) (Mesh_t159 *);
	static Mesh_get_uv2_m2109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_uv2_m2109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_uv2()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
extern "C" void Mesh_SetUVs_m2119 (Mesh_t159 * __this, int32_t ___channel, List_1_t274 * ___uvs, const MethodInfo* method)
{
	{
		List_1_t274 * L_0 = ___uvs;
		int32_t L_1 = ___channel;
		Mesh_SetUVInternal_m2234(__this, L_0, L_1, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)
extern "C" void Mesh_SetUVInternal_m2234 (Mesh_t159 * __this, Object_t * ___uvs, int32_t ___channel, int32_t ___dim, const MethodInfo* method)
{
	typedef void (*Mesh_SetUVInternal_m2234_ftn) (Mesh_t159 *, Object_t *, int32_t, int32_t);
	static Mesh_SetUVInternal_m2234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetUVInternal_m2234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___uvs, ___channel, ___dim);
}
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C" Color32U5BU5D_t386* Mesh_get_colors32_m2105 (Mesh_t159 * __this, const MethodInfo* method)
{
	typedef Color32U5BU5D_t386* (*Mesh_get_colors32_m2105_ftn) (Mesh_t159 *);
	static Mesh_get_colors32_m2105_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_colors32_m2105_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_colors32()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
extern "C" void Mesh_SetColors_m2118 (Mesh_t159 * __this, List_1_t273 * ___inColors, const MethodInfo* method)
{
	{
		List_1_t273 * L_0 = ___inColors;
		Mesh_SetColors32Internal_m2235(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C" void Mesh_SetColors32Internal_m2235 (Mesh_t159 * __this, Object_t * ___colors, const MethodInfo* method)
{
	typedef void (*Mesh_SetColors32Internal_m2235_ftn) (Mesh_t159 *, Object_t *);
	static Mesh_SetColors32Internal_m2235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetColors32Internal_m2235_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetColors32Internal(System.Object)");
	_il2cpp_icall_func(__this, ___colors);
}
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m2123 (Mesh_t159 * __this, const MethodInfo* method)
{
	typedef void (*Mesh_RecalculateBounds_m2123_ftn) (Mesh_t159 *);
	static Mesh_RecalculateBounds_m2123_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_RecalculateBounds_m2123_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::RecalculateBounds()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
extern "C" void Mesh_SetTriangles_m2122 (Mesh_t159 * __this, List_1_t276 * ___inTriangles, int32_t ___submesh, const MethodInfo* method)
{
	{
		List_1_t276 * L_0 = ___inTriangles;
		int32_t L_1 = ___submesh;
		Mesh_SetTrianglesInternal_m2236(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C" void Mesh_SetTrianglesInternal_m2236 (Mesh_t159 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method)
{
	typedef void (*Mesh_SetTrianglesInternal_m2236_ftn) (Mesh_t159 *, Object_t *, int32_t);
	static Mesh_SetTrianglesInternal_m2236_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetTrianglesInternal_m2236_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)");
	_il2cpp_icall_func(__this, ___triangles, ___submesh);
}
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C" Int32U5BU5D_t388* Mesh_GetIndices_m2113 (Mesh_t159 * __this, int32_t ___submesh, const MethodInfo* method)
{
	typedef Int32U5BU5D_t388* (*Mesh_GetIndices_m2113_ftn) (Mesh_t159 *, int32_t);
	static Mesh_GetIndices_m2113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_GetIndices_m2113_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::GetIndices(System.Int32)");
	return _il2cpp_icall_func(__this, ___submesh);
}
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// System.Single UnityEngine.BoneWeight::get_weight0()
extern "C" float BoneWeight_get_weight0_m2237 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight0_0);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void BoneWeight_set_weight0_m2238 (BoneWeight_t414 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight0_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight1()
extern "C" float BoneWeight_get_weight1_m2239 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight1_1);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight1(System.Single)
extern "C" void BoneWeight_set_weight1_m2240 (BoneWeight_t414 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight1_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight2()
extern "C" float BoneWeight_get_weight2_m2241 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight2_2);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight2(System.Single)
extern "C" void BoneWeight_set_weight2_m2242 (BoneWeight_t414 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight2_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight3()
extern "C" float BoneWeight_get_weight3_m2243 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight3_3);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight3(System.Single)
extern "C" void BoneWeight_set_weight3_m2244 (BoneWeight_t414 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight3_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
extern "C" int32_t BoneWeight_get_boneIndex0_m2245 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex0_4);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void BoneWeight_set_boneIndex0_m2246 (BoneWeight_t414 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex0_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
extern "C" int32_t BoneWeight_get_boneIndex1_m2247 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex1_5);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
extern "C" void BoneWeight_set_boneIndex1_m2248 (BoneWeight_t414 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex1_5 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
extern "C" int32_t BoneWeight_get_boneIndex2_m2249 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex2_6);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
extern "C" void BoneWeight_set_boneIndex2_m2250 (BoneWeight_t414 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex2_6 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
extern "C" int32_t BoneWeight_get_boneIndex3_m2251 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex3_7);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
extern "C" void BoneWeight_set_boneIndex3_m2252 (BoneWeight_t414 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex3_7 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::GetHashCode()
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t BoneWeight_GetHashCode_m2253 (BoneWeight_t414 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2245(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m3071((&V_0), /*hidden argument*/NULL);
		int32_t L_2 = BoneWeight_get_boneIndex1_m2247(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_m3071((&V_1), /*hidden argument*/NULL);
		int32_t L_4 = BoneWeight_get_boneIndex2_m2249(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Int32_GetHashCode_m3071((&V_2), /*hidden argument*/NULL);
		int32_t L_6 = BoneWeight_get_boneIndex3_m2251(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Int32_GetHashCode_m3071((&V_3), /*hidden argument*/NULL);
		float L_8 = BoneWeight_get_weight0_m2237(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = Single_GetHashCode_m3072((&V_4), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight1_m2239(__this, /*hidden argument*/NULL);
		V_5 = L_10;
		int32_t L_11 = Single_GetHashCode_m3072((&V_5), /*hidden argument*/NULL);
		float L_12 = BoneWeight_get_weight2_m2241(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		int32_t L_13 = Single_GetHashCode_m3072((&V_6), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight3_m2243(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		int32_t L_15 = Single_GetHashCode_m3072((&V_7), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
// System.Boolean UnityEngine.BoneWeight::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern TypeInfo* BoneWeight_t414_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t277_il2cpp_TypeInfo_var;
extern "C" bool BoneWeight_Equals_m2254 (BoneWeight_t414 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoneWeight_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		Vector4_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	BoneWeight_t414  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector4_t277  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, BoneWeight_t414_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(BoneWeight_t414 *)((BoneWeight_t414 *)UnBox (L_1, BoneWeight_t414_il2cpp_TypeInfo_var))));
		int32_t L_2 = BoneWeight_get_boneIndex0_m2245(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = BoneWeight_get_boneIndex0_m2245((&V_0), /*hidden argument*/NULL);
		bool L_4 = Int32_Equals_m3073((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = BoneWeight_get_boneIndex1_m2247(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = BoneWeight_get_boneIndex1_m2247((&V_0), /*hidden argument*/NULL);
		bool L_7 = Int32_Equals_m3073((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = BoneWeight_get_boneIndex2_m2249(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = BoneWeight_get_boneIndex2_m2249((&V_0), /*hidden argument*/NULL);
		bool L_10 = Int32_Equals_m3073((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = BoneWeight_get_boneIndex3_m2251(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		int32_t L_12 = BoneWeight_get_boneIndex3_m2251((&V_0), /*hidden argument*/NULL);
		bool L_13 = Int32_Equals_m3073((&V_4), L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = BoneWeight_get_weight0_m2237(__this, /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight1_m2239(__this, /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight2_m2241(__this, /*hidden argument*/NULL);
		float L_17 = BoneWeight_get_weight3_m2243(__this, /*hidden argument*/NULL);
		Vector4__ctor_m1797((&V_5), L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		float L_18 = BoneWeight_get_weight0_m2237((&V_0), /*hidden argument*/NULL);
		float L_19 = BoneWeight_get_weight1_m2239((&V_0), /*hidden argument*/NULL);
		float L_20 = BoneWeight_get_weight2_m2241((&V_0), /*hidden argument*/NULL);
		float L_21 = BoneWeight_get_weight3_m2243((&V_0), /*hidden argument*/NULL);
		Vector4_t277  L_22 = {0};
		Vector4__ctor_m1797(&L_22, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		Vector4_t277  L_23 = L_22;
		Object_t * L_24 = Box(Vector4_t277_il2cpp_TypeInfo_var, &L_23);
		bool L_25 = Vector4_Equals_m2388((&V_5), L_24, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Equality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
extern "C" bool BoneWeight_op_Equality_m2255 (Object_t * __this /* static, unused */, BoneWeight_t414  ___lhs, BoneWeight_t414  ___rhs, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2245((&___lhs), /*hidden argument*/NULL);
		int32_t L_1 = BoneWeight_get_boneIndex0_m2245((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = BoneWeight_get_boneIndex1_m2247((&___lhs), /*hidden argument*/NULL);
		int32_t L_3 = BoneWeight_get_boneIndex1_m2247((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = BoneWeight_get_boneIndex2_m2249((&___lhs), /*hidden argument*/NULL);
		int32_t L_5 = BoneWeight_get_boneIndex2_m2249((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = BoneWeight_get_boneIndex3_m2251((&___lhs), /*hidden argument*/NULL);
		int32_t L_7 = BoneWeight_get_boneIndex3_m2251((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = BoneWeight_get_weight0_m2237((&___lhs), /*hidden argument*/NULL);
		float L_9 = BoneWeight_get_weight1_m2239((&___lhs), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight2_m2241((&___lhs), /*hidden argument*/NULL);
		float L_11 = BoneWeight_get_weight3_m2243((&___lhs), /*hidden argument*/NULL);
		Vector4_t277  L_12 = {0};
		Vector4__ctor_m1797(&L_12, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = BoneWeight_get_weight0_m2237((&___rhs), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight1_m2239((&___rhs), /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight2_m2241((&___rhs), /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight3_m2243((&___rhs), /*hidden argument*/NULL);
		Vector4_t277  L_17 = {0};
		Vector4__ctor_m1797(&L_17, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		bool L_18 = Vector4_op_Equality_m2393(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Inequality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Inequality_m2256 (Object_t * __this /* static, unused */, BoneWeight_t414  ___lhs, BoneWeight_t414  ___rhs, const MethodInfo* method)
{
	{
		BoneWeight_t414  L_0 = ___lhs;
		BoneWeight_t414  L_1 = ___rhs;
		bool L_2 = BoneWeight_op_Equality_m2255(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t19 * Renderer_get_material_m128 (Renderer_t47 * __this, const MethodInfo* method)
{
	typedef Material_t19 * (*Renderer_get_material_m128_ftn) (Renderer_t47 *);
	static Renderer_get_material_m128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_material_m128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void Renderer_set_material_m129 (Renderer_t47 * __this, Material_t19 * ___value, const MethodInfo* method)
{
	typedef void (*Renderer_set_material_m129_ftn) (Renderer_t47 *, Material_t19 *);
	static Renderer_set_material_m129_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_set_material_m129_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::set_material(UnityEngine.Material)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m1641 (Renderer_t47 * __this, const MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingLayerID_m1641_ftn) (Renderer_t47 *);
	static Renderer_get_sortingLayerID_m1641_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingLayerID_m1641_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m1642 (Renderer_t47 * __this, const MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingOrder_m1642_ftn) (Renderer_t47 *);
	static Renderer_get_sortingOrder_m1642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingOrder_m1642_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.LineRenderer
#include "UnityEngine_UnityEngine_LineRenderer.h"
// UnityEngine.LineRenderer
#include "UnityEngine_UnityEngine_LineRendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Void UnityEngine.LineRenderer::SetWidth(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.LineRenderer
#include "UnityEngine_UnityEngine_LineRendererMethodDeclarations.h"
extern "C" void LineRenderer_SetWidth_m137 (LineRenderer_t20 * __this, float ___start, float ___end, const MethodInfo* method)
{
	{
		float L_0 = ___start;
		float L_1 = ___end;
		LineRenderer_INTERNAL_CALL_SetWidth_m2257(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.LineRenderer::INTERNAL_CALL_SetWidth(UnityEngine.LineRenderer,System.Single,System.Single)
// UnityEngine.LineRenderer
#include "UnityEngine_UnityEngine_LineRenderer.h"
extern "C" void LineRenderer_INTERNAL_CALL_SetWidth_m2257 (Object_t * __this /* static, unused */, LineRenderer_t20 * ___self, float ___start, float ___end, const MethodInfo* method)
{
	typedef void (*LineRenderer_INTERNAL_CALL_SetWidth_m2257_ftn) (LineRenderer_t20 *, float, float);
	static LineRenderer_INTERNAL_CALL_SetWidth_m2257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LineRenderer_INTERNAL_CALL_SetWidth_m2257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LineRenderer::INTERNAL_CALL_SetWidth(UnityEngine.LineRenderer,System.Single,System.Single)");
	_il2cpp_icall_func(___self, ___start, ___end);
}
// System.Void UnityEngine.LineRenderer::SetColors(UnityEngine.Color,UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void LineRenderer_SetColors_m130 (LineRenderer_t20 * __this, Color_t27  ___start, Color_t27  ___end, const MethodInfo* method)
{
	{
		LineRenderer_INTERNAL_CALL_SetColors_m2258(NULL /*static, unused*/, __this, (&___start), (&___end), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.LineRenderer::INTERNAL_CALL_SetColors(UnityEngine.LineRenderer,UnityEngine.Color&,UnityEngine.Color&)
extern "C" void LineRenderer_INTERNAL_CALL_SetColors_m2258 (Object_t * __this /* static, unused */, LineRenderer_t20 * ___self, Color_t27 * ___start, Color_t27 * ___end, const MethodInfo* method)
{
	typedef void (*LineRenderer_INTERNAL_CALL_SetColors_m2258_ftn) (LineRenderer_t20 *, Color_t27 *, Color_t27 *);
	static LineRenderer_INTERNAL_CALL_SetColors_m2258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LineRenderer_INTERNAL_CALL_SetColors_m2258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LineRenderer::INTERNAL_CALL_SetColors(UnityEngine.LineRenderer,UnityEngine.Color&,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___start, ___end);
}
// System.Void UnityEngine.LineRenderer::SetVertexCount(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void LineRenderer_SetVertexCount_m96 (LineRenderer_t20 * __this, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___count;
		LineRenderer_INTERNAL_CALL_SetVertexCount_m2259(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.LineRenderer::INTERNAL_CALL_SetVertexCount(UnityEngine.LineRenderer,System.Int32)
extern "C" void LineRenderer_INTERNAL_CALL_SetVertexCount_m2259 (Object_t * __this /* static, unused */, LineRenderer_t20 * ___self, int32_t ___count, const MethodInfo* method)
{
	typedef void (*LineRenderer_INTERNAL_CALL_SetVertexCount_m2259_ftn) (LineRenderer_t20 *, int32_t);
	static LineRenderer_INTERNAL_CALL_SetVertexCount_m2259_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LineRenderer_INTERNAL_CALL_SetVertexCount_m2259_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LineRenderer::INTERNAL_CALL_SetVertexCount(UnityEngine.LineRenderer,System.Int32)");
	_il2cpp_icall_func(___self, ___count);
}
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void LineRenderer_SetPosition_m97 (LineRenderer_t20 * __this, int32_t ___index, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		LineRenderer_INTERNAL_CALL_SetPosition_m2260(NULL /*static, unused*/, __this, L_0, (&___position), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.LineRenderer::INTERNAL_CALL_SetPosition(UnityEngine.LineRenderer,System.Int32,UnityEngine.Vector3&)
extern "C" void LineRenderer_INTERNAL_CALL_SetPosition_m2260 (Object_t * __this /* static, unused */, LineRenderer_t20 * ___self, int32_t ___index, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef void (*LineRenderer_INTERNAL_CALL_SetPosition_m2260_ftn) (LineRenderer_t20 *, int32_t, Vector3_t10 *);
	static LineRenderer_INTERNAL_CALL_SetPosition_m2260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LineRenderer_INTERNAL_CALL_SetPosition_m2260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LineRenderer::INTERNAL_CALL_SetPosition(UnityEngine.LineRenderer,System.Int32,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___index, ___position);
}
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_Screen.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// System.Int32 UnityEngine.Screen::get_width()
extern "C" int32_t Screen_get_width_m110 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_width_m110_ftn) ();
	static Screen_get_width_m110_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_width_m110_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Screen::get_height()
extern "C" int32_t Screen_get_height_m111 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_height_m111_ftn) ();
	static Screen_get_height_m111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_height_m111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Screen::get_dpi()
extern "C" float Screen_get_dpi_m2066 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Screen_get_dpi_m2066_ftn) ();
	static Screen_get_dpi_m2066_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_dpi_m2066_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	return _il2cpp_icall_func();
}
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElementMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
extern "C" GUIElement_t416 * GUILayer_HitTest_m2261 (GUILayer_t417 * __this, Vector3_t10  ___screenPosition, const MethodInfo* method)
{
	{
		GUIElement_t416 * L_0 = GUILayer_INTERNAL_CALL_HitTest_m2262(NULL /*static, unused*/, __this, (&___screenPosition), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
extern "C" GUIElement_t416 * GUILayer_INTERNAL_CALL_HitTest_m2262 (Object_t * __this /* static, unused */, GUILayer_t417 * ___self, Vector3_t10 * ___screenPosition, const MethodInfo* method)
{
	typedef GUIElement_t416 * (*GUILayer_INTERNAL_CALL_HitTest_m2262_ftn) (GUILayer_t417 *, Vector3_t10 *);
	static GUILayer_INTERNAL_CALL_HitTest_m2262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayer_INTERNAL_CALL_HitTest_m2262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___screenPosition);
}
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// System.Void UnityEngine.Texture::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Texture__ctor_m2263 (Texture_t209 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
extern "C" int32_t Texture_Internal_GetWidth_m2264 (Object_t * __this /* static, unused */, Texture_t209 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetWidth_m2264_ftn) (Texture_t209 *);
	static Texture_Internal_GetWidth_m2264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetWidth_m2264_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m2265 (Object_t * __this /* static, unused */, Texture_t209 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetHeight_m2265_ftn) (Texture_t209 *);
	static Texture_Internal_GetHeight_m2265_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetHeight_m2265_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::get_width()
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern "C" int32_t Texture_get_width_m2266 (Texture_t209 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetWidth_m2264(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.Texture::get_height()
extern "C" int32_t Texture_get_height_m2267 (Texture_t209 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetHeight_m2265(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void Texture2D__ctor_m2268 (Texture2D_t158 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture__ctor_m2263(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m2269(NULL /*static, unused*/, __this, L_0, L_1, 5, 1, 0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Texture2D_Internal_Create_m2269 (Object_t * __this /* static, unused */, Texture2D_t158 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method)
{
	typedef void (*Texture2D_Internal_Create_m2269_ftn) (Texture2D_t158 *, int32_t, int32_t, int32_t, bool, bool, IntPtr_t);
	static Texture2D_Internal_Create_m2269_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Internal_Create_m2269_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___format, ___mipmap, ___linear, ___nativeTex);
}
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t158 * Texture2D_get_whiteTexture_m1785 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t158 * (*Texture2D_get_whiteTexture_m1785_ftn) ();
	static Texture2D_get_whiteTexture_m1785_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_whiteTexture_m1785_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" Color_t27  Texture2D_GetPixelBilinear_m1868 (Texture2D_t158 * __this, float ___u, float ___v, const MethodInfo* method)
{
	typedef Color_t27  (*Texture2D_GetPixelBilinear_m1868_ftn) (Texture2D_t158 *, float, float);
	static Texture2D_GetPixelBilinear_m1868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixelBilinear_m1868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, ___u, ___v);
}
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
extern "C" int32_t RenderTexture_Internal_GetWidth_m2270 (Object_t * __this /* static, unused */, RenderTexture_t418 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetWidth_m2270_ftn) (RenderTexture_t418 *);
	static RenderTexture_Internal_GetWidth_m2270_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetWidth_m2270_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m2271 (Object_t * __this /* static, unused */, RenderTexture_t418 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetHeight_m2271_ftn) (RenderTexture_t418 *);
	static RenderTexture_Internal_GetHeight_m2271_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetHeight_m2271_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.RenderTexture::get_width()
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern "C" int32_t RenderTexture_get_width_m2272 (RenderTexture_t418 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetWidth_m2270(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C" int32_t RenderTexture_get_height_m2273 (RenderTexture_t418 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetHeight_m2271(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbe.h"
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbeMethodDeclarations.h"
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEventMethodDeclarations.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChanged.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChangedMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void StateChanged__ctor_m2274 (StateChanged_t421 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"
extern "C" void StateChanged_Invoke_m2275 (StateChanged_t421 * __this, CullingGroupEvent_t420  ___sphere, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StateChanged_Invoke_m2275((StateChanged_t421 *)__this->___prev_9,___sphere, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, CullingGroupEvent_t420  ___sphere, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sphere,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, CullingGroupEvent_t420  ___sphere, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sphere,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_StateChanged_t421(Il2CppObject* delegate, CullingGroupEvent_t420  ___sphere)
{
	typedef void (STDCALL *native_function_ptr_type)(CullingGroupEvent_t420 );
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___sphere' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___sphere);

	// Marshaling cleanup of parameter '___sphere' native representation

}
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* CullingGroupEvent_t420_il2cpp_TypeInfo_var;
extern "C" Object_t * StateChanged_BeginInvoke_m2276 (StateChanged_t421 * __this, CullingGroupEvent_t420  ___sphere, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CullingGroupEvent_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CullingGroupEvent_t420_il2cpp_TypeInfo_var, &___sphere);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
extern "C" void StateChanged_EndInvoke_m2277 (StateChanged_t421 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroup.h"
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroupMethodDeclarations.h"
// System.Void UnityEngine.CullingGroup::Finalize()
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroupMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void CullingGroup_Finalize_m2278 (CullingGroup_t422 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IntPtr_t L_0 = (__this->___m_Ptr_0);
			IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
			bool L_2 = IntPtr_op_Inequality_m3074(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_0015:
		{
			CullingGroup_FinalizerFailure_m2281(__this, /*hidden argument*/NULL);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x27, FINALLY_0020);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(32)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x27, IL_0027)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.CullingGroup::Dispose()
extern "C" void CullingGroup_Dispose_m2279 (CullingGroup_t422 * __this, const MethodInfo* method)
{
	typedef void (*CullingGroup_Dispose_m2279_ftn) (CullingGroup_t422 *);
	static CullingGroup_Dispose_m2279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CullingGroup_Dispose_m2279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CullingGroup::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CullingGroup::SendEvents(UnityEngine.CullingGroup,System.IntPtr,System.Int32)
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroup.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChangedMethodDeclarations.h"
extern "C" void CullingGroup_SendEvents_m2280 (Object_t * __this /* static, unused */, CullingGroup_t422 * ___cullingGroup, IntPtr_t ___eventsPtr, int32_t ___count, const MethodInfo* method)
{
	CullingGroupEvent_t420 * V_0 = {0};
	int32_t V_1 = 0;
	{
		void* L_0 = IntPtr_ToPointer_m3075((&___eventsPtr), /*hidden argument*/NULL);
		V_0 = (CullingGroupEvent_t420 *)L_0;
		CullingGroup_t422 * L_1 = ___cullingGroup;
		NullCheck(L_1);
		StateChanged_t421 * L_2 = (L_1->___m_OnStateChanged_1);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_001b:
	{
		CullingGroup_t422 * L_3 = ___cullingGroup;
		NullCheck(L_3);
		StateChanged_t421 * L_4 = (L_3->___m_OnStateChanged_1);
		CullingGroupEvent_t420 * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		StateChanged_Invoke_m2275(L_4, (*(CullingGroupEvent_t420 *)((CullingGroupEvent_t420 *)((intptr_t)L_5+(int32_t)((int32_t)((int32_t)L_6*(int32_t)sizeof(CullingGroupEvent_t420 )))))), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___count;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.CullingGroup::FinalizerFailure()
extern "C" void CullingGroup_FinalizerFailure_m2281 (CullingGroup_t422 * __this, const MethodInfo* method)
{
	typedef void (*CullingGroup_FinalizerFailure_m2281_ftn) (CullingGroup_t422 *);
	static CullingGroup_FinalizerFailure_m2281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CullingGroup_FinalizerFailure_m2281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CullingGroup::FinalizerFailure()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKey.h"
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKeyMethodDeclarations.h"
// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void GradientColorKey__ctor_m2282 (GradientColorKey_t423 * __this, Color_t27  ___col, float ___time, const MethodInfo* method)
{
	{
		Color_t27  L_0 = ___col;
		__this->___color_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKey.h"
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKeyMethodDeclarations.h"
// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void GradientAlphaKey__ctor_m2283 (GradientAlphaKey_t424 * __this, float ___alpha, float ___time, const MethodInfo* method)
{
	{
		float L_0 = ___alpha;
		__this->___alpha_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_Gradient.h"
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"
// System.Void UnityEngine.Gradient::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"
extern "C" void Gradient__ctor_m2284 (Gradient_t425 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		Gradient_Init_m2285(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2285 (Gradient_t425 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Init_m2285_ftn) (Gradient_t425 *);
	static Gradient_Init_m2285_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Init_m2285_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2286 (Gradient_t425 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Cleanup_m2286_ftn) (Gradient_t425 *);
	static Gradient_Cleanup_m2286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Cleanup_m2286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2287 (Gradient_t425 * __this, const MethodInfo* method)
{
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Gradient_Cleanup_m2286(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t425_marshal(const Gradient_t425& unmarshaled, Gradient_t425_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void Gradient_t425_marshal_back(const Gradient_t425_marshaled& marshaled, Gradient_t425& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t425_marshal_cleanup(Gradient_t425_marshaled& marshaled)
{
}
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstrucMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardTypeMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboard.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"
extern TypeInfo* TouchScreenKeyboard_InternalConstructorHelperArguments_t426_il2cpp_TypeInfo_var;
extern TypeInfo* TouchScreenKeyboardType_t353_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t594_il2cpp_TypeInfo_var;
extern "C" void TouchScreenKeyboard__ctor_m2288 (TouchScreenKeyboard_t196 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchScreenKeyboard_InternalConstructorHelperArguments_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(308);
		TouchScreenKeyboardType_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		Convert_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	TouchScreenKeyboard_InternalConstructorHelperArguments_t426  V_0 = {0};
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		Initobj (TouchScreenKeyboard_InternalConstructorHelperArguments_t426_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_0 = ___keyboardType;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TouchScreenKeyboardType_t353_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t594_il2cpp_TypeInfo_var);
		uint32_t L_3 = Convert_ToUInt32_m3076(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		(&V_0)->___keyboardType_0 = L_3;
		bool L_4 = ___autocorrection;
		uint32_t L_5 = Convert_ToUInt32_m3077(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		(&V_0)->___autocorrection_1 = L_5;
		bool L_6 = ___multiline;
		uint32_t L_7 = Convert_ToUInt32_m3077(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		(&V_0)->___multiline_2 = L_7;
		bool L_8 = ___secure;
		uint32_t L_9 = Convert_ToUInt32_m3077(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		(&V_0)->___secure_3 = L_9;
		bool L_10 = ___alert;
		uint32_t L_11 = Convert_ToUInt32_m3077(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		(&V_0)->___alert_4 = L_11;
		String_t* L_12 = ___text;
		String_t* L_13 = ___textPlaceholder;
		TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2291(__this, (&V_0), L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" void TouchScreenKeyboard_Destroy_m2289 (TouchScreenKeyboard_t196 * __this, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_Destroy_m2289_ftn) (TouchScreenKeyboard_t196 *);
	static TouchScreenKeyboard_Destroy_m2289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Destroy_m2289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C" void TouchScreenKeyboard_Finalize_m2290 (TouchScreenKeyboard_t196 * __this, const MethodInfo* method)
{
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		TouchScreenKeyboard_Destroy_m2289(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2291 (TouchScreenKeyboard_t196 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t426 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2291_ftn) (TouchScreenKeyboard_t196 *, TouchScreenKeyboard_InternalConstructorHelperArguments_t426 *, String_t*, String_t*);
	static TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2291_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)");
	_il2cpp_icall_func(__this, ___arguments, ___text, ___textPlaceholder);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern "C" bool TouchScreenKeyboard_get_isSupported_m1897 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = Application_get_platform_m1878(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 4)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 5)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 6)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 7)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 8)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 9)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 10)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 11)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 12)
		{
			goto IL_0062;
		}
	}

IL_0045:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 0)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 1)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 2)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 3)
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0066;
	}

IL_0062:
	{
		return 1;
	}

IL_0064:
	{
		return 0;
	}

IL_0066:
	{
		return 0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t196 * TouchScreenKeyboard_Open_m1957 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = ___secure;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t196 * L_8 = TouchScreenKeyboard_Open_m2292(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t196 * TouchScreenKeyboard_Open_m1958 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = V_2;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t196 * L_8 = TouchScreenKeyboard_Open_m2292(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern TypeInfo* TouchScreenKeyboard_t196_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t196 * TouchScreenKeyboard_Open_m2292 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchScreenKeyboard_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		int32_t L_1 = ___keyboardType;
		bool L_2 = ___autocorrection;
		bool L_3 = ___multiline;
		bool L_4 = ___secure;
		bool L_5 = ___alert;
		String_t* L_6 = ___textPlaceholder;
		TouchScreenKeyboard_t196 * L_7 = (TouchScreenKeyboard_t196 *)il2cpp_codegen_object_new (TouchScreenKeyboard_t196_il2cpp_TypeInfo_var);
		TouchScreenKeyboard__ctor_m2288(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C" String_t* TouchScreenKeyboard_get_text_m1880 (TouchScreenKeyboard_t196 * __this, const MethodInfo* method)
{
	typedef String_t* (*TouchScreenKeyboard_get_text_m1880_ftn) (TouchScreenKeyboard_t196 *);
	static TouchScreenKeyboard_get_text_m1880_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_text_m1880_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern "C" void TouchScreenKeyboard_set_text_m1881 (TouchScreenKeyboard_t196 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_text_m1881_ftn) (TouchScreenKeyboard_t196 *, String_t*);
	static TouchScreenKeyboard_set_text_m1881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_text_m1881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern "C" void TouchScreenKeyboard_set_hideInput_m1956 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_hideInput_m1956_ftn) (bool);
	static TouchScreenKeyboard_set_hideInput_m1956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_hideInput_m1956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern "C" bool TouchScreenKeyboard_get_active_m1879 (TouchScreenKeyboard_t196 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_active_m1879_ftn) (TouchScreenKeyboard_t196 *);
	static TouchScreenKeyboard_get_active_m1879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_active_m1879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_active()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern "C" void TouchScreenKeyboard_set_active_m1955 (TouchScreenKeyboard_t196 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_active_m1955_ftn) (TouchScreenKeyboard_t196 *, bool);
	static TouchScreenKeyboard_set_active_m1955_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_active_m1955_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern "C" bool TouchScreenKeyboard_get_done_m1902 (TouchScreenKeyboard_t196 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_done_m1902_ftn) (TouchScreenKeyboard_t196 *);
	static TouchScreenKeyboard_get_done_m1902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_done_m1902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_done()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern "C" bool TouchScreenKeyboard_get_wasCanceled_m1898 (TouchScreenKeyboard_t196 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_wasCanceled_m1898_ftn) (TouchScreenKeyboard_t196 *);
	static TouchScreenKeyboard_get_wasCanceled_m1898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_wasCanceled_m1898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_wasCanceled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// System.Int32 UnityEngine.LayerMask::get_value()
extern "C" int32_t LayerMask_get_value_m2293 (LayerMask_t112 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mask_0);
		return L_0;
	}
}
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void LayerMask_set_value_m2294 (LayerMask_t112 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Mask_0 = L_0;
		return;
	}
}
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern "C" String_t* LayerMask_LayerToName_m2295 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method)
{
	typedef String_t* (*LayerMask_LayerToName_m2295_ftn) (int32_t);
	static LayerMask_LayerToName_m2295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_LayerToName_m2295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(___layer);
}
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" int32_t LayerMask_NameToLayer_m2296 (Object_t * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method)
{
	typedef int32_t (*LayerMask_NameToLayer_m2296_ftn) (String_t*);
	static LayerMask_NameToLayer_m2296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_NameToLayer_m2296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(___layerName);
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
extern "C" int32_t LayerMask_GetMask_m2297 (Object_t * __this /* static, unused */, StringU5BU5D_t48* ___layerNames, const MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	StringU5BU5D_t48* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		StringU5BU5D_t48* L_0 = ___layerNames;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		StringU5BU5D_t48* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*)));
		String_t* L_4 = V_1;
		int32_t L_5 = LayerMask_NameToLayer_m2296(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t48* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
extern "C" int32_t LayerMask_op_Implicit_m1645 (Object_t * __this /* static, unused */, LayerMask_t112  ___mask, const MethodInfo* method)
{
	{
		int32_t L_0 = ((&___mask)->___m_Mask_0);
		return L_0;
	}
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" LayerMask_t112  LayerMask_op_Implicit_m1643 (Object_t * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method)
{
	LayerMask_t112  V_0 = {0};
	{
		int32_t L_0 = ___intVal;
		(&V_0)->___m_Mask_0 = L_0;
		LayerMask_t112  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector2__ctor_m1578 (Vector2_t11 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		return;
	}
}
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral151;
extern "C" float Vector2_get_Item_m1861 (Vector2_t11 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral151 = il2cpp_codegen_string_literal_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_3 = (__this->___x_1);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (__this->___y_2);
		return L_4;
	}

IL_0022:
	{
		IndexOutOfRangeException_t595 * L_5 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_5, _stringLiteral151, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral151;
extern "C" void Vector2_set_Item_m1869 (Vector2_t11 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral151 = il2cpp_codegen_string_literal_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		float L_3 = ___value;
		__this->___x_1 = L_3;
		goto IL_0037;
	}

IL_0020:
	{
		float L_4 = ___value;
		__this->___y_2 = L_4;
		goto IL_0037;
	}

IL_002c:
	{
		IndexOutOfRangeException_t595 * L_5 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_5, _stringLiteral151, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0037:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t11  Vector2_Scale_m1945 (Object_t * __this /* static, unused */, Vector2_t11  ___a, Vector2_t11  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t11  L_4 = {0};
		Vector2__ctor_m1578(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.Vector2::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral152;
extern "C" String_t* Vector2_ToString_m2298 (Vector2_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t321_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t321_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral152, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector2_GetHashCode_m2299 (Vector2_t11 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3072(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3072(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector2_t11_il2cpp_TypeInfo_var;
extern "C" bool Vector2_Equals_m2300 (Vector2_t11 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t11  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector2_t11_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_1, Vector2_t11_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m1760(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m1760(L_5, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float Vector2_Dot_m1611 (Object_t * __this /* static, unused */, Vector2_t11  ___lhs, Vector2_t11  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::get_magnitude()
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" float Vector2_get_magnitude_m117 (Vector2_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3)))));
		return L_4;
	}
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" float Vector2_get_sqrMagnitude_m1575 (Vector2_t11 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m2301 (Object_t * __this /* static, unused */, Vector2_t11  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t11  Vector2_get_zero_m1571 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = {0};
		Vector2__ctor_m1578(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" Vector2_t11  Vector2_get_one_m1683 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = {0};
		Vector2__ctor_m1578(&L_0, (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" Vector2_t11  Vector2_get_up_m1703 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = {0};
		Vector2__ctor_m1578(&L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C" Vector2_t11  Vector2_get_right_m1697 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = {0};
		Vector2__ctor_m1578(&L_0, (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t11  Vector2_op_Addition_m1732 (Object_t * __this /* static, unused */, Vector2_t11  ___a, Vector2_t11  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t11  L_4 = {0};
		Vector2__ctor_m1578(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t11  Vector2_op_Subtraction_m116 (Object_t * __this /* static, unused */, Vector2_t11  ___a, Vector2_t11  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t11  L_4 = {0};
		Vector2__ctor_m1578(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t11  Vector2_op_Multiply_m1858 (Object_t * __this /* static, unused */, Vector2_t11  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t11  L_4 = {0};
		Vector2__ctor_m1578(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t11  Vector2_op_Division_m1910 (Object_t * __this /* static, unused */, Vector2_t11  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t11  L_4 = {0};
		Vector2__ctor_m1578(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m2133 (Object_t * __this /* static, unused */, Vector2_t11  ___lhs, Vector2_t11  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = ___lhs;
		Vector2_t11  L_1 = ___rhs;
		Vector2_t11  L_2 = Vector2_op_Subtraction_m116(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m2301(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Inequality_m1941 (Object_t * __this /* static, unused */, Vector2_t11  ___lhs, Vector2_t11  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = ___lhs;
		Vector2_t11  L_1 = ___rhs;
		Vector2_t11  L_2 = Vector2_op_Subtraction_m116(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m2301(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector2_t11  Vector2_op_Implicit_m109 (Object_t * __this /* static, unused */, Vector3_t10  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector2_t11  L_2 = {0};
		Vector2__ctor_m1578(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" Vector3_t10  Vector2_op_Implicit_m1629 (Object_t * __this /* static, unused */, Vector2_t11  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector3_t10  L_2 = {0};
		Vector3__ctor_m81(&L_2, L_0, L_1, (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector3__ctor_m81 (Vector3_t10 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		return;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" void Vector3__ctor_m1799 (Vector3_t10 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  Vector3_Lerp_m1995 (Object_t * __this /* static, unused */, Vector3_t10  ___a, Vector3_t10  ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1838(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ((&___a)->___x_1);
		float L_3 = ((&___b)->___x_1);
		float L_4 = ((&___a)->___x_1);
		float L_5 = ___t;
		float L_6 = ((&___a)->___y_2);
		float L_7 = ((&___b)->___y_2);
		float L_8 = ((&___a)->___y_2);
		float L_9 = ___t;
		float L_10 = ((&___a)->___z_3);
		float L_11 = ((&___b)->___z_3);
		float L_12 = ((&___a)->___z_3);
		float L_13 = ___t;
		Vector3_t10  L_14 = {0};
		Vector3__ctor_m81(&L_14, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral153;
extern "C" float Vector3_get_Item_m1999 (Vector3_t10 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0020:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_0027:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_002e:
	{
		IndexOutOfRangeException_t595 * L_5 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_5, _stringLiteral153, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral153;
extern "C" void Vector3_set_Item_m2000 (Vector3_t10 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0048;
	}

IL_0025:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0048;
	}

IL_0031:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0048;
	}

IL_003d:
	{
		IndexOutOfRangeException_t595 * L_5 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_5, _stringLiteral153, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0048:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector3_GetHashCode_m2302 (Vector3_t10 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3072(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3072(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m3072(L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" bool Vector3_Equals_m2303 (Vector3_t10 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector3_t10_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_1, Vector3_t10_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m1760(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m1760(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m1760(L_8, L_9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t10  Vector3_Normalize_m2304 (Object_t * __this /* static, unused */, Vector3_t10  ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t10  L_0 = ___value;
		float L_1 = Vector3_Magnitude_m2307(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t10  L_3 = ___value;
		float L_4 = V_0;
		Vector3_t10  L_5 = Vector3_op_Division_m2309(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001a:
	{
		Vector3_t10  L_6 = Vector3_get_zero_m1570(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t10  Vector3_get_normalized_m2024 (Vector3_t10 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Vector3_Normalize_m2304(NULL /*static, unused*/, (*(Vector3_t10 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral154;
extern "C" String_t* Vector3_ToString_m2305 (Vector3_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 3));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t321_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t321_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t321_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral154, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String UnityEngine.Vector3::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral155;
extern "C" String_t* Vector3_ToString_m2306 (Vector3_t10 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 3));
		float* L_1 = &(__this->___x_1);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m3079(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float* L_5 = &(__this->___y_2);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m3079(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		float* L_9 = &(__this->___z_3);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m3079(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral155, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m1824 (Object_t * __this /* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" float Vector3_Distance_m1638 (Object_t * __this /* static, unused */, Vector3_t10  ___a, Vector3_t10  ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3__ctor_m81((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___x_1);
		float L_8 = ((&V_0)->___y_2);
		float L_9 = ((&V_0)->___y_2);
		float L_10 = ((&V_0)->___z_3);
		float L_11 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" float Vector3_Magnitude_m2307 (Object_t * __this /* static, unused */, Vector3_t10  ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m2308 (Object_t * __this /* static, unused */, Vector3_t10  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" float Vector3_get_sqrMagnitude_m2027 (Vector3_t10 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  Vector3_Min_m2009 (Object_t * __this /* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Min_m2060(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Min_m2060(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Min_m2060(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t10  L_9 = {0};
		Vector3__ctor_m81(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  Vector3_Max_m2010 (Object_t * __this /* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Max_m2028(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Max_m2028(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Max_m2028(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t10  L_9 = {0};
		Vector3__ctor_m81(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t10  Vector3_get_zero_m1570 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = {0};
		Vector3__ctor_m81(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" Vector3_t10  Vector3_get_one_m1746 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = {0};
		Vector3__ctor_m81(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" Vector3_t10  Vector3_get_forward_m1822 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = {0};
		Vector3__ctor_m81(&L_0, (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t10  Vector3_get_back_m2115 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = {0};
		Vector3__ctor_m81(&L_0, (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" Vector3_t10  Vector3_get_up_m1569 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = {0};
		Vector3__ctor_m81(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" Vector3_t10  Vector3_get_down_m2030 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = {0};
		Vector3__ctor_m81(&L_0, (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" Vector3_t10  Vector3_get_left_m2029 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = {0};
		Vector3__ctor_m81(&L_0, (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" Vector3_t10  Vector3_get_right_m99 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = {0};
		Vector3__ctor_m81(&L_0, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t10  Vector3_op_Addition_m108 (Object_t * __this /* static, unused */, Vector3_t10  ___a, Vector3_t10  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t10  L_6 = {0};
		Vector3__ctor_m81(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t10  Vector3_op_Subtraction_m1826 (Object_t * __this /* static, unused */, Vector3_t10  ___a, Vector3_t10  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t10  L_6 = {0};
		Vector3__ctor_m81(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t10  Vector3_op_Multiply_m107 (Object_t * __this /* static, unused */, Vector3_t10  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t10  L_6 = {0};
		Vector3__ctor_m81(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t10  Vector3_op_Division_m2309 (Object_t * __this /* static, unused */, Vector3_t10  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t10  L_6 = {0};
		Vector3__ctor_m81(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m2310 (Object_t * __this /* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___lhs;
		Vector3_t10  L_1 = ___rhs;
		Vector3_t10  L_2 = Vector3_op_Subtraction_m1826(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m2308(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Inequality_m1938 (Object_t * __this /* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___lhs;
		Vector3_t10  L_1 = ___rhs;
		Vector3_t10  L_2 = Vector3_op_Subtraction_m1826(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m2308(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Color__ctor_m1673 (Color_t27 * __this, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		float L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m120 (Color_t27 * __this, float ___r, float ___g, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
// System.String UnityEngine.Color::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral156;
extern "C" String_t* Color_ToString_m2311 (Color_t27 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral156 = il2cpp_codegen_string_literal_from_index(156);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___r_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t321_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float L_5 = (__this->___g_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t321_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		float L_9 = (__this->___b_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t321_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		float L_13 = (__this->___a_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t321_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral156, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Color::GetHashCode()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" int32_t Color_GetHashCode_m2312 (Color_t27 * __this, const MethodInfo* method)
{
	Vector4_t277  V_0 = {0};
	{
		Vector4_t277  L_0 = Color_op_Implicit_m2313(NULL /*static, unused*/, (*(Color_t27 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m2387((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Color::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern TypeInfo* Color_t27_il2cpp_TypeInfo_var;
extern "C" bool Color_Equals_m1806 (Color_t27 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		s_Il2CppMethodIntialized = true;
	}
	Color_t27  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Color_t27_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Color_t27 *)((Color_t27 *)UnBox (L_1, Color_t27_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___r_0);
		float L_3 = ((&V_0)->___r_0);
		bool L_4 = Single_Equals_m1760(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___g_1);
		float L_6 = ((&V_0)->___g_1);
		bool L_7 = Single_Equals_m1760(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___b_2);
		float L_9 = ((&V_0)->___b_2);
		bool L_10 = Single_Equals_m1760(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___a_3);
		float L_12 = ((&V_0)->___a_3);
		bool L_13 = Single_Equals_m1760(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" Color_t27  Color_Lerp_m1652 (Object_t * __this /* static, unused */, Color_t27  ___a, Color_t27  ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1838(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ((&___a)->___r_0);
		float L_3 = ((&___b)->___r_0);
		float L_4 = ((&___a)->___r_0);
		float L_5 = ___t;
		float L_6 = ((&___a)->___g_1);
		float L_7 = ((&___b)->___g_1);
		float L_8 = ((&___a)->___g_1);
		float L_9 = ___t;
		float L_10 = ((&___a)->___b_2);
		float L_11 = ((&___b)->___b_2);
		float L_12 = ((&___a)->___b_2);
		float L_13 = ___t;
		float L_14 = ((&___a)->___a_3);
		float L_15 = ((&___b)->___a_3);
		float L_16 = ((&___a)->___a_3);
		float L_17 = ___t;
		Color_t27  L_18 = {0};
		Color__ctor_m1673(&L_18, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), ((float)((float)L_14+(float)((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17)))), /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t27  Color_get_white_m1773 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t27  L_0 = {0};
		Color__ctor_m1673(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" Color_t27  Color_get_black_m1810 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t27  L_0 = {0};
		Color__ctor_m1673(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" Color_t27  Color_get_clear_m1753 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t27  L_0 = {0};
		Color__ctor_m1673(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" Color_t27  Color_op_Multiply_m2023 (Object_t * __this /* static, unused */, Color_t27  ___a, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t27  L_8 = {0};
		Color__ctor_m1673(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t277  Color_op_Implicit_m2313 (Object_t * __this /* static, unused */, Color_t27  ___c, const MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		float L_1 = ((&___c)->___g_1);
		float L_2 = ((&___c)->___b_2);
		float L_3 = ((&___c)->___a_3);
		Vector4_t277  L_4 = {0};
		Vector4__ctor_m1797(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" void Color32__ctor_m1671 (Color32_t307 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___r;
		__this->___r_0 = L_0;
		uint8_t L_1 = ___g;
		__this->___g_1 = L_1;
		uint8_t L_2 = ___b;
		__this->___b_2 = L_2;
		uint8_t L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.String UnityEngine.Color32::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t596_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral157;
extern "C" String_t* Color32_ToString_m2314 (Color32_t307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Byte_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(312);
		_stringLiteral157 = il2cpp_codegen_string_literal_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 4));
		uint8_t L_1 = (__this->___r_0);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(Byte_t596_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		uint8_t L_5 = (__this->___g_1);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(Byte_t596_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		uint8_t L_9 = (__this->___b_2);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(Byte_t596_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		uint8_t L_13 = (__this->___a_3);
		uint8_t L_14 = L_13;
		Object_t * L_15 = Box(Byte_t596_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral157, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" Color32_t307  Color32_op_Implicit_m1798 (Object_t * __this /* static, unused */, Color_t27  ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___c)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1838(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ((&___c)->___g_1);
		float L_3 = Mathf_Clamp01_m1838(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = ((&___c)->___b_2);
		float L_5 = Mathf_Clamp01_m1838(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___c)->___a_3);
		float L_7 = Mathf_Clamp01_m1838(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Color32_t307  L_8 = {0};
		Color32__ctor_m1671(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern "C" Color_t27  Color32_op_Implicit_m1672 (Object_t * __this /* static, unused */, Color32_t307  ___c, const MethodInfo* method)
{
	{
		uint8_t L_0 = ((&___c)->___r_0);
		uint8_t L_1 = ((&___c)->___g_1);
		uint8_t L_2 = ((&___c)->___b_2);
		uint8_t L_3 = ((&___c)->___a_3);
		Color_t27  L_4 = {0};
		Color__ctor_m1673(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Quaternion__ctor_m2315 (Quaternion_t39 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_0 = L_0;
		float L_1 = ___y;
		__this->___y_1 = L_1;
		float L_2 = ___z;
		__this->___z_2 = L_2;
		float L_3 = ___w;
		__this->___w_3 = L_3;
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern "C" Quaternion_t39  Quaternion_get_identity_m82 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Quaternion_t39  L_0 = {0};
		Quaternion__ctor_m2315(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" float Quaternion_Dot_m2316 (Object_t * __this /* static, unused */, Quaternion_t39  ___a, Quaternion_t39  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		float L_6 = ((&___a)->___w_3);
		float L_7 = ((&___b)->___w_3);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Quaternion_t39  Quaternion_AngleAxis_m100 (Object_t * __this /* static, unused */, float ___angle, Vector3_t10  ___axis, const MethodInfo* method)
{
	{
		float L_0 = ___angle;
		Quaternion_t39  L_1 = Quaternion_INTERNAL_CALL_AngleAxis_m2317(NULL /*static, unused*/, L_0, (&___axis), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t39  Quaternion_INTERNAL_CALL_AngleAxis_m2317 (Object_t * __this /* static, unused */, float ___angle, Vector3_t10 * ___axis, const MethodInfo* method)
{
	typedef Quaternion_t39  (*Quaternion_INTERNAL_CALL_AngleAxis_m2317_ftn) (float, Vector3_t10 *);
	static Quaternion_INTERNAL_CALL_AngleAxis_m2317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_AngleAxis_m2317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___angle, ___axis);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t39  Quaternion_Inverse_m2025 (Object_t * __this /* static, unused */, Quaternion_t39  ___rotation, const MethodInfo* method)
{
	{
		Quaternion_t39  L_0 = Quaternion_INTERNAL_CALL_Inverse_m2318(NULL /*static, unused*/, (&___rotation), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t39  Quaternion_INTERNAL_CALL_Inverse_m2318 (Object_t * __this /* static, unused */, Quaternion_t39 * ___rotation, const MethodInfo* method)
{
	typedef Quaternion_t39  (*Quaternion_INTERNAL_CALL_Inverse_m2318_ftn) (Quaternion_t39 *);
	static Quaternion_INTERNAL_CALL_Inverse_m2318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Inverse_m2318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// System.String UnityEngine.Quaternion::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral158;
extern "C" String_t* Quaternion_ToString_m2319 (Quaternion_t39 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral158 = il2cpp_codegen_string_literal_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t321_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t321_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t321_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		float L_13 = (__this->___w_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t321_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral158, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Quaternion_GetHashCode_m2320 (Quaternion_t39 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m3072(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m3072(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m3072(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_3);
		int32_t L_7 = Single_GetHashCode_m3072(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Quaternion_t39_il2cpp_TypeInfo_var;
extern "C" bool Quaternion_Equals_m2321 (Quaternion_t39 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quaternion_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		s_Il2CppMethodIntialized = true;
	}
	Quaternion_t39  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Quaternion_t39_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Quaternion_t39 *)((Quaternion_t39 *)UnBox (L_1, Quaternion_t39_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m1760(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m1760(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m1760(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_3);
		float L_12 = ((&V_0)->___w_3);
		bool L_13 = Single_Equals_m1760(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t10  Quaternion_op_Multiply_m1823 (Object_t * __this /* static, unused */, Quaternion_t39  ___rotation, Vector3_t10  ___point, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t10  V_12 = {0};
	{
		float L_0 = ((&___rotation)->___x_0);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		float L_1 = ((&___rotation)->___y_1);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		float L_2 = ((&___rotation)->___z_2);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		float L_3 = ((&___rotation)->___x_0);
		float L_4 = V_0;
		V_3 = ((float)((float)L_3*(float)L_4));
		float L_5 = ((&___rotation)->___y_1);
		float L_6 = V_1;
		V_4 = ((float)((float)L_5*(float)L_6));
		float L_7 = ((&___rotation)->___z_2);
		float L_8 = V_2;
		V_5 = ((float)((float)L_7*(float)L_8));
		float L_9 = ((&___rotation)->___x_0);
		float L_10 = V_1;
		V_6 = ((float)((float)L_9*(float)L_10));
		float L_11 = ((&___rotation)->___x_0);
		float L_12 = V_2;
		V_7 = ((float)((float)L_11*(float)L_12));
		float L_13 = ((&___rotation)->___y_1);
		float L_14 = V_2;
		V_8 = ((float)((float)L_13*(float)L_14));
		float L_15 = ((&___rotation)->___w_3);
		float L_16 = V_0;
		V_9 = ((float)((float)L_15*(float)L_16));
		float L_17 = ((&___rotation)->___w_3);
		float L_18 = V_1;
		V_10 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((&___rotation)->___w_3);
		float L_20 = V_2;
		V_11 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23 = ((&___point)->___x_1);
		float L_24 = V_6;
		float L_25 = V_11;
		float L_26 = ((&___point)->___y_2);
		float L_27 = V_7;
		float L_28 = V_10;
		float L_29 = ((&___point)->___z_3);
		(&V_12)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_21+(float)L_22))))*(float)L_23))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)L_26))))+(float)((float)((float)((float)((float)L_27+(float)L_28))*(float)L_29))));
		float L_30 = V_6;
		float L_31 = V_11;
		float L_32 = ((&___point)->___x_1);
		float L_33 = V_3;
		float L_34 = V_5;
		float L_35 = ((&___point)->___y_2);
		float L_36 = V_8;
		float L_37 = V_9;
		float L_38 = ((&___point)->___z_3);
		(&V_12)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))*(float)L_32))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_33+(float)L_34))))*(float)L_35))))+(float)((float)((float)((float)((float)L_36-(float)L_37))*(float)L_38))));
		float L_39 = V_7;
		float L_40 = V_10;
		float L_41 = ((&___point)->___x_1);
		float L_42 = V_8;
		float L_43 = V_9;
		float L_44 = ((&___point)->___y_2);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = ((&___point)->___z_3);
		(&V_12)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_39-(float)L_40))*(float)L_41))+(float)((float)((float)((float)((float)L_42+(float)L_43))*(float)L_44))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_45+(float)L_46))))*(float)L_47))));
		Vector3_t10  L_48 = V_12;
		return L_48;
	}
}
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m1940 (Object_t * __this /* static, unused */, Quaternion_t39  ___lhs, Quaternion_t39  ___rhs, const MethodInfo* method)
{
	{
		Quaternion_t39  L_0 = ___lhs;
		Quaternion_t39  L_1 = ___rhs;
		float L_2 = Quaternion_Dot_m2316(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Rect__ctor_m1972 (Rect_t191 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___m_XMin_0 = L_0;
		float L_1 = ___y;
		__this->___m_YMin_1 = L_1;
		float L_2 = ___width;
		__this->___m_Width_2 = L_2;
		float L_3 = ___height;
		__this->___m_Height_3 = L_3;
		return;
	}
}
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m1795 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m1854 (Rect_t191 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_XMin_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m1796 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m1852 (Rect_t191 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_YMin_1 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t11  Rect_get_position_m1859 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		float L_1 = (__this->___m_YMin_1);
		Vector2_t11  L_2 = {0};
		Vector2__ctor_m1578(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" Vector2_t11  Rect_get_center_m1988 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_x_m1795(__this, /*hidden argument*/NULL);
		float L_1 = (__this->___m_Width_2);
		float L_2 = Rect_get_y_m1796(__this, /*hidden argument*/NULL);
		float L_3 = (__this->___m_Height_3);
		Vector2_t11  L_4 = {0};
		Vector2__ctor_m1578(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
extern "C" Vector2_t11  Rect_get_min_m1730 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_xMin_m1875(__this, /*hidden argument*/NULL);
		float L_1 = Rect_get_yMin_m1874(__this, /*hidden argument*/NULL);
		Vector2_t11  L_2 = {0};
		Vector2__ctor_m1578(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
extern "C" Vector2_t11  Rect_get_max_m1733 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_xMax_m1866(__this, /*hidden argument*/NULL);
		float L_1 = Rect_get_yMax_m1867(__this, /*hidden argument*/NULL);
		Vector2_t11  L_2 = {0};
		Vector2__ctor_m1578(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m1791 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m1853 (Rect_t191 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Width_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m1737 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m1851 (Rect_t191 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Height_3 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C" Vector2_t11  Rect_get_size_m1734 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_Height_3);
		Vector2_t11  L_2 = {0};
		Vector2__ctor_m1578(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m1875 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m1874 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m1866 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_XMin_0);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m1867 (Rect_t191 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		float L_1 = (__this->___m_YMin_1);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.String UnityEngine.Rect::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral159;
extern "C" String_t* Rect_ToString_m2322 (Rect_t191 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral159 = il2cpp_codegen_string_literal_from_index(159);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 4));
		float L_1 = Rect_get_x_m1795(__this, /*hidden argument*/NULL);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t321_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float L_5 = Rect_get_y_m1796(__this, /*hidden argument*/NULL);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t321_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		float L_9 = Rect_get_width_m1791(__this, /*hidden argument*/NULL);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t321_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		float L_13 = Rect_get_height_m1737(__this, /*hidden argument*/NULL);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t321_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral159, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" bool Rect_Contains_m1740 (Rect_t191 * __this, Vector3_t10  ___point, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___point)->___x_1);
		float L_1 = Rect_get_xMin_m1875(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&___point)->___x_1);
		float L_3 = Rect_get_xMax_m1866(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&___point)->___y_2);
		float L_5 = Rect_get_yMin_m1874(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&___point)->___y_2);
		float L_7 = Rect_get_yMax_m1867(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern "C" bool Rect_Overlaps_m1967 (Rect_t191 * __this, Rect_t191  ___other, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_xMax_m1866((&___other), /*hidden argument*/NULL);
		float L_1 = Rect_get_xMin_m1875(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = Rect_get_xMin_m1875((&___other), /*hidden argument*/NULL);
		float L_3 = Rect_get_xMax_m1866(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = Rect_get_yMax_m1867((&___other), /*hidden argument*/NULL);
		float L_5 = Rect_get_yMin_m1874(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = Rect_get_yMin_m1874((&___other), /*hidden argument*/NULL);
		float L_7 = Rect_get_yMax_m1867(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Rect::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Rect_GetHashCode_m2323 (Rect_t191 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = Rect_get_x_m1795(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m3072((&V_0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m1791(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m3072((&V_1), /*hidden argument*/NULL);
		float L_4 = Rect_get_y_m1796(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m3072((&V_2), /*hidden argument*/NULL);
		float L_6 = Rect_get_height_m1737(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m3072((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Rect_t191_il2cpp_TypeInfo_var;
extern "C" bool Rect_Equals_m2324 (Rect_t191 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rect_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t191  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Rect_t191_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Rect_t191 *)((Rect_t191 *)UnBox (L_1, Rect_t191_il2cpp_TypeInfo_var))));
		float L_2 = Rect_get_x_m1795(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Rect_get_x_m1795((&V_0), /*hidden argument*/NULL);
		bool L_4 = Single_Equals_m1760((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = Rect_get_y_m1796(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_y_m1796((&V_0), /*hidden argument*/NULL);
		bool L_7 = Single_Equals_m1760((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = Rect_get_width_m1791(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = Rect_get_width_m1791((&V_0), /*hidden argument*/NULL);
		bool L_10 = Single_Equals_m1760((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = Rect_get_height_m1737(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = Rect_get_height_m1737((&V_0), /*hidden argument*/NULL);
		bool L_13 = Single_Equals_m1760((&V_4), L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Inequality_m1981 (Object_t * __this /* static, unused */, Rect_t191  ___lhs, Rect_t191  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m1795((&___lhs), /*hidden argument*/NULL);
		float L_1 = Rect_get_x_m1795((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		float L_2 = Rect_get_y_m1796((&___lhs), /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m1796((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004e;
		}
	}
	{
		float L_4 = Rect_get_width_m1791((&___lhs), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m1791((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004e;
		}
	}
	{
		float L_6 = Rect_get_height_m1737((&___lhs), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m1737((&___rhs), /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((float)L_6) == ((float)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B5_0 = 1;
	}

IL_004f:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Equality_m1977 (Object_t * __this /* static, unused */, Rect_t191  ___lhs, Rect_t191  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m1795((&___lhs), /*hidden argument*/NULL);
		float L_1 = Rect_get_x_m1795((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = Rect_get_y_m1796((&___lhs), /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m1796((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = Rect_get_width_m1791((&___lhs), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m1791((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = Rect_get_height_m1737((&___lhs), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m1737((&___rhs), /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern "C" float Matrix4x4_get_Item_m2325 (Matrix4x4_t363 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = Matrix4x4_get_Item_m2327(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Matrix4x4_set_Item_m2326 (Matrix4x4_t363 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = ___value;
		Matrix4x4_set_Item_m2328(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral160;
extern "C" float Matrix4x4_get_Item_m2327 (Matrix4x4_t363 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->___m00_0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->___m10_1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->___m20_2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->___m30_3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->___m01_4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->___m11_5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->___m21_6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->___m31_7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->___m02_8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->___m12_9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->___m22_10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->___m32_11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->___m03_12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->___m13_13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->___m23_14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->___m33_15);
		return L_17;
	}

IL_00bd:
	{
		IndexOutOfRangeException_t595 * L_18 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_18, _stringLiteral160, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral160;
extern "C" void Matrix4x4_set_Item_m2328 (Matrix4x4_t363 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral160 = il2cpp_codegen_string_literal_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = ___value;
		__this->___m00_0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = ___value;
		__this->___m10_1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = ___value;
		__this->___m20_2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = ___value;
		__this->___m30_3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = ___value;
		__this->___m01_4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = ___value;
		__this->___m11_5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = ___value;
		__this->___m21_6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = ___value;
		__this->___m31_7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = ___value;
		__this->___m02_8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = ___value;
		__this->___m12_9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = ___value;
		__this->___m22_10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = ___value;
		__this->___m32_11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = ___value;
		__this->___m03_12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = ___value;
		__this->___m13_13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = ___value;
		__this->___m23_14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = ___value;
		__this->___m33_15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		IndexOutOfRangeException_t595 * L_18 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_18, _stringLiteral160, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_0118:
	{
		return;
	}
}
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" int32_t Matrix4x4_GetHashCode_m2329 (Matrix4x4_t363 * __this, const MethodInfo* method)
{
	Vector4_t277  V_0 = {0};
	Vector4_t277  V_1 = {0};
	Vector4_t277  V_2 = {0};
	Vector4_t277  V_3 = {0};
	{
		Vector4_t277  L_0 = Matrix4x4_GetColumn_m2340(__this, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m2387((&V_0), /*hidden argument*/NULL);
		Vector4_t277  L_2 = Matrix4x4_GetColumn_m2340(__this, 1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector4_GetHashCode_m2387((&V_1), /*hidden argument*/NULL);
		Vector4_t277  L_4 = Matrix4x4_GetColumn_m2340(__this, 2, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Vector4_GetHashCode_m2387((&V_2), /*hidden argument*/NULL);
		Vector4_t277  L_6 = Matrix4x4_GetColumn_m2340(__this, 3, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Vector4_GetHashCode_m2387((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Matrix4x4_t363_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t277_il2cpp_TypeInfo_var;
extern "C" bool Matrix4x4_Equals_m2330 (Matrix4x4_t363 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		Vector4_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t363  V_0 = {0};
	Vector4_t277  V_1 = {0};
	Vector4_t277  V_2 = {0};
	Vector4_t277  V_3 = {0};
	Vector4_t277  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Matrix4x4_t363_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Matrix4x4_t363 *)((Matrix4x4_t363 *)UnBox (L_1, Matrix4x4_t363_il2cpp_TypeInfo_var))));
		Vector4_t277  L_2 = Matrix4x4_GetColumn_m2340(__this, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector4_t277  L_3 = Matrix4x4_GetColumn_m2340((&V_0), 0, /*hidden argument*/NULL);
		Vector4_t277  L_4 = L_3;
		Object_t * L_5 = Box(Vector4_t277_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector4_Equals_m2388((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t277  L_7 = Matrix4x4_GetColumn_m2340(__this, 1, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector4_t277  L_8 = Matrix4x4_GetColumn_m2340((&V_0), 1, /*hidden argument*/NULL);
		Vector4_t277  L_9 = L_8;
		Object_t * L_10 = Box(Vector4_t277_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector4_Equals_m2388((&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t277  L_12 = Matrix4x4_GetColumn_m2340(__this, 2, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector4_t277  L_13 = Matrix4x4_GetColumn_m2340((&V_0), 2, /*hidden argument*/NULL);
		Vector4_t277  L_14 = L_13;
		Object_t * L_15 = Box(Vector4_t277_il2cpp_TypeInfo_var, &L_14);
		bool L_16 = Vector4_Equals_m2388((&V_3), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t277  L_17 = Matrix4x4_GetColumn_m2340(__this, 3, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector4_t277  L_18 = Matrix4x4_GetColumn_m2340((&V_0), 3, /*hidden argument*/NULL);
		Vector4_t277  L_19 = L_18;
		Object_t * L_20 = Box(Vector4_t277_il2cpp_TypeInfo_var, &L_19);
		bool L_21 = Vector4_Equals_m2388((&V_4), L_20, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
extern "C" Matrix4x4_t363  Matrix4x4_Inverse_m2331 (Object_t * __this /* static, unused */, Matrix4x4_t363  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t363  L_0 = Matrix4x4_INTERNAL_CALL_Inverse_m2332(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t363  Matrix4x4_INTERNAL_CALL_Inverse_m2332 (Object_t * __this /* static, unused */, Matrix4x4_t363 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t363  (*Matrix4x4_INTERNAL_CALL_Inverse_m2332_ftn) (Matrix4x4_t363 *);
	static Matrix4x4_INTERNAL_CALL_Inverse_m2332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Inverse_m2332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t363  Matrix4x4_Transpose_m2333 (Object_t * __this /* static, unused */, Matrix4x4_t363  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t363  L_0 = Matrix4x4_INTERNAL_CALL_Transpose_m2334(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t363  Matrix4x4_INTERNAL_CALL_Transpose_m2334 (Object_t * __this /* static, unused */, Matrix4x4_t363 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t363  (*Matrix4x4_INTERNAL_CALL_Transpose_m2334_ftn) (Matrix4x4_t363 *);
	static Matrix4x4_INTERNAL_CALL_Transpose_m2334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Transpose_m2334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_Invert_m2335 (Object_t * __this /* static, unused */, Matrix4x4_t363  ___inMatrix, Matrix4x4_t363 * ___dest, const MethodInfo* method)
{
	{
		Matrix4x4_t363 * L_0 = ___dest;
		bool L_1 = Matrix4x4_INTERNAL_CALL_Invert_m2336(NULL /*static, unused*/, (&___inMatrix), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m2336 (Object_t * __this /* static, unused */, Matrix4x4_t363 * ___inMatrix, Matrix4x4_t363 * ___dest, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_INTERNAL_CALL_Invert_m2336_ftn) (Matrix4x4_t363 *, Matrix4x4_t363 *);
	static Matrix4x4_INTERNAL_CALL_Invert_m2336_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Invert_m2336_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___inMatrix, ___dest);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" Matrix4x4_t363  Matrix4x4_get_inverse_m2337 (Matrix4x4_t363 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t363  L_0 = Matrix4x4_Inverse_m2331(NULL /*static, unused*/, (*(Matrix4x4_t363 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C" Matrix4x4_t363  Matrix4x4_get_transpose_m2338 (Matrix4x4_t363 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t363  L_0 = Matrix4x4_Transpose_m2333(NULL /*static, unused*/, (*(Matrix4x4_t363 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C" bool Matrix4x4_get_isIdentity_m2339 (Matrix4x4_t363 * __this, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_get_isIdentity_m2339_ftn) (Matrix4x4_t363 *);
	static Matrix4x4_get_isIdentity_m2339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_get_isIdentity_m2339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t277  Matrix4x4_GetColumn_m2340 (Matrix4x4_t363 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m2325(__this, 0, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m2325(__this, 1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m2325(__this, 2, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m2325(__this, 3, L_6, /*hidden argument*/NULL);
		Vector4_t277  L_8 = {0};
		Vector4__ctor_m1797(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C" Vector4_t277  Matrix4x4_GetRow_m2341 (Matrix4x4_t363 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m2325(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m2325(__this, L_2, 1, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m2325(__this, L_4, 2, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m2325(__this, L_6, 3, /*hidden argument*/NULL);
		Vector4_t277  L_8 = {0};
		Vector4__ctor_m1797(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" void Matrix4x4_SetColumn_m2342 (Matrix4x4_t363 * __this, int32_t ___i, Vector4_t277  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m2326(__this, 0, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m2326(__this, 1, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m2326(__this, 2, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m2326(__this, 3, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetRow_m2343 (Matrix4x4_t363 * __this, int32_t ___i, Vector4_t277  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m2326(__this, L_0, 0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m2326(__this, L_2, 1, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m2326(__this, L_4, 2, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m2326(__this, L_6, 3, L_7, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t10  Matrix4x4_MultiplyPoint_m2344 (Matrix4x4_t363 * __this, Vector3_t10  ___v, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->___m30_3);
		float L_22 = ((&___v)->___x_1);
		float L_23 = (__this->___m31_7);
		float L_24 = ((&___v)->___y_2);
		float L_25 = (__this->___m32_11);
		float L_26 = ((&___v)->___z_3);
		float L_27 = (__this->___m33_15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		Vector3_t10 * L_29 = (&V_0);
		float L_30 = (L_29->___x_1);
		float L_31 = V_1;
		L_29->___x_1 = ((float)((float)L_30*(float)L_31));
		Vector3_t10 * L_32 = (&V_0);
		float L_33 = (L_32->___y_2);
		float L_34 = V_1;
		L_32->___y_2 = ((float)((float)L_33*(float)L_34));
		Vector3_t10 * L_35 = (&V_0);
		float L_36 = (L_35->___z_3);
		float L_37 = V_1;
		L_35->___z_3 = ((float)((float)L_36*(float)L_37));
		Vector3_t10  L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t10  Matrix4x4_MultiplyPoint3x4_m2008 (Matrix4x4_t363 * __this, Vector3_t10  ___v, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		Vector3_t10  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" Vector3_t10  Matrix4x4_MultiplyVector_m2345 (Matrix4x4_t363 * __this, Vector3_t10  ___v, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m10_1);
		float L_7 = ((&___v)->___x_1);
		float L_8 = (__this->___m11_5);
		float L_9 = ((&___v)->___y_2);
		float L_10 = (__this->___m12_9);
		float L_11 = ((&___v)->___z_3);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m20_2);
		float L_13 = ((&___v)->___x_1);
		float L_14 = (__this->___m21_6);
		float L_15 = ((&___v)->___y_2);
		float L_16 = (__this->___m22_10);
		float L_17 = ((&___v)->___z_3);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		Vector3_t10  L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern TypeInfo* Matrix4x4_t363_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t363  Matrix4x4_Scale_m2346 (Object_t * __this /* static, unused */, Vector3_t10  ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t363  V_0 = {0};
	{
		Initobj (Matrix4x4_t363_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___v)->___x_1);
		(&V_0)->___m00_0 = L_0;
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		float L_1 = ((&___v)->___y_2);
		(&V_0)->___m11_5 = L_1;
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		float L_2 = ((&___v)->___z_3);
		(&V_0)->___m22_10 = L_2;
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t363  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern TypeInfo* Matrix4x4_t363_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t363  Matrix4x4_get_zero_m2347 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t363  V_0 = {0};
	{
		Initobj (Matrix4x4_t363_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (0.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (0.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (0.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (0.0f);
		Matrix4x4_t363  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern TypeInfo* Matrix4x4_t363_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t363  Matrix4x4_get_identity_m2348 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t363  V_0 = {0};
	{
		Initobj (Matrix4x4_t363_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (1.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (1.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (1.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t363  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void Matrix4x4_SetTRS_m2349 (Matrix4x4_t363 * __this, Vector3_t10  ___pos, Quaternion_t39  ___q, Vector3_t10  ___s, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___pos;
		Quaternion_t39  L_1 = ___q;
		Vector3_t10  L_2 = ___s;
		Matrix4x4_t363  L_3 = Matrix4x4_TRS_m2350(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		*__this = L_3;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t363  Matrix4x4_TRS_m2350 (Object_t * __this /* static, unused */, Vector3_t10  ___pos, Quaternion_t39  ___q, Vector3_t10  ___s, const MethodInfo* method)
{
	{
		Matrix4x4_t363  L_0 = Matrix4x4_INTERNAL_CALL_TRS_m2351(NULL /*static, unused*/, (&___pos), (&___q), (&___s), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t363  Matrix4x4_INTERNAL_CALL_TRS_m2351 (Object_t * __this /* static, unused */, Vector3_t10 * ___pos, Quaternion_t39 * ___q, Vector3_t10 * ___s, const MethodInfo* method)
{
	typedef Matrix4x4_t363  (*Matrix4x4_INTERNAL_CALL_TRS_m2351_ftn) (Vector3_t10 *, Quaternion_t39 *, Vector3_t10 *);
	static Matrix4x4_INTERNAL_CALL_TRS_m2351_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_TRS_m2351_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___pos, ___q, ___s);
}
// System.String UnityEngine.Matrix4x4::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral161;
extern "C" String_t* Matrix4x4_ToString_m2352 (Matrix4x4_t363 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral161 = il2cpp_codegen_string_literal_from_index(161);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, ((int32_t)16)));
		float L_1 = (__this->___m00_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t321_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float L_5 = (__this->___m01_4);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t321_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		float L_9 = (__this->___m02_8);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t321_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		float L_13 = (__this->___m03_12);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t321_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t320* L_16 = L_12;
		float L_17 = (__this->___m10_1);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t321_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t320* L_20 = L_16;
		float L_21 = (__this->___m11_5);
		float L_22 = L_21;
		Object_t * L_23 = Box(Single_t321_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5, sizeof(Object_t *))) = (Object_t *)L_23;
		ObjectU5BU5D_t320* L_24 = L_20;
		float L_25 = (__this->___m12_9);
		float L_26 = L_25;
		Object_t * L_27 = Box(Single_t321_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6, sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t320* L_28 = L_24;
		float L_29 = (__this->___m13_13);
		float L_30 = L_29;
		Object_t * L_31 = Box(Single_t321_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7, sizeof(Object_t *))) = (Object_t *)L_31;
		ObjectU5BU5D_t320* L_32 = L_28;
		float L_33 = (__this->___m20_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(Single_t321_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t320* L_36 = L_32;
		float L_37 = (__this->___m21_6);
		float L_38 = L_37;
		Object_t * L_39 = Box(Single_t321_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_39;
		ObjectU5BU5D_t320* L_40 = L_36;
		float L_41 = (__this->___m22_10);
		float L_42 = L_41;
		Object_t * L_43 = Box(Single_t321_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_43;
		ObjectU5BU5D_t320* L_44 = L_40;
		float L_45 = (__this->___m23_14);
		float L_46 = L_45;
		Object_t * L_47 = Box(Single_t321_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t320* L_48 = L_44;
		float L_49 = (__this->___m30_3);
		float L_50 = L_49;
		Object_t * L_51 = Box(Single_t321_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)L_51;
		ObjectU5BU5D_t320* L_52 = L_48;
		float L_53 = (__this->___m31_7);
		float L_54 = L_53;
		Object_t * L_55 = Box(Single_t321_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t320* L_56 = L_52;
		float L_57 = (__this->___m32_11);
		float L_58 = L_57;
		Object_t * L_59 = Box(Single_t321_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)L_59;
		ObjectU5BU5D_t320* L_60 = L_56;
		float L_61 = (__this->___m33_15);
		float L_62 = L_61;
		Object_t * L_63 = Box(Single_t321_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral161, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// System.String UnityEngine.Matrix4x4::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral162;
extern "C" String_t* Matrix4x4_ToString_m2353 (Matrix4x4_t363 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		_stringLiteral162 = il2cpp_codegen_string_literal_from_index(162);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, ((int32_t)16)));
		float* L_1 = &(__this->___m00_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m3079(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float* L_5 = &(__this->___m01_4);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m3079(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		float* L_9 = &(__this->___m02_8);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m3079(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		float* L_13 = &(__this->___m03_12);
		String_t* L_14 = ___format;
		String_t* L_15 = Single_ToString_m3079(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t320* L_16 = L_12;
		float* L_17 = &(__this->___m10_1);
		String_t* L_18 = ___format;
		String_t* L_19 = Single_ToString_m3079(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t320* L_20 = L_16;
		float* L_21 = &(__this->___m11_5);
		String_t* L_22 = ___format;
		String_t* L_23 = Single_ToString_m3079(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5, sizeof(Object_t *))) = (Object_t *)L_23;
		ObjectU5BU5D_t320* L_24 = L_20;
		float* L_25 = &(__this->___m12_9);
		String_t* L_26 = ___format;
		String_t* L_27 = Single_ToString_m3079(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6, sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t320* L_28 = L_24;
		float* L_29 = &(__this->___m13_13);
		String_t* L_30 = ___format;
		String_t* L_31 = Single_ToString_m3079(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7, sizeof(Object_t *))) = (Object_t *)L_31;
		ObjectU5BU5D_t320* L_32 = L_28;
		float* L_33 = &(__this->___m20_2);
		String_t* L_34 = ___format;
		String_t* L_35 = Single_ToString_m3079(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t320* L_36 = L_32;
		float* L_37 = &(__this->___m21_6);
		String_t* L_38 = ___format;
		String_t* L_39 = Single_ToString_m3079(L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_39;
		ObjectU5BU5D_t320* L_40 = L_36;
		float* L_41 = &(__this->___m22_10);
		String_t* L_42 = ___format;
		String_t* L_43 = Single_ToString_m3079(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_43;
		ObjectU5BU5D_t320* L_44 = L_40;
		float* L_45 = &(__this->___m23_14);
		String_t* L_46 = ___format;
		String_t* L_47 = Single_ToString_m3079(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t320* L_48 = L_44;
		float* L_49 = &(__this->___m30_3);
		String_t* L_50 = ___format;
		String_t* L_51 = Single_ToString_m3079(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)L_51;
		ObjectU5BU5D_t320* L_52 = L_48;
		float* L_53 = &(__this->___m31_7);
		String_t* L_54 = ___format;
		String_t* L_55 = Single_ToString_m3079(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t320* L_56 = L_52;
		float* L_57 = &(__this->___m32_11);
		String_t* L_58 = ___format;
		String_t* L_59 = Single_ToString_m3079(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)L_59;
		ObjectU5BU5D_t320* L_60 = L_56;
		float* L_61 = &(__this->___m33_15);
		String_t* L_62 = ___format;
		String_t* L_63 = Single_ToString_m3079(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral162, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t363  Matrix4x4_Ortho_m2354 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t363  (*Matrix4x4_Ortho_m2354_ftn) (float, float, float, float, float, float);
	static Matrix4x4_Ortho_m2354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Ortho_m2354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___left, ___right, ___bottom, ___top, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t363  Matrix4x4_Perspective_m2355 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t363  (*Matrix4x4_Perspective_m2355_ftn) (float, float, float, float);
	static Matrix4x4_Perspective_m2355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Perspective_m2355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___fov, ___aspect, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern TypeInfo* Matrix4x4_t363_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t363  Matrix4x4_op_Multiply_m2356 (Object_t * __this /* static, unused */, Matrix4x4_t363  ___lhs, Matrix4x4_t363  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t363  V_0 = {0};
	{
		Initobj (Matrix4x4_t363_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___rhs)->___m00_0);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___rhs)->___m10_1);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___rhs)->___m20_2);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___rhs)->___m30_3);
		(&V_0)->___m00_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m00_0);
		float L_9 = ((&___rhs)->___m01_4);
		float L_10 = ((&___lhs)->___m01_4);
		float L_11 = ((&___rhs)->___m11_5);
		float L_12 = ((&___lhs)->___m02_8);
		float L_13 = ((&___rhs)->___m21_6);
		float L_14 = ((&___lhs)->___m03_12);
		float L_15 = ((&___rhs)->___m31_7);
		(&V_0)->___m01_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m00_0);
		float L_17 = ((&___rhs)->___m02_8);
		float L_18 = ((&___lhs)->___m01_4);
		float L_19 = ((&___rhs)->___m12_9);
		float L_20 = ((&___lhs)->___m02_8);
		float L_21 = ((&___rhs)->___m22_10);
		float L_22 = ((&___lhs)->___m03_12);
		float L_23 = ((&___rhs)->___m32_11);
		(&V_0)->___m02_8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m00_0);
		float L_25 = ((&___rhs)->___m03_12);
		float L_26 = ((&___lhs)->___m01_4);
		float L_27 = ((&___rhs)->___m13_13);
		float L_28 = ((&___lhs)->___m02_8);
		float L_29 = ((&___rhs)->___m23_14);
		float L_30 = ((&___lhs)->___m03_12);
		float L_31 = ((&___rhs)->___m33_15);
		(&V_0)->___m03_12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&___lhs)->___m10_1);
		float L_33 = ((&___rhs)->___m00_0);
		float L_34 = ((&___lhs)->___m11_5);
		float L_35 = ((&___rhs)->___m10_1);
		float L_36 = ((&___lhs)->___m12_9);
		float L_37 = ((&___rhs)->___m20_2);
		float L_38 = ((&___lhs)->___m13_13);
		float L_39 = ((&___rhs)->___m30_3);
		(&V_0)->___m10_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&___lhs)->___m10_1);
		float L_41 = ((&___rhs)->___m01_4);
		float L_42 = ((&___lhs)->___m11_5);
		float L_43 = ((&___rhs)->___m11_5);
		float L_44 = ((&___lhs)->___m12_9);
		float L_45 = ((&___rhs)->___m21_6);
		float L_46 = ((&___lhs)->___m13_13);
		float L_47 = ((&___rhs)->___m31_7);
		(&V_0)->___m11_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&___lhs)->___m10_1);
		float L_49 = ((&___rhs)->___m02_8);
		float L_50 = ((&___lhs)->___m11_5);
		float L_51 = ((&___rhs)->___m12_9);
		float L_52 = ((&___lhs)->___m12_9);
		float L_53 = ((&___rhs)->___m22_10);
		float L_54 = ((&___lhs)->___m13_13);
		float L_55 = ((&___rhs)->___m32_11);
		(&V_0)->___m12_9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&___lhs)->___m10_1);
		float L_57 = ((&___rhs)->___m03_12);
		float L_58 = ((&___lhs)->___m11_5);
		float L_59 = ((&___rhs)->___m13_13);
		float L_60 = ((&___lhs)->___m12_9);
		float L_61 = ((&___rhs)->___m23_14);
		float L_62 = ((&___lhs)->___m13_13);
		float L_63 = ((&___rhs)->___m33_15);
		(&V_0)->___m13_13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&___lhs)->___m20_2);
		float L_65 = ((&___rhs)->___m00_0);
		float L_66 = ((&___lhs)->___m21_6);
		float L_67 = ((&___rhs)->___m10_1);
		float L_68 = ((&___lhs)->___m22_10);
		float L_69 = ((&___rhs)->___m20_2);
		float L_70 = ((&___lhs)->___m23_14);
		float L_71 = ((&___rhs)->___m30_3);
		(&V_0)->___m20_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&___lhs)->___m20_2);
		float L_73 = ((&___rhs)->___m01_4);
		float L_74 = ((&___lhs)->___m21_6);
		float L_75 = ((&___rhs)->___m11_5);
		float L_76 = ((&___lhs)->___m22_10);
		float L_77 = ((&___rhs)->___m21_6);
		float L_78 = ((&___lhs)->___m23_14);
		float L_79 = ((&___rhs)->___m31_7);
		(&V_0)->___m21_6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&___lhs)->___m20_2);
		float L_81 = ((&___rhs)->___m02_8);
		float L_82 = ((&___lhs)->___m21_6);
		float L_83 = ((&___rhs)->___m12_9);
		float L_84 = ((&___lhs)->___m22_10);
		float L_85 = ((&___rhs)->___m22_10);
		float L_86 = ((&___lhs)->___m23_14);
		float L_87 = ((&___rhs)->___m32_11);
		(&V_0)->___m22_10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&___lhs)->___m20_2);
		float L_89 = ((&___rhs)->___m03_12);
		float L_90 = ((&___lhs)->___m21_6);
		float L_91 = ((&___rhs)->___m13_13);
		float L_92 = ((&___lhs)->___m22_10);
		float L_93 = ((&___rhs)->___m23_14);
		float L_94 = ((&___lhs)->___m23_14);
		float L_95 = ((&___rhs)->___m33_15);
		(&V_0)->___m23_14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&___lhs)->___m30_3);
		float L_97 = ((&___rhs)->___m00_0);
		float L_98 = ((&___lhs)->___m31_7);
		float L_99 = ((&___rhs)->___m10_1);
		float L_100 = ((&___lhs)->___m32_11);
		float L_101 = ((&___rhs)->___m20_2);
		float L_102 = ((&___lhs)->___m33_15);
		float L_103 = ((&___rhs)->___m30_3);
		(&V_0)->___m30_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&___lhs)->___m30_3);
		float L_105 = ((&___rhs)->___m01_4);
		float L_106 = ((&___lhs)->___m31_7);
		float L_107 = ((&___rhs)->___m11_5);
		float L_108 = ((&___lhs)->___m32_11);
		float L_109 = ((&___rhs)->___m21_6);
		float L_110 = ((&___lhs)->___m33_15);
		float L_111 = ((&___rhs)->___m31_7);
		(&V_0)->___m31_7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&___lhs)->___m30_3);
		float L_113 = ((&___rhs)->___m02_8);
		float L_114 = ((&___lhs)->___m31_7);
		float L_115 = ((&___rhs)->___m12_9);
		float L_116 = ((&___lhs)->___m32_11);
		float L_117 = ((&___rhs)->___m22_10);
		float L_118 = ((&___lhs)->___m33_15);
		float L_119 = ((&___rhs)->___m32_11);
		(&V_0)->___m32_11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&___lhs)->___m30_3);
		float L_121 = ((&___rhs)->___m03_12);
		float L_122 = ((&___lhs)->___m31_7);
		float L_123 = ((&___rhs)->___m13_13);
		float L_124 = ((&___lhs)->___m32_11);
		float L_125 = ((&___rhs)->___m23_14);
		float L_126 = ((&___lhs)->___m33_15);
		float L_127 = ((&___rhs)->___m33_15);
		(&V_0)->___m33_15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		Matrix4x4_t363  L_128 = V_0;
		return L_128;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Vector4_t277  Matrix4x4_op_Multiply_m2357 (Object_t * __this /* static, unused */, Matrix4x4_t363  ___lhs, Vector4_t277  ___v, const MethodInfo* method)
{
	Vector4_t277  V_0 = {0};
	{
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___v)->___w_4);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m10_1);
		float L_9 = ((&___v)->___x_1);
		float L_10 = ((&___lhs)->___m11_5);
		float L_11 = ((&___v)->___y_2);
		float L_12 = ((&___lhs)->___m12_9);
		float L_13 = ((&___v)->___z_3);
		float L_14 = ((&___lhs)->___m13_13);
		float L_15 = ((&___v)->___w_4);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m20_2);
		float L_17 = ((&___v)->___x_1);
		float L_18 = ((&___lhs)->___m21_6);
		float L_19 = ((&___v)->___y_2);
		float L_20 = ((&___lhs)->___m22_10);
		float L_21 = ((&___v)->___z_3);
		float L_22 = ((&___lhs)->___m23_14);
		float L_23 = ((&___v)->___w_4);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m30_3);
		float L_25 = ((&___v)->___x_1);
		float L_26 = ((&___lhs)->___m31_7);
		float L_27 = ((&___v)->___y_2);
		float L_28 = ((&___lhs)->___m32_11);
		float L_29 = ((&___v)->___z_3);
		float L_30 = ((&___lhs)->___m33_15);
		float L_31 = ((&___v)->___w_4);
		(&V_0)->___w_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		Vector4_t277  L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m2358 (Object_t * __this /* static, unused */, Matrix4x4_t363  ___lhs, Matrix4x4_t363  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		Vector4_t277  L_0 = Matrix4x4_GetColumn_m2340((&___lhs), 0, /*hidden argument*/NULL);
		Vector4_t277  L_1 = Matrix4x4_GetColumn_m2340((&___rhs), 0, /*hidden argument*/NULL);
		bool L_2 = Vector4_op_Equality_m2393(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t277  L_3 = Matrix4x4_GetColumn_m2340((&___lhs), 1, /*hidden argument*/NULL);
		Vector4_t277  L_4 = Matrix4x4_GetColumn_m2340((&___rhs), 1, /*hidden argument*/NULL);
		bool L_5 = Vector4_op_Equality_m2393(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t277  L_6 = Matrix4x4_GetColumn_m2340((&___lhs), 2, /*hidden argument*/NULL);
		Vector4_t277  L_7 = Matrix4x4_GetColumn_m2340((&___rhs), 2, /*hidden argument*/NULL);
		bool L_8 = Vector4_op_Equality_m2393(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t277  L_9 = Matrix4x4_GetColumn_m2340((&___lhs), 3, /*hidden argument*/NULL);
		Vector4_t277  L_10 = Matrix4x4_GetColumn_m2340((&___rhs), 3, /*hidden argument*/NULL);
		bool L_11 = Vector4_op_Equality_m2393(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Inequality_m2359 (Object_t * __this /* static, unused */, Matrix4x4_t363  ___lhs, Matrix4x4_t363  ___rhs, const MethodInfo* method)
{
	{
		Matrix4x4_t363  L_0 = ___lhs;
		Matrix4x4_t363  L_1 = ___rhs;
		bool L_2 = Matrix4x4_op_Equality_m2358(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Bounds__ctor_m2002 (Bounds_t224 * __this, Vector3_t10  ___center, Vector3_t10  ___size, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___center;
		__this->___m_Center_0 = L_0;
		Vector3_t10  L_1 = ___size;
		Vector3_t10  L_2 = Vector3_op_Multiply_m107(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.Bounds::GetHashCode()
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
extern "C" int32_t Bounds_GetHashCode_m2360 (Bounds_t224 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	Vector3_t10  V_1 = {0};
	{
		Vector3_t10  L_0 = Bounds_get_center_m2004(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector3_GetHashCode_m2302((&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_2 = Bounds_get_extents_m2362(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector3_GetHashCode_m2302((&V_1), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Bounds_t224_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" bool Bounds_Equals_m2361 (Bounds_t224 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bounds_t224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t224  V_0 = {0};
	Vector3_t10  V_1 = {0};
	Vector3_t10  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Bounds_t224_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Bounds_t224 *)((Bounds_t224 *)UnBox (L_1, Bounds_t224_il2cpp_TypeInfo_var))));
		Vector3_t10  L_2 = Bounds_get_center_m2004(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t10  L_3 = Bounds_get_center_m2004((&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t10_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector3_Equals_m2303((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t10  L_7 = Bounds_get_extents_m2362(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector3_t10  L_8 = Bounds_get_extents_m2362((&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_9 = L_8;
		Object_t * L_10 = Box(Vector3_t10_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector3_Equals_m2303((&V_2), L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t10  Bounds_get_center_m2004 (Bounds_t224 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Center_0);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m2006 (Bounds_t224 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		__this->___m_Center_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" Vector3_t10  Bounds_get_size_m1993 (Bounds_t224 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Extents_1);
		Vector3_t10  L_1 = Vector3_op_Multiply_m107(NULL /*static, unused*/, L_0, (2.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C" void Bounds_set_size_m2005 (Bounds_t224 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		Vector3_t10  L_1 = Vector3_op_Multiply_m107(NULL /*static, unused*/, L_0, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t10  Bounds_get_extents_m2362 (Bounds_t224 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Extents_1);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m2363 (Bounds_t224 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t10  Bounds_get_min_m1998 (Bounds_t224 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Bounds_get_center_m2004(__this, /*hidden argument*/NULL);
		Vector3_t10  L_1 = Bounds_get_extents_m2362(__this, /*hidden argument*/NULL);
		Vector3_t10  L_2 = Vector3_op_Subtraction_m1826(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C" void Bounds_set_min_m2364 (Bounds_t224 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		Vector3_t10  L_1 = Bounds_get_max_m2012(__this, /*hidden argument*/NULL);
		Bounds_SetMinMax_m2366(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t10  Bounds_get_max_m2012 (Bounds_t224 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Bounds_get_center_m2004(__this, /*hidden argument*/NULL);
		Vector3_t10  L_1 = Bounds_get_extents_m2362(__this, /*hidden argument*/NULL);
		Vector3_t10  L_2 = Vector3_op_Addition_m108(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C" void Bounds_set_max_m2365 (Bounds_t224 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Bounds_get_min_m1998(__this, /*hidden argument*/NULL);
		Vector3_t10  L_1 = ___value;
		Bounds_SetMinMax_m2366(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m2366 (Bounds_t224 * __this, Vector3_t10  ___min, Vector3_t10  ___max, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___max;
		Vector3_t10  L_1 = ___min;
		Vector3_t10  L_2 = Vector3_op_Subtraction_m1826(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t10  L_3 = Vector3_op_Multiply_m107(NULL /*static, unused*/, L_2, (0.5f), /*hidden argument*/NULL);
		Bounds_set_extents_m2363(__this, L_3, /*hidden argument*/NULL);
		Vector3_t10  L_4 = ___min;
		Vector3_t10  L_5 = Bounds_get_extents_m2362(__this, /*hidden argument*/NULL);
		Vector3_t10  L_6 = Vector3_op_Addition_m108(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Bounds_set_center_m2006(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m2011 (Bounds_t224 * __this, Vector3_t10  ___point, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Bounds_get_min_m1998(__this, /*hidden argument*/NULL);
		Vector3_t10  L_1 = ___point;
		Vector3_t10  L_2 = Vector3_Min_m2009(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t10  L_3 = Bounds_get_max_m2012(__this, /*hidden argument*/NULL);
		Vector3_t10  L_4 = ___point;
		Vector3_t10  L_5 = Vector3_Max_m2010(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_SetMinMax_m2366(__this, L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
extern "C" void Bounds_Encapsulate_m2367 (Bounds_t224 * __this, Bounds_t224  ___bounds, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Bounds_get_center_m2004((&___bounds), /*hidden argument*/NULL);
		Vector3_t10  L_1 = Bounds_get_extents_m2362((&___bounds), /*hidden argument*/NULL);
		Vector3_t10  L_2 = Vector3_op_Subtraction_m1826(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Bounds_Encapsulate_m2011(__this, L_2, /*hidden argument*/NULL);
		Vector3_t10  L_3 = Bounds_get_center_m2004((&___bounds), /*hidden argument*/NULL);
		Vector3_t10  L_4 = Bounds_get_extents_m2362((&___bounds), /*hidden argument*/NULL);
		Vector3_t10  L_5 = Vector3_op_Addition_m108(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_Encapsulate_m2011(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Bounds_Expand_m2368 (Bounds_t224 * __this, float ___amount, const MethodInfo* method)
{
	{
		float L_0 = ___amount;
		___amount = ((float)((float)L_0*(float)(0.5f)));
		Vector3_t10  L_1 = Bounds_get_extents_m2362(__this, /*hidden argument*/NULL);
		float L_2 = ___amount;
		float L_3 = ___amount;
		float L_4 = ___amount;
		Vector3_t10  L_5 = {0};
		Vector3__ctor_m81(&L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		Vector3_t10  L_6 = Vector3_op_Addition_m108(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		Bounds_set_extents_m2363(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C" void Bounds_Expand_m2369 (Bounds_t224 * __this, Vector3_t10  ___amount, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Bounds_get_extents_m2362(__this, /*hidden argument*/NULL);
		Vector3_t10  L_1 = ___amount;
		Vector3_t10  L_2 = Vector3_op_Multiply_m107(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		Vector3_t10  L_3 = Vector3_op_Addition_m108(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Bounds_set_extents_m2363(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" bool Bounds_Intersects_m2370 (Bounds_t224 * __this, Bounds_t224  ___bounds, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	Vector3_t10  V_1 = {0};
	Vector3_t10  V_2 = {0};
	Vector3_t10  V_3 = {0};
	Vector3_t10  V_4 = {0};
	Vector3_t10  V_5 = {0};
	Vector3_t10  V_6 = {0};
	Vector3_t10  V_7 = {0};
	Vector3_t10  V_8 = {0};
	Vector3_t10  V_9 = {0};
	Vector3_t10  V_10 = {0};
	Vector3_t10  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		Vector3_t10  L_0 = Bounds_get_min_m1998(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t10  L_2 = Bounds_get_max_m2012((&___bounds), /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___x_1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t10  L_4 = Bounds_get_max_m2012(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = ((&V_2)->___x_1);
		Vector3_t10  L_6 = Bounds_get_min_m1998((&___bounds), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t10  L_8 = Bounds_get_min_m1998(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		Vector3_t10  L_10 = Bounds_get_max_m2012((&___bounds), /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = ((&V_5)->___y_2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t10  L_12 = Bounds_get_max_m2012(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		float L_13 = ((&V_6)->___y_2);
		Vector3_t10  L_14 = Bounds_get_min_m1998((&___bounds), /*hidden argument*/NULL);
		V_7 = L_14;
		float L_15 = ((&V_7)->___y_2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t10  L_16 = Bounds_get_min_m1998(__this, /*hidden argument*/NULL);
		V_8 = L_16;
		float L_17 = ((&V_8)->___z_3);
		Vector3_t10  L_18 = Bounds_get_max_m2012((&___bounds), /*hidden argument*/NULL);
		V_9 = L_18;
		float L_19 = ((&V_9)->___z_3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t10  L_20 = Bounds_get_max_m2012(__this, /*hidden argument*/NULL);
		V_10 = L_20;
		float L_21 = ((&V_10)->___z_3);
		Vector3_t10  L_22 = Bounds_get_min_m1998((&___bounds), /*hidden argument*/NULL);
		V_11 = L_22;
		float L_23 = ((&V_11)->___z_3);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m2371 (Object_t * __this /* static, unused */, Bounds_t224  ___m, Vector3_t10  ___point, const MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_Contains_m2372(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m2372 (Object_t * __this /* static, unused */, Bounds_t224 * ___m, Vector3_t10 * ___point, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_Contains_m2372_ftn) (Bounds_t224 *, Vector3_t10 *);
	static Bounds_INTERNAL_CALL_Internal_Contains_m2372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_Contains_m2372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" bool Bounds_Contains_m2373 (Bounds_t224 * __this, Vector3_t10  ___point, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___point;
		bool L_1 = Bounds_Internal_Contains_m2371(NULL /*static, unused*/, (*(Bounds_t224 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m2374 (Object_t * __this /* static, unused */, Bounds_t224  ___m, Vector3_t10  ___point, const MethodInfo* method)
{
	{
		float L_0 = Bounds_INTERNAL_CALL_Internal_SqrDistance_m2375(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m2375 (Object_t * __this /* static, unused */, Bounds_t224 * ___m, Vector3_t10 * ___point, const MethodInfo* method)
{
	typedef float (*Bounds_INTERNAL_CALL_Internal_SqrDistance_m2375_ftn) (Bounds_t224 *, Vector3_t10 *);
	static Bounds_INTERNAL_CALL_Internal_SqrDistance_m2375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_SqrDistance_m2375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern "C" float Bounds_SqrDistance_m2376 (Bounds_t224 * __this, Vector3_t10  ___point, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___point;
		float L_1 = Bounds_Internal_SqrDistance_m2374(NULL /*static, unused*/, (*(Bounds_t224 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m2377 (Object_t * __this /* static, unused */, Ray_t29 * ___ray, Bounds_t224 * ___bounds, float* ___distance, const MethodInfo* method)
{
	{
		Ray_t29 * L_0 = ___ray;
		Bounds_t224 * L_1 = ___bounds;
		float* L_2 = ___distance;
		bool L_3 = Bounds_INTERNAL_CALL_Internal_IntersectRay_m2378(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m2378 (Object_t * __this /* static, unused */, Ray_t29 * ___ray, Bounds_t224 * ___bounds, float* ___distance, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_IntersectRay_m2378_ftn) (Ray_t29 *, Bounds_t224 *, float*);
	static Bounds_INTERNAL_CALL_Internal_IntersectRay_m2378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_IntersectRay_m2378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(___ray, ___bounds, ___distance);
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" bool Bounds_IntersectRay_m2379 (Bounds_t224 * __this, Ray_t29  ___ray, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = Bounds_Internal_IntersectRay_m2377(NULL /*static, unused*/, (&___ray), __this, (&V_0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C" bool Bounds_IntersectRay_m2380 (Bounds_t224 * __this, Ray_t29  ___ray, float* ___distance, const MethodInfo* method)
{
	{
		float* L_0 = ___distance;
		bool L_1 = Bounds_Internal_IntersectRay_m2377(NULL /*static, unused*/, (&___ray), __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t10  Bounds_Internal_GetClosestPoint_m2381 (Object_t * __this /* static, unused */, Bounds_t224 * ___bounds, Vector3_t10 * ___point, const MethodInfo* method)
{
	{
		Bounds_t224 * L_0 = ___bounds;
		Vector3_t10 * L_1 = ___point;
		Vector3_t10  L_2 = Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2382(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t10  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2382 (Object_t * __this /* static, unused */, Bounds_t224 * ___bounds, Vector3_t10 * ___point, const MethodInfo* method)
{
	typedef Vector3_t10  (*Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2382_ftn) (Bounds_t224 *, Vector3_t10 *);
	static Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___bounds, ___point);
}
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Bounds_ClosestPoint_m2383 (Bounds_t224 * __this, Vector3_t10  ___point, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Bounds_Internal_GetClosestPoint_m2381(NULL /*static, unused*/, __this, (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Bounds::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral163;
extern "C" String_t* Bounds_ToString_m2384 (Bounds_t224 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral163 = il2cpp_codegen_string_literal_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 2));
		Vector3_t10  L_1 = (__this->___m_Center_0);
		Vector3_t10  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t10_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		Vector3_t10  L_5 = (__this->___m_Extents_1);
		Vector3_t10  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t10_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral163, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String UnityEngine.Bounds::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral163;
extern "C" String_t* Bounds_ToString_m2385 (Bounds_t224 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		_stringLiteral163 = il2cpp_codegen_string_literal_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 2));
		Vector3_t10 * L_1 = &(__this->___m_Center_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Vector3_ToString_m2306(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		Vector3_t10 * L_5 = &(__this->___m_Extents_1);
		String_t* L_6 = ___format;
		String_t* L_7 = Vector3_ToString_m2306(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral163, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m2386 (Object_t * __this /* static, unused */, Bounds_t224  ___lhs, Bounds_t224  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Vector3_t10  L_0 = Bounds_get_center_m2004((&___lhs), /*hidden argument*/NULL);
		Vector3_t10  L_1 = Bounds_get_center_m2004((&___rhs), /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Equality_m2310(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t10  L_3 = Bounds_get_extents_m2362((&___lhs), /*hidden argument*/NULL);
		Vector3_t10  L_4 = Bounds_get_extents_m2362((&___rhs), /*hidden argument*/NULL);
		bool L_5 = Vector3_op_Equality_m2310(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Inequality_m1996 (Object_t * __this /* static, unused */, Bounds_t224  ___lhs, Bounds_t224  ___rhs, const MethodInfo* method)
{
	{
		Bounds_t224  L_0 = ___lhs;
		Bounds_t224  L_1 = ___rhs;
		bool L_2 = Bounds_op_Equality_m2386(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector4__ctor_m1797 (Vector4_t277 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		float L_3 = ___w;
		__this->___w_4 = L_3;
		return;
	}
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral164;
extern "C" float Vector4_get_Item_m1860 (Vector4_t277 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral164 = il2cpp_codegen_string_literal_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0024;
		}
		if (L_1 == 2)
		{
			goto IL_002b;
		}
		if (L_1 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0024:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_002b:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_0032:
	{
		float L_5 = (__this->___w_4);
		return L_5;
	}

IL_0039:
	{
		IndexOutOfRangeException_t595 * L_6 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_6, _stringLiteral164, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral164;
extern "C" void Vector4_set_Item_m1862 (Vector4_t277 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral164 = il2cpp_codegen_string_literal_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0035;
		}
		if (L_1 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0058;
	}

IL_0029:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0058;
	}

IL_0035:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0058;
	}

IL_0041:
	{
		float L_5 = ___value;
		__this->___w_4 = L_5;
		goto IL_0058;
	}

IL_004d:
	{
		IndexOutOfRangeException_t595 * L_6 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_6, _stringLiteral164, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector4_GetHashCode_m2387 (Vector4_t277 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3072(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3072(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m3072(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m3072(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector4_t277_il2cpp_TypeInfo_var;
extern "C" bool Vector4_Equals_m2388 (Vector4_t277 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t277  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector4_t277_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_1, Vector4_t277_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m1760(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m1760(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m1760(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_4);
		float L_12 = ((&V_0)->___w_4);
		bool L_13 = Single_Equals_m1760(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral158;
extern "C" String_t* Vector4_ToString_m2389 (Vector4_t277 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		_stringLiteral158 = il2cpp_codegen_string_literal_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t321_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t321_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t321_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t321_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral158, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" float Vector4_Dot_m2390 (Object_t * __this /* static, unused */, Vector4_t277  ___a, Vector4_t277  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" float Vector4_SqrMagnitude_m2391 (Object_t * __this /* static, unused */, Vector4_t277  ___a, const MethodInfo* method)
{
	{
		Vector4_t277  L_0 = ___a;
		Vector4_t277  L_1 = ___a;
		float L_2 = Vector4_Dot_m2390(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" float Vector4_get_sqrMagnitude_m1843 (Vector4_t277 * __this, const MethodInfo* method)
{
	{
		float L_0 = Vector4_Dot_m2390(NULL /*static, unused*/, (*(Vector4_t277 *)__this), (*(Vector4_t277 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" Vector4_t277  Vector4_get_zero_m1847 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector4_t277  L_0 = {0};
		Vector4__ctor_m1797(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t277  Vector4_op_Subtraction_m2392 (Object_t * __this /* static, unused */, Vector4_t277  ___a, Vector4_t277  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		Vector4_t277  L_8 = {0};
		Vector4__ctor_m1797(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t277  Vector4_op_Division_m1857 (Object_t * __this /* static, unused */, Vector4_t277  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t277  L_8 = {0};
		Vector4__ctor_m1797(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m2393 (Object_t * __this /* static, unused */, Vector4_t277  ___lhs, Vector4_t277  ___rhs, const MethodInfo* method)
{
	{
		Vector4_t277  L_0 = ___lhs;
		Vector4_t277  L_1 = ___rhs;
		Vector4_t277  L_2 = Vector4_op_Subtraction_m2392(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector4_SqrMagnitude_m2391(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Ray__ctor_m2394 (Ray_t29 * __this, Vector3_t10  ___origin, Vector3_t10  ___direction, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___origin;
		__this->___m_Origin_0 = L_0;
		Vector3_t10  L_1 = Vector3_get_normalized_m2024((&___direction), /*hidden argument*/NULL);
		__this->___m_Direction_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" Vector3_t10  Ray_get_origin_m1632 (Ray_t29 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Origin_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t10  Ray_get_direction_m1633 (Ray_t29 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Direction_1);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" Vector3_t10  Ray_GetPoint_m1905 (Ray_t29 * __this, float ___distance, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Origin_0);
		Vector3_t10  L_1 = (__this->___m_Direction_1);
		float L_2 = ___distance;
		Vector3_t10  L_3 = Vector3_op_Multiply_m107(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t10  L_4 = Vector3_op_Addition_m108(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.Ray::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral165;
extern "C" String_t* Ray_ToString_m2395 (Ray_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		_stringLiteral165 = il2cpp_codegen_string_literal_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 2));
		Vector3_t10  L_1 = (__this->___m_Origin_0);
		Vector3_t10  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t10_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		Vector3_t10  L_5 = (__this->___m_Direction_1);
		Vector3_t10  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t10_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral165, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Plane__ctor_m1903 (Plane_t355 * __this, Vector3_t10  ___inNormal, Vector3_t10  ___inPoint, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___inNormal;
		Vector3_t10  L_1 = Vector3_Normalize_m2304(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___m_Normal_0 = L_1;
		Vector3_t10  L_2 = ___inNormal;
		Vector3_t10  L_3 = ___inPoint;
		float L_4 = Vector3_Dot_m1824(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___m_Distance_1 = ((-L_4));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t10  Plane_get_normal_m2396 (Plane_t355 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Normal_0);
		return L_0;
	}
}
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m2397 (Plane_t355 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" bool Plane_Raycast_m1904 (Plane_t355 * __this, Ray_t29  ___ray, float* ___enter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t10  L_0 = Ray_get_direction_m1633((&___ray), /*hidden argument*/NULL);
		Vector3_t10  L_1 = Plane_get_normal_m2396(__this, /*hidden argument*/NULL);
		float L_2 = Vector3_Dot_m1824(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t10  L_3 = Ray_get_origin_m1632((&___ray), /*hidden argument*/NULL);
		Vector3_t10  L_4 = Plane_get_normal_m2396(__this, /*hidden argument*/NULL);
		float L_5 = Vector3_Dot_m1824(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Plane_get_distance_m2397(__this, /*hidden argument*/NULL);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_7, (0.0f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		float* L_9 = ___enter;
		*((float*)(L_9)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		float* L_10 = ___enter;
		float L_11 = V_1;
		float L_12 = V_0;
		*((float*)(L_10)) = (float)((float)((float)L_11/(float)L_12));
		float* L_13 = ___enter;
		return ((((float)(*((float*)L_13))) > ((float)(0.0f)))? 1 : 0);
	}
}
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternal.h"
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternalMethodDeclarations.h"
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern TypeInfo* MathfInternal_t427_il2cpp_TypeInfo_var;
extern "C" void MathfInternal__cctor_m2398 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t427_StaticFields*)MathfInternal_t427_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0 = (1.17549435E-38f);
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t427_StaticFields*)MathfInternal_t427_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1 = (1.401298E-45f);
		float L_0 = ((MathfInternal_t427_StaticFields*)MathfInternal_t427_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t427_StaticFields*)MathfInternal_t427_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Void UnityEngine.Mathf::.cctor()
extern TypeInfo* MathfInternal_t427_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" void Mathf__cctor_m2399 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t427_il2cpp_TypeInfo_var);
		bool L_0 = ((MathfInternal_t427_StaticFields*)MathfInternal_t427_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t427_il2cpp_TypeInfo_var);
		float L_1 = ((MathfInternal_t427_StaticFields*)MathfInternal_t427_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t427_il2cpp_TypeInfo_var);
		float L_2 = ((MathfInternal_t427_StaticFields*)MathfInternal_t427_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((Mathf_t43_StaticFields*)Mathf_t43_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0 = G_B3_0;
		return;
	}
}
// System.Single UnityEngine.Mathf::Sin(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float Mathf_Sin_m2400 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern "C" float Mathf_Cos_m2401 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = cos((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m2402 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sqrt((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m2403 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m2060 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Mathf_Min_m1923 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m2028 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m1921 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern "C" float Mathf_Pow_m2404 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" float Mathf_Log_m2065 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = Math_Log_m3080(NULL /*static, unused*/, (((double)L_0)), (((double)L_1)), /*hidden argument*/NULL);
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m2405 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m2406 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" int32_t Mathf_CeilToInt_m2075 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = ceil((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" int32_t Mathf_FloorToInt_m2077 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" int32_t Mathf_RoundToInt_m1850 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C" float Mathf_Sign_m2001 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m1846 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___min;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = ___value;
		float L_4 = ___max;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		float L_6 = ___value;
		return L_6;
	}
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Mathf_Clamp_m1711 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = ___min;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_3 = ___value;
		int32_t L_4 = ___max;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		int32_t L_6 = ___value;
		return L_6;
	}
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m1838 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = ___value;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = ___value;
		return L_2;
	}
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" float Mathf_Lerp_m1656 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___a;
		float L_1 = ___b;
		float L_2 = ___a;
		float L_3 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m1838(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" bool Mathf_Approximately_m1607 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___b;
		float L_1 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___a;
		float L_4 = fabsf(L_3);
		float L_5 = ___b;
		float L_6 = fabsf(L_5);
		float L_7 = Mathf_Max_m2028(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		float L_8 = ((Mathf_t43_StaticFields*)Mathf_t43_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		float L_9 = Mathf_Max_m2028(NULL /*static, unused*/, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), /*hidden argument*/NULL);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" float Mathf_SmoothDamp_m1994 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = ___smoothTime;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m2028(NULL /*static, unused*/, (0.0001f), L_0, /*hidden argument*/NULL);
		___smoothTime = L_1;
		float L_2 = ___smoothTime;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = ___deltaTime;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		float L_11 = ___current;
		float L_12 = ___target;
		V_3 = ((float)((float)L_11-(float)L_12));
		float L_13 = ___target;
		V_4 = L_13;
		float L_14 = ___maxSpeed;
		float L_15 = ___smoothTime;
		V_5 = ((float)((float)L_14*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_5;
		float L_18 = V_5;
		float L_19 = Mathf_Clamp_m1846(NULL /*static, unused*/, L_16, ((-L_17)), L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = ___current;
		float L_21 = V_3;
		___target = ((float)((float)L_20-(float)L_21));
		float* L_22 = ___currentVelocity;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___deltaTime;
		V_6 = ((float)((float)((float)((float)(*((float*)L_22))+(float)((float)((float)L_23*(float)L_24))))*(float)L_25));
		float* L_26 = ___currentVelocity;
		float* L_27 = ___currentVelocity;
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30 = V_2;
		*((float*)(L_26)) = (float)((float)((float)((float)((float)(*((float*)L_27))-(float)((float)((float)L_28*(float)L_29))))*(float)L_30));
		float L_31 = ___target;
		float L_32 = V_3;
		float L_33 = V_6;
		float L_34 = V_2;
		V_7 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_32+(float)L_33))*(float)L_34))));
		float L_35 = V_4;
		float L_36 = ___current;
		float L_37 = V_7;
		float L_38 = V_4;
		if ((!(((uint32_t)((((float)((float)((float)L_35-(float)L_36))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)((((float)L_37) > ((float)L_38))? 1 : 0)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_39 = V_4;
		V_7 = L_39;
		float* L_40 = ___currentVelocity;
		float L_41 = V_7;
		float L_42 = V_4;
		float L_43 = ___deltaTime;
		*((float*)(L_40)) = (float)((float)((float)((float)((float)L_41-(float)L_42))/(float)L_43));
	}

IL_00a0:
	{
		float L_44 = V_7;
		return L_44;
	}
}
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" float Mathf_Repeat_m1871 (Object_t * __this /* static, unused */, float ___t, float ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		float L_1 = ___t;
		float L_2 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_3 = floorf(((float)((float)L_1/(float)L_2)));
		float L_4 = ___length;
		return ((float)((float)L_0-(float)((float)((float)L_3*(float)L_4))));
	}
}
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" float Mathf_InverseLerp_m1870 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		float L_2 = ___value;
		float L_3 = ___a;
		float L_4 = ___b;
		float L_5 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp01_m1838(NULL /*static, unused*/, ((float)((float)((float)((float)L_2-(float)L_3))/(float)((float)((float)L_4-(float)L_5)))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0014:
	{
		return (0.0f);
	}
}
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformPropertiesMethodDeclarations.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTrackerMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
extern "C" void DrivenRectTransformTracker_Add_m1987 (DrivenRectTransformTracker_t218 * __this, Object_t38 * ___driver, RectTransform_t138 * ___rectTransform, int32_t ___drivenProperties, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m1986 (DrivenRectTransformTracker_t218 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_EdgeMethodDeclarations.h"
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_AxisMethodDeclarations.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ReapplyDrivenProperties__ctor_m2090 (ReapplyDrivenProperties_t377 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
extern "C" void ReapplyDrivenProperties_Invoke_m2407 (ReapplyDrivenProperties_t377 * __this, RectTransform_t138 * ___driven, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReapplyDrivenProperties_Invoke_m2407((ReapplyDrivenProperties_t377 *)__this->___prev_9,___driven, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RectTransform_t138 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RectTransform_t138 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t377(Il2CppObject* delegate, RectTransform_t138 * ___driven)
{
	// Marshaling of parameter '___driven' to native representation
	RectTransform_t138 * ____driven_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m2408 (ReapplyDrivenProperties_t377 * __this, RectTransform_t138 * ___driven, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C" void ReapplyDrivenProperties_EndInvoke_m2409 (ReapplyDrivenProperties_t377 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.Void UnityEngine.RectTransform::add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* RectTransform_t138_il2cpp_TypeInfo_var;
extern TypeInfo* ReapplyDrivenProperties_t377_il2cpp_TypeInfo_var;
extern "C" void RectTransform_add_reapplyDrivenProperties_m2091 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t377 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		ReapplyDrivenProperties_t377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(261);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t377 * L_0 = ((RectTransform_t138_StaticFields*)RectTransform_t138_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t377 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((RectTransform_t138_StaticFields*)RectTransform_t138_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t377 *)CastclassSealed(L_2, ReapplyDrivenProperties_t377_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.RectTransform::remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern TypeInfo* RectTransform_t138_il2cpp_TypeInfo_var;
extern TypeInfo* ReapplyDrivenProperties_t377_il2cpp_TypeInfo_var;
extern "C" void RectTransform_remove_reapplyDrivenProperties_m2410 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t377 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		ReapplyDrivenProperties_t377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(261);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t377 * L_0 = ((RectTransform_t138_StaticFields*)RectTransform_t138_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t377 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((RectTransform_t138_StaticFields*)RectTransform_t138_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t377 *)CastclassSealed(L_2, ReapplyDrivenProperties_t377_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern "C" Rect_t191  RectTransform_get_rect_m1729 (RectTransform_t138 * __this, const MethodInfo* method)
{
	Rect_t191  V_0 = {0};
	{
		RectTransform_INTERNAL_get_rect_m2411(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t191  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void RectTransform_INTERNAL_get_rect_m2411 (RectTransform_t138 * __this, Rect_t191 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_rect_m2411_ftn) (RectTransform_t138 *, Rect_t191 *);
	static RectTransform_INTERNAL_get_rect_m2411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_rect_m2411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
extern "C" Vector2_t11  RectTransform_get_anchorMin_m1742 (RectTransform_t138 * __this, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMin_m2412(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void RectTransform_set_anchorMin_m1682 (RectTransform_t138 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMin_m2413(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMin_m2412 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMin_m2412_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_get_anchorMin_m2412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMin_m2412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMin_m2413 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMin_m2413_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_set_anchorMin_m2413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMin_m2413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
extern "C" Vector2_t11  RectTransform_get_anchorMax_m1743 (RectTransform_t138 * __this, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMax_m2414(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMax_m1684 (RectTransform_t138 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMax_m2415(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMax_m2414 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMax_m2414_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_get_anchorMax_m2414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMax_m2414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMax_m2415 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMax_m2415_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_set_anchorMax_m2415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMax_m2415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C" Vector2_t11  RectTransform_get_anchoredPosition_m1744 (RectTransform_t138 * __this, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchoredPosition_m2416(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchoredPosition_m1685 (RectTransform_t138 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchoredPosition_m2417(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchoredPosition_m2416 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchoredPosition_m2416_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_get_anchoredPosition_m2416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchoredPosition_m2416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchoredPosition_m2417 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchoredPosition_m2417_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_set_anchoredPosition_m2417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchoredPosition_m2417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" Vector2_t11  RectTransform_get_sizeDelta_m1699 (RectTransform_t138 * __this, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		RectTransform_INTERNAL_get_sizeDelta_m2418(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" void RectTransform_set_sizeDelta_m1676 (RectTransform_t138 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_sizeDelta_m2419(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_sizeDelta_m2418 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_sizeDelta_m2418_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_get_sizeDelta_m2418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_sizeDelta_m2418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_sizeDelta_m2419 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_sizeDelta_m2419_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_set_sizeDelta_m2419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_sizeDelta_m2419_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C" Vector2_t11  RectTransform_get_pivot_m1745 (RectTransform_t138 * __this, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		RectTransform_INTERNAL_get_pivot_m2420(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern "C" void RectTransform_set_pivot_m1698 (RectTransform_t138 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_pivot_m2421(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_pivot_m2420 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_pivot_m2420_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_get_pivot_m2420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_pivot_m2420_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_pivot_m2421 (RectTransform_t138 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_pivot_m2421_ftn) (RectTransform_t138 *, Vector2_t11 *);
	static RectTransform_INTERNAL_set_pivot_m2421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_pivot_m2421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::SendReapplyDrivenProperties(UnityEngine.RectTransform)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"
extern TypeInfo* RectTransform_t138_il2cpp_TypeInfo_var;
extern "C" void RectTransform_SendReapplyDrivenProperties_m2422 (Object_t * __this /* static, unused */, RectTransform_t138 * ___driven, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t377 * L_0 = ((RectTransform_t138_StaticFields*)RectTransform_t138_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReapplyDrivenProperties_t377 * L_1 = ((RectTransform_t138_StaticFields*)RectTransform_t138_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		RectTransform_t138 * L_2 = ___driven;
		NullCheck(L_1);
		ReapplyDrivenProperties_Invoke_m2407(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral166;
extern "C" void RectTransform_GetLocalCorners_m2423 (RectTransform_t138 * __this, Vector3U5BU5D_t175* ___fourCornersArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral166 = il2cpp_codegen_string_literal_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t191  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Vector3U5BU5D_t175* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t175* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m1528(NULL /*static, unused*/, _stringLiteral166, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		Rect_t191  L_2 = RectTransform_get_rect_m1729(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_x_m1795((&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_y_m1796((&V_0), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_xMax_m1866((&V_0), /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = Rect_get_yMax_m1867((&V_0), /*hidden argument*/NULL);
		V_4 = L_6;
		Vector3U5BU5D_t175* L_7 = ___fourCornersArray;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		float L_8 = V_1;
		float L_9 = V_2;
		Vector3_t10  L_10 = {0};
		Vector3__ctor_m81(&L_10, L_8, L_9, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_7, 0, sizeof(Vector3_t10 ))) = L_10;
		Vector3U5BU5D_t175* L_11 = ___fourCornersArray;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		float L_12 = V_1;
		float L_13 = V_4;
		Vector3_t10  L_14 = {0};
		Vector3__ctor_m81(&L_14, L_12, L_13, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_11, 1, sizeof(Vector3_t10 ))) = L_14;
		Vector3U5BU5D_t175* L_15 = ___fourCornersArray;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		float L_16 = V_3;
		float L_17 = V_4;
		Vector3_t10  L_18 = {0};
		Vector3__ctor_m81(&L_18, L_16, L_17, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_15, 2, sizeof(Vector3_t10 ))) = L_18;
		Vector3U5BU5D_t175* L_19 = ___fourCornersArray;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		float L_20 = V_3;
		float L_21 = V_2;
		Vector3_t10  L_22 = {0};
		Vector3__ctor_m81(&L_22, L_20, L_21, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_19, 3, sizeof(Vector3_t10 ))) = L_22;
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral167;
extern "C" void RectTransform_GetWorldCorners_m1738 (RectTransform_t138 * __this, Vector3U5BU5D_t175* ___fourCornersArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral167 = il2cpp_codegen_string_literal_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t9 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Vector3U5BU5D_t175* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t175* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m1528(NULL /*static, unused*/, _stringLiteral167, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		Vector3U5BU5D_t175* L_2 = ___fourCornersArray;
		RectTransform_GetLocalCorners_m2423(__this, L_2, /*hidden argument*/NULL);
		Transform_t9 * L_3 = Component_get_transform_m64(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0051;
	}

IL_002f:
	{
		Vector3U5BU5D_t175* L_4 = ___fourCornersArray;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Transform_t9 * L_6 = V_0;
		Vector3U5BU5D_t175* L_7 = ___fourCornersArray;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		NullCheck(L_6);
		Vector3_t10  L_9 = Transform_TransformPoint_m2026(L_6, (*(Vector3_t10 *)((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_7, L_8, sizeof(Vector3_t10 )))), /*hidden argument*/NULL);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_4, L_5, sizeof(Vector3_t10 ))) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" void RectTransform_set_offsetMin_m1693 (RectTransform_t138 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		Vector2_t11  L_0 = ___value;
		Vector2_t11  L_1 = RectTransform_get_anchoredPosition_m1744(__this, /*hidden argument*/NULL);
		Vector2_t11  L_2 = RectTransform_get_sizeDelta_m1699(__this, /*hidden argument*/NULL);
		Vector2_t11  L_3 = RectTransform_get_pivot_m1745(__this, /*hidden argument*/NULL);
		Vector2_t11  L_4 = Vector2_Scale_m1945(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Vector2_t11  L_5 = Vector2_op_Subtraction_m116(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		Vector2_t11  L_6 = Vector2_op_Subtraction_m116(NULL /*static, unused*/, L_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector2_t11  L_7 = RectTransform_get_sizeDelta_m1699(__this, /*hidden argument*/NULL);
		Vector2_t11  L_8 = V_0;
		Vector2_t11  L_9 = Vector2_op_Subtraction_m116(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m1676(__this, L_9, /*hidden argument*/NULL);
		Vector2_t11  L_10 = RectTransform_get_anchoredPosition_m1744(__this, /*hidden argument*/NULL);
		Vector2_t11  L_11 = V_0;
		Vector2_t11  L_12 = Vector2_get_one_m1683(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t11  L_13 = RectTransform_get_pivot_m1745(__this, /*hidden argument*/NULL);
		Vector2_t11  L_14 = Vector2_op_Subtraction_m116(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Vector2_t11  L_15 = Vector2_Scale_m1945(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		Vector2_t11  L_16 = Vector2_op_Addition_m1732(NULL /*static, unused*/, L_10, L_15, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m1685(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_offsetMax_m1694 (RectTransform_t138 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		Vector2_t11  L_0 = ___value;
		Vector2_t11  L_1 = RectTransform_get_anchoredPosition_m1744(__this, /*hidden argument*/NULL);
		Vector2_t11  L_2 = RectTransform_get_sizeDelta_m1699(__this, /*hidden argument*/NULL);
		Vector2_t11  L_3 = Vector2_get_one_m1683(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t11  L_4 = RectTransform_get_pivot_m1745(__this, /*hidden argument*/NULL);
		Vector2_t11  L_5 = Vector2_op_Subtraction_m116(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector2_t11  L_6 = Vector2_Scale_m1945(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		Vector2_t11  L_7 = Vector2_op_Addition_m1732(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		Vector2_t11  L_8 = Vector2_op_Subtraction_m116(NULL /*static, unused*/, L_0, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector2_t11  L_9 = RectTransform_get_sizeDelta_m1699(__this, /*hidden argument*/NULL);
		Vector2_t11  L_10 = V_0;
		Vector2_t11  L_11 = Vector2_op_Addition_m1732(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m1676(__this, L_11, /*hidden argument*/NULL);
		Vector2_t11  L_12 = RectTransform_get_anchoredPosition_m1744(__this, /*hidden argument*/NULL);
		Vector2_t11  L_13 = V_0;
		Vector2_t11  L_14 = RectTransform_get_pivot_m1745(__this, /*hidden argument*/NULL);
		Vector2_t11  L_15 = Vector2_Scale_m1945(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		Vector2_t11  L_16 = Vector2_op_Addition_m1732(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m1685(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge,System.Single,System.Single)
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void RectTransform_SetInsetAndSizeFromParentEdge_m2088 (RectTransform_t138 * __this, int32_t ___edge, float ___inset, float ___size, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector2_t11  V_3 = {0};
	Vector2_t11  V_4 = {0};
	Vector2_t11  V_5 = {0};
	Vector2_t11  V_6 = {0};
	Vector2_t11  V_7 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	Vector2_t11 * G_B12_1 = {0};
	int32_t G_B11_0 = 0;
	Vector2_t11 * G_B11_1 = {0};
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	Vector2_t11 * G_B13_2 = {0};
	{
		int32_t L_0 = ___edge;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___edge;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_000e:
	{
		G_B4_0 = 1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B4_0;
		int32_t L_2 = ___edge;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___edge;
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B7_0 = 1;
	}

IL_0024:
	{
		V_1 = G_B7_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B10_0 = 0;
	}

IL_0032:
	{
		V_2 = (((float)G_B10_0));
		Vector2_t11  L_5 = RectTransform_get_anchorMin_m1742(__this, /*hidden argument*/NULL);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		Vector2_set_Item_m1869((&V_3), L_6, L_7, /*hidden argument*/NULL);
		Vector2_t11  L_8 = V_3;
		RectTransform_set_anchorMin_m1682(__this, L_8, /*hidden argument*/NULL);
		Vector2_t11  L_9 = RectTransform_get_anchorMax_m1743(__this, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		Vector2_set_Item_m1869((&V_3), L_10, L_11, /*hidden argument*/NULL);
		Vector2_t11  L_12 = V_3;
		RectTransform_set_anchorMax_m1684(__this, L_12, /*hidden argument*/NULL);
		Vector2_t11  L_13 = RectTransform_get_sizeDelta_m1699(__this, /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = ___size;
		Vector2_set_Item_m1869((&V_4), L_14, L_15, /*hidden argument*/NULL);
		Vector2_t11  L_16 = V_4;
		RectTransform_set_sizeDelta_m1676(__this, L_16, /*hidden argument*/NULL);
		Vector2_t11  L_17 = RectTransform_get_anchoredPosition_m1744(__this, /*hidden argument*/NULL);
		V_5 = L_17;
		int32_t L_18 = V_0;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		G_B11_1 = (&V_5);
		if (!L_19)
		{
			G_B12_0 = L_18;
			G_B12_1 = (&V_5);
			goto IL_00ac;
		}
	}
	{
		float L_20 = ___inset;
		float L_21 = ___size;
		Vector2_t11  L_22 = RectTransform_get_pivot_m1745(__this, /*hidden argument*/NULL);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = Vector2_get_Item_m1861((&V_6), L_23, /*hidden argument*/NULL);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = ___inset;
		float L_26 = ___size;
		Vector2_t11  L_27 = RectTransform_get_pivot_m1745(__this, /*hidden argument*/NULL);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = Vector2_get_Item_m1861((&V_7), L_28, /*hidden argument*/NULL);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		Vector2_set_Item_m1869(G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/NULL);
		Vector2_t11  L_30 = V_5;
		RectTransform_set_anchoredPosition_m1685(__this, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
extern "C" void RectTransform_SetSizeWithCurrentAnchors_m2063 (RectTransform_t138 * __this, int32_t ___axis, float ___size, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t11  V_1 = {0};
	Vector2_t11  V_2 = {0};
	Vector2_t11  V_3 = {0};
	Vector2_t11  V_4 = {0};
	{
		int32_t L_0 = ___axis;
		V_0 = L_0;
		Vector2_t11  L_1 = RectTransform_get_sizeDelta_m1699(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = ___size;
		Vector2_t11  L_4 = RectTransform_GetParentSize_m2424(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = Vector2_get_Item_m1861((&V_2), L_5, /*hidden argument*/NULL);
		Vector2_t11  L_7 = RectTransform_get_anchorMax_m1743(__this, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = Vector2_get_Item_m1861((&V_3), L_8, /*hidden argument*/NULL);
		Vector2_t11  L_10 = RectTransform_get_anchorMin_m1742(__this, /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = Vector2_get_Item_m1861((&V_4), L_11, /*hidden argument*/NULL);
		Vector2_set_Item_m1869((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), /*hidden argument*/NULL);
		Vector2_t11  L_13 = V_1;
		RectTransform_set_sizeDelta_m1676(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransform::GetParentSize()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* RectTransform_t138_il2cpp_TypeInfo_var;
extern "C" Vector2_t11  RectTransform_GetParentSize_m2424 (RectTransform_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t138 * V_0 = {0};
	Rect_t191  V_1 = {0};
	{
		Transform_t9 * L_0 = Transform_get_parent_m65(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t138 *)IsInstSealed(L_0, RectTransform_t138_il2cpp_TypeInfo_var));
		RectTransform_t138 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m1526(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Vector2_t11  L_3 = Vector2_get_zero_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		RectTransform_t138 * L_4 = V_0;
		NullCheck(L_4);
		Rect_t191  L_5 = RectTransform_get_rect_m1729(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector2_t11  L_6 = Rect_get_size_m1734((&V_1), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequest.h"
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequestMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// System.Void UnityEngine.ResourceRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void ResourceRequest__ctor_m2425 (ResourceRequest_t431 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2486(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
extern "C" Object_t38 * ResourceRequest_get_asset_m2426 (ResourceRequest_t431 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Path_1);
		Type_t * L_1 = (__this->___m_Type_2);
		Object_t38 * L_2 = Resources_Load_m2427(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
extern "C" Object_t38 * Resources_Load_m2427 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method)
{
	typedef Object_t38 * (*Resources_Load_m2427_ftn) (String_t*, Type_t *);
	static Resources_Load_m2427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m2427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(___path, ___systemTypeInstance);
}
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Void UnityEngine.SerializePrivateVariables::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SerializePrivateVariables__ctor_m2428 (SerializePrivateVariables_t433 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
// System.Void UnityEngine.SerializeField::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SerializeField__ctor_m2429 (SerializeField_t435 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" Shader_t46 * Shader_Find_m121 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef Shader_t46 * (*Shader_Find_m121_ftn) (String_t*);
	static Shader_Find_m121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_Find_m121_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m2430 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m2430_ftn) (String_t*);
	static Shader_PropertyToID_m2430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m2430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern "C" void Material__ctor_m122 (Material_t19 * __this, Shader_t46 * ___shader, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		Shader_t46 * L_0 = ___shader;
		Material_Internal_CreateWithShader_m2438(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void Material__ctor_m2039 (Material_t19 * __this, Material_t19 * ___source, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		Material_t19 * L_0 = ___source;
		Material_Internal_CreateWithMaterial_m2439(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern Il2CppCodeGenString* _stringLiteral168;
extern "C" Texture_t209 * Material_get_mainTexture_m2044 (Material_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral168 = il2cpp_codegen_string_literal_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture_t209 * L_0 = Material_GetTexture_m2433(__this, _stringLiteral168, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern "C" void Material_SetColor_m123 (Material_t19 * __this, String_t* ___propertyName, Color_t27  ___color, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2430(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t27  L_2 = ___color;
		Material_SetColor_m2431(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Material_SetColor_m2431 (Material_t19 * __this, int32_t ___nameID, Color_t27  ___color, const MethodInfo* method)
{
	{
		int32_t L_0 = ___nameID;
		Material_INTERNAL_CALL_SetColor_m2432(NULL /*static, unused*/, __this, L_0, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m2432 (Object_t * __this /* static, unused */, Material_t19 * ___self, int32_t ___nameID, Color_t27 * ___color, const MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetColor_m2432_ftn) (Material_t19 *, int32_t, Color_t27 *);
	static Material_INTERNAL_CALL_SetColor_m2432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetColor_m2432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___nameID, ___color);
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t209 * Material_GetTexture_m2433 (Material_t19 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2430(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture_t209 * L_2 = Material_GetTexture_m2434(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t209 * Material_GetTexture_m2434 (Material_t19 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef Texture_t209 * (*Material_GetTexture_m2434_ftn) (Material_t19 *, int32_t);
	static Material_GetTexture_m2434_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m2434_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Material_SetFloat_m2435 (Material_t19 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2430(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___value;
		Material_SetFloat_m2436(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m2436 (Material_t19 * __this, int32_t ___nameID, float ___value, const MethodInfo* method)
{
	typedef void (*Material_SetFloat_m2436_ftn) (Material_t19 *, int32_t, float);
	static Material_SetFloat_m2436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m2436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m2041 (Material_t19 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = ___value;
		Material_SetFloat_m2435(__this, L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m2037 (Material_t19 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2430(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Material_HasProperty_m2437(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m2437 (Material_t19 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m2437_ftn) (Material_t19 *, int32_t);
	static Material_HasProperty_m2437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m2437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m2438 (Object_t * __this /* static, unused */, Material_t19 * ___mono, Shader_t46 * ___shader, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithShader_m2438_ftn) (Material_t19 *, Shader_t46 *);
	static Material_Internal_CreateWithShader_m2438_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithShader_m2438_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)");
	_il2cpp_icall_func(___mono, ___shader);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m2439 (Object_t * __this /* static, unused */, Material_t19 * ___mono, Material_t19 * ___source, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m2439_ftn) (Material_t19 *, Material_t19 *);
	static Material_Internal_CreateWithMaterial_m2439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m2439_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(___mono, ___source);
}
// UnityEngine.SortingLayer
#include "UnityEngine_UnityEngine_SortingLayer.h"
// UnityEngine.SortingLayer
#include "UnityEngine_UnityEngine_SortingLayerMethodDeclarations.h"
// System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t SortingLayer_GetLayerValueFromID_m1533 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	typedef int32_t (*SortingLayer_GetLayerValueFromID_m1533_ftn) (int32_t);
	static SortingLayer_GetLayerValueFromID_m1533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingLayer_GetLayerValueFromID_m1533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)");
	return _il2cpp_icall_func(___id);
}
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"
extern "C" void SphericalHarmonicsL2_Clear_m2440 (SphericalHarmonicsL2_t437 * __this, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m2441(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m2441 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t437 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t437 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2442(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2442 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t437 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2442_ftn) (SphericalHarmonicsL2_t437 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m2443 (SphericalHarmonicsL2_t437 * __this, Color_t27  ___color, const MethodInfo* method)
{
	{
		Color_t27  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m2444(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m2444 (Object_t * __this /* static, unused */, Color_t27  ___color, SphericalHarmonicsL2_t437 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t437 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2445(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2445 (Object_t * __this /* static, unused */, Color_t27 * ___color, SphericalHarmonicsL2_t437 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2445_ftn) (Color_t27 *, SphericalHarmonicsL2_t437 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m2446 (SphericalHarmonicsL2_t437 * __this, Vector3_t10  ___direction, Color_t27  ___color, float ___intensity, const MethodInfo* method)
{
	Color_t27  V_0 = {0};
	{
		Color_t27  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t27  L_2 = Color_op_Multiply_m2023(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t10  L_3 = ___direction;
		Color_t27  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m2447(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m2447 (Object_t * __this /* static, unused */, Vector3_t10  ___direction, Color_t27  ___color, SphericalHarmonicsL2_t437 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t437 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2448(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2448 (Object_t * __this /* static, unused */, Vector3_t10 * ___direction, Color_t27 * ___color, SphericalHarmonicsL2_t437 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2448_ftn) (Vector3_t10 *, Color_t27 *, SphericalHarmonicsL2_t437 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral169;
extern "C" float SphericalHarmonicsL2_get_Item_m2449 (SphericalHarmonicsL2_t437 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral169 = il2cpp_codegen_string_literal_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->___shr0_0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->___shr1_1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->___shr2_2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->___shr3_3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->___shr4_4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->___shr5_5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->___shr6_6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->___shr7_7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->___shr8_8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->___shg0_9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->___shg1_10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->___shg2_11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->___shg3_12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->___shg4_13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->___shg5_14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->___shg6_15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->___shg7_16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->___shg8_17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->___shb0_18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->___shb1_19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->___shb2_20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->___shb3_21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->___shb4_22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->___shb5_23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->___shb6_24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->___shb7_25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->___shb8_26);
		return L_30;
	}

IL_013d:
	{
		IndexOutOfRangeException_t595 * L_31 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_31, _stringLiteral169, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t595_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral169;
extern "C" void SphericalHarmonicsL2_set_Item_m2450 (SphericalHarmonicsL2_t437 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		_stringLiteral169 = il2cpp_codegen_string_literal_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = ___value;
		__this->___shr0_0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = ___value;
		__this->___shr1_1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = ___value;
		__this->___shr2_2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = ___value;
		__this->___shr3_3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = ___value;
		__this->___shr4_4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = ___value;
		__this->___shr5_5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = ___value;
		__this->___shr6_6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = ___value;
		__this->___shr7_7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = ___value;
		__this->___shr8_8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = ___value;
		__this->___shg0_9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = ___value;
		__this->___shg1_10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = ___value;
		__this->___shg2_11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = ___value;
		__this->___shg3_12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = ___value;
		__this->___shg4_13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = ___value;
		__this->___shg5_14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = ___value;
		__this->___shg6_15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = ___value;
		__this->___shg7_16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = ___value;
		__this->___shg8_17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = ___value;
		__this->___shb0_18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = ___value;
		__this->___shb1_19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = ___value;
		__this->___shb2_20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = ___value;
		__this->___shb3_21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = ___value;
		__this->___shb4_22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = ___value;
		__this->___shb5_23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = ___value;
		__this->___shb6_24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = ___value;
		__this->___shb7_25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = ___value;
		__this->___shb8_26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		IndexOutOfRangeException_t595 * L_31 = (IndexOutOfRangeException_t595 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t595_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3078(L_31, _stringLiteral169, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m2451 (SphericalHarmonicsL2_t437 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m3072(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m3072(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m3072(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m3072(L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m3072(L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m3072(L_16, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m3072(L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m3072(L_22, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m3072(L_25, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m3072(L_28, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m3072(L_31, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m3072(L_34, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m3072(L_37, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m3072(L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m3072(L_43, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m3072(L_46, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m3072(L_49, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m3072(L_52, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m3072(L_55, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m3072(L_58, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m3072(L_61, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m3072(L_64, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m3072(L_67, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m3072(L_70, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m3072(L_73, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m3072(L_76, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m3072(L_79, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var;
extern "C" bool SphericalHarmonicsL2_Equals_m2452 (SphericalHarmonicsL2_t437 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(316);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t437  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(SphericalHarmonicsL2_t437 *)((SphericalHarmonicsL2_t437 *)UnBox (L_1, SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var))));
		SphericalHarmonicsL2_t437  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m2456(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t437 *)__this), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
extern TypeInfo* SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t437  SphericalHarmonicsL2_op_Multiply_m2453 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t437  ___lhs, float ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(316);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t437  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ___rhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ___rhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ___rhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ___rhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ___rhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ___rhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ___rhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ___rhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ___rhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ___rhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ___rhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ___rhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ___rhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ___rhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ___rhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ___rhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ___rhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ___rhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ___rhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ___rhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ___rhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ___rhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ___rhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ___rhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ___rhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ___rhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ___rhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t437  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t437  SphericalHarmonicsL2_op_Multiply_m2454 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t437  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(316);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t437  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___rhs)->___shr0_0);
		float L_1 = ___lhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___rhs)->___shr1_1);
		float L_3 = ___lhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___rhs)->___shr2_2);
		float L_5 = ___lhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___rhs)->___shr3_3);
		float L_7 = ___lhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___rhs)->___shr4_4);
		float L_9 = ___lhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___rhs)->___shr5_5);
		float L_11 = ___lhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___rhs)->___shr6_6);
		float L_13 = ___lhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___rhs)->___shr7_7);
		float L_15 = ___lhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___rhs)->___shr8_8);
		float L_17 = ___lhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___rhs)->___shg0_9);
		float L_19 = ___lhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___rhs)->___shg1_10);
		float L_21 = ___lhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___rhs)->___shg2_11);
		float L_23 = ___lhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___rhs)->___shg3_12);
		float L_25 = ___lhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___rhs)->___shg4_13);
		float L_27 = ___lhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___rhs)->___shg5_14);
		float L_29 = ___lhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___rhs)->___shg6_15);
		float L_31 = ___lhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___rhs)->___shg7_16);
		float L_33 = ___lhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___rhs)->___shg8_17);
		float L_35 = ___lhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___rhs)->___shb0_18);
		float L_37 = ___lhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___rhs)->___shb1_19);
		float L_39 = ___lhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___rhs)->___shb2_20);
		float L_41 = ___lhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___rhs)->___shb3_21);
		float L_43 = ___lhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___rhs)->___shb4_22);
		float L_45 = ___lhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___rhs)->___shb5_23);
		float L_47 = ___lhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___rhs)->___shb6_24);
		float L_49 = ___lhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___rhs)->___shb7_25);
		float L_51 = ___lhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___rhs)->___shb8_26);
		float L_53 = ___lhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t437  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t437  SphericalHarmonicsL2_op_Addition_m2455 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t437  ___lhs, SphericalHarmonicsL2_t437  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(316);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t437  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t437_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		(&V_0)->___shr0_0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		(&V_0)->___shr1_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		(&V_0)->___shr2_2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		(&V_0)->___shr3_3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		(&V_0)->___shr4_4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		(&V_0)->___shr5_5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		(&V_0)->___shr6_6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		(&V_0)->___shr7_7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		(&V_0)->___shr8_8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		(&V_0)->___shg0_9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		(&V_0)->___shg1_10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		(&V_0)->___shg2_11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		(&V_0)->___shg3_12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		(&V_0)->___shg4_13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		(&V_0)->___shg5_14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		(&V_0)->___shg6_15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		(&V_0)->___shg7_16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		(&V_0)->___shg8_17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		(&V_0)->___shb0_18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		(&V_0)->___shb1_19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		(&V_0)->___shb2_20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		(&V_0)->___shb3_21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		(&V_0)->___shb4_22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		(&V_0)->___shb5_23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		(&V_0)->___shb6_24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		(&V_0)->___shb7_25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		(&V_0)->___shb8_26 = ((float)((float)L_52+(float)L_53));
		SphericalHarmonicsL2_t437  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m2456 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t437  ___lhs, SphericalHarmonicsL2_t437  ___rhs, const MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m2457 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t437  ___lhs, SphericalHarmonicsL2_t437  ___rhs, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t437  L_0 = ___lhs;
		SphericalHarmonicsL2_t437  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m2456(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"
extern "C" Rect_t191  Sprite_get_rect_m1849 (Sprite_t134 * __this, const MethodInfo* method)
{
	Rect_t191  V_0 = {0};
	{
		Sprite_INTERNAL_get_rect_m2458(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t191  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_rect_m2458 (Sprite_t134 * __this, Rect_t191 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_rect_m2458_ftn) (Sprite_t134 *, Rect_t191 *);
	static Sprite_INTERNAL_get_rect_m2458_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_rect_m2458_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m1844 (Sprite_t134 * __this, const MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m1844_ftn) (Sprite_t134 *);
	static Sprite_get_pixelsPerUnit_m1844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m1844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t158 * Sprite_get_texture_m1841 (Sprite_t134 * __this, const MethodInfo* method)
{
	typedef Texture2D_t158 * (*Sprite_get_texture_m1841_ftn) (Sprite_t134 *);
	static Sprite_get_texture_m1841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m1841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t191  Sprite_get_textureRect_m1865 (Sprite_t134 * __this, const MethodInfo* method)
{
	Rect_t191  V_0 = {0};
	{
		Sprite_INTERNAL_get_textureRect_m2459(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t191  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_textureRect_m2459 (Sprite_t134 * __this, Rect_t191 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_textureRect_m2459_ftn) (Sprite_t134 *, Rect_t191 *);
	static Sprite_INTERNAL_get_textureRect_m2459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_textureRect_m2459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t277  Sprite_get_border_m1842 (Sprite_t134 * __this, const MethodInfo* method)
{
	Vector4_t277  V_0 = {0};
	{
		Sprite_INTERNAL_get_border_m2460(__this, (&V_0), /*hidden argument*/NULL);
		Vector4_t277  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C" void Sprite_INTERNAL_get_border_m2460 (Sprite_t134 * __this, Vector4_t277 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_border_m2460_ftn) (Sprite_t134 *, Vector4_t277 *);
	static Sprite_INTERNAL_get_border_m2460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_border_m2460_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
extern "C" Vector4_t277  DataUtility_GetInnerUV_m1856 (Object_t * __this /* static, unused */, Sprite_t134 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t277  (*DataUtility_GetInnerUV_m1856_ftn) (Sprite_t134 *);
	static DataUtility_GetInnerUV_m1856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m1856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern "C" Vector4_t277  DataUtility_GetOuterUV_m1855 (Object_t * __this /* static, unused */, Sprite_t134 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t277  (*DataUtility_GetOuterUV_m1855_ftn) (Sprite_t134 *);
	static DataUtility_GetOuterUV_m1855_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m1855_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern "C" Vector4_t277  DataUtility_GetPadding_m1848 (Object_t * __this /* static, unused */, Sprite_t134 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t277  (*DataUtility_GetPadding_m1848_ftn) (Sprite_t134 *);
	static DataUtility_GetPadding_m1848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m1848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"
extern "C" Vector2_t11  DataUtility_GetMinSize_m1863 (Object_t * __this /* static, unused */, Sprite_t134 * ___sprite, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		Sprite_t134 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m2461(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m2461 (Object_t * __this /* static, unused */, Sprite_t134 * ___sprite, Vector2_t11 * ___output, const MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m2461_ftn) (Sprite_t134 *, Vector2_t11 *);
	static DataUtility_Internal_GetMinSize_m2461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m2461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
// System.Void UnityEngine.WWW::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
extern "C" void WWW__ctor_m159 (WWW_t23 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url;
		WWW_InitWWW_m2465(__this, L_0, (ByteU5BU5D_t441*)(ByteU5BU5D_t441*)NULL, (StringU5BU5D_t48*)(StringU5BU5D_t48*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
extern "C" void WWW__ctor_m156 (WWW_t23 * __this, String_t* ___url, WWWForm_t51 * ___form, const MethodInfo* method)
{
	StringU5BU5D_t48* V_0 = {0};
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		WWWForm_t51 * L_0 = ___form;
		NullCheck(L_0);
		Dictionary_2_t576 * L_1 = WWWForm_get_headers_m2475(L_0, /*hidden argument*/NULL);
		StringU5BU5D_t48* L_2 = WWW_FlattenedHeadersFrom_m2472(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___url;
		WWWForm_t51 * L_4 = ___form;
		NullCheck(L_4);
		ByteU5BU5D_t441* L_5 = WWWForm_get_data_m2476(L_4, /*hidden argument*/NULL);
		StringU5BU5D_t48* L_6 = V_0;
		WWW_InitWWW_m2465(__this, L_3, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m2462 (WWW_t23 * __this, const MethodInfo* method)
{
	{
		WWW_DestroyWWW_m2464(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m2463 (WWW_t23 * __this, const MethodInfo* method)
{
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		WWW_DestroyWWW_m2464(__this, 0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void WWW_DestroyWWW_m2464 (WWW_t23 * __this, bool ___cancel, const MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m2464_ftn) (WWW_t23 *, bool);
	static WWW_DestroyWWW_m2464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m2464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel);
}
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void WWW_InitWWW_m2465 (WWW_t23 * __this, String_t* ___url, ByteU5BU5D_t441* ___postData, StringU5BU5D_t48* ___iHeaders, const MethodInfo* method)
{
	typedef void (*WWW_InitWWW_m2465_ftn) (WWW_t23 *, String_t*, ByteU5BU5D_t441*, StringU5BU5D_t48*);
	static WWW_InitWWW_m2465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_InitWWW_m2465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, ___url, ___postData, ___iHeaders);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
extern TypeInfo* UnityException_t351_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral170;
extern "C" Dictionary_2_t576 * WWW_get_responseHeaders_m2466 (WWW_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		_stringLiteral170 = il2cpp_codegen_string_literal_from_index(170);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = WWW_get_isDone_m2471(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t351 * L_1 = (UnityException_t351 *)il2cpp_codegen_object_new (UnityException_t351_il2cpp_TypeInfo_var);
		UnityException__ctor_m2980(L_1, _stringLiteral170, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		String_t* L_2 = WWW_get_responseHeadersString_m2467(__this, /*hidden argument*/NULL);
		Dictionary_2_t576 * L_3 = WWW_ParseHTTPHeaderString_m2473(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m2467 (WWW_t23 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_responseHeadersString_m2467_ftn) (WWW_t23 *);
	static WWW_get_responseHeadersString_m2467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_responseHeadersString_m2467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_text()
extern TypeInfo* UnityException_t351_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral171;
extern "C" String_t* WWW_get_text_m140 (WWW_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		_stringLiteral171 = il2cpp_codegen_string_literal_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t441* V_0 = {0};
	{
		bool L_0 = WWW_get_isDone_m2471(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t351 * L_1 = (UnityException_t351 *)il2cpp_codegen_object_new (UnityException_t351_il2cpp_TypeInfo_var);
		UnityException__ctor_m2980(L_1, _stringLiteral171, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		ByteU5BU5D_t441* L_2 = WWW_get_bytes_m2470(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Encoding_t52 * L_3 = WWW_GetTextEncoder_m2469(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t441* L_4 = V_0;
		ByteU5BU5D_t441* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		return L_6;
	}
}
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern TypeInfo* Encoding_t52_il2cpp_TypeInfo_var;
extern "C" Encoding_t52 * WWW_get_DefaultEncoding_m2468 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_0 = Encoding_get_ASCII_m3082(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t52_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t32_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral172;
extern Il2CppCodeGenString* _stringLiteral173;
extern Il2CppCodeGenString* _stringLiteral174;
extern Il2CppCodeGenString* _stringLiteral120;
extern "C" Encoding_t52 * WWW_GetTextEncoder_m2469 (WWW_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Encoding_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		Exception_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral172 = il2cpp_codegen_string_literal_from_index(172);
		_stringLiteral173 = il2cpp_codegen_string_literal_from_index(173);
		_stringLiteral174 = il2cpp_codegen_string_literal_from_index(174);
		_stringLiteral120 = il2cpp_codegen_string_literal_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	Encoding_t52 * V_5 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
		Dictionary_2_t576 * L_0 = WWW_get_responseHeaders_m2466(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, String_t** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, L_0, _stringLiteral172, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m3083(L_2, _stringLiteral173, 5, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = String_IndexOf_m3084(L_5, ((int32_t)61), L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m1928(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m3085(L_11, /*hidden argument*/NULL);
		CharU5BU5D_t197* L_13 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 2));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)39);
		CharU5BU5D_t197* L_14 = L_13;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1, sizeof(uint16_t))) = (uint16_t)((int32_t)34);
		NullCheck(L_12);
		String_t* L_15 = String_Trim_m3086(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_Trim_m3085(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = String_IndexOf_m1954(L_17, ((int32_t)59), /*hidden argument*/NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m1901(L_20, 0, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
			Encoding_t52 * L_24 = Encoding_GetEncoding_m3087(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			V_5 = L_24;
			goto IL_00b6;
		}

IL_0090:
		{
			; // IL_0090: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t32_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		String_t* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m148(NULL /*static, unused*/, _stringLiteral174, L_25, _stringLiteral120, /*hidden argument*/NULL);
		Debug_Log_m73(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_27 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_27;
	}

IL_00b6:
	{
		Encoding_t52 * L_28 = V_5;
		return L_28;
	}
}
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t441* WWW_get_bytes_m2470 (WWW_t23 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t441* (*WWW_get_bytes_m2470_ftn) (WWW_t23 *);
	static WWW_get_bytes_m2470_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_bytes_m2470_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m139 (WWW_t23 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_error_m139_ftn) (WWW_t23 *);
	static WWW_get_error_m139_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_error_m139_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m2471 (WWW_t23 * __this, const MethodInfo* method)
{
	typedef bool (*WWW_get_isDone_m2471_ftn) (WWW_t23 *);
	static WWW_get_isDone_m2471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_isDone_m2471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t598_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3089_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3090_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3091_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3092_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3093_MethodInfo_var;
extern "C" StringU5BU5D_t48* WWW_FlattenedHeadersFrom_m2472 (Object_t * __this /* static, unused */, Dictionary_2_t576 * ___headers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Enumerator_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2_GetEnumerator_m3089_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483955);
		Enumerator_get_Current_m3090_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483956);
		KeyValuePair_2_get_Key_m3091_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483957);
		KeyValuePair_2_get_Value_m3092_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483958);
		Enumerator_MoveNext_m3093_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483959);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t48* V_0 = {0};
	int32_t V_1 = 0;
	KeyValuePair_2_t597  V_2 = {0};
	Enumerator_t598  V_3 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t576 * L_0 = ___headers;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (StringU5BU5D_t48*)NULL;
	}

IL_0008:
	{
		Dictionary_2_t576 * L_1 = ___headers;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_1);
		V_0 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		Dictionary_2_t576 * L_3 = ___headers;
		NullCheck(L_3);
		Enumerator_t598  L_4 = Dictionary_2_GetEnumerator_m3089(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3089_MethodInfo_var);
		V_3 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			KeyValuePair_2_t597  L_5 = Enumerator_get_Current_m3090((&V_3), /*hidden argument*/Enumerator_get_Current_m3090_MethodInfo_var);
			V_2 = L_5;
			StringU5BU5D_t48* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			String_t* L_9 = KeyValuePair_2_get_Key_m3091((&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m3091_MethodInfo_var);
			NullCheck(L_9);
			String_t* L_10 = String_ToString_m152(L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			ArrayElementTypeCheck (L_6, L_10);
			*((String_t**)(String_t**)SZArrayLdElema(L_6, L_8, sizeof(String_t*))) = (String_t*)L_10;
			StringU5BU5D_t48* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			String_t* L_14 = KeyValuePair_2_get_Value_m3092((&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m3092_MethodInfo_var);
			NullCheck(L_14);
			String_t* L_15 = String_ToString_m152(L_14, /*hidden argument*/NULL);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
			ArrayElementTypeCheck (L_11, L_15);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, L_13, sizeof(String_t*))) = (String_t*)L_15;
		}

IL_0052:
		{
			bool L_16 = Enumerator_MoveNext_m3093((&V_3), /*hidden argument*/Enumerator_MoveNext_m3093_MethodInfo_var);
			if (L_16)
			{
				goto IL_0024;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_t598  L_17 = V_3;
		Enumerator_t598  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t598_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, L_19);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_006f:
	{
		StringU5BU5D_t48* L_20 = V_0;
		return L_20;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t576_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t599_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3094_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral175;
extern Il2CppCodeGenString* _stringLiteral176;
extern Il2CppCodeGenString* _stringLiteral177;
extern Il2CppCodeGenString* _stringLiteral113;
extern "C" Dictionary_2_t576 * WWW_ParseHTTPHeaderString_m2473 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		Dictionary_2_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(319);
		StringReader_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		Dictionary_2__ctor_m3094_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483960);
		_stringLiteral175 = il2cpp_codegen_string_literal_from_index(175);
		_stringLiteral176 = il2cpp_codegen_string_literal_from_index(176);
		_stringLiteral177 = il2cpp_codegen_string_literal_from_index(177);
		_stringLiteral113 = il2cpp_codegen_string_literal_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t576 * V_0 = {0};
	StringReader_t599 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	{
		String_t* L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t370 * L_1 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_1, _stringLiteral175, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Dictionary_2_t576 * L_2 = (Dictionary_2_t576 *)il2cpp_codegen_object_new (Dictionary_2_t576_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3094(L_2, /*hidden argument*/Dictionary_2__ctor_m3094_MethodInfo_var);
		V_0 = L_2;
		String_t* L_3 = ___input;
		StringReader_t599 * L_4 = (StringReader_t599 *)il2cpp_codegen_object_new (StringReader_t599_il2cpp_TypeInfo_var);
		StringReader__ctor_m3095(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		StringReader_t599 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.StringReader::ReadLine() */, L_5);
		V_3 = L_6;
		String_t* L_7 = V_3;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a2;
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = V_3;
		NullCheck(L_10);
		bool L_11 = String_StartsWith_m3096(L_10, _stringLiteral176, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t576 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_12, _stringLiteral177, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = String_IndexOf_m3097(L_14, _stringLiteral113, /*hidden argument*/NULL);
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0020;
	}

IL_0077:
	{
		String_t* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m1901(L_17, 0, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = String_ToUpper_m125(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23 = String_Substring_m1928(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), /*hidden argument*/NULL);
		V_6 = L_23;
		Dictionary_2_t576 * L_24 = V_0;
		String_t* L_25 = V_5;
		String_t* L_26 = V_6;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		Dictionary_2_t576 * L_27 = V_0;
		return L_27;
	}
}
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoderMethodDeclarations.h"
// System.Void UnityEngine.WWWForm::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern TypeInfo* List_1_t439_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t440_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t441_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3098_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3099_MethodInfo_var;
extern "C" void WWWForm__ctor_m149 (WWWForm_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t439_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		List_1_t440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		ByteU5BU5D_t441_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		List_1__ctor_m3098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483961);
		List_1__ctor_m3099_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483962);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		List_1_t439 * L_0 = (List_1_t439 *)il2cpp_codegen_object_new (List_1_t439_il2cpp_TypeInfo_var);
		List_1__ctor_m3098(L_0, /*hidden argument*/List_1__ctor_m3098_MethodInfo_var);
		__this->___formData_0 = L_0;
		List_1_t440 * L_1 = (List_1_t440 *)il2cpp_codegen_object_new (List_1_t440_il2cpp_TypeInfo_var);
		List_1__ctor_m3099(L_1, /*hidden argument*/List_1__ctor_m3099_MethodInfo_var);
		__this->___fieldNames_1 = L_1;
		List_1_t440 * L_2 = (List_1_t440 *)il2cpp_codegen_object_new (List_1_t440_il2cpp_TypeInfo_var);
		List_1__ctor_m3099(L_2, /*hidden argument*/List_1__ctor_m3099_MethodInfo_var);
		__this->___fileNames_2 = L_2;
		List_1_t440 * L_3 = (List_1_t440 *)il2cpp_codegen_object_new (List_1_t440_il2cpp_TypeInfo_var);
		List_1__ctor_m3099(L_3, /*hidden argument*/List_1__ctor_m3099_MethodInfo_var);
		__this->___types_3 = L_3;
		__this->___boundary_4 = ((ByteU5BU5D_t441*)SZArrayNew(ByteU5BU5D_t441_il2cpp_TypeInfo_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = Random_Range_m2608(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)57))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)7));
	}

IL_005c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)6));
	}

IL_0068:
	{
		ByteU5BU5D_t441* L_9 = (__this->___boundary_4);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10, sizeof(uint8_t))) = (uint8_t)(((uint8_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)40))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
extern TypeInfo* Encoding_t52_il2cpp_TypeInfo_var;
extern "C" void WWWForm_AddField_m155 (WWWForm_t51 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		s_Il2CppMethodIntialized = true;
	}
	Encoding_t52 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_0 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___fieldName;
		String_t* L_2 = ___value;
		Encoding_t52 * L_3 = V_0;
		WWWForm_AddField_m2474(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral178;
extern Il2CppCodeGenString* _stringLiteral179;
extern "C" void WWWForm_AddField_m2474 (WWWForm_t51 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t52 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral178 = il2cpp_codegen_string_literal_from_index(178);
		_stringLiteral179 = il2cpp_codegen_string_literal_from_index(179);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t440 * L_0 = (__this->___fieldNames_1);
		String_t* L_1 = ___fieldName;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		List_1_t440 * L_2 = (__this->___fileNames_2);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_2, (String_t*)NULL);
		List_1_t439 * L_3 = (__this->___formData_0);
		Encoding_t52 * L_4 = ___e;
		String_t* L_5 = ___value;
		NullCheck(L_4);
		ByteU5BU5D_t441* L_6 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t441* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0) */, L_3, L_6);
		List_1_t440 * L_7 = (__this->___types_3);
		Encoding_t52 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Text.Encoding::get_WebName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m148(NULL /*static, unused*/, _stringLiteral178, L_9, _stringLiteral179, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, L_10);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
extern TypeInfo* Dictionary_2_t576_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t52_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3094_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral15;
extern Il2CppCodeGenString* _stringLiteral180;
extern Il2CppCodeGenString* _stringLiteral179;
extern Il2CppCodeGenString* _stringLiteral181;
extern "C" Dictionary_2_t576 * WWWForm_get_headers_m2475 (WWWForm_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(319);
		Encoding_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Dictionary_2__ctor_m3094_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483960);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		_stringLiteral180 = il2cpp_codegen_string_literal_from_index(180);
		_stringLiteral179 = il2cpp_codegen_string_literal_from_index(179);
		_stringLiteral181 = il2cpp_codegen_string_literal_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t576 * V_0 = {0};
	{
		Dictionary_2_t576 * L_0 = (Dictionary_2_t576 *)il2cpp_codegen_object_new (Dictionary_2_t576_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3094(L_0, /*hidden argument*/Dictionary_2__ctor_m3094_MethodInfo_var);
		V_0 = L_0;
		bool L_1 = (__this->___containsFiles_5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t576 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_3 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t441* L_4 = (__this->___boundary_4);
		ByteU5BU5D_t441* L_5 = (__this->___boundary_4);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m148(NULL /*static, unused*/, _stringLiteral180, L_6, _stringLiteral179, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, _stringLiteral15, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		Dictionary_2_t576 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, _stringLiteral15, _stringLiteral181);
	}

IL_0059:
	{
		Dictionary_2_t576 * L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoderMethodDeclarations.h"
extern TypeInfo* MemoryStream_t600_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t52_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t442_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral182;
extern Il2CppCodeGenString* _stringLiteral183;
extern Il2CppCodeGenString* _stringLiteral184;
extern Il2CppCodeGenString* _stringLiteral185;
extern Il2CppCodeGenString* _stringLiteral179;
extern Il2CppCodeGenString* _stringLiteral186;
extern Il2CppCodeGenString* _stringLiteral187;
extern Il2CppCodeGenString* _stringLiteral188;
extern Il2CppCodeGenString* _stringLiteral189;
extern Il2CppCodeGenString* _stringLiteral190;
extern Il2CppCodeGenString* _stringLiteral191;
extern "C" ByteU5BU5D_t441* WWWForm_get_data_m2476 (WWWForm_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		Encoding_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		WWWTranscoder_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral182 = il2cpp_codegen_string_literal_from_index(182);
		_stringLiteral183 = il2cpp_codegen_string_literal_from_index(183);
		_stringLiteral184 = il2cpp_codegen_string_literal_from_index(184);
		_stringLiteral185 = il2cpp_codegen_string_literal_from_index(185);
		_stringLiteral179 = il2cpp_codegen_string_literal_from_index(179);
		_stringLiteral186 = il2cpp_codegen_string_literal_from_index(186);
		_stringLiteral187 = il2cpp_codegen_string_literal_from_index(187);
		_stringLiteral188 = il2cpp_codegen_string_literal_from_index(188);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		_stringLiteral190 = il2cpp_codegen_string_literal_from_index(190);
		_stringLiteral191 = il2cpp_codegen_string_literal_from_index(191);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t441* V_0 = {0};
	ByteU5BU5D_t441* V_1 = {0};
	ByteU5BU5D_t441* V_2 = {0};
	ByteU5BU5D_t441* V_3 = {0};
	ByteU5BU5D_t441* V_4 = {0};
	ByteU5BU5D_t441* V_5 = {0};
	MemoryStream_t600 * V_6 = {0};
	int32_t V_7 = 0;
	ByteU5BU5D_t441* V_8 = {0};
	String_t* V_9 = {0};
	String_t* V_10 = {0};
	ByteU5BU5D_t441* V_11 = {0};
	String_t* V_12 = {0};
	ByteU5BU5D_t441* V_13 = {0};
	ByteU5BU5D_t441* V_14 = {0};
	ByteU5BU5D_t441* V_15 = {0};
	ByteU5BU5D_t441* V_16 = {0};
	MemoryStream_t600 * V_17 = {0};
	int32_t V_18 = 0;
	ByteU5BU5D_t441* V_19 = {0};
	ByteU5BU5D_t441* V_20 = {0};
	ByteU5BU5D_t441* V_21 = {0};
	ByteU5BU5D_t441* V_22 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___containsFiles_5);
		if (!L_0)
		{
			goto IL_0311;
		}
	}
	{
		Encoding_t52 * L_1 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t441* L_2 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, _stringLiteral182);
		V_0 = L_2;
		Encoding_t52 * L_3 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t441* L_4 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral183);
		V_1 = L_4;
		Encoding_t52 * L_5 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t441* L_6 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, _stringLiteral184);
		V_2 = L_6;
		Encoding_t52 * L_7 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t441* L_8 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, _stringLiteral185);
		V_3 = L_8;
		Encoding_t52 * L_9 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t441* L_10 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, _stringLiteral179);
		V_4 = L_10;
		Encoding_t52 * L_11 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t441* L_12 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, _stringLiteral186);
		V_5 = L_12;
		MemoryStream_t600 * L_13 = (MemoryStream_t600 *)il2cpp_codegen_object_new (MemoryStream_t600_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3100(L_13, ((int32_t)1024), /*hidden argument*/NULL);
		V_6 = L_13;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_0297;
		}

IL_0081:
		{
			MemoryStream_t600 * L_14 = V_6;
			ByteU5BU5D_t441* L_15 = V_1;
			ByteU5BU5D_t441* L_16 = V_1;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)(((Array_t *)L_16)->max_length))));
			MemoryStream_t600 * L_17 = V_6;
			ByteU5BU5D_t441* L_18 = V_0;
			ByteU5BU5D_t441* L_19 = V_0;
			NullCheck(L_19);
			NullCheck(L_17);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, (((int32_t)(((Array_t *)L_19)->max_length))));
			MemoryStream_t600 * L_20 = V_6;
			ByteU5BU5D_t441* L_21 = (__this->___boundary_4);
			ByteU5BU5D_t441* L_22 = (__this->___boundary_4);
			NullCheck(L_22);
			NullCheck(L_20);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)(((Array_t *)L_22)->max_length))));
			MemoryStream_t600 * L_23 = V_6;
			ByteU5BU5D_t441* L_24 = V_1;
			ByteU5BU5D_t441* L_25 = V_1;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)(((Array_t *)L_25)->max_length))));
			MemoryStream_t600 * L_26 = V_6;
			ByteU5BU5D_t441* L_27 = V_2;
			ByteU5BU5D_t441* L_28 = V_2;
			NullCheck(L_28);
			NullCheck(L_26);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)(((Array_t *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
			Encoding_t52 * L_29 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t440 * L_30 = (__this->___types_3);
			int32_t L_31 = V_7;
			NullCheck(L_30);
			String_t* L_32 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_30, L_31);
			NullCheck(L_29);
			ByteU5BU5D_t441* L_33 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_32);
			V_8 = L_33;
			MemoryStream_t600 * L_34 = V_6;
			ByteU5BU5D_t441* L_35 = V_8;
			ByteU5BU5D_t441* L_36 = V_8;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)(((Array_t *)L_36)->max_length))));
			MemoryStream_t600 * L_37 = V_6;
			ByteU5BU5D_t441* L_38 = V_1;
			ByteU5BU5D_t441* L_39 = V_1;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)(((Array_t *)L_39)->max_length))));
			MemoryStream_t600 * L_40 = V_6;
			ByteU5BU5D_t441* L_41 = V_3;
			ByteU5BU5D_t441* L_42 = V_3;
			NullCheck(L_42);
			NullCheck(L_40);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)(((Array_t *)L_42)->max_length))));
			Encoding_t52 * L_43 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_43);
			String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Text.Encoding::get_HeaderName() */, L_43);
			V_9 = L_44;
			List_1_t440 * L_45 = (__this->___fieldNames_1);
			int32_t L_46 = V_7;
			NullCheck(L_45);
			String_t* L_47 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_45, L_46);
			V_10 = L_47;
			String_t* L_48 = V_10;
			Encoding_t52 * L_49 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			bool L_50 = WWWTranscoder_SevenBitClean_m2483(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			String_t* L_51 = V_10;
			NullCheck(L_51);
			int32_t L_52 = String_IndexOf_m3097(L_51, _stringLiteral187, /*hidden argument*/NULL);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			StringU5BU5D_t48* L_53 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 5));
			NullCheck(L_53);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
			ArrayElementTypeCheck (L_53, _stringLiteral187);
			*((String_t**)(String_t**)SZArrayLdElema(L_53, 0, sizeof(String_t*))) = (String_t*)_stringLiteral187;
			StringU5BU5D_t48* L_54 = L_53;
			String_t* L_55 = V_9;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 1);
			ArrayElementTypeCheck (L_54, L_55);
			*((String_t**)(String_t**)SZArrayLdElema(L_54, 1, sizeof(String_t*))) = (String_t*)L_55;
			StringU5BU5D_t48* L_56 = L_54;
			NullCheck(L_56);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
			ArrayElementTypeCheck (L_56, _stringLiteral188);
			*((String_t**)(String_t**)SZArrayLdElema(L_56, 2, sizeof(String_t*))) = (String_t*)_stringLiteral188;
			StringU5BU5D_t48* L_57 = L_56;
			String_t* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
			Encoding_t52 * L_59 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			String_t* L_60 = WWWTranscoder_QPEncode_m2480(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
			NullCheck(L_57);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
			ArrayElementTypeCheck (L_57, L_60);
			*((String_t**)(String_t**)SZArrayLdElema(L_57, 3, sizeof(String_t*))) = (String_t*)L_60;
			StringU5BU5D_t48* L_61 = L_57;
			NullCheck(L_61);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 4);
			ArrayElementTypeCheck (L_61, _stringLiteral189);
			*((String_t**)(String_t**)SZArrayLdElema(L_61, 4, sizeof(String_t*))) = (String_t*)_stringLiteral189;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_62 = String_Concat_m132(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
			Encoding_t52 * L_63 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_64 = V_10;
			NullCheck(L_63);
			ByteU5BU5D_t441* L_65 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_63, L_64);
			V_11 = L_65;
			MemoryStream_t600 * L_66 = V_6;
			ByteU5BU5D_t441* L_67 = V_11;
			ByteU5BU5D_t441* L_68 = V_11;
			NullCheck(L_68);
			NullCheck(L_66);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, (((int32_t)(((Array_t *)L_68)->max_length))));
			MemoryStream_t600 * L_69 = V_6;
			ByteU5BU5D_t441* L_70 = V_4;
			ByteU5BU5D_t441* L_71 = V_4;
			NullCheck(L_71);
			NullCheck(L_69);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_69, L_70, 0, (((int32_t)(((Array_t *)L_71)->max_length))));
			List_1_t440 * L_72 = (__this->___fileNames_2);
			int32_t L_73 = V_7;
			NullCheck(L_72);
			String_t* L_74 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			List_1_t440 * L_75 = (__this->___fileNames_2);
			int32_t L_76 = V_7;
			NullCheck(L_75);
			String_t* L_77 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_75, L_76);
			V_12 = L_77;
			String_t* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
			Encoding_t52 * L_79 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			bool L_80 = WWWTranscoder_SevenBitClean_m2483(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			String_t* L_81 = V_12;
			NullCheck(L_81);
			int32_t L_82 = String_IndexOf_m3097(L_81, _stringLiteral187, /*hidden argument*/NULL);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			StringU5BU5D_t48* L_83 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 5));
			NullCheck(L_83);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 0);
			ArrayElementTypeCheck (L_83, _stringLiteral187);
			*((String_t**)(String_t**)SZArrayLdElema(L_83, 0, sizeof(String_t*))) = (String_t*)_stringLiteral187;
			StringU5BU5D_t48* L_84 = L_83;
			String_t* L_85 = V_9;
			NullCheck(L_84);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 1);
			ArrayElementTypeCheck (L_84, L_85);
			*((String_t**)(String_t**)SZArrayLdElema(L_84, 1, sizeof(String_t*))) = (String_t*)L_85;
			StringU5BU5D_t48* L_86 = L_84;
			NullCheck(L_86);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 2);
			ArrayElementTypeCheck (L_86, _stringLiteral188);
			*((String_t**)(String_t**)SZArrayLdElema(L_86, 2, sizeof(String_t*))) = (String_t*)_stringLiteral188;
			StringU5BU5D_t48* L_87 = L_86;
			String_t* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
			Encoding_t52 * L_89 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			String_t* L_90 = WWWTranscoder_QPEncode_m2480(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
			NullCheck(L_87);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 3);
			ArrayElementTypeCheck (L_87, L_90);
			*((String_t**)(String_t**)SZArrayLdElema(L_87, 3, sizeof(String_t*))) = (String_t*)L_90;
			StringU5BU5D_t48* L_91 = L_87;
			NullCheck(L_91);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 4);
			ArrayElementTypeCheck (L_91, _stringLiteral189);
			*((String_t**)(String_t**)SZArrayLdElema(L_91, 4, sizeof(String_t*))) = (String_t*)_stringLiteral189;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m132(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
			Encoding_t52 * L_93 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_94 = V_12;
			NullCheck(L_93);
			ByteU5BU5D_t441* L_95 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_93, L_94);
			V_13 = L_95;
			MemoryStream_t600 * L_96 = V_6;
			ByteU5BU5D_t441* L_97 = V_5;
			ByteU5BU5D_t441* L_98 = V_5;
			NullCheck(L_98);
			NullCheck(L_96);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_96, L_97, 0, (((int32_t)(((Array_t *)L_98)->max_length))));
			MemoryStream_t600 * L_99 = V_6;
			ByteU5BU5D_t441* L_100 = V_13;
			ByteU5BU5D_t441* L_101 = V_13;
			NullCheck(L_101);
			NullCheck(L_99);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_99, L_100, 0, (((int32_t)(((Array_t *)L_101)->max_length))));
			MemoryStream_t600 * L_102 = V_6;
			ByteU5BU5D_t441* L_103 = V_4;
			ByteU5BU5D_t441* L_104 = V_4;
			NullCheck(L_104);
			NullCheck(L_102);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, (((int32_t)(((Array_t *)L_104)->max_length))));
		}

IL_025c:
		{
			MemoryStream_t600 * L_105 = V_6;
			ByteU5BU5D_t441* L_106 = V_1;
			ByteU5BU5D_t441* L_107 = V_1;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, (((int32_t)(((Array_t *)L_107)->max_length))));
			MemoryStream_t600 * L_108 = V_6;
			ByteU5BU5D_t441* L_109 = V_1;
			ByteU5BU5D_t441* L_110 = V_1;
			NullCheck(L_110);
			NullCheck(L_108);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_108, L_109, 0, (((int32_t)(((Array_t *)L_110)->max_length))));
			List_1_t439 * L_111 = (__this->___formData_0);
			int32_t L_112 = V_7;
			NullCheck(L_111);
			ByteU5BU5D_t441* L_113 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_111, L_112);
			V_14 = L_113;
			MemoryStream_t600 * L_114 = V_6;
			ByteU5BU5D_t441* L_115 = V_14;
			ByteU5BU5D_t441* L_116 = V_14;
			NullCheck(L_116);
			NullCheck(L_114);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_114, L_115, 0, (((int32_t)(((Array_t *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			List_1_t439 * L_119 = (__this->___formData_0);
			NullCheck(L_119);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			MemoryStream_t600 * L_121 = V_6;
			ByteU5BU5D_t441* L_122 = V_1;
			ByteU5BU5D_t441* L_123 = V_1;
			NullCheck(L_123);
			NullCheck(L_121);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_121, L_122, 0, (((int32_t)(((Array_t *)L_123)->max_length))));
			MemoryStream_t600 * L_124 = V_6;
			ByteU5BU5D_t441* L_125 = V_0;
			ByteU5BU5D_t441* L_126 = V_0;
			NullCheck(L_126);
			NullCheck(L_124);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_124, L_125, 0, (((int32_t)(((Array_t *)L_126)->max_length))));
			MemoryStream_t600 * L_127 = V_6;
			ByteU5BU5D_t441* L_128 = (__this->___boundary_4);
			ByteU5BU5D_t441* L_129 = (__this->___boundary_4);
			NullCheck(L_129);
			NullCheck(L_127);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_127, L_128, 0, (((int32_t)(((Array_t *)L_129)->max_length))));
			MemoryStream_t600 * L_130 = V_6;
			ByteU5BU5D_t441* L_131 = V_0;
			ByteU5BU5D_t441* L_132 = V_0;
			NullCheck(L_132);
			NullCheck(L_130);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_130, L_131, 0, (((int32_t)(((Array_t *)L_132)->max_length))));
			MemoryStream_t600 * L_133 = V_6;
			ByteU5BU5D_t441* L_134 = V_1;
			ByteU5BU5D_t441* L_135 = V_1;
			NullCheck(L_135);
			NullCheck(L_133);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_133, L_134, 0, (((int32_t)(((Array_t *)L_135)->max_length))));
			MemoryStream_t600 * L_136 = V_6;
			NullCheck(L_136);
			ByteU5BU5D_t441* L_137 = (ByteU5BU5D_t441*)VirtFuncInvoker0< ByteU5BU5D_t441* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_136);
			V_22 = L_137;
			IL2CPP_LEAVE(0x3F7, FINALLY_0302);
		}

IL_02fd:
		{
			; // IL_02fd: leave IL_0311
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_0302;
	}

FINALLY_0302:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t600 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			MemoryStream_t600 * L_139 = V_6;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, L_139);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(770)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(770)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0311:
	{
		Encoding_t52 * L_140 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_140);
		ByteU5BU5D_t441* L_141 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_140, _stringLiteral190);
		V_15 = L_141;
		Encoding_t52 * L_142 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_142);
		ByteU5BU5D_t441* L_143 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_142, _stringLiteral191);
		V_16 = L_143;
		MemoryStream_t600 * L_144 = (MemoryStream_t600 *)il2cpp_codegen_object_new (MemoryStream_t600_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3100(L_144, ((int32_t)1024), /*hidden argument*/NULL);
		V_17 = L_144;
	}

IL_033f:
	try
	{ // begin try (depth: 1)
		{
			V_18 = 0;
			goto IL_03c3;
		}

IL_0347:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
			Encoding_t52 * L_145 = Encoding_get_UTF8_m3088(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t440 * L_146 = (__this->___fieldNames_1);
			int32_t L_147 = V_18;
			NullCheck(L_146);
			String_t* L_148 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_146, L_147);
			NullCheck(L_145);
			ByteU5BU5D_t441* L_149 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			ByteU5BU5D_t441* L_150 = WWWTranscoder_URLEncode_m2479(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
			V_19 = L_150;
			List_1_t439 * L_151 = (__this->___formData_0);
			int32_t L_152 = V_18;
			NullCheck(L_151);
			ByteU5BU5D_t441* L_153 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_151, L_152);
			V_20 = L_153;
			ByteU5BU5D_t441* L_154 = V_20;
			ByteU5BU5D_t441* L_155 = WWWTranscoder_URLEncode_m2479(NULL /*static, unused*/, L_154, /*hidden argument*/NULL);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			MemoryStream_t600 * L_157 = V_17;
			ByteU5BU5D_t441* L_158 = V_15;
			ByteU5BU5D_t441* L_159 = V_15;
			NullCheck(L_159);
			NullCheck(L_157);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_157, L_158, 0, (((int32_t)(((Array_t *)L_159)->max_length))));
		}

IL_0393:
		{
			MemoryStream_t600 * L_160 = V_17;
			ByteU5BU5D_t441* L_161 = V_19;
			ByteU5BU5D_t441* L_162 = V_19;
			NullCheck(L_162);
			NullCheck(L_160);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_160, L_161, 0, (((int32_t)(((Array_t *)L_162)->max_length))));
			MemoryStream_t600 * L_163 = V_17;
			ByteU5BU5D_t441* L_164 = V_16;
			ByteU5BU5D_t441* L_165 = V_16;
			NullCheck(L_165);
			NullCheck(L_163);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_163, L_164, 0, (((int32_t)(((Array_t *)L_165)->max_length))));
			MemoryStream_t600 * L_166 = V_17;
			ByteU5BU5D_t441* L_167 = V_21;
			ByteU5BU5D_t441* L_168 = V_21;
			NullCheck(L_168);
			NullCheck(L_166);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_166, L_167, 0, (((int32_t)(((Array_t *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			List_1_t439 * L_171 = (__this->___formData_0);
			NullCheck(L_171);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			MemoryStream_t600 * L_173 = V_17;
			NullCheck(L_173);
			ByteU5BU5D_t441* L_174 = (ByteU5BU5D_t441*)VirtFuncInvoker0< ByteU5BU5D_t441* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_173);
			V_22 = L_174;
			IL2CPP_LEAVE(0x3F7, FINALLY_03e8);
		}

IL_03e3:
		{
			; // IL_03e3: leave IL_03f7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_03e8;
	}

FINALLY_03e8:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t600 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			MemoryStream_t600 * L_176 = V_17;
			NullCheck(L_176);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, L_176);
		}

IL_03f6:
		{
			IL2CPP_END_FINALLY(1000)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1000)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_03f7:
	{
		ByteU5BU5D_t441* L_177 = V_22;
		return L_177;
	}
}
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoder.h"
// System.Void UnityEngine.WWWTranscoder::.cctor()
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
extern TypeInfo* WWWTranscoder_t442_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral193;
extern Il2CppCodeGenString* _stringLiteral194;
extern Il2CppCodeGenString* _stringLiteral195;
extern "C" void WWWTranscoder__cctor_m2477 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		_stringLiteral194 = il2cpp_codegen_string_literal_from_index(194);
		_stringLiteral195 = il2cpp_codegen_string_literal_from_index(195);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t52 * L_0 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t441* L_1 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral192);
		((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0 = L_1;
		Encoding_t52 * L_2 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t441* L_3 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral193);
		((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1 = L_3;
		((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2 = ((int32_t)37);
		((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3 = ((int32_t)43);
		Encoding_t52 * L_4 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t441* L_5 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral194);
		((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4 = L_5;
		((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5 = ((int32_t)61);
		((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6 = ((int32_t)95);
		Encoding_t52 * L_6 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t441* L_7 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral195);
		((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7 = L_7;
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
// System.Byte
#include "mscorlib_System_Byte.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* ByteU5BU5D_t441_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t441* WWWTranscoder_Byte2Hex_m2478 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t441* ___hexChars, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t441_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t441* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t441*)SZArrayNew(ByteU5BU5D_t441_il2cpp_TypeInfo_var, 2));
		ByteU5BU5D_t441* L_0 = V_0;
		ByteU5BU5D_t441* L_1 = ___hexChars;
		uint8_t L_2 = ___b;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2>>(int32_t)4)));
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0, sizeof(uint8_t))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3, sizeof(uint8_t)));
		ByteU5BU5D_t441* L_4 = V_0;
		ByteU5BU5D_t441* L_5 = ___hexChars;
		uint8_t L_6 = ___b;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15))));
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1, sizeof(uint8_t))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7, sizeof(uint8_t)));
		ByteU5BU5D_t441* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoderMethodDeclarations.h"
extern TypeInfo* WWWTranscoder_t442_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t441* WWWTranscoder_URLEncode_m2479 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___toEncode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t441* L_0 = ___toEncode;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2;
		uint8_t L_2 = ((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3;
		ByteU5BU5D_t441* L_3 = ((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4;
		ByteU5BU5D_t441* L_4 = WWWTranscoder_Encode_m2481(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
// System.String
#include "mscorlib_System_String.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo* WWWTranscoder_t442_il2cpp_TypeInfo_var;
extern "C" String_t* WWWTranscoder_QPEncode_m2480 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t52 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t441* V_0 = {0};
	{
		Encoding_t52 * L_0 = ___e;
		String_t* L_1 = ___toEncode;
		NullCheck(L_0);
		ByteU5BU5D_t441* L_2 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5;
		uint8_t L_4 = ((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6;
		ByteU5BU5D_t441* L_5 = ((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7;
		ByteU5BU5D_t441* L_6 = WWWTranscoder_Encode_m2481(NULL /*static, unused*/, L_2, L_3, L_4, L_5, 1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t52 * L_7 = WWW_get_DefaultEncoding_m2468(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t441* L_8 = V_0;
		ByteU5BU5D_t441* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)(((Array_t *)L_9)->max_length))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
extern TypeInfo* MemoryStream_t600_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t442_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t441* WWWTranscoder_Encode_m2481 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t441* ___forbidden, bool ___uppercase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		WWWTranscoder_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t600 * V_0 = {0};
	int32_t V_1 = 0;
	ByteU5BU5D_t441* V_2 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t600 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	MemoryStream_t600 * G_B8_1 = {0};
	ByteU5BU5D_t441* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	MemoryStream_t600 * G_B10_2 = {0};
	{
		ByteU5BU5D_t441* L_0 = ___input;
		NullCheck(L_0);
		MemoryStream_t600 * L_1 = (MemoryStream_t600 *)il2cpp_codegen_object_new (MemoryStream_t600_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3100(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			ByteU5BU5D_t441* L_2 = ___input;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4, sizeof(uint8_t)))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			MemoryStream_t600 * L_5 = V_0;
			uint8_t L_6 = ___space;
			NullCheck(L_5);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			ByteU5BU5D_t441* L_7 = ___input;
			int32_t L_8 = V_1;
			NullCheck(L_7);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9, sizeof(uint8_t)))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			ByteU5BU5D_t441* L_10 = ___input;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12, sizeof(uint8_t)))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			ByteU5BU5D_t441* L_13 = ___forbidden;
			ByteU5BU5D_t441* L_14 = ___input;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			bool L_17 = WWWTranscoder_ByteArrayContains_m2482(NULL /*static, unused*/, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16, sizeof(uint8_t))), /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			MemoryStream_t600 * L_18 = V_0;
			uint8_t L_19 = ___escapeChar;
			NullCheck(L_18);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_18, L_19);
			MemoryStream_t600 * L_20 = V_0;
			ByteU5BU5D_t441* L_21 = ___input;
			int32_t L_22 = V_1;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
			int32_t L_23 = L_22;
			bool L_24 = ___uppercase;
			G_B8_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23, sizeof(uint8_t)))));
			G_B8_1 = L_20;
			if (!L_24)
			{
				G_B9_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23, sizeof(uint8_t)))));
				G_B9_1 = L_20;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			ByteU5BU5D_t441* L_25 = ((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			ByteU5BU5D_t441* L_26 = ((WWWTranscoder_t442_StaticFields*)WWWTranscoder_t442_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
			ByteU5BU5D_t441* L_27 = WWWTranscoder_Byte2Hex_m2478(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t441*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			MemoryStream_t600 * L_28 = V_0;
			ByteU5BU5D_t441* L_29 = ___input;
			int32_t L_30 = V_1;
			NullCheck(L_29);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
			int32_t L_31 = L_30;
			NullCheck(L_28);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31, sizeof(uint8_t))));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			ByteU5BU5D_t441* L_34 = ___input;
			NullCheck(L_34);
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			MemoryStream_t600 * L_35 = V_0;
			NullCheck(L_35);
			ByteU5BU5D_t441* L_36 = (ByteU5BU5D_t441*)VirtFuncInvoker0< ByteU5BU5D_t441* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_35);
			V_2 = L_36;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t600 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			MemoryStream_t600 * L_38 = V_0;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, L_38);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_00b0:
	{
		ByteU5BU5D_t441* L_39 = V_2;
		return L_39;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" bool WWWTranscoder_ByteArrayContains_m2482 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___array, uint8_t ___b, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t441* L_0 = ___array;
		NullCheck(L_0);
		V_0 = (((int32_t)(((Array_t *)L_0)->max_length)));
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		ByteU5BU5D_t441* L_1 = ___array;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		uint8_t L_4 = ___b;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3, sizeof(uint8_t)))) == ((uint32_t)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern TypeInfo* WWWTranscoder_t442_il2cpp_TypeInfo_var;
extern "C" bool WWWTranscoder_SevenBitClean_m2483 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t52 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t52 * L_0 = ___e;
		String_t* L_1 = ___s;
		NullCheck(L_0);
		ByteU5BU5D_t441* L_2 = (ByteU5BU5D_t441*)VirtFuncInvoker1< ByteU5BU5D_t441*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t442_il2cpp_TypeInfo_var);
		bool L_3 = WWWTranscoder_SevenBitClean_m2484(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m2484 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___input, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		ByteU5BU5D_t441* L_0 = ___input;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2, sizeof(uint8_t)))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t441* L_3 = ___input;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5, sizeof(uint8_t)))) <= ((int32_t)((int32_t)126))))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_t441* L_8 = ___input;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.CacheIndex
extern "C" void CacheIndex_t443_marshal(const CacheIndex_t443& unmarshaled, CacheIndex_t443_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
extern "C" void CacheIndex_t443_marshal_back(const CacheIndex_t443_marshaled& marshaled, CacheIndex_t443& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
extern "C" void CacheIndex_t443_marshal_cleanup(CacheIndex_t443_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityString_Format_m2485 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t320* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2040(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// System.Void UnityEngine.AsyncOperation::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void AsyncOperation__ctor_m2486 (AsyncOperation_t392 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2610(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2487 (AsyncOperation_t392 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m2487_ftn) (AsyncOperation_t392 *);
	static AsyncOperation_InternalDestroy_m2487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m2487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AsyncOperation_Finalize_m2488 (AsyncOperation_t392 * __this, const MethodInfo* method)
{
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AsyncOperation_InternalDestroy_m2487(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t392_marshal(const AsyncOperation_t392& unmarshaled, AsyncOperation_t392_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void AsyncOperation_t392_marshal_back(const AsyncOperation_t392_marshaled& marshaled, AsyncOperation_t392& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t392_marshal_cleanup(AsyncOperation_t392_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void LogCallback__ctor_m2489 (LogCallback_t445 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
extern "C" void LogCallback_Invoke_m2490 (LogCallback_t445 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m2490((LogCallback_t445 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t445(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* LogType_t397_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m2491 (LogCallback_t445 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t397_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m2492 (LogCallback_t445 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m1710 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m1710_ftn) ();
	static Application_get_isPlaying_m1710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m1710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m102 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m102_ftn) ();
	static Application_get_isEditor_m102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m102_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m1878 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m1878_ftn) ();
	static Application_get_platform_m1878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m1878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern "C" bool Application_get_isMobilePlatform_m103 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = Application_get_platform_m1878(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 0)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 1)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 2)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 3)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 4)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 5)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 6)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 7)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 8)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 9)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 10)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 11)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 12)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 13)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 14)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 15)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0055;
	}

IL_0053:
	{
		return 1;
	}

IL_0055:
	{
		return 0;
	}
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
extern TypeInfo* Application_t446_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m2493 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t445 * V_0 = {0};
	LogCallback_t445 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t445 * L_1 = ((Application_t446_StaticFields*)Application_t446_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t445 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t445 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		LogCallback_Invoke_m2490(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001b:
	{
		LogCallback_t445 * L_7 = ((Application_t446_StaticFields*)Application_t446_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t445 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t445 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		LogCallback_Invoke_m2490(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// System.Void UnityEngine.Behaviour::.ctor()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void Behaviour__ctor_m2494 (Behaviour_t380 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m2574(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m1581 (Behaviour_t380 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m1581_ftn) (Behaviour_t380 *);
	static Behaviour_get_enabled_m1581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m1581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Behaviour_set_enabled_m1715 (Behaviour_t380 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m1715_ftn) (Behaviour_t380 *, bool);
	static Behaviour_set_enabled_m1715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m1715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m1573 (Behaviour_t380 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m1573_ftn) (Behaviour_t380 *);
	static Behaviour_get_isActiveAndEnabled_m1573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m1573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void CameraCallback__ctor_m2495 (CameraCallback_t447 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" void CameraCallback_Invoke_m2496 (CameraCallback_t447 * __this, Camera_t34 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m2496((CameraCallback_t447 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t34 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t34 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t447(Il2CppObject* delegate, Camera_t34 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t34 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * CameraCallback_BeginInvoke_m2497 (CameraCallback_t447 * __this, Camera_t34 * ___cam, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m2498 (CameraCallback_t447 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m1631 (Camera_t34 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m1631_ftn) (Camera_t34 *);
	static Camera_get_nearClipPlane_m1631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m1631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m1630 (Camera_t34 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m1630_ftn) (Camera_t34 *);
	static Camera_get_farClipPlane_m1630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m1630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Camera_set_orthographicSize_m119 (Camera_t34 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m119_ftn) (Camera_t34 *, float);
	static Camera_set_orthographicSize_m119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m1531 (Camera_t34 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m1531_ftn) (Camera_t34 *);
	static Camera_get_depth_m1531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m1531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m1644 (Camera_t34 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m1644_ftn) (Camera_t34 *);
	static Camera_get_cullingMask_m1644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m1644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m2499 (Camera_t34 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m2499_ftn) (Camera_t34 *);
	static Camera_get_eventMask_m2499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m2499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Rect_t191  Camera_get_pixelRect_m2500 (Camera_t34 * __this, const MethodInfo* method)
{
	Rect_t191  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m2501(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t191  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m2501 (Camera_t34 * __this, Rect_t191 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m2501_ftn) (Camera_t34 *, Rect_t191 *);
	static Camera_INTERNAL_get_pixelRect_m2501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m2501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t418 * Camera_get_targetTexture_m2502 (Camera_t34 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t418 * (*Camera_get_targetTexture_m2502_ftn) (Camera_t34 *);
	static Camera_get_targetTexture_m2502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m2502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m2503 (Camera_t34 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m2503_ftn) (Camera_t34 *);
	static Camera_get_clearFlags_m2503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m2503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t10  Camera_ScreenToViewportPoint_m1817 (Camera_t34 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m2504(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" Vector3_t10  Camera_INTERNAL_CALL_ScreenToViewportPoint_m2504 (Object_t * __this /* static, unused */, Camera_t34 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m2504_ftn) (Camera_t34 *, Vector3_t10 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m2504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m2504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t29  Camera_ScreenPointToRay_m59 (Camera_t34 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Ray_t29  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m2505(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t29  Camera_INTERNAL_CALL_ScreenPointToRay_m2505 (Object_t * __this /* static, unused */, Camera_t34 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Ray_t29  (*Camera_INTERNAL_CALL_ScreenPointToRay_m2505_ftn) (Camera_t34 *, Vector3_t10 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m2505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m2505_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t34 * Camera_get_main_m57 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t34 * (*Camera_get_main_m57_ftn) ();
	static Camera_get_main_m57_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m57_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m2506 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m2506_ftn) ();
	static Camera_get_allCamerasCount_m2506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m2506_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
#include "UnityEngine_ArrayTypes.h"
extern "C" int32_t Camera_GetAllCameras_m2507 (Object_t * __this /* static, unused */, CameraU5BU5D_t539* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m2507_ftn) (CameraU5BU5D_t539*);
	static Camera_GetAllCameras_m2507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m2507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
extern TypeInfo* Camera_t34_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m2508 (Object_t * __this /* static, unused */, Camera_t34 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t447 * L_0 = ((Camera_t34_StaticFields*)Camera_t34_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t447 * L_1 = ((Camera_t34_StaticFields*)Camera_t34_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t34 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m2496(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t34_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m2509 (Object_t * __this /* static, unused */, Camera_t34 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t447 * L_0 = ((Camera_t34_StaticFields*)Camera_t34_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t447 * L_1 = ((Camera_t34_StaticFields*)Camera_t34_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t34 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m2496(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t34_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m2510 (Object_t * __this /* static, unused */, Camera_t34 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t447 * L_0 = ((Camera_t34_StaticFields*)Camera_t34_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t447 * L_1 = ((Camera_t34_StaticFields*)Camera_t34_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t34 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m2496(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" GameObject_t4 * Camera_RaycastTry_m2511 (Camera_t34 * __this, Ray_t29  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		int32_t L_2 = V_0;
		GameObject_t4 * L_3 = Camera_INTERNAL_CALL_RaycastTry_m2512(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
extern "C" GameObject_t4 * Camera_INTERNAL_CALL_RaycastTry_m2512 (Object_t * __this /* static, unused */, Camera_t34 * ___self, Ray_t29 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef GameObject_t4 * (*Camera_INTERNAL_CALL_RaycastTry_m2512_ftn) (Camera_t34 *, Ray_t29 *, float, int32_t, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m2512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m2512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask, ___queryTriggerInteraction);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t4 * Camera_RaycastTry2D_m2513 (Camera_t34 * __this, Ray_t29  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t4 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m2514(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t4 * Camera_INTERNAL_CALL_RaycastTry2D_m2514 (Object_t * __this /* static, unused */, Camera_t34 * ___self, Ray_t29 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t4 * (*Camera_INTERNAL_CALL_RaycastTry2D_m2514_ftn) (Camera_t34 *, Ray_t29 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m2514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m2514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" void Debug_Internal_Log_m2515 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t38 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m2515_ftn) (int32_t, String_t*, Object_t38 *);
	static Debug_Internal_Log_m2515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m2515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
// System.Exception
#include "mscorlib_System_Exception.h"
extern "C" void Debug_Internal_LogException_m2516 (Object_t * __this /* static, unused */, Exception_t32 * ___exception, Object_t38 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m2516_ftn) (Exception_t32 *, Object_t38 *);
	static Debug_Internal_LogException_m2516_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m2516_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral196;
extern "C" void Debug_Log_m73 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral196 = il2cpp_codegen_string_literal_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral196;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m2515(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern Il2CppCodeGenString* _stringLiteral196;
extern "C" void Debug_LogError_m1528 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral196 = il2cpp_codegen_string_literal_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral196;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m2515(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m1716 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t38 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t38 * L_2 = ___context;
		Debug_Internal_Log_m2515(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m2517 (Object_t * __this /* static, unused */, Exception_t32 * ___exception, const MethodInfo* method)
{
	{
		Exception_t32 * L_0 = ___exception;
		Debug_Internal_LogException_m2516(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m1669 (Object_t * __this /* static, unused */, Exception_t32 * ___exception, Object_t38 * ___context, const MethodInfo* method)
{
	{
		Exception_t32 * L_0 = ___exception;
		Object_t38 * L_1 = ___context;
		Debug_Internal_LogException_m2516(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2518 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m2515(NULL /*static, unused*/, 1, L_1, (Object_t38 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m2038 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t38 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t38 * L_2 = ___context;
		Debug_Internal_Log_m2515(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void DisplaysUpdatedDelegate__ctor_m2519 (DisplaysUpdatedDelegate_t449 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m2520 (DisplaysUpdatedDelegate_t449 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m2520((DisplaysUpdatedDelegate_t449 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t449(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m2521 (DisplaysUpdatedDelegate_t449 * __this, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m2522 (DisplaysUpdatedDelegate_t449 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Void UnityEngine.Display::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern "C" void Display__ctor_m2523 (Display_t450 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m3101(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Display__ctor_m2524 (Display_t450 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"
extern TypeInfo* DisplayU5BU5D_t451_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m2525 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t451* L_0 = ((DisplayU5BU5D_t451*)SZArrayNew(DisplayU5BU5D_t451_il2cpp_TypeInfo_var, 1));
		Display_t450 * L_1 = (Display_t450 *)il2cpp_codegen_object_new (Display_t450_il2cpp_TypeInfo_var);
		Display__ctor_m2523(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t450 **)(Display_t450 **)SZArrayLdElema(L_0, 0, sizeof(Display_t450 *))) = (Display_t450 *)L_1;
		((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t451* L_2 = ((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t450 **)(Display_t450 **)SZArrayLdElema(L_2, L_3, sizeof(Display_t450 *)));
		((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t449 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t449_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m2526 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t449 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		DisplaysUpdatedDelegate_t449_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t449 * L_0 = ((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t449 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t449 *)CastclassSealed(L_2, DisplaysUpdatedDelegate_t449_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t449_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m2527 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t449 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		DisplaysUpdatedDelegate_t449_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t449 * L_0 = ((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t449 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t449 *)CastclassSealed(L_2, DisplaysUpdatedDelegate_t449_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m2528 (Display_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m2544(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m2529 (Display_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m2544(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m2530 (Display_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m2543(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m2531 (Display_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m2543(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t524  Display_get_colorBuffer_m2532 (Display_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t524  V_0 = {0};
	RenderBuffer_t524  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m2545(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t524  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t524  Display_get_depthBuffer_m2533 (Display_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t524  V_0 = {0};
	RenderBuffer_t524  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m2545(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t524  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m2534 (Display_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m2547(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m2535 (Display_t450 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m2547(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m2536 (Display_t450 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m2548(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m2537 (Display_t450 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m2546(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m2538 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m2549(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  Display_RelativeMouseAt_m2539 (Object_t * __this /* static, unused */, Vector3_t10  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m2550(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t10  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" Display_t450 * Display_get_main_m2540 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		Display_t450 * L_0 = ((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* DisplayU5BU5D_t451_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m2541 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t577* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t577* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t451*)SZArrayNew(DisplayU5BU5D_t451_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t451* L_1 = ((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t577* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t450 * L_6 = (Display_t450 *)il2cpp_codegen_object_new (Display_t450_il2cpp_TypeInfo_var);
		Display__ctor_m2524(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5, sizeof(IntPtr_t))), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t450 **)(Display_t450 **)SZArrayLdElema(L_1, L_2, sizeof(Display_t450 *))) = (Display_t450 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t577* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t451* L_10 = ((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t450 **)(Display_t450 **)SZArrayLdElema(L_10, L_11, sizeof(Display_t450 *)));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"
extern TypeInfo* Display_t450_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m2542 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t449 * L_0 = ((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t450_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t449 * L_1 = ((Display_t450_StaticFields*)Display_t450_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		DisplaysUpdatedDelegate_Invoke_m2520(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m2543 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m2543_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m2543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m2543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m2544 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m2544_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m2544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m2544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m2545 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t524 * ___color, RenderBuffer_t524 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m2545_ftn) (IntPtr_t, RenderBuffer_t524 *, RenderBuffer_t524 *);
	static Display_GetRenderingBuffersImpl_m2545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m2545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m2546 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m2546_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m2546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m2546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m2547 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m2547_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m2547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m2547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m2548 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m2548_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m2548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m2548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m2549 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m2549_ftn) ();
	static Display_MultiDisplayLicenseImpl_m2549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m2549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m2550 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m2550_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m2550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m2550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Void UnityEngine.MonoBehaviour::.ctor()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void MonoBehaviour__ctor_m55 (MonoBehaviour_t3 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m2494(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" Coroutine_t194 * MonoBehaviour_StartCoroutine_m157 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t194 * L_1 = MonoBehaviour_StartCoroutine_Auto_m2551(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t194 * MonoBehaviour_StartCoroutine_Auto_m2551 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t194 * (*MonoBehaviour_StartCoroutine_Auto_m2551_ftn) (MonoBehaviour_t3 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m2551_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m2551_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m2552 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2553(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern "C" void MonoBehaviour_StopCoroutine_m1983 (MonoBehaviour_t3 * __this, Coroutine_t194 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t194 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m2554(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2553 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2553_ftn) (MonoBehaviour_t3 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m2554 (MonoBehaviour_t3 * __this, Coroutine_t194 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m2554_ftn) (MonoBehaviour_t3 *, Coroutine_t194 *);
	static MonoBehaviour_StopCoroutine_Auto_m2554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m2554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1585 (Touch_t45 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t11  Touch_get_position_m115 (Touch_t45 * __this, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t11  Touch_get_deltaPosition_m114 (Touch_t45 * __this, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = (__this->___m_PositionDelta_3);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m113 (Touch_t45 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// Conversion methods for marshalling of: UnityEngine.Touch
extern "C" void Touch_t45_marshal(const Touch_t45& unmarshaled, Touch_t45_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
extern "C" void Touch_t45_marshal_back(const Touch_t45_marshaled& marshaled, Touch_t45& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
extern "C" void Touch_t45_marshal_cleanup(Touch_t45_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m2555 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool Input_GetKeyInt_m2556 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyInt_m2556_ftn) (int32_t);
	static Input_GetKeyInt_m2556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyInt_m2556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" float Input_GetAxis_m104 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxis_m104_ftn) (String_t*);
	static Input_GetAxis_m104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxis_m104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" float Input_GetAxisRaw_m1606 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m1606_ftn) (String_t*);
	static Input_GetAxisRaw_m1606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m1606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m1605 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m1605_ftn) (String_t*);
	static Input_GetButtonDown_m1605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m1605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
extern TypeInfo* Input_t33_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKey_m106 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t33_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyInt_m2556(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m85 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m85_ftn) (int32_t);
	static Input_GetMouseButton_m85_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m85_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m56 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m56_ftn) (int32_t);
	static Input_GetMouseButtonDown_m56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m1586 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m1586_ftn) (int32_t);
	static Input_GetMouseButtonUp_m1586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m1586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern TypeInfo* Input_t33_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  Input_get_mousePosition_m58 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t33_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mousePosition_m2557(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C" void Input_INTERNAL_get_mousePosition_m2557 (Object_t * __this /* static, unused */, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mousePosition_m2557_ftn) (Vector3_t10 *);
	static Input_INTERNAL_get_mousePosition_m2557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mousePosition_m2557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern TypeInfo* Input_t33_il2cpp_TypeInfo_var;
extern "C" Vector2_t11  Input_get_mouseScrollDelta_m1587 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t11  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t33_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mouseScrollDelta_m2558(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_get_mouseScrollDelta_m2558 (Object_t * __this /* static, unused */, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mouseScrollDelta_m2558_ftn) (Vector2_t11 *);
	static Input_INTERNAL_get_mouseScrollDelta_m2558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mouseScrollDelta_m2558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m1604 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m1604_ftn) ();
	static Input_get_mousePresent_m1604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m1604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern TypeInfo* Input_t33_il2cpp_TypeInfo_var;
extern TypeInfo* TouchU5BU5D_t44_il2cpp_TypeInfo_var;
extern "C" TouchU5BU5D_t44* Input_get_touches_m112 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		TouchU5BU5D_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(331);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	TouchU5BU5D_t44* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t33_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m1626(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((TouchU5BU5D_t44*)SZArrayNew(TouchU5BU5D_t44_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		TouchU5BU5D_t44* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t33_il2cpp_TypeInfo_var);
		Touch_t45  L_5 = Input_GetTouch_m1625(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		*((Touch_t45 *)(Touch_t45 *)SZArrayLdElema(L_2, L_3, sizeof(Touch_t45 ))) = L_5;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		TouchU5BU5D_t44* L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t45  Input_GetTouch_m1625 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t45  (*Input_GetTouch_m1625_ftn) (int32_t);
	static Input_GetTouch_m1625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m1625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m1626 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m1626_ftn) ();
	static Input_get_touchCount_m1626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m1626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m1624 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
extern "C" void Input_set_imeCompositionMode_m1959 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m1959_ftn) (int32_t);
	static Input_set_imeCompositionMode_m1959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m1959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m1893 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m1893_ftn) ();
	static Input_get_compositionString_m1893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m1893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Input_t33_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m1947 (Object_t * __this /* static, unused */, Vector2_t11  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t33_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m2559(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m2559 (Object_t * __this /* static, unused */, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m2559_ftn) (Vector2_t11 *);
	static Input_INTERNAL_set_compositionCursorPos_m2559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m2559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"
// System.Void UnityEngine.Object::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Object__ctor_m2560 (Object_t38 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" Object_t38 * Object_Internal_CloneSingle_m2561 (Object_t * __this /* static, unused */, Object_t38 * ___data, const MethodInfo* method)
{
	typedef Object_t38 * (*Object_Internal_CloneSingle_m2561_ftn) (Object_t38 *);
	static Object_Internal_CloneSingle_m2561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m2561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" Object_t38 * Object_Internal_InstantiateSingle_m2562 (Object_t * __this /* static, unused */, Object_t38 * ___data, Vector3_t10  ___pos, Quaternion_t39  ___rot, const MethodInfo* method)
{
	{
		Object_t38 * L_0 = ___data;
		Object_t38 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m2563(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t38 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m2563 (Object_t * __this /* static, unused */, Object_t38 * ___data, Vector3_t10 * ___pos, Quaternion_t39 * ___rot, const MethodInfo* method)
{
	typedef Object_t38 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m2563_ftn) (Object_t38 *, Vector3_t10 *, Quaternion_t39 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m2563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m2563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Object_Destroy_m2564 (Object_t * __this /* static, unused */, Object_t38 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m2564_ftn) (Object_t38 *, float);
	static Object_Destroy_m2564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m2564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m78 (Object_t * __this /* static, unused */, Object_t38 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t38 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m2564(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Object_DestroyImmediate_m2565 (Object_t * __this /* static, unused */, Object_t38 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m2565_ftn) (Object_t38 *, bool);
	static Object_DestroyImmediate_m2565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m2565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m1894 (Object_t * __this /* static, unused */, Object_t38 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t38 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m2565(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m1933 (Object_t38 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m1933_ftn) (Object_t38 *);
	static Object_get_name_m1933_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m1933_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Object_set_name_m133 (Object_t38 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m133_ftn) (Object_t38 *, String_t*);
	static Object_set_name_m133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m133_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
extern "C" void Object_set_hideFlags_m1794 (Object_t38 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m1794_ftn) (Object_t38 *, int32_t);
	static Object_set_hideFlags_m1794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m1794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m2566 (Object_t38 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m2566_ftn) (Object_t38 *);
	static Object_ToString_m2566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m2566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Object_t38_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m2567 (Object_t38 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m2569(NULL /*static, unused*/, __this, ((Object_t38 *)IsInstClass(L_0, Object_t38_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m2568 (Object_t38 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m2571(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m2569 (Object_t * __this /* static, unused */, Object_t38 * ___lhs, Object_t38 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t38 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t38 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t38 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t38 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t38 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m2570(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t38 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m2570(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t38 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t38 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m2570 (Object_t * __this /* static, unused */, Object_t38 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t38 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m2572(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m3074(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m2571 (Object_t38 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m2572 (Object_t38 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern Il2CppCodeGenString* _stringLiteral197;
extern "C" Object_t38 * Object_Instantiate_m83 (Object_t * __this /* static, unused */, Object_t38 * ___original, Vector3_t10  ___position, Quaternion_t39  ___rotation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral197 = il2cpp_codegen_string_literal_from_index(197);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t38 * L_0 = ___original;
		Object_CheckNullArgument_m2573(NULL /*static, unused*/, L_0, _stringLiteral197, /*hidden argument*/NULL);
		Object_t38 * L_1 = ___original;
		Vector3_t10  L_2 = ___position;
		Quaternion_t39  L_3 = ___rotation;
		Object_t38 * L_4 = Object_Internal_InstantiateSingle_m2562(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m2573 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_000d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m1526 (Object_t * __this /* static, unused */, Object_t38 * ___exists, const MethodInfo* method)
{
	{
		Object_t38 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m2569(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m94 (Object_t * __this /* static, unused */, Object_t38 * ___x, Object_t38 * ___y, const MethodInfo* method)
{
	{
		Object_t38 * L_0 = ___x;
		Object_t38 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m79 (Object_t * __this /* static, unused */, Object_t38 * ___x, Object_t38 * ___y, const MethodInfo* method)
{
	{
		Object_t38 * L_0 = ___x;
		Object_t38 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
extern "C" void Object_t38_marshal(const Object_t38& unmarshaled, Object_t38_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = reinterpret_cast<intptr_t>((unmarshaled.___m_CachedPtr_1).___m_value_0);
}
extern "C" void Object_t38_marshal_back(const Object_t38_marshaled& marshaled, Object_t38& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	(unmarshaled.___m_CachedPtr_1).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_CachedPtr_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
extern "C" void Object_t38_marshal_cleanup(Object_t38_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_13.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Void UnityEngine.Component::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Component__ctor_m2574 (Component_t42 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t9 * Component_get_transform_m64 (Component_t42 * __this, const MethodInfo* method)
{
	typedef Transform_t9 * (*Component_get_transform_m64_ftn) (Component_t42 *);
	static Component_get_transform_m64_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m64_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t4 * Component_get_gameObject_m66 (Component_t42 * __this, const MethodInfo* method)
{
	typedef GameObject_t4 * (*Component_get_gameObject_m66_ftn) (Component_t42 *);
	static Component_get_gameObject_m66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" Component_t42 * Component_GetComponent_m2087 (Component_t42 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t4 * L_0 = Component_get_gameObject_m66(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t42 * L_2 = GameObject_GetComponent_m2579(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Component_GetComponentFastPath_m2575 (Component_t42 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m2575_ftn) (Component_t42 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m2575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m2575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t42 * Component_GetComponentInChildren_m2576 (Component_t42 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t4 * L_0 = Component_get_gameObject_m66(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t42 * L_2 = GameObject_GetComponentInChildren_m2581(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t42 * Component_GetComponentInParent_m2577 (Component_t42 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t4 * L_0 = Component_get_gameObject_m66(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t42 * L_2 = GameObject_GetComponentInParent_m2582(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void Component_GetComponentsForListInternal_m2578 (Component_t42 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m2578_ftn) (Component_t42 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m2578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m2578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_13.h"
extern "C" void Component_GetComponents_m1783 (Component_t42 * __this, Type_t * ___type, List_1_t314 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t314 * L_1 = ___results;
		Component_GetComponentsForListInternal_m2578(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Component::get_tag()
extern "C" String_t* Component_get_tag_m62 (Component_t42 * __this, const MethodInfo* method)
{
	{
		GameObject_t4 * L_0 = Component_get_gameObject_m66(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = GameObject_get_tag_m2584(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" void GameObject__ctor_m1674 (GameObject_t4 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m2588(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" Component_t42 * GameObject_GetComponent_m2579 (GameObject_t4 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t42 * (*GameObject_GetComponent_m2579_ftn) (GameObject_t4 *, Type_t *);
	static GameObject_GetComponent_m2579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m2579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void GameObject_GetComponentFastPath_m2580 (GameObject_t4 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m2580_ftn) (GameObject_t4 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m2580_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m2580_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t9_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" Component_t42 * GameObject_GetComponentInChildren_m2581 (GameObject_t4 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		Transform_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Component_t42 * V_0 = {0};
	Transform_t9 * V_1 = {0};
	Transform_t9 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t42 * V_4 = {0};
	Component_t42 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m1582(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t42 * L_2 = GameObject_GetComponent_m2579(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t42 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m79(NULL /*static, unused*/, L_3, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t42 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t9 * L_6 = GameObject_get_transform_m77(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t9 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m79(NULL /*static, unused*/, L_7, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t9 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t28_il2cpp_TypeInfo_var, L_11);
			V_2 = ((Transform_t9 *)CastclassClass(L_12, Transform_t9_il2cpp_TypeInfo_var));
			Transform_t9 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t4 * L_14 = Component_get_gameObject_m66(L_13, /*hidden argument*/NULL);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t42 * L_16 = GameObject_GetComponentInChildren_m2581(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			Component_t42 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m79(NULL /*static, unused*/, L_17, (Object_t38 *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t42 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t28_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, IDisposable_t37_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0095:
	{
		return (Component_t42 *)NULL;
	}

IL_0097:
	{
		Component_t42 * L_25 = V_5;
		return L_25;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Component_t42 * GameObject_GetComponentInParent_m2582 (GameObject_t4 * __this, Type_t * ___type, const MethodInfo* method)
{
	Component_t42 * V_0 = {0};
	Transform_t9 * V_1 = {0};
	Component_t42 * V_2 = {0};
	{
		bool L_0 = GameObject_get_activeInHierarchy_m1582(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t42 * L_2 = GameObject_GetComponent_m2579(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t42 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m79(NULL /*static, unused*/, L_3, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t42 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t9 * L_6 = GameObject_get_transform_m77(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t9 * L_7 = Transform_get_parent_m65(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t9 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m79(NULL /*static, unused*/, L_8, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0070;
	}

IL_003e:
	{
		Transform_t9 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t4 * L_11 = Component_get_gameObject_m66(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeInHierarchy_m1582(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		Transform_t9 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_t4 * L_14 = Component_get_gameObject_m66(L_13, /*hidden argument*/NULL);
		Type_t * L_15 = ___type;
		NullCheck(L_14);
		Component_t42 * L_16 = GameObject_GetComponent_m2579(L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Component_t42 * L_17 = V_2;
		bool L_18 = Object_op_Inequality_m79(NULL /*static, unused*/, L_17, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		Component_t42 * L_19 = V_2;
		return L_19;
	}

IL_0069:
	{
		Transform_t9 * L_20 = V_1;
		NullCheck(L_20);
		Transform_t9 * L_21 = Transform_get_parent_m65(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
	}

IL_0070:
	{
		Transform_t9 * L_22 = V_1;
		bool L_23 = Object_op_Inequality_m79(NULL /*static, unused*/, L_22, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_003e;
		}
	}

IL_007c:
	{
		return (Component_t42 *)NULL;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Array_t * GameObject_GetComponentsInternal_m2583 (GameObject_t4 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m2583_ftn) (GameObject_t4 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m2583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m2583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t9 * GameObject_get_transform_m77 (GameObject_t4 * __this, const MethodInfo* method)
{
	typedef Transform_t9 * (*GameObject_get_transform_m77_ftn) (GameObject_t4 *);
	static GameObject_get_transform_m77_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m77_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m86 (GameObject_t4 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m86_ftn) (GameObject_t4 *);
	static GameObject_get_layer_m86_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m86_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GameObject_set_layer_m1678 (GameObject_t4 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m1678_ftn) (GameObject_t4 *, int32_t);
	static GameObject_set_layer_m1678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m1678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m143 (GameObject_t4 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m143_ftn) (GameObject_t4 *, bool);
	static GameObject_SetActive_m143_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m143_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m2003 (GameObject_t4 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m2003_ftn) (GameObject_t4 *);
	static GameObject_get_activeSelf_m2003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m2003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m1582 (GameObject_t4 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m1582_ftn) (GameObject_t4 *);
	static GameObject_get_activeInHierarchy_m1582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m1582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m2584 (GameObject_t4 * __this, const MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m2584_ftn) (GameObject_t4 *);
	static GameObject_get_tag_m2584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m2584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" GameObjectU5BU5D_t5* GameObject_FindGameObjectsWithTag_m70 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	typedef GameObjectU5BU5D_t5* (*GameObject_FindGameObjectsWithTag_m70_ftn) (String_t*);
	static GameObject_FindGameObjectsWithTag_m70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectsWithTag_m70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void GameObject_SendMessage_m2585 (GameObject_t4 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m2585_ftn) (GameObject_t4 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m2585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m2585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t42 * GameObject_Internal_AddComponentWithType_m2586 (GameObject_t4 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t42 * (*GameObject_Internal_AddComponentWithType_m2586_ftn) (GameObject_t4 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m2586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m2586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t42 * GameObject_AddComponent_m2587 (GameObject_t4 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t42 * L_1 = GameObject_Internal_AddComponentWithType_m2586(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern "C" void GameObject_Internal_CreateGameObject_m2588 (Object_t * __this /* static, unused */, GameObject_t4 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m2588_ftn) (GameObject_t4 *, String_t*);
	static GameObject_Internal_CreateGameObject_m2588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m2588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t4 * GameObject_Find_m75 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef GameObject_t4 * (*GameObject_Find_m75_ftn) (String_t*);
	static GameObject_Find_m75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C" GameObject_t4 * GameObject_get_gameObject_m135 (GameObject_t4 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Enumerator__ctor_m2589 (Enumerator_t455 * __this, Transform_t9 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		Transform_t9 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Object_t * Enumerator_get_Current_m2590 (Enumerator_t455 * __this, const MethodInfo* method)
{
	{
		Transform_t9 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t9 * L_2 = Transform_GetChild_m1679(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m2591 (Enumerator_t455 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t9 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m1680(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Vector3_t10  Transform_get_position_m134 (Transform_t9 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m2592(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Transform_set_position_m87 (Transform_t9 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m2593(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m2592 (Transform_t9 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m2592_ftn) (Transform_t9 *, Vector3_t10 *);
	static Transform_INTERNAL_get_position_m2592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m2592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m2593 (Transform_t9 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m2593_ftn) (Transform_t9 *, Vector3_t10 *);
	static Transform_INTERNAL_set_position_m2593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m2593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t10  Transform_get_localPosition_m1731 (Transform_t9 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m2594(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m1942 (Transform_t9 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m2595(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m2594 (Transform_t9 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m2594_ftn) (Transform_t9 *, Vector3_t10 *);
	static Transform_INTERNAL_get_localPosition_m2594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m2594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m2595 (Transform_t9 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m2595_ftn) (Transform_t9 *, Vector3_t10 *);
	static Transform_INTERNAL_set_localPosition_m2595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m2595_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern "C" Vector3_t10  Transform_get_forward_m1825 (Transform_t9 * __this, const MethodInfo* method)
{
	{
		Quaternion_t39  L_0 = Transform_get_rotation_m1821(__this, /*hidden argument*/NULL);
		Vector3_t10  L_1 = Vector3_get_forward_m1822(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t10  L_2 = Quaternion_op_Multiply_m1823(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t39  Transform_get_rotation_m1821 (Transform_t9 * __this, const MethodInfo* method)
{
	Quaternion_t39  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m2596(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t39  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void Transform_set_rotation_m101 (Transform_t9 * __this, Quaternion_t39  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m2597(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m2596 (Transform_t9 * __this, Quaternion_t39 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m2596_ftn) (Transform_t9 *, Quaternion_t39 *);
	static Transform_INTERNAL_get_rotation_m2596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m2596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m2597 (Transform_t9 * __this, Quaternion_t39 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m2597_ftn) (Transform_t9 *, Quaternion_t39 *);
	static Transform_INTERNAL_set_rotation_m2597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m2597_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t39  Transform_get_localRotation_m1939 (Transform_t9 * __this, const MethodInfo* method)
{
	Quaternion_t39  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m2598(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t39  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m1943 (Transform_t9 * __this, Quaternion_t39  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m2599(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m2598 (Transform_t9 * __this, Quaternion_t39 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m2598_ftn) (Transform_t9 *, Quaternion_t39 *);
	static Transform_INTERNAL_get_localRotation_m2598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m2598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m2599 (Transform_t9 * __this, Quaternion_t39 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m2599_ftn) (Transform_t9 *, Quaternion_t39 *);
	static Transform_INTERNAL_set_localRotation_m2599_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m2599_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t10  Transform_get_localScale_m136 (Transform_t9 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m2600(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m1944 (Transform_t9 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m2601(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m2600 (Transform_t9 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m2600_ftn) (Transform_t9 *, Vector3_t10 *);
	static Transform_INTERNAL_get_localScale_m2600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m2600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m2601 (Transform_t9 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m2601_ftn) (Transform_t9 *, Vector3_t10 *);
	static Transform_INTERNAL_set_localScale_m2601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m2601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t9 * Transform_get_parent_m65 (Transform_t9 * __this, const MethodInfo* method)
{
	{
		Transform_t9 * L_0 = Transform_get_parentInternal_m2602(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* RectTransform_t138_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral198;
extern "C" void Transform_set_parent_m1976 (Transform_t9 * __this, Transform_t9 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		_stringLiteral198 = il2cpp_codegen_string_literal_from_index(198);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t138 *)IsInstSealed(__this, RectTransform_t138_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2038(NULL /*static, unused*/, _stringLiteral198, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t9 * L_0 = ___value;
		Transform_set_parentInternal_m2603(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t9 * Transform_get_parentInternal_m2602 (Transform_t9 * __this, const MethodInfo* method)
{
	typedef Transform_t9 * (*Transform_get_parentInternal_m2602_ftn) (Transform_t9 *);
	static Transform_get_parentInternal_m2602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m2602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m2603 (Transform_t9 * __this, Transform_t9 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m2603_ftn) (Transform_t9 *, Transform_t9 *);
	static Transform_set_parentInternal_m2603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m2603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m84 (Transform_t9 * __this, Transform_t9 * ___parent, const MethodInfo* method)
{
	{
		Transform_t9 * L_0 = ___parent;
		Transform_SetParent_m1677(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Transform_SetParent_m1677 (Transform_t9 * __this, Transform_t9 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m1677_ftn) (Transform_t9 *, Transform_t9 *, bool);
	static Transform_SetParent_m1677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m1677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t363  Transform_get_worldToLocalMatrix_m2007 (Transform_t9 * __this, const MethodInfo* method)
{
	Matrix4x4_t363  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m2604(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t363  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m2604 (Transform_t9 * __this, Matrix4x4_t363 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m2604_ftn) (Transform_t9 *, Matrix4x4_t363 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m2604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m2604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Transform_TransformPoint_m2026 (Transform_t9 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Transform_INTERNAL_CALL_TransformPoint_m2605(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t10  Transform_INTERNAL_CALL_TransformPoint_m2605 (Object_t * __this /* static, unused */, Transform_t9 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Transform_INTERNAL_CALL_TransformPoint_m2605_ftn) (Transform_t9 *, Vector3_t10 *);
	static Transform_INTERNAL_CALL_TransformPoint_m2605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m2605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Transform_InverseTransformPoint_m1739 (Transform_t9 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m2606(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t10  Transform_INTERNAL_CALL_InverseTransformPoint_m2606 (Object_t * __this /* static, unused */, Transform_t9 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Transform_INTERNAL_CALL_InverseTransformPoint_m2606_ftn) (Transform_t9 *, Vector3_t10 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m2606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m2606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m1680 (Transform_t9 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m1680_ftn) (Transform_t9 *);
	static Transform_get_childCount_m1680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m1680_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m1934 (Transform_t9 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m1934_ftn) (Transform_t9 *);
	static Transform_SetAsFirstSibling_m1934_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m1934_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" bool Transform_IsChildOf_m1718 (Transform_t9 * __this, Transform_t9 * ___parent, const MethodInfo* method)
{
	typedef bool (*Transform_IsChildOf_m1718_ftn) (Transform_t9 *, Transform_t9 *);
	static Transform_IsChildOf_m1718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_IsChildOf_m1718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::IsChildOf(UnityEngine.Transform)");
	return _il2cpp_icall_func(__this, ___parent);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"
extern TypeInfo* Enumerator_t455_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m2607 (Transform_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(334);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t455 * L_0 = (Enumerator_t455 *)il2cpp_codegen_object_new (Enumerator_t455_il2cpp_TypeInfo_var);
		Enumerator__ctor_m2589(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Transform_t9 * Transform_GetChild_m1679 (Transform_t9 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t9 * (*Transform_GetChild_m1679_ftn) (Transform_t9 *, int32_t);
	static Transform_GetChild_m1679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m1679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m105 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m105_ftn) ();
	static Time_get_deltaTime_m105_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m105_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m1610 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m1610_ftn) ();
	static Time_get_unscaledTime_m1610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m1610_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m1660 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m1660_ftn) ();
	static Time_get_unscaledDeltaTime_m1660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m1660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern "C" int32_t Random_Range_m2608 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m2609(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m2609 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m2609_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m2609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m2609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
// System.Void UnityEngine.YieldInstruction::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void YieldInstruction__ctor_m2610 (YieldInstruction_t398 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t398_marshal(const YieldInstruction_t398& unmarshaled, YieldInstruction_t398_marshaled& marshaled)
{
}
extern "C" void YieldInstruction_t398_marshal_back(const YieldInstruction_t398_marshaled& marshaled, YieldInstruction_t398& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t398_marshal_cleanup(YieldInstruction_t398_marshaled& marshaled)
{
}
// UnityEngine.Experimental.Director.DirectorPlayer
#include "UnityEngine_UnityEngine_Experimental_Director_DirectorPlayer.h"
// UnityEngine.Experimental.Director.DirectorPlayer
#include "UnityEngine_UnityEngine_Experimental_Director_DirectorPlayerMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsInternal
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsInternal.h"
// UnityEngine.Advertisements.UnityAdsInternal
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsInternalMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge.h"
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_geMethodDeclarations.h"
// System.Void UnityEngine.Advertisements.UnityAdsInternal::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void UnityAdsInternal__ctor_m2611 (UnityAdsInternal_t459 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onCampaignsAvailable_m2612 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onCampaignsAvailable_m2613 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onCampaignsFetchFailed_m2614 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onCampaignsFetchFailed_m2615 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onShow_m2616 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onShow_m2617 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onHide_m2618 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onHide_m2619 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge.h"
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_2_t461_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onVideoCompleted_m2620 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t461 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_2_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(337);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_2_t461 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		UnityAdsDelegate_2_t461 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = ((UnityAdsDelegate_2_t461 *)CastclassSealed(L_2, UnityAdsDelegate_2_t461_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_2_t461_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onVideoCompleted_m2621 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t461 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_2_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(337);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_2_t461 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		UnityAdsDelegate_2_t461 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = ((UnityAdsDelegate_2_t461 *)CastclassSealed(L_2, UnityAdsDelegate_2_t461_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onVideoStarted_m2622 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t460_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onVideoStarted_m2623 (Object_t * __this /* static, unused */, UnityAdsDelegate_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		UnityAdsDelegate_t460 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = ((UnityAdsDelegate_t460 *)CastclassSealed(L_2, UnityAdsDelegate_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RegisterNative()
extern "C" void UnityAdsInternal_RegisterNative_m2624 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_RegisterNative_m2624_ftn) ();
	static UnityAdsInternal_RegisterNative_m2624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_RegisterNative_m2624_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::RegisterNative()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::Init(System.String,System.Boolean,System.Boolean,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void UnityAdsInternal_Init_m2625 (Object_t * __this /* static, unused */, String_t* ___gameId, bool ___testModeEnabled, bool ___debugModeEnabled, String_t* ___unityVersion, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_Init_m2625_ftn) (String_t*, bool, bool, String_t*);
	static UnityAdsInternal_Init_m2625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_Init_m2625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::Init(System.String,System.Boolean,System.Boolean,System.String)");
	_il2cpp_icall_func(___gameId, ___testModeEnabled, ___debugModeEnabled, ___unityVersion);
}
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::Show(System.String,System.String,System.String)
extern "C" bool UnityAdsInternal_Show_m2626 (Object_t * __this /* static, unused */, String_t* ___zoneId, String_t* ___rewardItemKey, String_t* ___options, const MethodInfo* method)
{
	typedef bool (*UnityAdsInternal_Show_m2626_ftn) (String_t*, String_t*, String_t*);
	static UnityAdsInternal_Show_m2626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_Show_m2626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::Show(System.String,System.String,System.String)");
	return _il2cpp_icall_func(___zoneId, ___rewardItemKey, ___options);
}
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::CanShowAds(System.String)
extern "C" bool UnityAdsInternal_CanShowAds_m2627 (Object_t * __this /* static, unused */, String_t* ___zoneId, const MethodInfo* method)
{
	typedef bool (*UnityAdsInternal_CanShowAds_m2627_ftn) (String_t*);
	static UnityAdsInternal_CanShowAds_m2627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_CanShowAds_m2627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::CanShowAds(System.String)");
	return _il2cpp_icall_func(___zoneId);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetLogLevel(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UnityAdsInternal_SetLogLevel_m2628 (Object_t * __this /* static, unused */, int32_t ___logLevel, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_SetLogLevel_m2628_ftn) (int32_t);
	static UnityAdsInternal_SetLogLevel_m2628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_SetLogLevel_m2628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::SetLogLevel(System.Int32)");
	_il2cpp_icall_func(___logLevel);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetCampaignDataURL(System.String)
extern "C" void UnityAdsInternal_SetCampaignDataURL_m2629 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_SetCampaignDataURL_m2629_ftn) (String_t*);
	static UnityAdsInternal_SetCampaignDataURL_m2629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_SetCampaignDataURL_m2629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::SetCampaignDataURL(System.String)");
	_il2cpp_icall_func(___url);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RemoveAllEventHandlers()
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_RemoveAllEventHandlers_m2630 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		s_Il2CppMethodIntialized = true;
	}
	{
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = (UnityAdsDelegate_t460 *)NULL;
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = (UnityAdsDelegate_t460 *)NULL;
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = (UnityAdsDelegate_t460 *)NULL;
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = (UnityAdsDelegate_t460 *)NULL;
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = (UnityAdsDelegate_2_t461 *)NULL;
		((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = (UnityAdsDelegate_t460 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsAvailable()
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsAvailable_m2631 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t460 * V_0 = {0};
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		V_0 = L_0;
		UnityAdsDelegate_t460 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t460 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m3051(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsFetchFailed()
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsFetchFailed_m2632 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t460 * V_0 = {0};
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		V_0 = L_0;
		UnityAdsDelegate_t460 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t460 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m3051(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsShow()
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsShow_m2633 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t460 * V_0 = {0};
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		V_0 = L_0;
		UnityAdsDelegate_t460 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t460 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m3051(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsHide()
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsHide_m2634 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t460 * V_0 = {0};
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		V_0 = L_0;
		UnityAdsDelegate_t460 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t460 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m3051(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoCompleted(System.String,System.Boolean)
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_geMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern const MethodInfo* UnityAdsDelegate_2_Invoke_m3102_MethodInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsVideoCompleted_m2635 (Object_t * __this /* static, unused */, String_t* ___rewardItemKey, bool ___skipped, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		UnityAdsDelegate_2_Invoke_m3102_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483963);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_2_t461 * V_0 = {0};
	{
		UnityAdsDelegate_2_t461 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		V_0 = L_0;
		UnityAdsDelegate_2_t461 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		UnityAdsDelegate_2_t461 * L_2 = V_0;
		String_t* L_3 = ___rewardItemKey;
		bool L_4 = ___skipped;
		NullCheck(L_2);
		UnityAdsDelegate_2_Invoke_m3102(L_2, L_3, L_4, /*hidden argument*/UnityAdsDelegate_2_Invoke_m3102_MethodInfo_var);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoStarted()
extern TypeInfo* UnityAdsInternal_t459_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsVideoStarted_m2636 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t460 * V_0 = {0};
	{
		UnityAdsDelegate_t460 * L_0 = ((UnityAdsInternal_t459_StaticFields*)UnityAdsInternal_t459_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		V_0 = L_0;
		UnityAdsDelegate_t460 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t460 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m3051(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"
// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t10  Particle_get_position_m2637 (Particle_t462 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Particle_set_position_m2638 (Particle_t462 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t10  Particle_get_velocity_m2639 (Particle_t462 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m2640 (Particle_t462 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m2641 (Particle_t462 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Particle_set_energy_m2642 (Particle_t462 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m2643 (Particle_t462 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m2644 (Particle_t462 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m2645 (Particle_t462 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m2646 (Particle_t462 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m2647 (Particle_t462 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m2648 (Particle_t462 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m2649 (Particle_t462 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m2650 (Particle_t462 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t27  Particle_get_color_m2651 (Particle_t462 * __this, const MethodInfo* method)
{
	{
		Color_t27  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void Particle_set_color_m2652 (Particle_t462 * __this, Color_t27  ___value, const MethodInfo* method)
{
	{
		Color_t27  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteractionMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
extern "C" bool Physics_Raycast_m2653 (Object_t * __this /* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, RaycastHit_t30 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___origin;
		Vector3_t10  L_1 = ___direction;
		RaycastHit_t30 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		int32_t L_5 = ___queryTriggerInteraction;
		bool L_6 = Physics_Internal_Raycast_m2658(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" bool Physics_Raycast_m1818 (Object_t * __this /* static, unused */, Ray_t29  ___ray, RaycastHit_t30 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		Ray_t29  L_0 = ___ray;
		RaycastHit_t30 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m2654(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" bool Physics_Raycast_m60 (Object_t * __this /* static, unused */, Ray_t29  ___ray, RaycastHit_t30 * ___hitInfo, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t29  L_0 = ___ray;
		RaycastHit_t30 * L_1 = ___hitInfo;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m2654(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" bool Physics_Raycast_m2654 (Object_t * __this /* static, unused */, Ray_t29  ___ray, RaycastHit_t30 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Ray_get_origin_m1632((&___ray), /*hidden argument*/NULL);
		Vector3_t10  L_1 = Ray_get_direction_m1633((&___ray), /*hidden argument*/NULL);
		RaycastHit_t30 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		int32_t L_5 = ___queryTriggerInteraction;
		bool L_6 = Physics_Raycast_m2653(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t332* Physics_RaycastAll_m1646 (Object_t * __this /* static, unused */, Ray_t29  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		Ray_t29  L_0 = ___ray;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layerMask;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t332* L_4 = Physics_RaycastAll_m2655(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t332* Physics_RaycastAll_m2655 (Object_t * __this /* static, unused */, Ray_t29  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Ray_get_origin_m1632((&___ray), /*hidden argument*/NULL);
		Vector3_t10  L_1 = Ray_get_direction_m1633((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		int32_t L_4 = ___queryTriggerInteraction;
		RaycastHitU5BU5D_t332* L_5 = Physics_RaycastAll_m2656(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t332* Physics_RaycastAll_m2656 (Object_t * __this /* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		int32_t L_2 = ___queryTriggerInteraction;
		RaycastHitU5BU5D_t332* L_3 = Physics_INTERNAL_CALL_RaycastAll_m2657(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t332* Physics_INTERNAL_CALL_RaycastAll_m2657 (Object_t * __this /* static, unused */, Vector3_t10 * ___origin, Vector3_t10 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t332* (*Physics_INTERNAL_CALL_RaycastAll_m2657_ftn) (Vector3_t10 *, Vector3_t10 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m2657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m2657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask, ___queryTriggerInteraction);
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Internal_Raycast_m2658 (Object_t * __this /* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, RaycastHit_t30 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		RaycastHit_t30 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		int32_t L_3 = ___queryTriggerInteraction;
		bool L_4 = Physics_INTERNAL_CALL_Internal_Raycast_m2659(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m2659 (Object_t * __this /* static, unused */, Vector3_t10 * ___origin, Vector3_t10 * ___direction, RaycastHit_t30 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m2659_ftn) (Vector3_t10 *, Vector3_t10 *, RaycastHit_t30 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m2659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m2659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask, ___queryTriggerInteraction);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
