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

// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ArgumentCache__ctor_m2991 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t38 * ArgumentCache_get_unityObjectArgument_m2992 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		Object_t38 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2993 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m2994 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m2995 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m2996 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m2997 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t613_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral271;
extern Il2CppCodeGenString* _stringLiteral272;
extern Il2CppCodeGenString* _stringLiteral273;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m2998 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Regex_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		_stringLiteral271 = il2cpp_codegen_string_literal_from_index(271);
		_stringLiteral272 = il2cpp_codegen_string_literal_from_index(272);
		_stringLiteral273 = il2cpp_codegen_string_literal_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1930(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t613_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m3134(NULL /*static, unused*/, L_2, _stringLiteral271, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m3134(NULL /*static, unused*/, L_5, _stringLiteral272, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m3134(NULL /*static, unused*/, L_8, _stringLiteral273, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
extern "C" void ArgumentCache_OnBeforeSerialize_m2999 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m2998(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m3000 (ArgumentCache_t553 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m2998(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void BaseInvokableCall__ctor_m3001 (BaseInvokableCall_t554 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral274;
extern Il2CppCodeGenString* _stringLiteral275;
extern "C" void BaseInvokableCall__ctor_m3002 (BaseInvokableCall_t554 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral274 = il2cpp_codegen_string_literal_from_index(274);
		_stringLiteral275 = il2cpp_codegen_string_literal_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, _stringLiteral274, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t614 * L_3 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_3, _stringLiteral275, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* Object_t38_il2cpp_TypeInfo_var;
extern "C" bool BaseInvokableCall_AllowInvoke_m3003 (Object_t * __this /* static, unused */, Delegate_t346 * ___delegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t38 * V_1 = {0};
	{
		Delegate_t346 * L_0 = ___delegate;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3136(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		Object_t * L_3 = V_0;
		V_1 = ((Object_t38 *)IsInstClass(L_3, Object_t38_il2cpp_TypeInfo_var));
		Object_t38 * L_4 = V_1;
		bool L_5 = Object_ReferenceEquals_m3110(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		Object_t38 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m79(NULL /*static, unused*/, L_6, (Object_t38 *)NULL, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		return 1;
	}
}
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern const Il2CppType* UnityAction_t156_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t156_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3004 (InvokableCall_t555 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t156_0_0_0_var = il2cpp_codegen_type_from_index(149);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		UnityAction_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3002(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t156 * L_2 = (__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(UnityAction_t156_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t346 * L_6 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t346 * L_7 = Delegate_Combine_m1811(NULL /*static, unused*/, L_2, ((UnityAction_t156 *)CastclassSealed(L_6, UnityAction_t156_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t156 *)CastclassSealed(L_7, UnityAction_t156_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
extern TypeInfo* UnityAction_t156_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3005 (InvokableCall_t555 * __this, UnityAction_t156 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m3001(__this, /*hidden argument*/NULL);
		UnityAction_t156 * L_0 = (__this->___Delegate_0);
		UnityAction_t156 * L_1 = ___action;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t156 *)CastclassSealed(L_2, UnityAction_t156_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
extern "C" void InvokableCall_Invoke_m3006 (InvokableCall_t555 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
{
	{
		UnityAction_t156 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t156 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		UnityAction_Invoke_m1777(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m3007 (InvokableCall_t555 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t156 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3136(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t156 * L_3 = (__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m3049(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Void UnityEngine.Events.PersistentCall::.ctor()
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ArgumentCache_t553_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m3008 (PersistentCall_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t553 * L_0 = (ArgumentCache_t553 *)il2cpp_codegen_object_new (ArgumentCache_t553_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m2991(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t38 * PersistentCall_get_target_m3009 (PersistentCall_t557 * __this, const MethodInfo* method)
{
	{
		Object_t38 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3010 (PersistentCall_t557 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m3011 (PersistentCall_t557 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t553 * PersistentCall_get_arguments_m3012 (PersistentCall_t557 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t553 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m3013 (PersistentCall_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t38 * L_0 = PersistentCall_get_target_m3009(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m79(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m3010(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1930(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
extern TypeInfo* CachedInvokableCall_1_t615_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t616_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t617_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t618_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t555_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3137_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3138_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3139_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3140_MethodInfo_var;
extern "C" BaseInvokableCall_t554 * PersistentCall_GetRuntimeCall_m3014 (PersistentCall_t557 * __this, UnityEventBase_t562 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(376);
		CachedInvokableCall_1_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		CachedInvokableCall_1_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		CachedInvokableCall_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		InvokableCall_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		CachedInvokableCall_1__ctor_m3137_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483975);
		CachedInvokableCall_1__ctor_m3138_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483976);
		CachedInvokableCall_1__ctor_m3139_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483977);
		CachedInvokableCall_1__ctor_m3140_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483978);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t562 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t554 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t562 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m3027(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t554 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t562 * L_7 = ___theEvent;
		Object_t38 * L_8 = PersistentCall_get_target_m3009(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t554 * L_10 = (BaseInvokableCall_t554 *)VirtFuncInvoker2< BaseInvokableCall_t554 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t38 * L_11 = PersistentCall_get_target_m3009(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t553 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t554 * L_14 = PersistentCall_GetObjectCall_m3015(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t38 * L_15 = PersistentCall_get_target_m3009(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t553 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m2995(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t615 * L_19 = (CachedInvokableCall_1_t615 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t615_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3137(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m3137_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t38 * L_20 = PersistentCall_get_target_m3009(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t553 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m2994(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t616 * L_24 = (CachedInvokableCall_1_t616 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t616_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3138(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m3138_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t38 * L_25 = PersistentCall_get_target_m3009(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t553 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m2996(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t617 * L_29 = (CachedInvokableCall_1_t617 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t617_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3139(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m3139_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t38 * L_30 = PersistentCall_get_target_m3009(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t553 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m2997(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t618 * L_34 = (CachedInvokableCall_1_t618 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t618_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3140(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m3140_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t38 * L_35 = PersistentCall_get_target_m3009(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t555 * L_37 = (InvokableCall_t555 *)il2cpp_codegen_object_new (InvokableCall_t555_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3004(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t554 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern const Il2CppType* Object_t38_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t620_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t554_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t554 * PersistentCall_GetObjectCall_m3015 (Object_t * __this /* static, unused */, Object_t38 * ___target, MethodInfo_t * ___method, ArgumentCache_t553 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t38_0_0_0_var = il2cpp_codegen_type_from_index(117);
		CachedInvokableCall_1_t620_0_0_0_var = il2cpp_codegen_type_from_index(381);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(382);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		BaseInvokableCall_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t619 * V_3 = {0};
	Object_t38 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Object_t38_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t553 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2993(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1930(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t553 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2993(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m3141, L_5, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Object_t38_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t620_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t582* L_11 = ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0, sizeof(Type_t *))) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t582* L_15 = ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Object_t38_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		TypeU5BU5D_t582* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t582* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t619 * L_21 = (ConstructorInfo_t619 *)VirtFuncInvoker1< ConstructorInfo_t619 *, TypeU5BU5D_t582* >::Invoke(67 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t553 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t38 * L_23 = ArgumentCache_get_unityObjectArgument_m2992(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t38 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m79(NULL /*static, unused*/, L_24, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t38 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m1595(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t38 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t619 * L_30 = V_3;
		ObjectU5BU5D_t320* L_31 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 3));
		Object_t38 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0, sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t320* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1, sizeof(Object_t *))) = (Object_t *)L_34;
		ObjectU5BU5D_t320* L_35 = L_33;
		Object_t38 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2, sizeof(Object_t *))) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m3142(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t554 *)IsInstClass(L_37, BaseInvokableCall_t554_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
extern TypeInfo* List_1_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3143_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m3016 (PersistentCallGroup_t558 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		List_1__ctor_m3143_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483979);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		List_1_t559 * L_0 = (List_1_t559 *)il2cpp_codegen_object_new (List_1_t559_il2cpp_TypeInfo_var);
		List_1__ctor_m3143(L_0, /*hidden argument*/List_1__ctor_m3143_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
extern TypeInfo* Enumerator_t621_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3144_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3145_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3146_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m3017 (PersistentCallGroup_t558 * __this, InvokableCallList_t560 * ___invokableList, UnityEventBase_t562 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_GetEnumerator_m3144_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483980);
		Enumerator_get_Current_m3145_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		Enumerator_MoveNext_m3146_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t557 * V_0 = {0};
	Enumerator_t621  V_1 = {0};
	BaseInvokableCall_t554 * V_2 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t559 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t621  L_1 = List_1_GetEnumerator_m3144(L_0, /*hidden argument*/List_1_GetEnumerator_m3144_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t557 * L_2 = Enumerator_get_Current_m3145((&V_1), /*hidden argument*/Enumerator_get_Current_m3145_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t557 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m3013(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t557 * L_5 = V_0;
			UnityEventBase_t562 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t554 * L_7 = PersistentCall_GetRuntimeCall_m3014(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t554 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t560 * L_9 = ___invokableList;
			BaseInvokableCall_t554 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m3019(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m3146((&V_1), /*hidden argument*/Enumerator_MoveNext_m3146_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t621  L_12 = V_1;
		Enumerator_t621  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t621_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_005b:
	{
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* List_1_t561_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3147_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m3018 (InvokableCallList_t560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		List_1__ctor_m3147_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t561 * L_0 = (List_1_t561 *)il2cpp_codegen_object_new (List_1_t561_il2cpp_TypeInfo_var);
		List_1__ctor_m3147(L_0, /*hidden argument*/List_1__ctor_m3147_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t561 * L_1 = (List_1_t561 *)il2cpp_codegen_object_new (List_1_t561_il2cpp_TypeInfo_var);
		List_1__ctor_m3147(L_1, /*hidden argument*/List_1__ctor_m3147_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t561 * L_2 = (List_1_t561 *)il2cpp_codegen_object_new (List_1_t561_il2cpp_TypeInfo_var);
		List_1__ctor_m3147(L_2, /*hidden argument*/List_1__ctor_m3147_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		__this->___m_NeedsUpdate_3 = 1;
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3019 (InvokableCallList_t560 * __this, BaseInvokableCall_t554 * ___call, const MethodInfo* method)
{
	{
		List_1_t561 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t554 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t554 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m3020 (InvokableCallList_t560 * __this, BaseInvokableCall_t554 * ___call, const MethodInfo* method)
{
	{
		List_1_t561 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t554 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t554 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
extern TypeInfo* List_1_t561_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t622_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3147_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3148_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m3149_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m3021 (InvokableCallList_t560 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		Predicate_1_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		List_1__ctor_m3147_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		Predicate_1__ctor_m3148_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483984);
		List_1_RemoveAll_m3149_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483985);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t561 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t561 * L_0 = (List_1_t561 *)il2cpp_codegen_object_new (List_1_t561_il2cpp_TypeInfo_var);
		List_1__ctor_m3147(L_0, /*hidden argument*/List_1__ctor_m3147_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t561 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t554 * L_3 = (BaseInvokableCall_t554 *)VirtFuncInvoker1< BaseInvokableCall_t554 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t561 * L_7 = V_0;
		List_1_t561 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t554 * L_10 = (BaseInvokableCall_t554 *)VirtFuncInvoker1< BaseInvokableCall_t554 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t554 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t561 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t561 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t561 * L_16 = V_0;
		List_1_t561 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t622 * L_19 = (Predicate_1_t622 *)il2cpp_codegen_object_new (Predicate_1_t622_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m3148(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m3148_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m3149(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m3149_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m3022 (InvokableCallList_t560 * __this, const MethodInfo* method)
{
	{
		List_1_t561 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern const MethodInfo* List_1_AddRange_m3150_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m3023 (InvokableCallList_t560 * __this, ObjectU5BU5D_t320* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m3150_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483986);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___m_NeedsUpdate_3);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		List_1_t561 * L_1 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_1);
		List_1_t561 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t561 * L_3 = (__this->___m_PersistentCalls_0);
		NullCheck(L_2);
		List_1_AddRange_m3150(L_2, L_3, /*hidden argument*/List_1_AddRange_m3150_MethodInfo_var);
		List_1_t561 * L_4 = (__this->___m_ExecutingCalls_2);
		List_1_t561 * L_5 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_4);
		List_1_AddRange_m3150(L_4, L_5, /*hidden argument*/List_1_AddRange_m3150_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 0;
	}

IL_003f:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0046:
	{
		List_1_t561 * L_6 = (__this->___m_ExecutingCalls_2);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BaseInvokableCall_t554 * L_8 = (BaseInvokableCall_t554 *)VirtFuncInvoker1< BaseInvokableCall_t554 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_6, L_7);
		ObjectU5BU5D_t320* L_9 = ___parameters;
		NullCheck(L_8);
		VirtActionInvoker1< ObjectU5BU5D_t320* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_11 = V_0;
		List_1_t561 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
extern TypeInfo* InvokableCallList_t560_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t558_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m3024 (UnityEventBase_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		PersistentCallGroup_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		InvokableCallList_t560 * L_0 = (InvokableCallList_t560 *)il2cpp_codegen_object_new (InvokableCallList_t560_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m3018(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t558 * L_1 = (PersistentCallGroup_t558 *)il2cpp_codegen_object_new (PersistentCallGroup_t558_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m3016(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1595(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3025 (UnityEventBase_t562 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3026 (UnityEventBase_t562 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m3029(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1595(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern const Il2CppType* Object_t38_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3027 (UnityEventBase_t562 * __this, PersistentCall_t557 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t38_0_0_0_var = il2cpp_codegen_type_from_index(117);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Object_t38_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t557 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t553 * L_2 = PersistentCall_get_arguments_m3012(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2993(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m1930(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t557 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t553 * L_6 = PersistentCall_get_arguments_m3012(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m2993(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m3141, L_7, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Object_t38_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t557 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m3010(L_11, /*hidden argument*/NULL);
		PersistentCall_t557 * L_13 = ___call;
		NullCheck(L_13);
		Object_t38 * L_14 = PersistentCall_get_target_m3009(L_13, /*hidden argument*/NULL);
		PersistentCall_t557 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m3011(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m3028(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
// System.Type
#include "mscorlib_System_Type.h"
extern const Il2CppType* Single_t321_0_0_0_var;
extern const Il2CppType* Int32_t36_0_0_0_var;
extern const Il2CppType* Boolean_t322_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t38_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3028 (UnityEventBase_t562 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t321_0_0_0_var = il2cpp_codegen_type_from_index(88);
		Int32_t36_0_0_0_var = il2cpp_codegen_type_from_index(7);
		Boolean_t322_0_0_0_var = il2cpp_codegen_type_from_index(92);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Object_t38_0_0_0_var = il2cpp_codegen_type_from_index(117);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t582* G_B10_2 = {0};
	TypeU5BU5D_t582* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t582* G_B9_2 = {0};
	TypeU5BU5D_t582* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t582* L_10 = ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Single_t321_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0, sizeof(Type_t *))) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t582* L_15 = ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Int32_t36_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t582* L_20 = ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Boolean_t322_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0, sizeof(Type_t *))) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t582* L_25 = ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0, sizeof(Type_t *))) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t582* L_30 = ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Object_t38_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1, sizeof(Type_t *))) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m3029 (UnityEventBase_t562 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t560 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m3022(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m3030 (UnityEventBase_t562 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t558 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t560 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m3017(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
extern "C" void UnityEventBase_AddCall_m3031 (UnityEventBase_t562 * __this, BaseInvokableCall_t554 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t560 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t554 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m3020(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" void UnityEventBase_RemoveListener_m3032 (UnityEventBase_t562 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t560 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m3021(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void UnityEventBase_Invoke_m3033 (UnityEventBase_t562 * __this, ObjectU5BU5D_t320* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m3030(__this, /*hidden argument*/NULL);
		InvokableCallList_t560 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t320* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m3023(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral276;
extern "C" String_t* UnityEventBase_ToString_m3034 (UnityEventBase_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral276 = il2cpp_codegen_string_literal_from_index(276);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m3151(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1595(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m148(NULL /*static, unused*/, L_0, _stringLiteral276, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3035 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t582* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t611* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t612 * V_5 = {0};
	ParameterInfoU5BU5D_t611* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1595(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t582* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t603 *, TypeU5BU5D_t582*, ParameterModifierU5BU5D_t604* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t603 *)NULL, L_4, (ParameterModifierU5BU5D_t604*)(ParameterModifierU5BU5D_t604*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t611* L_8 = (ParameterInfoU5BU5D_t611*)VirtFuncInvoker0< ParameterInfoU5BU5D_t611* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t611* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t611* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t612 **)(ParameterInfo_t612 **)SZArrayLdElema(L_10, L_12, sizeof(ParameterInfo_t612 *)));
		TypeU5BU5D_t582* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15, sizeof(Type_t *)));
		ParameterInfo_t612 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t611* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1659 (UnityEvent_t123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m3024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
extern "C" void UnityEvent_AddListener_m1755 (UnityEvent_t123 * __this, UnityAction_t156 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t156 * L_0 = ___call;
		BaseInvokableCall_t554 * L_1 = UnityEvent_GetDelegate_m3038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m3031(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m3036 (UnityEvent_t123 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
extern TypeInfo* InvokableCall_t555_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t554 * UnityEvent_GetDelegate_m3037 (UnityEvent_t123 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t555 * L_2 = (InvokableCall_t555 *)il2cpp_codegen_object_new (InvokableCall_t555_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3004(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t555_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t554 * UnityEvent_GetDelegate_m3038 (Object_t * __this /* static, unused */, UnityAction_t156 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t156 * L_0 = ___action;
		InvokableCall_t555 * L_1 = (InvokableCall_t555 *)il2cpp_codegen_object_new (InvokableCall_t555_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3005(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m1661 (UnityEvent_t123 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3033(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DefaultValueAttribute__ctor_m3039 (DefaultValueAttribute_t563 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m3040 (DefaultValueAttribute_t563 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t563_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m3041 (DefaultValueAttribute_t563 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t563 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t563 *)IsInstClass(L_0, DefaultValueAttribute_t563_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t563 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t563 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m3040(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t563 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m3040(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m3042 (DefaultValueAttribute_t563 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3152(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ExcludeFromDocsAttribute__ctor_m3043 (ExcludeFromDocsAttribute_t564 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void FormerlySerializedAsAttribute__ctor_m3044 (FormerlySerializedAsAttribute_t565 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRules_t566_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m3045 (TypeInferenceRuleAttribute_t567 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t566_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m3046(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void TypeInferenceRuleAttribute__ctor_m3046 (TypeInferenceRuleAttribute_t567 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m3047 (TypeInferenceRuleAttribute_t567 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensions.h"
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern "C" Delegate_t346 * NetFxCoreExtensions_CreateDelegate_m3048 (Object_t * __this /* static, unused */, MethodInfo_t * ___self, Type_t * ___delegateType, Object_t * ___target, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType;
		Object_t * L_1 = ___target;
		MethodInfo_t * L_2 = ___self;
		Delegate_t346 * L_3 = Delegate_CreateDelegate_m3153(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern "C" MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m3049 (Object_t * __this /* static, unused */, Delegate_t346 * ___self, const MethodInfo* method)
{
	{
		Delegate_t346 * L_0 = ___self;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m3154(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAdsDelegate__ctor_m3050 (UnityAdsDelegate_t460 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C" void UnityAdsDelegate_Invoke_m3051 (UnityAdsDelegate_t460 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_Invoke_m3051((UnityAdsDelegate_t460 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t460(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAdsDelegate_BeginInvoke_m3052 (UnityAdsDelegate_t460 * __this, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_EndInvoke_m3053 (UnityAdsDelegate_t460 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction__ctor_m1754 (UnityAction_t156 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m1777 (UnityAction_t156 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m1777((UnityAction_t156 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UnityAction_t156(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_BeginInvoke_m3054 (UnityAction_t156 * __this, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m3055 (UnityAction_t156 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
