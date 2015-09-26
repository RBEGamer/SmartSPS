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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5.h"
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_4MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m1990_gshared (UnityEvent_1_t222 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase__ctor_m3024((UnityEventBase_t562 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11.h"
extern "C" void UnityEvent_1_AddListener_m13339_gshared (UnityEvent_1_t222 * __this, UnityAction_1_t1946 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1946 * L_0 = ___call;
		BaseInvokableCall_t554 * L_1 = (( BaseInvokableCall_t554 * (*) (Object_t * /* static, unused */, UnityAction_1_t1946 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t1946 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_AddCall_m3031((UnityEventBase_t562 *)__this, (BaseInvokableCall_t554 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m13340_gshared (UnityEvent_1_t222 * __this, UnityAction_1_t1946 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1946 * L_0 = ___call;
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t1946 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3049(NULL /*static, unused*/, (Delegate_t346 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_RemoveListener_m3032((UnityEventBase_t562 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13341_gshared (UnityEvent_1_t222 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t582* L_2 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t582*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m13342_gshared (UnityEvent_1_t222 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1947 * L_2 = (InvokableCall_1_t1947 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1947 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m13343_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1946 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t1946 * L_0 = ___action;
		InvokableCall_1_t1947 * L_1 = (InvokableCall_1_t1947 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1947 *, UnityAction_1_t1946 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t1946 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void UnityEvent_1_Invoke_m1997_gshared (UnityEvent_1_t222 * __this, Vector2_t11  ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_InvokeArray_4);
		Vector2_t11  L_1 = ___arg0;
		Vector2_t11  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = (ObjectU5BU5D_t320*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_Invoke_m3033((UnityEventBase_t562 *)__this, (ObjectU5BU5D_t320*)L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11MethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m13344_gshared (UnityAction_1_t1946 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void UnityAction_1_Invoke_m13345_gshared (UnityAction_1_t1946 * __this, Vector2_t11  ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m13345((UnityAction_1_t1946 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Vector2_t11  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Vector2_t11  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Vector2_t11_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m13346_gshared (UnityAction_1_t1946 * __this, Vector2_t11  ___arg0, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t11_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13347_gshared (UnityAction_1_t1946 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Vector2>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Vector2>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t11_m16964_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t11_m16964(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t11_m16964_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m13348_gshared (InvokableCall_1_t1947 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t554 *)__this);
		BaseInvokableCall__ctor_m3002((BaseInvokableCall_t554 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t1946 * L_2 = (UnityAction_1_t1946 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t346 * L_6 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t346 * L_7 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_2, (Delegate_t346 *)((UnityAction_1_t1946 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1946 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11.h"
extern "C" void InvokableCall_1__ctor_m13349_gshared (InvokableCall_1_t1947 * __this, UnityAction_1_t1946 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t554 *)__this);
		BaseInvokableCall__ctor_m3001((BaseInvokableCall_t554 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t1946 * L_0 = (UnityAction_1_t1946 *)(__this->___Delegate_0);
		UnityAction_1_t1946 * L_1 = ___action;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_0, (Delegate_t346 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1946 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2716;
extern "C" void InvokableCall_1_Invoke_m13350_gshared (InvokableCall_1_t1947 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2716 = il2cpp_codegen_string_literal_from_index(2716);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t370 * L_1 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_1, (String_t*)_stringLiteral2716, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t320* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t1946 * L_4 = (UnityAction_1_t1946 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, (Delegate_t346 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t1946 * L_6 = (UnityAction_1_t1946 *)(__this->___Delegate_0);
		ObjectU5BU5D_t320* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t1946 *)L_6);
		(( void (*) (UnityAction_1_t1946 *, Vector2_t11 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t1946 *)L_6, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13351_gshared (InvokableCall_1_t1947 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t1946 * L_0 = (UnityAction_1_t1946 *)(__this->___Delegate_0);
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t1946 * L_3 = (UnityAction_1_t1946 *)(__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m3049(NULL /*static, unused*/, (Delegate_t346 *)L_3, /*hidden argument*/NULL);
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
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_1.h"
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_1MethodDeclarations.h"
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Func_2__ctor_m13722_gshared (Func_2_t372 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C" bool Func_2_Invoke_m13724_gshared (Func_2_t372 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m13724((Func_2_t372 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Func_2_BeginInvoke_m13726_gshared (Func_2_t372 * __this, Object_t * ___arg1, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Func_2_EndInvoke_m13728_gshared (Func_2_t372 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E.h"
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3EMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m13729_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m13730_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m13731_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m13732_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 *)__this);
		Object_t* L_0 = (( Object_t* (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern "C" Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m13733_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * __this, const MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m9223(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 *)L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * L_5 = V_0;
		Func_2_t372 * L_6 = (Func_2_t372 *)(__this->___U3CU24U3Epredicate_7);
		NullCheck(L_5);
		L_5->___predicate_3 = L_6;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m13734_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_97U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t*)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t372 * L_7 = (Func_2_t372 *)(__this->___predicate_3);
			Object_t * L_8 = (Object_t *)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t372 *)L_7);
			bool L_9 = (( bool (*) (Func_2_t372 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Func_2_t372 *)L_7, (Object_t *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			Object_t * L_10 = (Object_t *)(__this->___U3CelementU3E__1_2);
			__this->___U24current_5 = L_10;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC0, FINALLY_009e);
		}

IL_0089:
		{
			Object_t* L_11 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t *)L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t28_il2cpp_TypeInfo_var, (Object_t *)L_11);
			if (L_12)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00a2:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			if (L_14)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00ab:
		{
			Object_t* L_15 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_00b7:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m13735_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1971 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_2.h"
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Func_2__ctor_m13985_gshared (Func_2_t1988 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m13986_gshared (Func_2_t1988 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m13986((Func_2_t1988 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef float (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Func_2_BeginInvoke_m13988_gshared (Func_2_t1988 * __this, Object_t * ___arg1, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m13990_gshared (Func_2_t1988 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_22MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_23.h"
// System.Predicate`1<UnityEngine.Vector3>
#include "mscorlib_System_Predicate_1_gen_26.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2.h"
// System.Comparison`1<UnityEngine.Vector3>
#include "mscorlib_System_Comparison_1_gen_26.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_23MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.Vector3>
#include "mscorlib_System_Predicate_1_gen_26MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2MethodDeclarations.h"
struct Vector3U5BU5D_t175;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Vector3>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Vector3>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisVector3_t10_m16968_gshared (Object_t * __this /* static, unused */, Vector3U5BU5D_t175* p0, Vector3_t10  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisVector3_t10_m16968(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175*, Vector3_t10 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisVector3_t10_m16968_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Vector3U5BU5D_t175;
struct IComparer_1_t2392;
// Declaration System.Void System.Array::Sort<UnityEngine.Vector3>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Vector3>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisVector3_t10_m16969_gshared (Object_t * __this /* static, unused */, Vector3U5BU5D_t175* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisVector3_t10_m16969(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisVector3_t10_m16969_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Vector3U5BU5D_t175;
struct Comparison_1_t1998;
// Declaration System.Void System.Array::Sort<UnityEngine.Vector3>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Vector3>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisVector3_t10_m16975_gshared (Object_t * __this /* static, unused */, Vector3U5BU5D_t175* p0, int32_t p1, Comparison_1_t1998 * p2, const MethodInfo* method);
#define Array_Sort_TisVector3_t10_m16975(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175*, int32_t, Comparison_1_t1998 *, const MethodInfo*))Array_Sort_TisVector3_t10_m16975_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Vector3U5BU5D_t175;
// Declaration System.Void System.Array::Resize<UnityEngine.Vector3>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Vector3>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisVector3_t10_m16966_gshared (Object_t * __this /* static, unused */, Vector3U5BU5D_t175** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisVector3_t10_m16966(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175**, int32_t, const MethodInfo*))Array_Resize_TisVector3_t10_m16966_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m13991_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3U5BU5D_t175* L_0 = ((List_1_t272_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13992_gshared (List_1_t272 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t272 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3U5BU5D_t175* L_3 = ((List_1_t272_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t272 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((Vector3U5BU5D_t175*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t272 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void List_1__ctor_m13993_gshared (List_1_t272 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral1238 = il2cpp_codegen_string_literal_from_index(1238);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_1 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_1, (String_t*)_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((Vector3U5BU5D_t175*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m13994_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t272_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((Vector3U5BU5D_t175*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13995_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t272 *)__this);
		Enumerator_t1989  L_0 = (( Enumerator_t1989  (*) (List_1_t272 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t272 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t1989  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13996_gshared (List_1_t272 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13997_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t272 *)__this);
		Enumerator_t1989  L_0 = (( Enumerator_t1989  (*) (List_1_t272 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t272 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t1989  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t List_1_System_Collections_IList_Add_m13998_gshared (List_1_t272 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t272 *)__this);
			VirtActionInvoker1< Vector3_t10  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T) */, (List_1_t272 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m13999_gshared (List_1_t272 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t272 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, Vector3_t10  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T) */, (List_1_t272 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14000_gshared (List_1_t272 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t272 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector3_t10  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T) */, (List_1_t272 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" void List_1_System_Collections_IList_Insert_m14001_gshared (List_1_t272 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t272 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t272 *)__this);
			VirtActionInvoker2< int32_t, Vector3_t10  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T) */, (List_1_t272 *)__this, (int32_t)L_1, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m14002_gshared (List_1_t272 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t272 *)__this);
			VirtFuncInvoker1< bool, Vector3_t10  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T) */, (List_1_t272 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14003_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14004_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14005_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14006_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14007_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14008_gshared (List_1_t272 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t272 *)__this);
		Vector3_t10  L_1 = (Vector3_t10 )VirtFuncInvoker1< Vector3_t10 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, (List_1_t272 *)__this, (int32_t)L_0);
		Vector3_t10  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" void List_1_System_Collections_IList_set_Item_m14009_gshared (List_1_t272 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral307 = il2cpp_codegen_string_literal_from_index(307);
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
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t272 *)__this);
			VirtActionInvoker2< int32_t, Vector3_t10  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T) */, (List_1_t272 *)__this, (int32_t)L_0, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral307, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void List_1_Add_m14010_gshared (List_1_t272 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		Vector3U5BU5D_t175* L_1 = (Vector3U5BU5D_t175*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t272 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		Vector3U5BU5D_t175* L_2 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Vector3_t10  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_2, L_5, sizeof(Vector3_t10 ))) = (Vector3_t10 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m14011_gshared (List_1_t272 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		Vector3U5BU5D_t175* L_3 = (Vector3U5BU5D_t175*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t272 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t272 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t272 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t272 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14012_gshared (List_1_t272 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t272 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		Vector3U5BU5D_t175* L_5 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< Vector3U5BU5D_t175*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (Vector3U5BU5D_t175*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m14013_gshared (List_1_t272 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			Vector3_t10  L_3 = (Vector3_t10 )InterfaceFuncInvoker0< Vector3_t10  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (Vector3_t10 )L_3;
			Vector3_t10  L_4 = V_0;
			NullCheck((List_1_t272 *)__this);
			VirtActionInvoker1< Vector3_t10  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T) */, (List_1_t272 *)__this, (Vector3_t10 )L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t28_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2104_gshared (List_1_t272 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t272 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t272 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t272 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1990 * List_1_AsReadOnly_m14014_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1990 * L_0 = (ReadOnlyCollection_1_t1990 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t1990 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m14015_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		Vector3U5BU5D_t175* L_1 = (Vector3U5BU5D_t175*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m14016_gshared (List_1_t272 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		Vector3_t10  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175*, Vector3_t10 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Vector3U5BU5D_t175*)L_0, (Vector3_t10 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void List_1_CopyTo_m14017_gshared (List_1_t272 * __this, Vector3U5BU5D_t175* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		Vector3U5BU5D_t175* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::Find(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.Vector3>
#include "mscorlib_System_Predicate_1_gen_26.h"
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  List_1_Find_m14018_gshared (List_1_t272 * __this, Predicate_1_t1995 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t10  V_1 = {0};
	Vector3_t10  G_B3_0 = {0};
	{
		Predicate_1_t1995 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1995 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1995 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t1995 * L_2 = ___match;
		NullCheck((List_1_t272 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t272 *, int32_t, int32_t, Predicate_1_t1995 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t272 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t1995 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		Vector3U5BU5D_t175* L_5 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_5, L_7, sizeof(Vector3_t10 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (Vector3_t10_il2cpp_TypeInfo_var, (&V_1));
		Vector3_t10  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void List_1_CheckMatch_m14019_gshared (Object_t * __this /* static, unused */, Predicate_1_t1995 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t1995 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1829, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14020_gshared (List_1_t272 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1995 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t1995 * L_3 = ___match;
		Vector3U5BU5D_t175* L_4 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t1995 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t1995 *, Vector3_t10 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1995 *)L_3, (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_4, L_6, sizeof(Vector3_t10 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t1989  List_1_GetEnumerator_m14021_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1989  L_0 = {0};
		(( void (*) (Enumerator_t1989 *, List_1_t272 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t272 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14022_gshared (List_1_t272 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		Vector3_t10  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175*, Vector3_t10 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Vector3U5BU5D_t175*)L_0, (Vector3_t10 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14023_gshared (List_1_t272 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		Vector3U5BU5D_t175* L_5 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_6 = ___start;
		Vector3U5BU5D_t175* L_7 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Vector3U5BU5D_t175* L_15 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_CheckIndex_m14024_gshared (List_1_t272 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14025_gshared (List_1_t272 * __this, int32_t ___index, Vector3_t10  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t272 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Vector3U5BU5D_t175* L_2 = (Vector3U5BU5D_t175*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t272 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t272 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Vector3U5BU5D_t175* L_4 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_5 = ___index;
		Vector3_t10  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_4, L_5, sizeof(Vector3_t10 ))) = (Vector3_t10 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2713;
extern "C" void List_1_CheckCollection_m14026_gshared (List_1_t272 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral2713 = il2cpp_codegen_string_literal_from_index(2713);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral2713, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m14027_gshared (List_1_t272 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector3_t10  L_0 = ___item;
		NullCheck((List_1_t272 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector3_t10  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T) */, (List_1_t272 *)__this, (Vector3_t10 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t272 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32) */, (List_1_t272 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14028_gshared (List_1_t272 * __this, Predicate_1_t1995 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1995 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1995 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1995 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t1995 * L_1 = ___match;
		Vector3U5BU5D_t175* L_2 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t1995 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t1995 *, Vector3_t10 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1995 *)L_1, (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_2, L_4, sizeof(Vector3_t10 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t1995 * L_13 = ___match;
		Vector3U5BU5D_t175* L_14 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t1995 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t1995 *, Vector3_t10 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1995 *)L_13, (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_14, L_16, sizeof(Vector3_t10 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		Vector3U5BU5D_t175* L_18 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		Vector3U5BU5D_t175* L_21 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_18, L_20, sizeof(Vector3_t10 ))) = (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_21, L_23, sizeof(Vector3_t10 )));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		Vector3U5BU5D_t175* L_29 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_RemoveAt_m14029_gshared (List_1_t272 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t272 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Vector3U5BU5D_t175* L_5 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" void List_1_Reverse_m14030_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4137(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort()
extern "C" void List_1_Sort_m14031_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t1996 * L_2 = (( Comparer_1_t1996 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (Vector3U5BU5D_t175*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.Vector3>
#include "mscorlib_System_Comparison_1_gen_26.h"
extern "C" void List_1_Sort_m14032_gshared (List_1_t272 * __this, Comparison_1_t1998 * ___comparison, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t1998 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175*, int32_t, Comparison_1_t1998 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (Vector3U5BU5D_t175*)L_0, (int32_t)L_1, (Comparison_1_t1998 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t175* List_1_ToArray_m14033_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	Vector3U5BU5D_t175* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (Vector3U5BU5D_t175*)((Vector3U5BU5D_t175*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		Vector3U5BU5D_t175* L_1 = (Vector3U5BU5D_t175*)(__this->____items_1);
		Vector3U5BU5D_t175* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		Vector3U5BU5D_t175* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::TrimExcess()
extern "C" void List_1_TrimExcess_m14034_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t272 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14035_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t175* L_0 = (Vector3U5BU5D_t175*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m14036_gshared (List_1_t272 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5157(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		Vector3U5BU5D_t175** L_3 = (Vector3U5BU5D_t175**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, Vector3U5BU5D_t175**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (Vector3U5BU5D_t175**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m14037_gshared (List_1_t272 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" Vector3_t10  List_1_get_Item_m14038_gshared (List_1_t272 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_2, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		Vector3U5BU5D_t175* L_3 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_3, L_5, sizeof(Vector3_t10 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_set_Item_m14039_gshared (List_1_t272 * __this, int32_t ___index, Vector3_t10  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t272 *)__this);
		(( void (*) (List_1_t272 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t272 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		Vector3U5BU5D_t175* L_4 = (Vector3U5BU5D_t175*)(__this->____items_1);
		int32_t L_5 = ___index;
		Vector3_t10  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_4, L_5, sizeof(Vector3_t10 ))) = (Vector3_t10 )L_6;
		return;
	}
}
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
extern "C" void Enumerator__ctor_m14040_gshared (Enumerator_t1989 * __this, List_1_t272 * ___l, const MethodInfo* method)
{
	{
		List_1_t272 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t272 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14041_gshared (Enumerator_t1989 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t1989 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1989 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5105(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		Vector3_t10  L_2 = (Vector3_t10 )(__this->___current_3);
		Vector3_t10  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
extern "C" void Enumerator_Dispose_m14042_gshared (Enumerator_t1989 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t272 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2711;
extern "C" void Enumerator_VerifyState_m14043_gshared (Enumerator_t1989 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2711 = il2cpp_codegen_string_literal_from_index(2711);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t272 * L_0 = (List_1_t272 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t1989  L_1 = (*(Enumerator_t1989 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1595((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t645 * L_5 = (ObjectDisposedException_t645 *)il2cpp_codegen_object_new (ObjectDisposedException_t645_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3212(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t272 * L_7 = (List_1_t272 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t815 * L_9 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_9, (String_t*)_stringLiteral2711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14044_gshared (Enumerator_t1989 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t1989 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1989 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t272 * L_2 = (List_1_t272 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t272 * L_4 = (List_1_t272 *)(__this->___l_0);
		NullCheck(L_4);
		Vector3U5BU5D_t175* L_5 = (Vector3U5BU5D_t175*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_5, L_9, sizeof(Vector3_t10 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
extern "C" Vector3_t10  Enumerator_get_Current_m14045_gshared (Enumerator_t1989 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (Vector3_t10 )(__this->___current_3);
		return L_0;
	}
}
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_2MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1249;
extern "C" void ReadOnlyCollection_1__ctor_m14046_gshared (ReadOnlyCollection_1_t1990 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1249 = il2cpp_codegen_string_literal_from_index(1249);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1249, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14047_gshared (ReadOnlyCollection_1_t1990 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14048_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14049_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, Vector3_t10  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14050_gshared (ReadOnlyCollection_1_t1990 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14051_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Vector3_t10  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14052_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t1990 *)__this);
		Vector3_t10  L_1 = (Vector3_t10 )VirtFuncInvoker1< Vector3_t10 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1990 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14053_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, Vector3_t10  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14054_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14055_gshared (ReadOnlyCollection_1_t1990 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14056_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t804_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m14057_gshared (ReadOnlyCollection_1_t1990 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m14058_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m14059_gshared (ReadOnlyCollection_1_t1990 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Vector3_t10  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14060_gshared (ReadOnlyCollection_1_t1990 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector3_t10  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector3>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m14061_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m14062_gshared (ReadOnlyCollection_1_t1990 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14063_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14064_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14065_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14066_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14067_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m14068_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector3_t10  L_2 = (Vector3_t10 )InterfaceFuncInvoker1< Vector3_t10 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		Vector3_t10  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m14069_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m14070_gshared (ReadOnlyCollection_1_t1990 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector3_t10  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Vector3_t10  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Vector3_t10 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m14071_gshared (ReadOnlyCollection_1_t1990 * __this, Vector3U5BU5D_t175* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector3U5BU5D_t175* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Vector3U5BU5D_t175*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Vector3U5BU5D_t175*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m14072_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m14073_gshared (ReadOnlyCollection_1_t1990 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector3_t10  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector3_t10  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector3>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Vector3_t10 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m14074_gshared (ReadOnlyCollection_1_t1990 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t10  ReadOnlyCollection_1_get_Item_m14075_gshared (ReadOnlyCollection_1_t1990 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector3_t10  L_2 = (Vector3_t10 )InterfaceFuncInvoker1< Vector3_t10 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_2.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m14076_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t272 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t272 * L_0 = (List_1_t272 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t272 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t272 *)L_0;
		List_1_t272 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t272 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14077_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14078_gshared (Collection_1_t1992 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14079_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14080_gshared (Collection_1_t1992 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Vector3_t10  L_4 = (( Vector3_t10  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker2< int32_t, Vector3_t10  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::InsertItem(System.Int32,T) */, (Collection_1_t1992 *)__this, (int32_t)L_2, (Vector3_t10 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14081_gshared (Collection_1_t1992 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Vector3_t10  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14082_gshared (Collection_1_t1992 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector3_t10  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector3>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14083_gshared (Collection_1_t1992 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Vector3_t10  L_2 = (( Vector3_t10  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker2< int32_t, Vector3_t10  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::InsertItem(System.Int32,T) */, (Collection_1_t1992 *)__this, (int32_t)L_0, (Vector3_t10 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14084_gshared (Collection_1_t1992 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		Vector3_t10  L_2 = (( Vector3_t10  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1992 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Vector3_t10  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::IndexOf(T) */, (Collection_1_t1992 *)__this, (Vector3_t10 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::RemoveItem(System.Int32) */, (Collection_1_t1992 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14085_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14086_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14087_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14088_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14089_gshared (Collection_1_t1992 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector3_t10  L_2 = (Vector3_t10 )InterfaceFuncInvoker1< Vector3_t10 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		Vector3_t10  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14090_gshared (Collection_1_t1992 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Vector3_t10  L_2 = (( Vector3_t10  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker2< int32_t, Vector3_t10  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::SetItem(System.Int32,T) */, (Collection_1_t1992 *)__this, (int32_t)L_0, (Vector3_t10 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::Add(T)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Collection_1_Add_m14091_gshared (Collection_1_t1992 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Vector3_t10  L_3 = ___item;
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker2< int32_t, Vector3_t10  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::InsertItem(System.Int32,T) */, (Collection_1_t1992 *)__this, (int32_t)L_2, (Vector3_t10 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::Clear()
extern "C" void Collection_1_Clear_m14092_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::ClearItems() */, (Collection_1_t1992 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::ClearItems()
extern "C" void Collection_1_ClearItems_m14093_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool Collection_1_Contains_m14094_gshared (Collection_1_t1992 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector3_t10  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Vector3_t10  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Vector3_t10 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m14095_gshared (Collection_1_t1992 * __this, Vector3U5BU5D_t175* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector3U5BU5D_t175* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Vector3U5BU5D_t175*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Vector3U5BU5D_t175*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14096_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14097_gshared (Collection_1_t1992 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector3_t10  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector3_t10  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector3>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (Vector3_t10 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14098_gshared (Collection_1_t1992 * __this, int32_t ___index, Vector3_t10  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Vector3_t10  L_1 = ___item;
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker2< int32_t, Vector3_t10  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::InsertItem(System.Int32,T) */, (Collection_1_t1992 *)__this, (int32_t)L_0, (Vector3_t10 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14099_gshared (Collection_1_t1992 * __this, int32_t ___index, Vector3_t10  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Vector3_t10  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Vector3_t10  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Vector3_t10 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool Collection_1_Remove_m14100_gshared (Collection_1_t1992 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector3_t10  L_0 = ___item;
		NullCheck((Collection_1_t1992 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector3_t10  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::IndexOf(T) */, (Collection_1_t1992 *)__this, (Vector3_t10 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::RemoveItem(System.Int32) */, (Collection_1_t1992 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14101_gshared (Collection_1_t1992 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::RemoveItem(System.Int32) */, (Collection_1_t1992 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14102_gshared (Collection_1_t1992 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14103_gshared (Collection_1_t1992 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t10  Collection_1_get_Item_m14104_gshared (Collection_1_t1992 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector3_t10  L_2 = (Vector3_t10 )InterfaceFuncInvoker1< Vector3_t10 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14105_gshared (Collection_1_t1992 * __this, int32_t ___index, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Vector3_t10  L_1 = ___value;
		NullCheck((Collection_1_t1992 *)__this);
		VirtActionInvoker2< int32_t, Vector3_t10  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::SetItem(System.Int32,T) */, (Collection_1_t1992 *)__this, (int32_t)L_0, (Vector3_t10 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14106_gshared (Collection_1_t1992 * __this, int32_t ___index, Vector3_t10  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Vector3_t10  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Vector3_t10  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Vector3_t10 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m14107_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" Vector3_t10  Collection_1_ConvertItem_m14108_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m14109_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t49 * L_2 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m14110_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t988_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector3>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t947_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m14111_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(637);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t947_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t947_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m14112_gshared (EqualityComparer_1_t1993 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2430_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14113_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2430_0_0_0_var = il2cpp_codegen_type_from_index(2559);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericEqualityComparer_1_t2430_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t1993_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t1993 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1994 * L_8 = (DefaultComparer_t1994 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1994 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t1993_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14114_gshared (EqualityComparer_1_t1993 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t1993 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector3_t10  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::GetHashCode(T) */, (EqualityComparer_1_t1993 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14115_gshared (EqualityComparer_1_t1993 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t1993 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector3_t10 , Vector3_t10  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(T,T) */, (EqualityComparer_1_t1993 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::get_Default()
extern "C" EqualityComparer_1_t1993 * EqualityComparer_1_get_Default_m14116_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t1993 * L_0 = ((EqualityComparer_1_t1993_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m14117_gshared (DefaultComparer_t1994 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1993 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1993 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1993 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m14118_gshared (DefaultComparer_t1994 * __this, Vector3_t10  ___obj, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Vector3_t10 *)(&___obj));
		int32_t L_1 = Vector3_GetHashCode_m2302((Vector3_t10 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14119_gshared (DefaultComparer_t1994 * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___x;
		goto IL_0015;
	}
	{
		Vector3_t10  L_1 = ___y;
		Vector3_t10  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Vector3_t10  L_4 = ___y;
		Vector3_t10  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Vector3_t10 *)(&___x));
		bool L_7 = Vector3_Equals_m2303((Vector3_t10 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m14120_gshared (Predicate_1_t1995 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" bool Predicate_1_Invoke_m14121_gshared (Predicate_1_t1995 * __this, Vector3_t10  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m14121((Predicate_1_t1995 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Vector3_t10  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Vector3_t10  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m14122_gshared (Predicate_1_t1995 * __this, Vector3_t10  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t10_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14123_gshared (Predicate_1_t1995 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_2.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_2MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Vector3>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m14124_gshared (Comparer_1_t1996 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Vector3>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2431_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m14125_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2431_0_0_0_var = il2cpp_codegen_type_from_index(2560);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericComparer_1_t2431_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t1996_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t1996 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1997 * L_8 = (DefaultComparer_t1997 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1997 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t1996_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Vector3>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m14126_gshared (Comparer_1_t1996 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t1996 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Vector3_t10 , Vector3_t10  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Vector3>::Compare(T,T) */, (Comparer_1_t1996 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9336(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Vector3>::get_Default()
extern "C" Comparer_1_t1996 * Comparer_1_get_Default_m14127_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t1996 * L_0 = ((Comparer_1_t1996_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m14128_gshared (DefaultComparer_t1997 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t1996 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t1996 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t1996 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>::Compare(T,T)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2714;
extern "C" int32_t DefaultComparer_Compare_m14129_gshared (DefaultComparer_t1997 * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(703);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2714 = il2cpp_codegen_string_literal_from_index(2714);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Vector3_t10  L_0 = ___x;
		goto IL_001e;
	}
	{
		Vector3_t10  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Vector3_t10  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		Vector3_t10  L_3 = ___x;
		Vector3_t10  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		Vector3_t10  L_6 = ___x;
		Vector3_t10  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		Vector3_t10  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector3_t10  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.Vector3>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (Vector3_t10 )L_9);
		return L_10;
	}

IL_004d:
	{
		Vector3_t10  L_11 = ___x;
		Vector3_t10  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1671_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Vector3_t10  L_14 = ___x;
		Vector3_t10  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		Vector3_t10  L_17 = ___y;
		Vector3_t10  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1671_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t370 * L_21 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_21, (String_t*)_stringLiteral2714, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Comparison`1<UnityEngine.Vector3>
#include "mscorlib_System_Comparison_1_gen_26MethodDeclarations.h"
// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m14130_gshared (Comparison_1_t1998 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" int32_t Comparison_1_Invoke_m14131_gshared (Comparison_1_t1998 * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m14131((Comparison_1_t1998 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m14132_gshared (Comparison_1_t1998 * __this, Vector3_t10  ___x, Vector3_t10  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t10_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Vector3_t10_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14133_gshared (Comparison_1_t1998 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_24.h"
// System.Predicate`1<UnityEngine.Color32>
#include "mscorlib_System_Predicate_1_gen_27.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3.h"
// System.Comparison`1<UnityEngine.Color32>
#include "mscorlib_System_Comparison_1_gen_27.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_24MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Color32>
#include "mscorlib_System_Predicate_1_gen_27MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3MethodDeclarations.h"
struct Color32U5BU5D_t386;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Color32>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Color32>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisColor32_t307_m16991_gshared (Object_t * __this /* static, unused */, Color32U5BU5D_t386* p0, Color32_t307  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisColor32_t307_m16991(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Color32U5BU5D_t386*, Color32_t307 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisColor32_t307_m16991_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Color32U5BU5D_t386;
struct IComparer_1_t2393;
// Declaration System.Void System.Array::Sort<UnityEngine.Color32>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Color32>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisColor32_t307_m16992_gshared (Object_t * __this /* static, unused */, Color32U5BU5D_t386* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisColor32_t307_m16992(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Color32U5BU5D_t386*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisColor32_t307_m16992_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Color32U5BU5D_t386;
struct Comparison_1_t2009;
// Declaration System.Void System.Array::Sort<UnityEngine.Color32>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Color32>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisColor32_t307_m16998_gshared (Object_t * __this /* static, unused */, Color32U5BU5D_t386* p0, int32_t p1, Comparison_1_t2009 * p2, const MethodInfo* method);
#define Array_Sort_TisColor32_t307_m16998(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Color32U5BU5D_t386*, int32_t, Comparison_1_t2009 *, const MethodInfo*))Array_Sort_TisColor32_t307_m16998_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Color32U5BU5D_t386;
// Declaration System.Void System.Array::Resize<UnityEngine.Color32>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Color32>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisColor32_t307_m16989_gshared (Object_t * __this /* static, unused */, Color32U5BU5D_t386** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisColor32_t307_m16989(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Color32U5BU5D_t386**, int32_t, const MethodInfo*))Array_Resize_TisColor32_t307_m16989_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m14134_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Color32U5BU5D_t386* L_0 = ((List_1_t273_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14135_gshared (List_1_t273 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t273 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Color32U5BU5D_t386* L_3 = ((List_1_t273_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t273 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((Color32U5BU5D_t386*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t273 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void List_1__ctor_m14136_gshared (List_1_t273 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral1238 = il2cpp_codegen_string_literal_from_index(1238);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_1 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_1, (String_t*)_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((Color32U5BU5D_t386*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.cctor()
extern "C" void List_1__cctor_m14137_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t273_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((Color32U5BU5D_t386*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14138_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t273 *)__this);
		Enumerator_t2000  L_0 = (( Enumerator_t2000  (*) (List_1_t273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t273 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2000  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14139_gshared (List_1_t273 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14140_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t273 *)__this);
		Enumerator_t2000  L_0 = (( Enumerator_t2000  (*) (List_1_t273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t273 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2000  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t List_1_System_Collections_IList_Add_m14141_gshared (List_1_t273 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t273 *)__this);
			VirtActionInvoker1< Color32_t307  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T) */, (List_1_t273 *)__this, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m14142_gshared (List_1_t273 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t273 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, Color32_t307  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T) */, (List_1_t273 *)__this, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14143_gshared (List_1_t273 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t273 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color32_t307  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T) */, (List_1_t273 *)__this, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" void List_1_System_Collections_IList_Insert_m14144_gshared (List_1_t273 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t273 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t273 *)__this);
			VirtActionInvoker2< int32_t, Color32_t307  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T) */, (List_1_t273 *)__this, (int32_t)L_1, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m14145_gshared (List_1_t273 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t273 *)__this);
			VirtFuncInvoker1< bool, Color32_t307  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T) */, (List_1_t273 *)__this, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14146_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14147_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14148_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14149_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14150_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14151_gshared (List_1_t273 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t273 *)__this);
		Color32_t307  L_1 = (Color32_t307 )VirtFuncInvoker1< Color32_t307 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32) */, (List_1_t273 *)__this, (int32_t)L_0);
		Color32_t307  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" void List_1_System_Collections_IList_set_Item_m14152_gshared (List_1_t273 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral307 = il2cpp_codegen_string_literal_from_index(307);
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
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t273 *)__this);
			VirtActionInvoker2< int32_t, Color32_t307  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T) */, (List_1_t273 *)__this, (int32_t)L_0, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral307, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
extern "C" void List_1_Add_m14153_gshared (List_1_t273 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		Color32U5BU5D_t386* L_1 = (Color32U5BU5D_t386*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t273 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		Color32U5BU5D_t386* L_2 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Color32_t307  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_2, L_5, sizeof(Color32_t307 ))) = (Color32_t307 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m14154_gshared (List_1_t273 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		Color32U5BU5D_t386* L_3 = (Color32U5BU5D_t386*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t273 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t273 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t273 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14155_gshared (List_1_t273 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t273 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		Color32U5BU5D_t386* L_5 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< Color32U5BU5D_t386*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (Color32U5BU5D_t386*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m14156_gshared (List_1_t273 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t307  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			Color32_t307  L_3 = (Color32_t307 )InterfaceFuncInvoker0< Color32_t307  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (Color32_t307 )L_3;
			Color32_t307  L_4 = V_0;
			NullCheck((List_1_t273 *)__this);
			VirtActionInvoker1< Color32_t307  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T) */, (List_1_t273 *)__this, (Color32_t307 )L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t28_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2106_gshared (List_1_t273 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t273 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t273 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t273 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2001 * List_1_AsReadOnly_m14157_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2001 * L_0 = (ReadOnlyCollection_1_t2001 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t2001 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C" void List_1_Clear_m14158_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		Color32U5BU5D_t386* L_1 = (Color32U5BU5D_t386*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T)
extern "C" bool List_1_Contains_m14159_gshared (List_1_t273 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		Color32_t307  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Color32U5BU5D_t386*, Color32_t307 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Color32U5BU5D_t386*)L_0, (Color32_t307 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void List_1_CopyTo_m14160_gshared (List_1_t273 * __this, Color32U5BU5D_t386* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		Color32U5BU5D_t386* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Color32>::Find(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.Color32>
#include "mscorlib_System_Predicate_1_gen_27.h"
extern TypeInfo* Color32_t307_il2cpp_TypeInfo_var;
extern "C" Color32_t307  List_1_Find_m14161_gshared (List_1_t273 * __this, Predicate_1_t2006 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Color32_t307  V_1 = {0};
	Color32_t307  G_B3_0 = {0};
	{
		Predicate_1_t2006 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2006 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2006 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2006 * L_2 = ___match;
		NullCheck((List_1_t273 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t273 *, int32_t, int32_t, Predicate_1_t2006 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t273 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2006 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		Color32U5BU5D_t386* L_5 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_5, L_7, sizeof(Color32_t307 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (Color32_t307_il2cpp_TypeInfo_var, (&V_1));
		Color32_t307  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void List_1_CheckMatch_m14162_gshared (Object_t * __this /* static, unused */, Predicate_1_t2006 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t2006 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1829, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14163_gshared (List_1_t273 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2006 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t2006 * L_3 = ___match;
		Color32U5BU5D_t386* L_4 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2006 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2006 *, Color32_t307 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2006 *)L_3, (Color32_t307 )(*(Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_4, L_6, sizeof(Color32_t307 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Enumerator_t2000  List_1_GetEnumerator_m14164_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2000  L_0 = {0};
		(( void (*) (Enumerator_t2000 *, List_1_t273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t273 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14165_gshared (List_1_t273 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		Color32_t307  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Color32U5BU5D_t386*, Color32_t307 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Color32U5BU5D_t386*)L_0, (Color32_t307 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14166_gshared (List_1_t273 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		Color32U5BU5D_t386* L_5 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_6 = ___start;
		Color32U5BU5D_t386* L_7 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Color32U5BU5D_t386* L_15 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_CheckIndex_m14167_gshared (List_1_t273 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14168_gshared (List_1_t273 * __this, int32_t ___index, Color32_t307  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t273 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Color32U5BU5D_t386* L_2 = (Color32U5BU5D_t386*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t273 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t273 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Color32U5BU5D_t386* L_4 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_5 = ___index;
		Color32_t307  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_4, L_5, sizeof(Color32_t307 ))) = (Color32_t307 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2713;
extern "C" void List_1_CheckCollection_m14169_gshared (List_1_t273 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral2713 = il2cpp_codegen_string_literal_from_index(2713);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral2713, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T)
extern "C" bool List_1_Remove_m14170_gshared (List_1_t273 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color32_t307  L_0 = ___item;
		NullCheck((List_1_t273 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color32_t307  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T) */, (List_1_t273 *)__this, (Color32_t307 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t273 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32) */, (List_1_t273 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14171_gshared (List_1_t273 * __this, Predicate_1_t2006 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2006 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2006 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2006 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t2006 * L_1 = ___match;
		Color32U5BU5D_t386* L_2 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2006 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2006 *, Color32_t307 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2006 *)L_1, (Color32_t307 )(*(Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_2, L_4, sizeof(Color32_t307 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t2006 * L_13 = ___match;
		Color32U5BU5D_t386* L_14 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t2006 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t2006 *, Color32_t307 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2006 *)L_13, (Color32_t307 )(*(Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_14, L_16, sizeof(Color32_t307 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		Color32U5BU5D_t386* L_18 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		Color32U5BU5D_t386* L_21 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_18, L_20, sizeof(Color32_t307 ))) = (Color32_t307 )(*(Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_21, L_23, sizeof(Color32_t307 )));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		Color32U5BU5D_t386* L_29 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_RemoveAt_m14172_gshared (List_1_t273 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t273 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Color32U5BU5D_t386* L_5 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Reverse()
extern "C" void List_1_Reverse_m14173_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4137(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort()
extern "C" void List_1_Sort_m14174_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t2007 * L_2 = (( Comparer_1_t2007 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, Color32U5BU5D_t386*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (Color32U5BU5D_t386*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.Color32>
#include "mscorlib_System_Comparison_1_gen_27.h"
extern "C" void List_1_Sort_m14175_gshared (List_1_t273 * __this, Comparison_1_t2009 * ___comparison, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t2009 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, Color32U5BU5D_t386*, int32_t, Comparison_1_t2009 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (Color32U5BU5D_t386*)L_0, (int32_t)L_1, (Comparison_1_t2009 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t386* List_1_ToArray_m14176_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	Color32U5BU5D_t386* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (Color32U5BU5D_t386*)((Color32U5BU5D_t386*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		Color32U5BU5D_t386* L_1 = (Color32U5BU5D_t386*)(__this->____items_1);
		Color32U5BU5D_t386* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		Color32U5BU5D_t386* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14177_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t273 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14178_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		Color32U5BU5D_t386* L_0 = (Color32U5BU5D_t386*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m14179_gshared (List_1_t273 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5157(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		Color32U5BU5D_t386** L_3 = (Color32U5BU5D_t386**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, Color32U5BU5D_t386**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (Color32U5BU5D_t386**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t List_1_get_Count_m14180_gshared (List_1_t273 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" Color32_t307  List_1_get_Item_m14181_gshared (List_1_t273 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_2, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		Color32U5BU5D_t386* L_3 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_3, L_5, sizeof(Color32_t307 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_set_Item_m14182_gshared (List_1_t273 * __this, int32_t ___index, Color32_t307  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t273 *)__this);
		(( void (*) (List_1_t273 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t273 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		Color32U5BU5D_t386* L_4 = (Color32U5BU5D_t386*)(__this->____items_1);
		int32_t L_5 = ___index;
		Color32_t307  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_4, L_5, sizeof(Color32_t307 ))) = (Color32_t307 )L_6;
		return;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21.h"
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
extern "C" Color32_t307  Array_InternalArray__get_Item_TisColor32_t307_m16978_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisColor32_t307_m16978(__this, p0, method) (( Color32_t307  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisColor32_t307_m16978_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m14183_gshared (InternalEnumerator_1_t1999 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14184_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method)
{
	{
		Color32_t307  L_0 = (( Color32_t307  (*) (InternalEnumerator_1_t1999 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1999 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Color32_t307  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14185_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color32>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m14186_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5103((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Color32>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" Color32_t307  InternalEnumerator_1_get_Current_m14187_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2709 = il2cpp_codegen_string_literal_from_index(2709);
		_stringLiteral2710 = il2cpp_codegen_string_literal_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_1, (String_t*)_stringLiteral2709, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t815 * L_3 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_3, (String_t*)_stringLiteral2710, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5103((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Color32_t307  L_8 = (( Color32_t307  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
extern "C" void Enumerator__ctor_m14188_gshared (Enumerator_t2000 * __this, List_1_t273 * ___l, const MethodInfo* method)
{
	{
		List_1_t273 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t273 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14189_gshared (Enumerator_t2000 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2000 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2000 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5105(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		Color32_t307  L_2 = (Color32_t307 )(__this->___current_3);
		Color32_t307  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>::Dispose()
extern "C" void Enumerator_Dispose_m14190_gshared (Enumerator_t2000 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t273 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2711;
extern "C" void Enumerator_VerifyState_m14191_gshared (Enumerator_t2000 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2711 = il2cpp_codegen_string_literal_from_index(2711);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t273 * L_0 = (List_1_t273 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2000  L_1 = (*(Enumerator_t2000 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1595((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t645 * L_5 = (ObjectDisposedException_t645 *)il2cpp_codegen_object_new (ObjectDisposedException_t645_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3212(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t273 * L_7 = (List_1_t273 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t815 * L_9 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_9, (String_t*)_stringLiteral2711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14192_gshared (Enumerator_t2000 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2000 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2000 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t273 * L_2 = (List_1_t273 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t273 * L_4 = (List_1_t273 *)(__this->___l_0);
		NullCheck(L_4);
		Color32U5BU5D_t386* L_5 = (Color32U5BU5D_t386*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Color32_t307 *)(Color32_t307 *)SZArrayLdElema(L_5, L_9, sizeof(Color32_t307 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>::get_Current()
extern "C" Color32_t307  Enumerator_get_Current_m14193_gshared (Enumerator_t2000 * __this, const MethodInfo* method)
{
	{
		Color32_t307  L_0 = (Color32_t307 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1249;
extern "C" void ReadOnlyCollection_1__ctor_m14194_gshared (ReadOnlyCollection_1_t2001 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1249 = il2cpp_codegen_string_literal_from_index(1249);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1249, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14195_gshared (ReadOnlyCollection_1_t2001 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14196_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14197_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, Color32_t307  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14198_gshared (ReadOnlyCollection_1_t2001 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14199_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Color32_t307  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14200_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2001 *)__this);
		Color32_t307  L_1 = (Color32_t307 )VirtFuncInvoker1< Color32_t307 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2001 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14201_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, Color32_t307  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14202_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14203_gshared (ReadOnlyCollection_1_t2001 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14204_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t804_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m14205_gshared (ReadOnlyCollection_1_t2001 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m14206_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m14207_gshared (ReadOnlyCollection_1_t2001 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Color32_t307  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14208_gshared (ReadOnlyCollection_1_t2001 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Color32_t307  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Color32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m14209_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m14210_gshared (ReadOnlyCollection_1_t2001 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14211_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14212_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14213_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14214_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14215_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m14216_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Color32_t307  L_2 = (Color32_t307 )InterfaceFuncInvoker1< Color32_t307 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Color32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		Color32_t307  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m14217_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m14218_gshared (ReadOnlyCollection_1_t2001 * __this, Color32_t307  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Color32_t307  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Color32_t307  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Color32_t307 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m14219_gshared (ReadOnlyCollection_1_t2001 * __this, Color32U5BU5D_t386* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Color32U5BU5D_t386* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Color32U5BU5D_t386*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Color32U5BU5D_t386*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m14220_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m14221_gshared (ReadOnlyCollection_1_t2001 * __this, Color32_t307  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Color32_t307  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Color32_t307  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Color32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Color32_t307 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m14222_gshared (ReadOnlyCollection_1_t2001 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t307  ReadOnlyCollection_1_get_Item_m14223_gshared (ReadOnlyCollection_1_t2001 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Color32_t307  L_2 = (Color32_t307 )InterfaceFuncInvoker1< Color32_t307 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Color32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m14224_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t273 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t273 * L_0 = (List_1_t273 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t273 *)L_0;
		List_1_t273 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t273 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14225_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14226_gshared (Collection_1_t2003 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14227_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14228_gshared (Collection_1_t2003 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Color32_t307  L_4 = (( Color32_t307  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker2< int32_t, Color32_t307  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::InsertItem(System.Int32,T) */, (Collection_1_t2003 *)__this, (int32_t)L_2, (Color32_t307 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14229_gshared (Collection_1_t2003 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Color32_t307  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14230_gshared (Collection_1_t2003 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Color32_t307  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Color32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14231_gshared (Collection_1_t2003 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Color32_t307  L_2 = (( Color32_t307  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker2< int32_t, Color32_t307  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::InsertItem(System.Int32,T) */, (Collection_1_t2003 *)__this, (int32_t)L_0, (Color32_t307 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14232_gshared (Collection_1_t2003 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		Color32_t307  L_2 = (( Color32_t307  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2003 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Color32_t307  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::IndexOf(T) */, (Collection_1_t2003 *)__this, (Color32_t307 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::RemoveItem(System.Int32) */, (Collection_1_t2003 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14233_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14234_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14235_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14236_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14237_gshared (Collection_1_t2003 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Color32_t307  L_2 = (Color32_t307 )InterfaceFuncInvoker1< Color32_t307 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Color32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		Color32_t307  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14238_gshared (Collection_1_t2003 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Color32_t307  L_2 = (( Color32_t307  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker2< int32_t, Color32_t307  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::SetItem(System.Int32,T) */, (Collection_1_t2003 *)__this, (int32_t)L_0, (Color32_t307 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::Add(T)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
extern "C" void Collection_1_Add_m14239_gshared (Collection_1_t2003 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Color32_t307  L_3 = ___item;
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker2< int32_t, Color32_t307  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::InsertItem(System.Int32,T) */, (Collection_1_t2003 *)__this, (int32_t)L_2, (Color32_t307 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::Clear()
extern "C" void Collection_1_Clear_m14240_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::ClearItems() */, (Collection_1_t2003 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::ClearItems()
extern "C" void Collection_1_ClearItems_m14241_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::Contains(T)
extern "C" bool Collection_1_Contains_m14242_gshared (Collection_1_t2003 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Color32_t307  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Color32_t307  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Color32_t307 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m14243_gshared (Collection_1_t2003 * __this, Color32U5BU5D_t386* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Color32U5BU5D_t386* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Color32U5BU5D_t386*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Color32U5BU5D_t386*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14244_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14245_gshared (Collection_1_t2003 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Color32_t307  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Color32_t307  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Color32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (Color32_t307 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14246_gshared (Collection_1_t2003 * __this, int32_t ___index, Color32_t307  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Color32_t307  L_1 = ___item;
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker2< int32_t, Color32_t307  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::InsertItem(System.Int32,T) */, (Collection_1_t2003 *)__this, (int32_t)L_0, (Color32_t307 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14247_gshared (Collection_1_t2003 * __this, int32_t ___index, Color32_t307  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Color32_t307  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Color32_t307  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Color32>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Color32_t307 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::Remove(T)
extern "C" bool Collection_1_Remove_m14248_gshared (Collection_1_t2003 * __this, Color32_t307  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color32_t307  L_0 = ___item;
		NullCheck((Collection_1_t2003 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color32_t307  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::IndexOf(T) */, (Collection_1_t2003 *)__this, (Color32_t307 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::RemoveItem(System.Int32) */, (Collection_1_t2003 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14249_gshared (Collection_1_t2003 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::RemoveItem(System.Int32) */, (Collection_1_t2003 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14250_gshared (Collection_1_t2003 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Color32>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14251_gshared (Collection_1_t2003 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t307  Collection_1_get_Item_m14252_gshared (Collection_1_t2003 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Color32_t307  L_2 = (Color32_t307 )InterfaceFuncInvoker1< Color32_t307 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Color32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14253_gshared (Collection_1_t2003 * __this, int32_t ___index, Color32_t307  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Color32_t307  L_1 = ___value;
		NullCheck((Collection_1_t2003 *)__this);
		VirtActionInvoker2< int32_t, Color32_t307  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::SetItem(System.Int32,T) */, (Collection_1_t2003 *)__this, (int32_t)L_0, (Color32_t307 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14254_gshared (Collection_1_t2003 * __this, int32_t ___index, Color32_t307  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Color32_t307  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Color32_t307  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Color32>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Color32_t307 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m14255_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" Color32_t307  Collection_1_ConvertItem_m14256_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(Color32_t307 *)((Color32_t307 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m14257_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t49 * L_2 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m14258_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t988_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Color32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t947_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m14259_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(637);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t947_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t947_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m14260_gshared (EqualityComparer_1_t2004 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2430_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14261_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2430_0_0_0_var = il2cpp_codegen_type_from_index(2559);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericEqualityComparer_1_t2430_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2004_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2004 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2005 * L_8 = (DefaultComparer_t2005 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2004_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14262_gshared (EqualityComparer_1_t2004 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2004 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color32_t307  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::GetHashCode(T) */, (EqualityComparer_1_t2004 *)__this, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14263_gshared (EqualityComparer_1_t2004 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2004 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Color32_t307 , Color32_t307  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(T,T) */, (EqualityComparer_1_t2004 *)__this, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::get_Default()
extern "C" EqualityComparer_1_t2004 * EqualityComparer_1_get_Default_m14264_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2004 * L_0 = ((EqualityComparer_1_t2004_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m14265_gshared (DefaultComparer_t2005 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2004 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2004 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2004 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
extern "C" int32_t DefaultComparer_GetHashCode_m14266_gshared (DefaultComparer_t2005 * __this, Color32_t307  ___obj, const MethodInfo* method)
{
	{
		Color32_t307  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14267_gshared (DefaultComparer_t2005 * __this, Color32_t307  ___x, Color32_t307  ___y, const MethodInfo* method)
{
	{
		Color32_t307  L_0 = ___x;
		goto IL_0015;
	}
	{
		Color32_t307  L_1 = ___y;
		Color32_t307  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Color32_t307  L_4 = ___y;
		Color32_t307  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m14268_gshared (Predicate_1_t2006 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
extern "C" bool Predicate_1_Invoke_m14269_gshared (Predicate_1_t2006 * __this, Color32_t307  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m14269((Predicate_1_t2006 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Color32_t307  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Color32_t307  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Color32_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m14270_gshared (Predicate_1_t2006 * __this, Color32_t307  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Color32_t307_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14271_gshared (Predicate_1_t2006 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Color32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m14272_gshared (Comparer_1_t2007 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Color32>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2431_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m14273_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2431_0_0_0_var = il2cpp_codegen_type_from_index(2560);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericComparer_1_t2431_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2007_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2007 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2008 * L_8 = (DefaultComparer_t2008 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2008 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2007_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Color32>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m14274_gshared (Comparer_1_t2007 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2007 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Color32_t307 , Color32_t307  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Color32>::Compare(T,T) */, (Comparer_1_t2007 *)__this, (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Color32_t307 )((*(Color32_t307 *)((Color32_t307 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9336(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Color32>::get_Default()
extern "C" Comparer_1_t2007 * Comparer_1_get_Default_m14275_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2007 * L_0 = ((Comparer_1_t2007_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m14276_gshared (DefaultComparer_t2008 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2007 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2007 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2007 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color32>::Compare(T,T)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2714;
extern "C" int32_t DefaultComparer_Compare_m14277_gshared (DefaultComparer_t2008 * __this, Color32_t307  ___x, Color32_t307  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(703);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2714 = il2cpp_codegen_string_literal_from_index(2714);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Color32_t307  L_0 = ___x;
		goto IL_001e;
	}
	{
		Color32_t307  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Color32_t307  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		Color32_t307  L_3 = ___x;
		Color32_t307  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		Color32_t307  L_6 = ___x;
		Color32_t307  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		Color32_t307  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Color32_t307  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.Color32>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (Color32_t307 )L_9);
		return L_10;
	}

IL_004d:
	{
		Color32_t307  L_11 = ___x;
		Color32_t307  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1671_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Color32_t307  L_14 = ___x;
		Color32_t307  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		Color32_t307  L_17 = ___y;
		Color32_t307  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1671_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t370 * L_21 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_21, (String_t*)_stringLiteral2714, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Comparison`1<UnityEngine.Color32>
#include "mscorlib_System_Comparison_1_gen_27MethodDeclarations.h"
// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m14278_gshared (Comparison_1_t2009 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
extern "C" int32_t Comparison_1_Invoke_m14279_gshared (Comparison_1_t2009 * __this, Color32_t307  ___x, Color32_t307  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m14279((Comparison_1_t2009 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Color32_t307  ___x, Color32_t307  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Color32_t307  ___x, Color32_t307  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Color32_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m14280_gshared (Comparison_1_t2009 * __this, Color32_t307  ___x, Color32_t307  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Color32_t307_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Color32_t307_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14281_gshared (Comparison_1_t2009 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_25.h"
// System.Predicate`1<UnityEngine.Vector2>
#include "mscorlib_System_Predicate_1_gen_28.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4.h"
// System.Comparison`1<UnityEngine.Vector2>
#include "mscorlib_System_Comparison_1_gen_28.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_25MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Vector2>
#include "mscorlib_System_Predicate_1_gen_28MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4MethodDeclarations.h"
struct Vector2U5BU5D_t174;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Vector2>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Vector2>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisVector2_t11_m17003_gshared (Object_t * __this /* static, unused */, Vector2U5BU5D_t174* p0, Vector2_t11  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisVector2_t11_m17003(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174*, Vector2_t11 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisVector2_t11_m17003_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Vector2U5BU5D_t174;
struct IComparer_1_t2394;
// Declaration System.Void System.Array::Sort<UnityEngine.Vector2>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Vector2>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisVector2_t11_m17004_gshared (Object_t * __this /* static, unused */, Vector2U5BU5D_t174* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisVector2_t11_m17004(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisVector2_t11_m17004_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Vector2U5BU5D_t174;
struct Comparison_1_t2019;
// Declaration System.Void System.Array::Sort<UnityEngine.Vector2>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Vector2>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisVector2_t11_m17010_gshared (Object_t * __this /* static, unused */, Vector2U5BU5D_t174* p0, int32_t p1, Comparison_1_t2019 * p2, const MethodInfo* method);
#define Array_Sort_TisVector2_t11_m17010(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174*, int32_t, Comparison_1_t2019 *, const MethodInfo*))Array_Sort_TisVector2_t11_m17010_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Vector2U5BU5D_t174;
// Declaration System.Void System.Array::Resize<UnityEngine.Vector2>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Vector2>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisVector2_t11_m17001_gshared (Object_t * __this /* static, unused */, Vector2U5BU5D_t174** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisVector2_t11_m17001(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174**, int32_t, const MethodInfo*))Array_Resize_TisVector2_t11_m17001_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m14282_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector2U5BU5D_t174* L_0 = ((List_1_t274_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14283_gshared (List_1_t274 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t274 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector2U5BU5D_t174* L_3 = ((List_1_t274_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t274 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((Vector2U5BU5D_t174*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t274 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void List_1__ctor_m14284_gshared (List_1_t274 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral1238 = il2cpp_codegen_string_literal_from_index(1238);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_1 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_1, (String_t*)_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((Vector2U5BU5D_t174*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.cctor()
extern "C" void List_1__cctor_m14285_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t274_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((Vector2U5BU5D_t174*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14286_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t274 *)__this);
		Enumerator_t2010  L_0 = (( Enumerator_t2010  (*) (List_1_t274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t274 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2010  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14287_gshared (List_1_t274 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14288_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t274 *)__this);
		Enumerator_t2010  L_0 = (( Enumerator_t2010  (*) (List_1_t274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t274 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2010  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t List_1_System_Collections_IList_Add_m14289_gshared (List_1_t274 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t274 *)__this);
			VirtActionInvoker1< Vector2_t11  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T) */, (List_1_t274 *)__this, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m14290_gshared (List_1_t274 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t274 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, Vector2_t11  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(T) */, (List_1_t274 *)__this, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14291_gshared (List_1_t274 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t274 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector2_t11  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T) */, (List_1_t274 *)__this, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" void List_1_System_Collections_IList_Insert_m14292_gshared (List_1_t274 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t274 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t274 *)__this);
			VirtActionInvoker2< int32_t, Vector2_t11  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,T) */, (List_1_t274 *)__this, (int32_t)L_1, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m14293_gshared (List_1_t274 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t274 *)__this);
			VirtFuncInvoker1< bool, Vector2_t11  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T) */, (List_1_t274 *)__this, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14294_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14295_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14296_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14297_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14298_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14299_gshared (List_1_t274 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t274 *)__this);
		Vector2_t11  L_1 = (Vector2_t11 )VirtFuncInvoker1< Vector2_t11 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32) */, (List_1_t274 *)__this, (int32_t)L_0);
		Vector2_t11  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" void List_1_System_Collections_IList_set_Item_m14300_gshared (List_1_t274 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral307 = il2cpp_codegen_string_literal_from_index(307);
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
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t274 *)__this);
			VirtActionInvoker2< int32_t, Vector2_t11  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,T) */, (List_1_t274 *)__this, (int32_t)L_0, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral307, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void List_1_Add_m14301_gshared (List_1_t274 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		Vector2U5BU5D_t174* L_1 = (Vector2U5BU5D_t174*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t274 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		Vector2U5BU5D_t174* L_2 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Vector2_t11  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_2, L_5, sizeof(Vector2_t11 ))) = (Vector2_t11 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m14302_gshared (List_1_t274 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		Vector2U5BU5D_t174* L_3 = (Vector2U5BU5D_t174*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t274 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t274 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t274 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14303_gshared (List_1_t274 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t274 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		Vector2U5BU5D_t174* L_5 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< Vector2U5BU5D_t174*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (Vector2U5BU5D_t174*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m14304_gshared (List_1_t274 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t11  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			Vector2_t11  L_3 = (Vector2_t11 )InterfaceFuncInvoker0< Vector2_t11  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (Vector2_t11 )L_3;
			Vector2_t11  L_4 = V_0;
			NullCheck((List_1_t274 *)__this);
			VirtActionInvoker1< Vector2_t11  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T) */, (List_1_t274 *)__this, (Vector2_t11 )L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t28_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2108_gshared (List_1_t274 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t274 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t274 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t274 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2011 * List_1_AsReadOnly_m14305_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2011 * L_0 = (ReadOnlyCollection_1_t2011 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t2011 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C" void List_1_Clear_m14306_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		Vector2U5BU5D_t174* L_1 = (Vector2U5BU5D_t174*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool List_1_Contains_m14307_gshared (List_1_t274 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		Vector2_t11  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174*, Vector2_t11 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Vector2U5BU5D_t174*)L_0, (Vector2_t11 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void List_1_CopyTo_m14308_gshared (List_1_t274 * __this, Vector2U5BU5D_t174* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		Vector2U5BU5D_t174* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::Find(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.Vector2>
#include "mscorlib_System_Predicate_1_gen_28.h"
extern TypeInfo* Vector2_t11_il2cpp_TypeInfo_var;
extern "C" Vector2_t11  List_1_Find_m14309_gshared (List_1_t274 * __this, Predicate_1_t2016 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t11  V_1 = {0};
	Vector2_t11  G_B3_0 = {0};
	{
		Predicate_1_t2016 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2016 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2016 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2016 * L_2 = ___match;
		NullCheck((List_1_t274 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t274 *, int32_t, int32_t, Predicate_1_t2016 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t274 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2016 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		Vector2U5BU5D_t174* L_5 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_5, L_7, sizeof(Vector2_t11 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (Vector2_t11_il2cpp_TypeInfo_var, (&V_1));
		Vector2_t11  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void List_1_CheckMatch_m14310_gshared (Object_t * __this /* static, unused */, Predicate_1_t2016 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t2016 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1829, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14311_gshared (List_1_t274 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2016 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t2016 * L_3 = ___match;
		Vector2U5BU5D_t174* L_4 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2016 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2016 *, Vector2_t11 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2016 *)L_3, (Vector2_t11 )(*(Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_4, L_6, sizeof(Vector2_t11 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Enumerator_t2010  List_1_GetEnumerator_m14312_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2010  L_0 = {0};
		(( void (*) (Enumerator_t2010 *, List_1_t274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t274 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14313_gshared (List_1_t274 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		Vector2_t11  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174*, Vector2_t11 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Vector2U5BU5D_t174*)L_0, (Vector2_t11 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14314_gshared (List_1_t274 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		Vector2U5BU5D_t174* L_5 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_6 = ___start;
		Vector2U5BU5D_t174* L_7 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Vector2U5BU5D_t174* L_15 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_CheckIndex_m14315_gshared (List_1_t274 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14316_gshared (List_1_t274 * __this, int32_t ___index, Vector2_t11  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t274 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Vector2U5BU5D_t174* L_2 = (Vector2U5BU5D_t174*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t274 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t274 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Vector2U5BU5D_t174* L_4 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_5 = ___index;
		Vector2_t11  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_4, L_5, sizeof(Vector2_t11 ))) = (Vector2_t11 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2713;
extern "C" void List_1_CheckCollection_m14317_gshared (List_1_t274 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral2713 = il2cpp_codegen_string_literal_from_index(2713);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral2713, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
extern "C" bool List_1_Remove_m14318_gshared (List_1_t274 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector2_t11  L_0 = ___item;
		NullCheck((List_1_t274 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector2_t11  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T) */, (List_1_t274 *)__this, (Vector2_t11 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t274 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32) */, (List_1_t274 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14319_gshared (List_1_t274 * __this, Predicate_1_t2016 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2016 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2016 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2016 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t2016 * L_1 = ___match;
		Vector2U5BU5D_t174* L_2 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2016 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2016 *, Vector2_t11 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2016 *)L_1, (Vector2_t11 )(*(Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_2, L_4, sizeof(Vector2_t11 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t2016 * L_13 = ___match;
		Vector2U5BU5D_t174* L_14 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t2016 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t2016 *, Vector2_t11 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2016 *)L_13, (Vector2_t11 )(*(Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_14, L_16, sizeof(Vector2_t11 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		Vector2U5BU5D_t174* L_18 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		Vector2U5BU5D_t174* L_21 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_18, L_20, sizeof(Vector2_t11 ))) = (Vector2_t11 )(*(Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_21, L_23, sizeof(Vector2_t11 )));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		Vector2U5BU5D_t174* L_29 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_RemoveAt_m14320_gshared (List_1_t274 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t274 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Vector2U5BU5D_t174* L_5 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
extern "C" void List_1_Reverse_m14321_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4137(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort()
extern "C" void List_1_Sort_m14322_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t2017 * L_2 = (( Comparer_1_t2017 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (Vector2U5BU5D_t174*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.Vector2>
#include "mscorlib_System_Comparison_1_gen_28.h"
extern "C" void List_1_Sort_m14323_gshared (List_1_t274 * __this, Comparison_1_t2019 * ___comparison, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t2019 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174*, int32_t, Comparison_1_t2019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (Vector2U5BU5D_t174*)L_0, (int32_t)L_1, (Comparison_1_t2019 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t174* List_1_ToArray_m14324_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	Vector2U5BU5D_t174* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (Vector2U5BU5D_t174*)((Vector2U5BU5D_t174*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		Vector2U5BU5D_t174* L_1 = (Vector2U5BU5D_t174*)(__this->____items_1);
		Vector2U5BU5D_t174* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		Vector2U5BU5D_t174* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::TrimExcess()
extern "C" void List_1_TrimExcess_m14325_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t274 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14326_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t174* L_0 = (Vector2U5BU5D_t174*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m14327_gshared (List_1_t274 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5157(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		Vector2U5BU5D_t174** L_3 = (Vector2U5BU5D_t174**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, Vector2U5BU5D_t174**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (Vector2U5BU5D_t174**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t List_1_get_Count_m14328_gshared (List_1_t274 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" Vector2_t11  List_1_get_Item_m14329_gshared (List_1_t274 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_2, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		Vector2U5BU5D_t174* L_3 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_3, L_5, sizeof(Vector2_t11 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_set_Item_m14330_gshared (List_1_t274 * __this, int32_t ___index, Vector2_t11  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t274 *)__this);
		(( void (*) (List_1_t274 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t274 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		Vector2U5BU5D_t174* L_4 = (Vector2U5BU5D_t174*)(__this->____items_1);
		int32_t L_5 = ___index;
		Vector2_t11  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_4, L_5, sizeof(Vector2_t11 ))) = (Vector2_t11 )L_6;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
extern "C" void Enumerator__ctor_m14331_gshared (Enumerator_t2010 * __this, List_1_t274 * ___l, const MethodInfo* method)
{
	{
		List_1_t274 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t274 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14332_gshared (Enumerator_t2010 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2010 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2010 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5105(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		Vector2_t11  L_2 = (Vector2_t11 )(__this->___current_3);
		Vector2_t11  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
extern "C" void Enumerator_Dispose_m14333_gshared (Enumerator_t2010 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t274 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2711;
extern "C" void Enumerator_VerifyState_m14334_gshared (Enumerator_t2010 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2711 = il2cpp_codegen_string_literal_from_index(2711);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t274 * L_0 = (List_1_t274 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2010  L_1 = (*(Enumerator_t2010 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1595((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t645 * L_5 = (ObjectDisposedException_t645 *)il2cpp_codegen_object_new (ObjectDisposedException_t645_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3212(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t274 * L_7 = (List_1_t274 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t815 * L_9 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_9, (String_t*)_stringLiteral2711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14335_gshared (Enumerator_t2010 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2010 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2010 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t274 * L_2 = (List_1_t274 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t274 * L_4 = (List_1_t274 *)(__this->___l_0);
		NullCheck(L_4);
		Vector2U5BU5D_t174* L_5 = (Vector2U5BU5D_t174*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Vector2_t11 *)(Vector2_t11 *)SZArrayLdElema(L_5, L_9, sizeof(Vector2_t11 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
extern "C" Vector2_t11  Enumerator_get_Current_m14336_gshared (Enumerator_t2010 * __this, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = (Vector2_t11 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1249;
extern "C" void ReadOnlyCollection_1__ctor_m14337_gshared (ReadOnlyCollection_1_t2011 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1249 = il2cpp_codegen_string_literal_from_index(1249);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1249, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14338_gshared (ReadOnlyCollection_1_t2011 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14339_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14340_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, Vector2_t11  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14341_gshared (ReadOnlyCollection_1_t2011 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14342_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Vector2_t11  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14343_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2011 *)__this);
		Vector2_t11  L_1 = (Vector2_t11 )VirtFuncInvoker1< Vector2_t11 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2011 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14344_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, Vector2_t11  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14345_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14346_gshared (ReadOnlyCollection_1_t2011 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14347_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t804_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m14348_gshared (ReadOnlyCollection_1_t2011 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m14349_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m14350_gshared (ReadOnlyCollection_1_t2011 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Vector2_t11  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14351_gshared (ReadOnlyCollection_1_t2011 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector2_t11  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m14352_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m14353_gshared (ReadOnlyCollection_1_t2011 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14354_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14355_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14356_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14357_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14358_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m14359_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector2_t11  L_2 = (Vector2_t11 )InterfaceFuncInvoker1< Vector2_t11 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		Vector2_t11  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m14360_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m14361_gshared (ReadOnlyCollection_1_t2011 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector2_t11  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Vector2_t11  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Vector2_t11 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m14362_gshared (ReadOnlyCollection_1_t2011 * __this, Vector2U5BU5D_t174* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector2U5BU5D_t174* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Vector2U5BU5D_t174*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Vector2U5BU5D_t174*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m14363_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m14364_gshared (ReadOnlyCollection_1_t2011 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector2_t11  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector2_t11  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Vector2_t11 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m14365_gshared (ReadOnlyCollection_1_t2011 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t11  ReadOnlyCollection_1_get_Item_m14366_gshared (ReadOnlyCollection_1_t2011 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector2_t11  L_2 = (Vector2_t11 )InterfaceFuncInvoker1< Vector2_t11 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m14367_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t274 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t274 * L_0 = (List_1_t274 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t274 *)L_0;
		List_1_t274 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t274 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14368_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14369_gshared (Collection_1_t2013 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14370_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14371_gshared (Collection_1_t2013 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Vector2_t11  L_4 = (( Vector2_t11  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker2< int32_t, Vector2_t11  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::InsertItem(System.Int32,T) */, (Collection_1_t2013 *)__this, (int32_t)L_2, (Vector2_t11 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14372_gshared (Collection_1_t2013 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Vector2_t11  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14373_gshared (Collection_1_t2013 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector2_t11  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14374_gshared (Collection_1_t2013 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Vector2_t11  L_2 = (( Vector2_t11  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker2< int32_t, Vector2_t11  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::InsertItem(System.Int32,T) */, (Collection_1_t2013 *)__this, (int32_t)L_0, (Vector2_t11 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14375_gshared (Collection_1_t2013 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		Vector2_t11  L_2 = (( Vector2_t11  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2013 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Vector2_t11  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::IndexOf(T) */, (Collection_1_t2013 *)__this, (Vector2_t11 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::RemoveItem(System.Int32) */, (Collection_1_t2013 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14376_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14377_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14378_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14379_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14380_gshared (Collection_1_t2013 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector2_t11  L_2 = (Vector2_t11 )InterfaceFuncInvoker1< Vector2_t11 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		Vector2_t11  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14381_gshared (Collection_1_t2013 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Vector2_t11  L_2 = (( Vector2_t11  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker2< int32_t, Vector2_t11  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::SetItem(System.Int32,T) */, (Collection_1_t2013 *)__this, (int32_t)L_0, (Vector2_t11 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::Add(T)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void Collection_1_Add_m14382_gshared (Collection_1_t2013 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Vector2_t11  L_3 = ___item;
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker2< int32_t, Vector2_t11  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::InsertItem(System.Int32,T) */, (Collection_1_t2013 *)__this, (int32_t)L_2, (Vector2_t11 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::Clear()
extern "C" void Collection_1_Clear_m14383_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::ClearItems() */, (Collection_1_t2013 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::ClearItems()
extern "C" void Collection_1_ClearItems_m14384_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool Collection_1_Contains_m14385_gshared (Collection_1_t2013 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector2_t11  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Vector2_t11  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Vector2_t11 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m14386_gshared (Collection_1_t2013 * __this, Vector2U5BU5D_t174* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector2U5BU5D_t174* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Vector2U5BU5D_t174*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Vector2U5BU5D_t174*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14387_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14388_gshared (Collection_1_t2013 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector2_t11  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector2_t11  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (Vector2_t11 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14389_gshared (Collection_1_t2013 * __this, int32_t ___index, Vector2_t11  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Vector2_t11  L_1 = ___item;
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker2< int32_t, Vector2_t11  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::InsertItem(System.Int32,T) */, (Collection_1_t2013 *)__this, (int32_t)L_0, (Vector2_t11 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14390_gshared (Collection_1_t2013 * __this, int32_t ___index, Vector2_t11  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Vector2_t11  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Vector2_t11  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Vector2_t11 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::Remove(T)
extern "C" bool Collection_1_Remove_m14391_gshared (Collection_1_t2013 * __this, Vector2_t11  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector2_t11  L_0 = ___item;
		NullCheck((Collection_1_t2013 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector2_t11  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::IndexOf(T) */, (Collection_1_t2013 *)__this, (Vector2_t11 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::RemoveItem(System.Int32) */, (Collection_1_t2013 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14392_gshared (Collection_1_t2013 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::RemoveItem(System.Int32) */, (Collection_1_t2013 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14393_gshared (Collection_1_t2013 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14394_gshared (Collection_1_t2013 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t11  Collection_1_get_Item_m14395_gshared (Collection_1_t2013 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector2_t11  L_2 = (Vector2_t11 )InterfaceFuncInvoker1< Vector2_t11 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14396_gshared (Collection_1_t2013 * __this, int32_t ___index, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Vector2_t11  L_1 = ___value;
		NullCheck((Collection_1_t2013 *)__this);
		VirtActionInvoker2< int32_t, Vector2_t11  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::SetItem(System.Int32,T) */, (Collection_1_t2013 *)__this, (int32_t)L_0, (Vector2_t11 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14397_gshared (Collection_1_t2013 * __this, int32_t ___index, Vector2_t11  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Vector2_t11  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Vector2_t11  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Vector2_t11 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m14398_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" Vector2_t11  Collection_1_ConvertItem_m14399_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m14400_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t49 * L_2 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m14401_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t988_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector2>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t947_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m14402_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(637);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t947_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t947_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m14403_gshared (EqualityComparer_1_t2014 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2430_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14404_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2430_0_0_0_var = il2cpp_codegen_type_from_index(2559);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericEqualityComparer_1_t2430_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2014_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2014 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2015 * L_8 = (DefaultComparer_t2015 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2015 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2014_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14405_gshared (EqualityComparer_1_t2014 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2014 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector2_t11  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::GetHashCode(T) */, (EqualityComparer_1_t2014 *)__this, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14406_gshared (EqualityComparer_1_t2014 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2014 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector2_t11 , Vector2_t11  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, (EqualityComparer_1_t2014 *)__this, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::get_Default()
extern "C" EqualityComparer_1_t2014 * EqualityComparer_1_get_Default_m14407_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2014 * L_0 = ((EqualityComparer_1_t2014_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14408_gshared (DefaultComparer_t2015 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2014 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2014 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2014 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m14409_gshared (DefaultComparer_t2015 * __this, Vector2_t11  ___obj, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Vector2_t11 *)(&___obj));
		int32_t L_1 = Vector2_GetHashCode_m2299((Vector2_t11 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14410_gshared (DefaultComparer_t2015 * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = ___x;
		goto IL_0015;
	}
	{
		Vector2_t11  L_1 = ___y;
		Vector2_t11  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Vector2_t11  L_4 = ___y;
		Vector2_t11  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Vector2_t11 *)(&___x));
		bool L_7 = Vector2_Equals_m2300((Vector2_t11 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m14411_gshared (Predicate_1_t2016 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" bool Predicate_1_Invoke_m14412_gshared (Predicate_1_t2016 * __this, Vector2_t11  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m14412((Predicate_1_t2016 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Vector2_t11  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Vector2_t11  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Vector2_t11_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m14413_gshared (Predicate_1_t2016 * __this, Vector2_t11  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t11_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14414_gshared (Predicate_1_t2016 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Vector2>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m14415_gshared (Comparer_1_t2017 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Vector2>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2431_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m14416_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2431_0_0_0_var = il2cpp_codegen_type_from_index(2560);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericComparer_1_t2431_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2017_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2017 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2018 * L_8 = (DefaultComparer_t2018 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2018 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2017_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Vector2>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m14417_gshared (Comparer_1_t2017 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2017 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Vector2_t11 , Vector2_t11  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Vector2>::Compare(T,T) */, (Comparer_1_t2017 *)__this, (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector2_t11 )((*(Vector2_t11 *)((Vector2_t11 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9336(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Vector2>::get_Default()
extern "C" Comparer_1_t2017 * Comparer_1_get_Default_m14418_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2017 * L_0 = ((Comparer_1_t2017_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14419_gshared (DefaultComparer_t2018 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2017 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2017 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2017 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector2>::Compare(T,T)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2714;
extern "C" int32_t DefaultComparer_Compare_m14420_gshared (DefaultComparer_t2018 * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(703);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2714 = il2cpp_codegen_string_literal_from_index(2714);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Vector2_t11  L_0 = ___x;
		goto IL_001e;
	}
	{
		Vector2_t11  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Vector2_t11  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		Vector2_t11  L_3 = ___x;
		Vector2_t11  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		Vector2_t11  L_6 = ___x;
		Vector2_t11  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		Vector2_t11  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector2_t11  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.Vector2>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (Vector2_t11 )L_9);
		return L_10;
	}

IL_004d:
	{
		Vector2_t11  L_11 = ___x;
		Vector2_t11  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1671_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Vector2_t11  L_14 = ___x;
		Vector2_t11  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		Vector2_t11  L_17 = ___y;
		Vector2_t11  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1671_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t370 * L_21 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_21, (String_t*)_stringLiteral2714, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Comparison`1<UnityEngine.Vector2>
#include "mscorlib_System_Comparison_1_gen_28MethodDeclarations.h"
// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m14421_gshared (Comparison_1_t2019 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" int32_t Comparison_1_Invoke_m14422_gshared (Comparison_1_t2019 * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m14422((Comparison_1_t2019 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Vector2_t11_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m14423_gshared (Comparison_1_t2019 * __this, Vector2_t11  ___x, Vector2_t11  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t11_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Vector2_t11_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14424_gshared (Comparison_1_t2019 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_26.h"
// System.Predicate`1<UnityEngine.Vector4>
#include "mscorlib_System_Predicate_1_gen_29.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5.h"
// System.Comparison`1<UnityEngine.Vector4>
#include "mscorlib_System_Comparison_1_gen_29.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_26MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Vector4>
#include "mscorlib_System_Predicate_1_gen_29MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5MethodDeclarations.h"
struct Vector4U5BU5D_t387;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Vector4>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Vector4>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisVector4_t277_m17026_gshared (Object_t * __this /* static, unused */, Vector4U5BU5D_t387* p0, Vector4_t277  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisVector4_t277_m17026(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387*, Vector4_t277 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisVector4_t277_m17026_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Vector4U5BU5D_t387;
struct IComparer_1_t2395;
// Declaration System.Void System.Array::Sort<UnityEngine.Vector4>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Vector4>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisVector4_t277_m17027_gshared (Object_t * __this /* static, unused */, Vector4U5BU5D_t387* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisVector4_t277_m17027(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisVector4_t277_m17027_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Vector4U5BU5D_t387;
struct Comparison_1_t2030;
// Declaration System.Void System.Array::Sort<UnityEngine.Vector4>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Vector4>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisVector4_t277_m17033_gshared (Object_t * __this /* static, unused */, Vector4U5BU5D_t387* p0, int32_t p1, Comparison_1_t2030 * p2, const MethodInfo* method);
#define Array_Sort_TisVector4_t277_m17033(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387*, int32_t, Comparison_1_t2030 *, const MethodInfo*))Array_Sort_TisVector4_t277_m17033_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Vector4U5BU5D_t387;
// Declaration System.Void System.Array::Resize<UnityEngine.Vector4>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Vector4>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisVector4_t277_m17024_gshared (Object_t * __this /* static, unused */, Vector4U5BU5D_t387** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisVector4_t277_m17024(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387**, int32_t, const MethodInfo*))Array_Resize_TisVector4_t277_m17024_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m14425_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector4U5BU5D_t387* L_0 = ((List_1_t275_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14426_gshared (List_1_t275 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t275 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector4U5BU5D_t387* L_3 = ((List_1_t275_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t275 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((Vector4U5BU5D_t387*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t275 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void List_1__ctor_m14427_gshared (List_1_t275 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral1238 = il2cpp_codegen_string_literal_from_index(1238);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_1 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_1, (String_t*)_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((Vector4U5BU5D_t387*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.cctor()
extern "C" void List_1__cctor_m14428_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t275_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((Vector4U5BU5D_t387*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14429_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t275 *)__this);
		Enumerator_t2021  L_0 = (( Enumerator_t2021  (*) (List_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2021  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14430_gshared (List_1_t275 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14431_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t275 *)__this);
		Enumerator_t2021  L_0 = (( Enumerator_t2021  (*) (List_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2021  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t List_1_System_Collections_IList_Add_m14432_gshared (List_1_t275 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t275 *)__this);
			VirtActionInvoker1< Vector4_t277  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T) */, (List_1_t275 *)__this, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m14433_gshared (List_1_t275 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t275 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, Vector4_t277  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Contains(T) */, (List_1_t275 *)__this, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14434_gshared (List_1_t275 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t275 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector4_t277  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::IndexOf(T) */, (List_1_t275 *)__this, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" void List_1_System_Collections_IList_Insert_m14435_gshared (List_1_t275 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t275 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t275 *)__this);
			VirtActionInvoker2< int32_t, Vector4_t277  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Insert(System.Int32,T) */, (List_1_t275 *)__this, (int32_t)L_1, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m14436_gshared (List_1_t275 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t275 *)__this);
			VirtFuncInvoker1< bool, Vector4_t277  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Remove(T) */, (List_1_t275 *)__this, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14437_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14438_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14439_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14440_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14441_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14442_gshared (List_1_t275 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t275 *)__this);
		Vector4_t277  L_1 = (Vector4_t277 )VirtFuncInvoker1< Vector4_t277 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32) */, (List_1_t275 *)__this, (int32_t)L_0);
		Vector4_t277  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" void List_1_System_Collections_IList_set_Item_m14443_gshared (List_1_t275 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral307 = il2cpp_codegen_string_literal_from_index(307);
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
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t275 *)__this);
			VirtActionInvoker2< int32_t, Vector4_t277  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T) */, (List_1_t275 *)__this, (int32_t)L_0, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral307, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" void List_1_Add_m14444_gshared (List_1_t275 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		Vector4U5BU5D_t387* L_1 = (Vector4U5BU5D_t387*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t275 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		Vector4U5BU5D_t387* L_2 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Vector4_t277  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_2, L_5, sizeof(Vector4_t277 ))) = (Vector4_t277 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m14445_gshared (List_1_t275 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		Vector4U5BU5D_t387* L_3 = (Vector4U5BU5D_t387*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t275 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t275 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14446_gshared (List_1_t275 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t275 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		Vector4U5BU5D_t387* L_5 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< Vector4U5BU5D_t387*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (Vector4U5BU5D_t387*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m14447_gshared (List_1_t275 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t277  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			Vector4_t277  L_3 = (Vector4_t277 )InterfaceFuncInvoker0< Vector4_t277  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (Vector4_t277 )L_3;
			Vector4_t277  L_4 = V_0;
			NullCheck((List_1_t275 *)__this);
			VirtActionInvoker1< Vector4_t277  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T) */, (List_1_t275 *)__this, (Vector4_t277 )L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t28_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2112_gshared (List_1_t275 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t275 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t275 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t275 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2022 * List_1_AsReadOnly_m14448_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2022 * L_0 = (ReadOnlyCollection_1_t2022 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t2022 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
extern "C" void List_1_Clear_m14449_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		Vector4U5BU5D_t387* L_1 = (Vector4U5BU5D_t387*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Contains(T)
extern "C" bool List_1_Contains_m14450_gshared (List_1_t275 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		Vector4_t277  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387*, Vector4_t277 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Vector4U5BU5D_t387*)L_0, (Vector4_t277 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void List_1_CopyTo_m14451_gshared (List_1_t275 * __this, Vector4U5BU5D_t387* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		Vector4U5BU5D_t387* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::Find(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.Vector4>
#include "mscorlib_System_Predicate_1_gen_29.h"
extern TypeInfo* Vector4_t277_il2cpp_TypeInfo_var;
extern "C" Vector4_t277  List_1_Find_m14452_gshared (List_1_t275 * __this, Predicate_1_t2027 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t277  V_1 = {0};
	Vector4_t277  G_B3_0 = {0};
	{
		Predicate_1_t2027 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2027 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2027 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2027 * L_2 = ___match;
		NullCheck((List_1_t275 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t275 *, int32_t, int32_t, Predicate_1_t2027 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t275 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2027 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		Vector4U5BU5D_t387* L_5 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_5, L_7, sizeof(Vector4_t277 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (Vector4_t277_il2cpp_TypeInfo_var, (&V_1));
		Vector4_t277  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void List_1_CheckMatch_m14453_gshared (Object_t * __this /* static, unused */, Predicate_1_t2027 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t2027 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1829, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14454_gshared (List_1_t275 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2027 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t2027 * L_3 = ___match;
		Vector4U5BU5D_t387* L_4 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2027 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2027 *, Vector4_t277 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2027 *)L_3, (Vector4_t277 )(*(Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_4, L_6, sizeof(Vector4_t277 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::GetEnumerator()
extern "C" Enumerator_t2021  List_1_GetEnumerator_m14455_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2021  L_0 = {0};
		(( void (*) (Enumerator_t2021 *, List_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14456_gshared (List_1_t275 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		Vector4_t277  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387*, Vector4_t277 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Vector4U5BU5D_t387*)L_0, (Vector4_t277 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14457_gshared (List_1_t275 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		Vector4U5BU5D_t387* L_5 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_6 = ___start;
		Vector4U5BU5D_t387* L_7 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Vector4U5BU5D_t387* L_15 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_CheckIndex_m14458_gshared (List_1_t275 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14459_gshared (List_1_t275 * __this, int32_t ___index, Vector4_t277  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t275 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Vector4U5BU5D_t387* L_2 = (Vector4U5BU5D_t387*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t275 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t275 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Vector4U5BU5D_t387* L_4 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_5 = ___index;
		Vector4_t277  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_4, L_5, sizeof(Vector4_t277 ))) = (Vector4_t277 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2713;
extern "C" void List_1_CheckCollection_m14460_gshared (List_1_t275 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral2713 = il2cpp_codegen_string_literal_from_index(2713);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral2713, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Remove(T)
extern "C" bool List_1_Remove_m14461_gshared (List_1_t275 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector4_t277  L_0 = ___item;
		NullCheck((List_1_t275 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector4_t277  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::IndexOf(T) */, (List_1_t275 *)__this, (Vector4_t277 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t275 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAt(System.Int32) */, (List_1_t275 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14462_gshared (List_1_t275 * __this, Predicate_1_t2027 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2027 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2027 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2027 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t2027 * L_1 = ___match;
		Vector4U5BU5D_t387* L_2 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2027 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2027 *, Vector4_t277 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2027 *)L_1, (Vector4_t277 )(*(Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_2, L_4, sizeof(Vector4_t277 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t2027 * L_13 = ___match;
		Vector4U5BU5D_t387* L_14 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t2027 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t2027 *, Vector4_t277 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2027 *)L_13, (Vector4_t277 )(*(Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_14, L_16, sizeof(Vector4_t277 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		Vector4U5BU5D_t387* L_18 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		Vector4U5BU5D_t387* L_21 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_18, L_20, sizeof(Vector4_t277 ))) = (Vector4_t277 )(*(Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_21, L_23, sizeof(Vector4_t277 )));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		Vector4U5BU5D_t387* L_29 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_RemoveAt_m14463_gshared (List_1_t275 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t275 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Vector4U5BU5D_t387* L_5 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Reverse()
extern "C" void List_1_Reverse_m14464_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4137(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort()
extern "C" void List_1_Sort_m14465_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t2028 * L_2 = (( Comparer_1_t2028 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (Vector4U5BU5D_t387*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.Vector4>
#include "mscorlib_System_Comparison_1_gen_29.h"
extern "C" void List_1_Sort_m14466_gshared (List_1_t275 * __this, Comparison_1_t2030 * ___comparison, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t2030 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387*, int32_t, Comparison_1_t2030 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (Vector4U5BU5D_t387*)L_0, (int32_t)L_1, (Comparison_1_t2030 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.Vector4>::ToArray()
extern "C" Vector4U5BU5D_t387* List_1_ToArray_m14467_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	Vector4U5BU5D_t387* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (Vector4U5BU5D_t387*)((Vector4U5BU5D_t387*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		Vector4U5BU5D_t387* L_1 = (Vector4U5BU5D_t387*)(__this->____items_1);
		Vector4U5BU5D_t387* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		Vector4U5BU5D_t387* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::TrimExcess()
extern "C" void List_1_TrimExcess_m14468_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t275 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14469_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t387* L_0 = (Vector4U5BU5D_t387*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m14470_gshared (List_1_t275 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5157(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		Vector4U5BU5D_t387** L_3 = (Vector4U5BU5D_t387**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, Vector4U5BU5D_t387**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (Vector4U5BU5D_t387**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Count()
extern "C" int32_t List_1_get_Count_m14471_gshared (List_1_t275 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" Vector4_t277  List_1_get_Item_m14472_gshared (List_1_t275 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_2, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		Vector4U5BU5D_t387* L_3 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_3, L_5, sizeof(Vector4_t277 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_set_Item_m14473_gshared (List_1_t275 * __this, int32_t ___index, Vector4_t277  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t275 *)__this);
		(( void (*) (List_1_t275 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t275 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		Vector4U5BU5D_t387* L_4 = (Vector4U5BU5D_t387*)(__this->____items_1);
		int32_t L_5 = ___index;
		Vector4_t277  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_4, L_5, sizeof(Vector4_t277 ))) = (Vector4_t277 )L_6;
		return;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
extern "C" Vector4_t277  Array_InternalArray__get_Item_TisVector4_t277_m17013_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector4_t277_m17013(__this, p0, method) (( Vector4_t277  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector4_t277_m17013_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m14474_gshared (InternalEnumerator_1_t2020 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14475_gshared (InternalEnumerator_1_t2020 * __this, const MethodInfo* method)
{
	{
		Vector4_t277  L_0 = (( Vector4_t277  (*) (InternalEnumerator_1_t2020 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2020 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector4_t277  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14476_gshared (InternalEnumerator_1_t2020 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector4>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m14477_gshared (InternalEnumerator_1_t2020 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5103((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Vector4>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" Vector4_t277  InternalEnumerator_1_get_Current_m14478_gshared (InternalEnumerator_1_t2020 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2709 = il2cpp_codegen_string_literal_from_index(2709);
		_stringLiteral2710 = il2cpp_codegen_string_literal_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_1, (String_t*)_stringLiteral2709, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t815 * L_3 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_3, (String_t*)_stringLiteral2710, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5103((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector4_t277  L_8 = (( Vector4_t277  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
extern "C" void Enumerator__ctor_m14479_gshared (Enumerator_t2021 * __this, List_1_t275 * ___l, const MethodInfo* method)
{
	{
		List_1_t275 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t275 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14480_gshared (Enumerator_t2021 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2021 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2021 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5105(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		Vector4_t277  L_2 = (Vector4_t277 )(__this->___current_3);
		Vector4_t277  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::Dispose()
extern "C" void Enumerator_Dispose_m14481_gshared (Enumerator_t2021 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t275 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2711;
extern "C" void Enumerator_VerifyState_m14482_gshared (Enumerator_t2021 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2711 = il2cpp_codegen_string_literal_from_index(2711);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t275 * L_0 = (List_1_t275 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2021  L_1 = (*(Enumerator_t2021 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1595((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t645 * L_5 = (ObjectDisposedException_t645 *)il2cpp_codegen_object_new (ObjectDisposedException_t645_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3212(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t275 * L_7 = (List_1_t275 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t815 * L_9 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_9, (String_t*)_stringLiteral2711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14483_gshared (Enumerator_t2021 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2021 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2021 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t275 * L_2 = (List_1_t275 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t275 * L_4 = (List_1_t275 *)(__this->___l_0);
		NullCheck(L_4);
		Vector4U5BU5D_t387* L_5 = (Vector4U5BU5D_t387*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Vector4_t277 *)(Vector4_t277 *)SZArrayLdElema(L_5, L_9, sizeof(Vector4_t277 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::get_Current()
extern "C" Vector4_t277  Enumerator_get_Current_m14484_gshared (Enumerator_t2021 * __this, const MethodInfo* method)
{
	{
		Vector4_t277  L_0 = (Vector4_t277 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_5MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1249;
extern "C" void ReadOnlyCollection_1__ctor_m14485_gshared (ReadOnlyCollection_1_t2022 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1249 = il2cpp_codegen_string_literal_from_index(1249);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1249, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14486_gshared (ReadOnlyCollection_1_t2022 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14487_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14488_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, Vector4_t277  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14489_gshared (ReadOnlyCollection_1_t2022 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14490_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Vector4_t277  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14491_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2022 *)__this);
		Vector4_t277  L_1 = (Vector4_t277 )VirtFuncInvoker1< Vector4_t277 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2022 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14492_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, Vector4_t277  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14493_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14494_gshared (ReadOnlyCollection_1_t2022 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14495_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t804_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m14496_gshared (ReadOnlyCollection_1_t2022 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m14497_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m14498_gshared (ReadOnlyCollection_1_t2022 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Vector4_t277  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14499_gshared (ReadOnlyCollection_1_t2022 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector4_t277  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector4>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m14500_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m14501_gshared (ReadOnlyCollection_1_t2022 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14502_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14503_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14504_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14505_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14506_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m14507_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector4_t277  L_2 = (Vector4_t277 )InterfaceFuncInvoker1< Vector4_t277 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector4>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		Vector4_t277  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m14508_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m14509_gshared (ReadOnlyCollection_1_t2022 * __this, Vector4_t277  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector4_t277  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Vector4_t277  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Vector4_t277 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m14510_gshared (ReadOnlyCollection_1_t2022 * __this, Vector4U5BU5D_t387* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector4U5BU5D_t387* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Vector4U5BU5D_t387*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Vector4U5BU5D_t387*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m14511_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m14512_gshared (ReadOnlyCollection_1_t2022 * __this, Vector4_t277  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector4_t277  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector4_t277  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector4>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Vector4_t277 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m14513_gshared (ReadOnlyCollection_1_t2022 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C" Vector4_t277  ReadOnlyCollection_1_get_Item_m14514_gshared (ReadOnlyCollection_1_t2022 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector4_t277  L_2 = (Vector4_t277 )InterfaceFuncInvoker1< Vector4_t277 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector4>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_5.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m14515_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t275 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t275 * L_0 = (List_1_t275 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t275 *)L_0;
		List_1_t275 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t275 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14516_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14517_gshared (Collection_1_t2024 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14518_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14519_gshared (Collection_1_t2024 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Vector4_t277  L_4 = (( Vector4_t277  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker2< int32_t, Vector4_t277  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::InsertItem(System.Int32,T) */, (Collection_1_t2024 *)__this, (int32_t)L_2, (Vector4_t277 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14520_gshared (Collection_1_t2024 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Vector4_t277  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14521_gshared (Collection_1_t2024 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector4_t277  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector4>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14522_gshared (Collection_1_t2024 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Vector4_t277  L_2 = (( Vector4_t277  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker2< int32_t, Vector4_t277  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::InsertItem(System.Int32,T) */, (Collection_1_t2024 *)__this, (int32_t)L_0, (Vector4_t277 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14523_gshared (Collection_1_t2024 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		Vector4_t277  L_2 = (( Vector4_t277  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2024 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Vector4_t277  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::IndexOf(T) */, (Collection_1_t2024 *)__this, (Vector4_t277 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::RemoveItem(System.Int32) */, (Collection_1_t2024 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14524_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14525_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14526_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14527_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14528_gshared (Collection_1_t2024 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector4_t277  L_2 = (Vector4_t277 )InterfaceFuncInvoker1< Vector4_t277 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector4>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		Vector4_t277  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14529_gshared (Collection_1_t2024 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Vector4_t277  L_2 = (( Vector4_t277  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker2< int32_t, Vector4_t277  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::SetItem(System.Int32,T) */, (Collection_1_t2024 *)__this, (int32_t)L_0, (Vector4_t277 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::Add(T)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" void Collection_1_Add_m14530_gshared (Collection_1_t2024 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Vector4_t277  L_3 = ___item;
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker2< int32_t, Vector4_t277  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::InsertItem(System.Int32,T) */, (Collection_1_t2024 *)__this, (int32_t)L_2, (Vector4_t277 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::Clear()
extern "C" void Collection_1_Clear_m14531_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::ClearItems() */, (Collection_1_t2024 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::ClearItems()
extern "C" void Collection_1_ClearItems_m14532_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::Contains(T)
extern "C" bool Collection_1_Contains_m14533_gshared (Collection_1_t2024 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector4_t277  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Vector4_t277  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Vector4_t277 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m14534_gshared (Collection_1_t2024 * __this, Vector4U5BU5D_t387* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector4U5BU5D_t387* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Vector4U5BU5D_t387*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Vector4U5BU5D_t387*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14535_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14536_gshared (Collection_1_t2024 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Vector4_t277  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector4_t277  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector4>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (Vector4_t277 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14537_gshared (Collection_1_t2024 * __this, int32_t ___index, Vector4_t277  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Vector4_t277  L_1 = ___item;
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker2< int32_t, Vector4_t277  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::InsertItem(System.Int32,T) */, (Collection_1_t2024 *)__this, (int32_t)L_0, (Vector4_t277 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14538_gshared (Collection_1_t2024 * __this, int32_t ___index, Vector4_t277  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Vector4_t277  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Vector4_t277  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector4>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Vector4_t277 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::Remove(T)
extern "C" bool Collection_1_Remove_m14539_gshared (Collection_1_t2024 * __this, Vector4_t277  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector4_t277  L_0 = ___item;
		NullCheck((Collection_1_t2024 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector4_t277  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::IndexOf(T) */, (Collection_1_t2024 *)__this, (Vector4_t277 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::RemoveItem(System.Int32) */, (Collection_1_t2024 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14540_gshared (Collection_1_t2024 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::RemoveItem(System.Int32) */, (Collection_1_t2024 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14541_gshared (Collection_1_t2024 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector4>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14542_gshared (Collection_1_t2024 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C" Vector4_t277  Collection_1_get_Item_m14543_gshared (Collection_1_t2024 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Vector4_t277  L_2 = (Vector4_t277 )InterfaceFuncInvoker1< Vector4_t277 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.Vector4>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14544_gshared (Collection_1_t2024 * __this, int32_t ___index, Vector4_t277  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Vector4_t277  L_1 = ___value;
		NullCheck((Collection_1_t2024 *)__this);
		VirtActionInvoker2< int32_t, Vector4_t277  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::SetItem(System.Int32,T) */, (Collection_1_t2024 *)__this, (int32_t)L_0, (Vector4_t277 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14545_gshared (Collection_1_t2024 * __this, int32_t ___index, Vector4_t277  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Vector4_t277  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Vector4_t277  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.Vector4>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (Vector4_t277 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m14546_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" Vector4_t277  Collection_1_ConvertItem_m14547_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m14548_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t49 * L_2 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m14549_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t988_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Vector4>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t947_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m14550_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(637);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t947_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t947_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m14551_gshared (EqualityComparer_1_t2025 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2430_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14552_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2430_0_0_0_var = il2cpp_codegen_type_from_index(2559);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericEqualityComparer_1_t2430_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2025_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2025 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2026 * L_8 = (DefaultComparer_t2026 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2026 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2025_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14553_gshared (EqualityComparer_1_t2025 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2025 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector4_t277  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::GetHashCode(T) */, (EqualityComparer_1_t2025 *)__this, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14554_gshared (EqualityComparer_1_t2025 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2025 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector4_t277 , Vector4_t277  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(T,T) */, (EqualityComparer_1_t2025 *)__this, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::get_Default()
extern "C" EqualityComparer_1_t2025 * EqualityComparer_1_get_Default_m14555_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2025 * L_0 = ((EqualityComparer_1_t2025_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m14556_gshared (DefaultComparer_t2026 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2025 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2025 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2025 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m14557_gshared (DefaultComparer_t2026 * __this, Vector4_t277  ___obj, const MethodInfo* method)
{
	{
		Vector4_t277  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Vector4_t277 *)(&___obj));
		int32_t L_1 = Vector4_GetHashCode_m2387((Vector4_t277 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14558_gshared (DefaultComparer_t2026 * __this, Vector4_t277  ___x, Vector4_t277  ___y, const MethodInfo* method)
{
	{
		Vector4_t277  L_0 = ___x;
		goto IL_0015;
	}
	{
		Vector4_t277  L_1 = ___y;
		Vector4_t277  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Vector4_t277  L_4 = ___y;
		Vector4_t277  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Vector4_t277 *)(&___x));
		bool L_7 = Vector4_Equals_m2388((Vector4_t277 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m14559_gshared (Predicate_1_t2027 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" bool Predicate_1_Invoke_m14560_gshared (Predicate_1_t2027 * __this, Vector4_t277  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m14560((Predicate_1_t2027 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Vector4_t277  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Vector4_t277  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Vector4_t277_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m14561_gshared (Predicate_1_t2027 * __this, Vector4_t277  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector4_t277_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14562_gshared (Predicate_1_t2027 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Vector4>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m14563_gshared (Comparer_1_t2028 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Vector4>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2431_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m14564_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2431_0_0_0_var = il2cpp_codegen_type_from_index(2560);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericComparer_1_t2431_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2028_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2028 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2029 * L_8 = (DefaultComparer_t2029 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2029 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2028_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Vector4>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m14565_gshared (Comparer_1_t2028 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2028 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Vector4_t277 , Vector4_t277  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Vector4>::Compare(T,T) */, (Comparer_1_t2028 *)__this, (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector4_t277 )((*(Vector4_t277 *)((Vector4_t277 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9336(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Vector4>::get_Default()
extern "C" Comparer_1_t2028 * Comparer_1_get_Default_m14566_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2028 * L_0 = ((Comparer_1_t2028_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m14567_gshared (DefaultComparer_t2029 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2028 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2028 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2028 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector4>::Compare(T,T)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2714;
extern "C" int32_t DefaultComparer_Compare_m14568_gshared (DefaultComparer_t2029 * __this, Vector4_t277  ___x, Vector4_t277  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(703);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2714 = il2cpp_codegen_string_literal_from_index(2714);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Vector4_t277  L_0 = ___x;
		goto IL_001e;
	}
	{
		Vector4_t277  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Vector4_t277  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		Vector4_t277  L_3 = ___x;
		Vector4_t277  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		Vector4_t277  L_6 = ___x;
		Vector4_t277  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		Vector4_t277  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Vector4_t277  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.Vector4>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (Vector4_t277 )L_9);
		return L_10;
	}

IL_004d:
	{
		Vector4_t277  L_11 = ___x;
		Vector4_t277  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1671_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Vector4_t277  L_14 = ___x;
		Vector4_t277  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		Vector4_t277  L_17 = ___y;
		Vector4_t277  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1671_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t370 * L_21 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_21, (String_t*)_stringLiteral2714, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Comparison`1<UnityEngine.Vector4>
#include "mscorlib_System_Comparison_1_gen_29MethodDeclarations.h"
// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m14569_gshared (Comparison_1_t2030 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" int32_t Comparison_1_Invoke_m14570_gshared (Comparison_1_t2030 * __this, Vector4_t277  ___x, Vector4_t277  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m14570((Comparison_1_t2030 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector4_t277  ___x, Vector4_t277  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector4_t277  ___x, Vector4_t277  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Vector4_t277_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m14571_gshared (Comparison_1_t2030 * __this, Vector4_t277  ___x, Vector4_t277  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector4_t277_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Vector4_t277_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14572_gshared (Comparison_1_t2030 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_27.h"
// System.Predicate`1<System.Int32>
#include "mscorlib_System_Predicate_1_gen_30.h"
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_6.h"
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_30.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_27MethodDeclarations.h"
// System.Predicate`1<System.Int32>
#include "mscorlib_System_Predicate_1_gen_30MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_6MethodDeclarations.h"
struct Int32U5BU5D_t388;
// Declaration System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisInt32_t36_m17038_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t388* p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisInt32_t36_m17038(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t388*, int32_t, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisInt32_t36_m17038_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Int32U5BU5D_t388;
struct IComparer_1_t2396;
// Declaration System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisInt32_t36_m17039_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t388* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisInt32_t36_m17039(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t388*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisInt32_t36_m17039_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Int32U5BU5D_t388;
struct Comparison_1_t2039;
// Declaration System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisInt32_t36_m17045_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t388* p0, int32_t p1, Comparison_1_t2039 * p2, const MethodInfo* method);
#define Array_Sort_TisInt32_t36_m17045(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t388*, int32_t, Comparison_1_t2039 *, const MethodInfo*))Array_Sort_TisInt32_t36_m17045_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Int32U5BU5D_t388;
// Declaration System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisInt32_t36_m17036_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t388** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisInt32_t36_m17036(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t388**, int32_t, const MethodInfo*))Array_Resize_TisInt32_t36_m17036_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m14573_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t388* L_0 = ((List_1_t276_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14574_gshared (List_1_t276 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t276 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t388* L_3 = ((List_1_t276_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t276 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((Int32U5BU5D_t388*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t276 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void List_1__ctor_m14575_gshared (List_1_t276 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral1238 = il2cpp_codegen_string_literal_from_index(1238);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_1 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_1, (String_t*)_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((Int32U5BU5D_t388*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m14576_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t276_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((Int32U5BU5D_t388*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14577_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t276 *)__this);
		Enumerator_t2031  L_0 = (( Enumerator_t2031  (*) (List_1_t276 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t276 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2031  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14578_gshared (List_1_t276 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14579_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t276 *)__this);
		Enumerator_t2031  L_0 = (( Enumerator_t2031  (*) (List_1_t276 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t276 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2031  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t List_1_System_Collections_IList_Add_m14580_gshared (List_1_t276 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t276 *)__this);
			VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(T) */, (List_1_t276 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m14581_gshared (List_1_t276 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t276 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T) */, (List_1_t276 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14582_gshared (List_1_t276 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t276 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T) */, (List_1_t276 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" void List_1_System_Collections_IList_Insert_m14583_gshared (List_1_t276 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t276 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t276 *)__this);
			VirtActionInvoker2< int32_t, int32_t >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T) */, (List_1_t276 *)__this, (int32_t)L_1, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m14584_gshared (List_1_t276 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t276 *)__this);
			VirtFuncInvoker1< bool, int32_t >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T) */, (List_1_t276 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14585_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14586_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14587_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14588_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14589_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14590_gshared (List_1_t276 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t276 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32) */, (List_1_t276 *)__this, (int32_t)L_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" void List_1_System_Collections_IList_set_Item_m14591_gshared (List_1_t276 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		InvalidCastException_t1584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(674);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral307 = il2cpp_codegen_string_literal_from_index(307);
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
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t276 *)__this);
			VirtActionInvoker2< int32_t, int32_t >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T) */, (List_1_t276 *)__this, (int32_t)L_0, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t32 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t586_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1584_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t370 * L_2 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_2, (String_t*)_stringLiteral307, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m14592_gshared (List_1_t276 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		Int32U5BU5D_t388* L_1 = (Int32U5BU5D_t388*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t276 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		Int32U5BU5D_t388* L_2 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		int32_t L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_5, sizeof(int32_t))) = (int32_t)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m14593_gshared (List_1_t276 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		Int32U5BU5D_t388* L_3 = (Int32U5BU5D_t388*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t276 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t276 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t276 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t276 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14594_gshared (List_1_t276 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t276 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< Int32U5BU5D_t388*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (Int32U5BU5D_t388*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m14595_gshared (List_1_t276 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Exception_t32 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t32 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (int32_t)L_3;
			int32_t L_4 = V_0;
			NullCheck((List_1_t276 *)__this);
			VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(T) */, (List_1_t276 *)__this, (int32_t)L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t28_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2114_gshared (List_1_t276 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t276 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t276 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t276 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2032 * List_1_AsReadOnly_m14596_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2032 * L_0 = (ReadOnlyCollection_1_t2032 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t2032 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14597_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		Int32U5BU5D_t388* L_1 = (Int32U5BU5D_t388*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14598_gshared (List_1_t276 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t388*, int32_t, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Int32U5BU5D_t388*)L_0, (int32_t)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void List_1_CopyTo_m14599_gshared (List_1_t276 * __this, Int32U5BU5D_t388* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		Int32U5BU5D_t388* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
// System.Predicate`1<System.Int32>
#include "mscorlib_System_Predicate_1_gen_30.h"
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_Find_m14600_gshared (List_1_t276 * __this, Predicate_1_t2035 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		Predicate_1_t2035 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2035 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2035 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2035 * L_2 = ___match;
		NullCheck((List_1_t276 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t276 *, int32_t, int32_t, Predicate_1_t2035 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t276 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2035 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7, sizeof(int32_t)));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (Int32_t36_il2cpp_TypeInfo_var, (&V_1));
		int32_t L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void List_1_CheckMatch_m14601_gshared (Object_t * __this /* static, unused */, Predicate_1_t2035 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t2035 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1829, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14602_gshared (List_1_t276 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2035 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t2035 * L_3 = ___match;
		Int32U5BU5D_t388* L_4 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2035 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2035 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2035 *)L_3, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2031  List_1_GetEnumerator_m14603_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2031  L_0 = {0};
		(( void (*) (Enumerator_t2031 *, List_1_t276 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t276 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14604_gshared (List_1_t276 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t388*, int32_t, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Int32U5BU5D_t388*)L_0, (int32_t)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14605_gshared (List_1_t276 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_6 = ___start;
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Int32U5BU5D_t388* L_15 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_CheckIndex_m14606_gshared (List_1_t276 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14607_gshared (List_1_t276 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t276 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Int32U5BU5D_t388* L_2 = (Int32U5BU5D_t388*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t276 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t276 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Int32U5BU5D_t388* L_4 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_5 = ___index;
		int32_t L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5, sizeof(int32_t))) = (int32_t)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2713;
extern "C" void List_1_CheckCollection_m14608_gshared (List_1_t276 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral2713 = il2cpp_codegen_string_literal_from_index(2713);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral2713, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14609_gshared (List_1_t276 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___item;
		NullCheck((List_1_t276 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T) */, (List_1_t276 *)__this, (int32_t)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t276 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32) */, (List_1_t276 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14610_gshared (List_1_t276 * __this, Predicate_1_t2035 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2035 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2035 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2035 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t2035 * L_1 = ___match;
		Int32U5BU5D_t388* L_2 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2035 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2035 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2035 *)L_1, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4, sizeof(int32_t))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t2035 * L_13 = ___match;
		Int32U5BU5D_t388* L_14 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t2035 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t2035 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2035 *)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16, sizeof(int32_t))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t388* L_18 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		Int32U5BU5D_t388* L_21 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20, sizeof(int32_t))) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23, sizeof(int32_t)));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		Int32U5BU5D_t388* L_29 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_RemoveAt_m14611_gshared (List_1_t276 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t276 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14612_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4137(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14613_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t2036 * L_2 = (( Comparer_1_t2036 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t388*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (Int32U5BU5D_t388*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_30.h"
extern "C" void List_1_Sort_m14614_gshared (List_1_t276 * __this, Comparison_1_t2039 * ___comparison, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t2039 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t388*, int32_t, Comparison_1_t2039 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (Int32U5BU5D_t388*)L_0, (int32_t)L_1, (Comparison_1_t2039 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t388* List_1_ToArray_m14615_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	Int32U5BU5D_t388* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (Int32U5BU5D_t388*)((Int32U5BU5D_t388*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		Int32U5BU5D_t388* L_1 = (Int32U5BU5D_t388*)(__this->____items_1);
		Int32U5BU5D_t388* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		Int32U5BU5D_t388* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14616_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t276 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14617_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m14618_gshared (List_1_t276 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5157(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		Int32U5BU5D_t388** L_3 = (Int32U5BU5D_t388**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t388**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (Int32U5BU5D_t388**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14619_gshared (List_1_t276 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" int32_t List_1_get_Item_m14620_gshared (List_1_t276 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_2 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_2, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		Int32U5BU5D_t388* L_3 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5, sizeof(int32_t)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_set_Item_m14621_gshared (List_1_t276 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t276 *)__this);
		(( void (*) (List_1_t276 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t276 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		Int32U5BU5D_t388* L_4 = (Int32U5BU5D_t388*)(__this->____items_1);
		int32_t L_5 = ___index;
		int32_t L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5, sizeof(int32_t))) = (int32_t)L_6;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
extern "C" void Enumerator__ctor_m14622_gshared (Enumerator_t2031 * __this, List_1_t276 * ___l, const MethodInfo* method)
{
	{
		List_1_t276 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t276 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14623_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5105(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___current_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14624_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t276 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2711;
extern "C" void Enumerator_VerifyState_m14625_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2711 = il2cpp_codegen_string_literal_from_index(2711);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t276 * L_0 = (List_1_t276 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2031  L_1 = (*(Enumerator_t2031 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1595((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t645 * L_5 = (ObjectDisposedException_t645 *)il2cpp_codegen_object_new (ObjectDisposedException_t645_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3212(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t276 * L_7 = (List_1_t276 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t815 * L_9 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_9, (String_t*)_stringLiteral2711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14626_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2031 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2031 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t276 * L_2 = (List_1_t276 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t276 * L_4 = (List_1_t276 *)(__this->___l_0);
		NullCheck(L_4);
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_9, sizeof(int32_t)));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m14627_gshared (Enumerator_t2031 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_6MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1249;
extern "C" void ReadOnlyCollection_1__ctor_m14628_gshared (ReadOnlyCollection_1_t2032 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1249 = il2cpp_codegen_string_literal_from_index(1249);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1249, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14629_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14630_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14631_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14632_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14633_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14634_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2032 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2032 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14635_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14636_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14637_gshared (ReadOnlyCollection_1_t2032 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14638_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t804_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m14639_gshared (ReadOnlyCollection_1_t2032 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m14640_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m14641_gshared (ReadOnlyCollection_1_t2032 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14642_gshared (ReadOnlyCollection_1_t2032 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m14643_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m14644_gshared (ReadOnlyCollection_1_t2032 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14645_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14646_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14647_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14648_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14649_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m14650_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m14651_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m14652_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::CopyTo(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m14653_gshared (ReadOnlyCollection_1_t2032 * __this, Int32U5BU5D_t388* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Int32U5BU5D_t388* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Int32U5BU5D_t388*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Int32U5BU5D_t388*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m14654_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m14655_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m14656_gshared (ReadOnlyCollection_1_t2032 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t ReadOnlyCollection_1_get_Item_m14657_gshared (ReadOnlyCollection_1_t2032 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_6.h"
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m14658_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t276 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t276 * L_0 = (List_1_t276 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t276 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t276 *)L_0;
		List_1_t276 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t276 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14659_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14660_gshared (Collection_1_t2034 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t988_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14661_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14662_gshared (Collection_1_t2034 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t2034 *)__this, (int32_t)L_2, (int32_t)L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14663_gshared (Collection_1_t2034 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14664_gshared (Collection_1_t2034 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14665_gshared (Collection_1_t2034 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t2034 *)__this, (int32_t)L_0, (int32_t)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14666_gshared (Collection_1_t2034 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2034 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T) */, (Collection_1_t2034 *)__this, (int32_t)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t2034 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14667_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14668_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14669_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14670_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14671_gshared (Collection_1_t2034 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14672_gshared (Collection_1_t2034 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T) */, (Collection_1_t2034 *)__this, (int32_t)L_0, (int32_t)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m14673_gshared (Collection_1_t2034 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___item;
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t2034 *)__this, (int32_t)L_2, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m14674_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems() */, (Collection_1_t2034 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m14675_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m14676_gshared (Collection_1_t2034 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m14677_gshared (Collection_1_t2034 * __this, Int32U5BU5D_t388* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Int32U5BU5D_t388* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Int32U5BU5D_t388*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Int32U5BU5D_t388*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14678_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14679_gshared (Collection_1_t2034 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14680_gshared (Collection_1_t2034 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___item;
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t2034 *)__this, (int32_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14681_gshared (Collection_1_t2034 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		int32_t L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Int32>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (int32_t)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m14682_gshared (Collection_1_t2034 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___item;
		NullCheck((Collection_1_t2034 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T) */, (Collection_1_t2034 *)__this, (int32_t)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t2034 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14683_gshared (Collection_1_t2034 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t2034 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14684_gshared (Collection_1_t2034 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14685_gshared (Collection_1_t2034 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m14686_gshared (Collection_1_t2034 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14687_gshared (Collection_1_t2034 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___value;
		NullCheck((Collection_1_t2034 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T) */, (Collection_1_t2034 *)__this, (int32_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14688_gshared (Collection_1_t2034 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		int32_t L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int32>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (int32_t)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m14689_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t Collection_1_ConvertItem_m14690_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2712 = il2cpp_codegen_string_literal_from_index(2712);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(int32_t*)((int32_t*)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m14691_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t49 * L_2 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m142(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m14692_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t988_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t947_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m14693_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(637);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t947_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t947_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m14694_gshared (Predicate_1_t2035 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool Predicate_1_Invoke_m14695_gshared (Predicate_1_t2035 * __this, int32_t ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m14695((Predicate_1_t2035 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m14696_gshared (Predicate_1_t2035 * __this, int32_t ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t36_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14697_gshared (Predicate_1_t2035 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_6.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_6MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m14698_gshared (Comparer_1_t2036 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2431_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m14699_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2431_0_0_0_var = il2cpp_codegen_type_from_index(2560);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(GenericComparer_1_t2431_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t582* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t582*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9310(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2036_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2036 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2038 * L_8 = (DefaultComparer_t2038 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2038 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2036_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m14700_gshared (Comparer_1_t2036 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2036 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T) */, (Comparer_1_t2036 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9336(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
extern "C" Comparer_1_t2036 * Comparer_1_get_Default_m14701_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2036 * L_0 = ((Comparer_1_t2036_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3.h"
// System.Collections.Generic.GenericComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericComparer`1<System.Int32>::.ctor()
extern "C" void GenericComparer_1__ctor_m14702_gshared (GenericComparer_1_t2037 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2036 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2036 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2036 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Int32>::Compare(T,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern "C" int32_t GenericComparer_1_Compare_m14703_gshared (GenericComparer_1_t2037 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		goto IL_001e;
	}
	{
		int32_t L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		int32_t L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		int32_t L_3 = ___y;
		NullCheck((int32_t*)(&___x));
		int32_t L_4 = Int32_CompareTo_m1532((int32_t*)(&___x), (int32_t)L_3, NULL);
		return L_4;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m14704_gshared (DefaultComparer_t2038 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2036 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2036 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2036 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2714;
extern "C" int32_t DefaultComparer_Compare_m14705_gshared (DefaultComparer_t2038 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(703);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2714 = il2cpp_codegen_string_literal_from_index(2714);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		goto IL_001e;
	}
	{
		int32_t L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		int32_t L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		int32_t L_3 = ___x;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___x;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		int32_t L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.IComparable`1<System.Int32>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (int32_t)L_9);
		return L_10;
	}

IL_004d:
	{
		int32_t L_11 = ___x;
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1671_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = ___x;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		int32_t L_17 = ___y;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1671_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1671_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t370 * L_21 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_21, (String_t*)_stringLiteral2714, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_30MethodDeclarations.h"
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m14706_gshared (Comparison_1_t2039 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Comparison_1_Invoke_m14707_gshared (Comparison_1_t2039 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m14707((Comparison_1_t2039 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m14708_gshared (Comparison_1_t2039 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t36_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Int32_t36_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14709_gshared (Comparison_1_t2039 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_1.h"
// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_12.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_4.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_12MethodDeclarations.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_4MethodDeclarations.h"
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
extern "C" void ListPool_1__cctor_m14710_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		UnityAction_1_t2041 * L_0 = ((ListPool_1_t381_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1) };
		UnityAction_1_t2041 * L_2 = (UnityAction_1_t2041 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (UnityAction_1_t2041 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((ListPool_1_t381_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t2041 * L_3 = ((ListPool_1_t381_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		ObjectPool_1_t2040 * L_4 = (ObjectPool_1_t2040 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (ObjectPool_1_t2040 *, UnityAction_1_t2041 *, UnityAction_1_t2041 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (UnityAction_1_t2041 *)G_B2_0, (UnityAction_1_t2041 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((ListPool_1_t381_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0 = L_4;
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
extern "C" List_1_t272 * ListPool_1_Get_m2098_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2040 * L_0 = ((ListPool_1_t381_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		NullCheck((ObjectPool_1_t2040 *)L_0);
		List_1_t272 * L_1 = (( List_1_t272 * (*) (ObjectPool_1_t2040 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ObjectPool_1_t2040 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
extern "C" void ListPool_1_Release_m2124_gshared (Object_t * __this /* static, unused */, List_1_t272 * ___toRelease, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2040 * L_0 = ((ListPool_1_t381_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		List_1_t272 * L_1 = ___toRelease;
		NullCheck((ObjectPool_1_t2040 *)L_0);
		(( void (*) (ObjectPool_1_t2040 *, List_1_t272 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ObjectPool_1_t2040 *)L_0, (List_1_t272 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::<s_ListPool>m__15(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_U3Cs_ListPoolU3Em__15_m14711_gshared (Object_t * __this /* static, unused */, List_1_t272 * ___l, const MethodInfo* method)
{
	{
		List_1_t272 * L_0 = ___l;
		NullCheck((List_1_t272 *)L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, (List_1_t272 *)L_0);
		return;
	}
}
// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_2.h"
// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_2MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_13.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_5.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_13MethodDeclarations.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_5MethodDeclarations.h"
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
extern "C" void ListPool_1__cctor_m14734_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		UnityAction_1_t2045 * L_0 = ((ListPool_1_t382_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1) };
		UnityAction_1_t2045 * L_2 = (UnityAction_1_t2045 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (UnityAction_1_t2045 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((ListPool_1_t382_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t2045 * L_3 = ((ListPool_1_t382_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		ObjectPool_1_t2044 * L_4 = (ObjectPool_1_t2044 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (ObjectPool_1_t2044 *, UnityAction_1_t2045 *, UnityAction_1_t2045 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (UnityAction_1_t2045 *)G_B2_0, (UnityAction_1_t2045 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((ListPool_1_t382_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0 = L_4;
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
extern "C" List_1_t273 * ListPool_1_Get_m2099_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2044 * L_0 = ((ListPool_1_t382_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		NullCheck((ObjectPool_1_t2044 *)L_0);
		List_1_t273 * L_1 = (( List_1_t273 * (*) (ObjectPool_1_t2044 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ObjectPool_1_t2044 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
extern "C" void ListPool_1_Release_m2125_gshared (Object_t * __this /* static, unused */, List_1_t273 * ___toRelease, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2044 * L_0 = ((ListPool_1_t382_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		List_1_t273 * L_1 = ___toRelease;
		NullCheck((ObjectPool_1_t2044 *)L_0);
		(( void (*) (ObjectPool_1_t2044 *, List_1_t273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ObjectPool_1_t2044 *)L_0, (List_1_t273 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::<s_ListPool>m__15(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_U3Cs_ListPoolU3Em__15_m14735_gshared (Object_t * __this /* static, unused */, List_1_t273 * ___l, const MethodInfo* method)
{
	{
		List_1_t273 * L_0 = ___l;
		NullCheck((List_1_t273 *)L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear() */, (List_1_t273 *)L_0);
		return;
	}
}
// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_3.h"
// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_3MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_14.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_6.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_14MethodDeclarations.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_6MethodDeclarations.h"
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
extern "C" void ListPool_1__cctor_m14758_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		UnityAction_1_t2049 * L_0 = ((ListPool_1_t383_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1) };
		UnityAction_1_t2049 * L_2 = (UnityAction_1_t2049 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (UnityAction_1_t2049 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((ListPool_1_t383_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t2049 * L_3 = ((ListPool_1_t383_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		ObjectPool_1_t2048 * L_4 = (ObjectPool_1_t2048 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (ObjectPool_1_t2048 *, UnityAction_1_t2049 *, UnityAction_1_t2049 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (UnityAction_1_t2049 *)G_B2_0, (UnityAction_1_t2049 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((ListPool_1_t383_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0 = L_4;
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
extern "C" List_1_t274 * ListPool_1_Get_m2100_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2048 * L_0 = ((ListPool_1_t383_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		NullCheck((ObjectPool_1_t2048 *)L_0);
		List_1_t274 * L_1 = (( List_1_t274 * (*) (ObjectPool_1_t2048 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ObjectPool_1_t2048 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
extern "C" void ListPool_1_Release_m2126_gshared (Object_t * __this /* static, unused */, List_1_t274 * ___toRelease, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2048 * L_0 = ((ListPool_1_t383_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		List_1_t274 * L_1 = ___toRelease;
		NullCheck((ObjectPool_1_t2048 *)L_0);
		(( void (*) (ObjectPool_1_t2048 *, List_1_t274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ObjectPool_1_t2048 *)L_0, (List_1_t274 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::<s_ListPool>m__15(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_U3Cs_ListPoolU3Em__15_m14759_gshared (Object_t * __this /* static, unused */, List_1_t274 * ___l, const MethodInfo* method)
{
	{
		List_1_t274 * L_0 = ___l;
		NullCheck((List_1_t274 *)L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear() */, (List_1_t274 *)L_0);
		return;
	}
}
// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_4.h"
// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_4MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_15.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_7.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_15MethodDeclarations.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_7MethodDeclarations.h"
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C" void ListPool_1__cctor_m14782_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		UnityAction_1_t2053 * L_0 = ((ListPool_1_t384_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1) };
		UnityAction_1_t2053 * L_2 = (UnityAction_1_t2053 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (UnityAction_1_t2053 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((ListPool_1_t384_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t2053 * L_3 = ((ListPool_1_t384_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		ObjectPool_1_t2052 * L_4 = (ObjectPool_1_t2052 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (ObjectPool_1_t2052 *, UnityAction_1_t2053 *, UnityAction_1_t2053 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (UnityAction_1_t2053 *)G_B2_0, (UnityAction_1_t2053 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((ListPool_1_t384_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0 = L_4;
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C" List_1_t275 * ListPool_1_Get_m2101_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2052 * L_0 = ((ListPool_1_t384_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		NullCheck((ObjectPool_1_t2052 *)L_0);
		List_1_t275 * L_1 = (( List_1_t275 * (*) (ObjectPool_1_t2052 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ObjectPool_1_t2052 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
extern "C" void ListPool_1_Release_m2127_gshared (Object_t * __this /* static, unused */, List_1_t275 * ___toRelease, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2052 * L_0 = ((ListPool_1_t384_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		List_1_t275 * L_1 = ___toRelease;
		NullCheck((ObjectPool_1_t2052 *)L_0);
		(( void (*) (ObjectPool_1_t2052 *, List_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ObjectPool_1_t2052 *)L_0, (List_1_t275 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::<s_ListPool>m__15(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_U3Cs_ListPoolU3Em__15_m14783_gshared (Object_t * __this /* static, unused */, List_1_t275 * ___l, const MethodInfo* method)
{
	{
		List_1_t275 * L_0 = ___l;
		NullCheck((List_1_t275 *)L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear() */, (List_1_t275 *)L_0);
		return;
	}
}
// UnityEngine.UI.ListPool`1<System.Int32>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_5.h"
// UnityEngine.UI.ListPool`1<System.Int32>
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen_5MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_16.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_8.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_16MethodDeclarations.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_8MethodDeclarations.h"
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
extern "C" void ListPool_1__cctor_m14806_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		UnityAction_1_t2057 * L_0 = ((ListPool_1_t385_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1) };
		UnityAction_1_t2057 * L_2 = (UnityAction_1_t2057 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (UnityAction_1_t2057 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((ListPool_1_t385_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t2057 * L_3 = ((ListPool_1_t385_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		ObjectPool_1_t2056 * L_4 = (ObjectPool_1_t2056 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (ObjectPool_1_t2056 *, UnityAction_1_t2057 *, UnityAction_1_t2057 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (UnityAction_1_t2057 *)G_B2_0, (UnityAction_1_t2057 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((ListPool_1_t385_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0 = L_4;
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
extern "C" List_1_t276 * ListPool_1_Get_m2102_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2056 * L_0 = ((ListPool_1_t385_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		NullCheck((ObjectPool_1_t2056 *)L_0);
		List_1_t276 * L_1 = (( List_1_t276 * (*) (ObjectPool_1_t2056 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ObjectPool_1_t2056 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
extern "C" void ListPool_1_Release_m2128_gshared (Object_t * __this /* static, unused */, List_1_t276 * ___toRelease, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t2056 * L_0 = ((ListPool_1_t385_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___s_ListPool_0;
		List_1_t276 * L_1 = ___toRelease;
		NullCheck((ObjectPool_1_t2056 *)L_0);
		(( void (*) (ObjectPool_1_t2056 *, List_1_t276 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ObjectPool_1_t2056 *)L_0, (List_1_t276 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::<s_ListPool>m__15(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_U3Cs_ListPoolU3Em__15_m14807_gshared (Object_t * __this /* static, unused */, List_1_t276 * ___l, const MethodInfo* method)
{
	{
		List_1_t276 * L_0 = ___l;
		NullCheck((List_1_t276 *)L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Int32>::Clear() */, (List_1_t276 *)L_0);
		return;
	}
}
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Action_1__ctor_m14830_gshared (Action_1_t403 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Action_1_Invoke_m3064_gshared (Action_1_t403 * __this, bool ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m3064((Action_1_t403 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t322_il2cpp_TypeInfo_var;
extern "C" Object_t * Action_1_BeginInvoke_m14831_gshared (Action_1_t403 * __this, bool ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t322_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m14832_gshared (Action_1_t403 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_29.h"
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_29MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
extern "C" GcAchievementData_t521  Array_InternalArray__get_Item_TisGcAchievementData_t521_m17049_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisGcAchievementData_t521_m17049(__this, p0, method) (( GcAchievementData_t521  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisGcAchievementData_t521_m17049_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m14965_gshared (InternalEnumerator_1_t2071 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14966_gshared (InternalEnumerator_1_t2071 * __this, const MethodInfo* method)
{
	{
		GcAchievementData_t521  L_0 = (( GcAchievementData_t521  (*) (InternalEnumerator_1_t2071 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2071 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		GcAchievementData_t521  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14967_gshared (InternalEnumerator_1_t2071 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m14968_gshared (InternalEnumerator_1_t2071 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5103((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" GcAchievementData_t521  InternalEnumerator_1_get_Current_m14969_gshared (InternalEnumerator_1_t2071 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2709 = il2cpp_codegen_string_literal_from_index(2709);
		_stringLiteral2710 = il2cpp_codegen_string_literal_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_1, (String_t*)_stringLiteral2709, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t815 * L_3 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_3, (String_t*)_stringLiteral2710, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5103((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		GcAchievementData_t521  L_8 = (( GcAchievementData_t521  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31.h"
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
extern "C" GcScoreData_t522  Array_InternalArray__get_Item_TisGcScoreData_t522_m17060_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisGcScoreData_t522_m17060(__this, p0, method) (( GcScoreData_t522  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisGcScoreData_t522_m17060_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m14975_gshared (InternalEnumerator_1_t2073 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14976_gshared (InternalEnumerator_1_t2073 * __this, const MethodInfo* method)
{
	{
		GcScoreData_t522  L_0 = (( GcScoreData_t522  (*) (InternalEnumerator_1_t2073 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2073 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		GcScoreData_t522  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14977_gshared (InternalEnumerator_1_t2073 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m14978_gshared (InternalEnumerator_1_t2073 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5103((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" GcScoreData_t522  InternalEnumerator_1_get_Current_m14979_gshared (InternalEnumerator_1_t2073 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2709 = il2cpp_codegen_string_literal_from_index(2709);
		_stringLiteral2710 = il2cpp_codegen_string_literal_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_1, (String_t*)_stringLiteral2709, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t815 * L_3 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_3, (String_t*)_stringLiteral2710, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5103((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		GcScoreData_t522  L_8 = (( GcScoreData_t522  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
