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

// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0.h"
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m1647_gshared (Comparison_1_t113 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
extern "C" int32_t Comparison_1_Invoke_m11716_gshared (Comparison_1_t113 * __this, RaycastHit_t30  ___x, RaycastHit_t30  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m11716((Comparison_1_t113 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastHit_t30  ___x, RaycastHit_t30  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastHit_t30  ___x, RaycastHit_t30  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* RaycastHit_t30_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m11717_gshared (Comparison_1_t113 * __this, RaycastHit_t30  ___x, RaycastHit_t30  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastHit_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(RaycastHit_t30_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(RaycastHit_t30_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11718_gshared (Comparison_1_t113 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" RaycastHit_t30  Array_InternalArray__get_Item_TisRaycastHit_t30_m16831_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit_t30_m16831(__this, p0, method) (( RaycastHit_t30  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit_t30_m16831_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m11719_gshared (InternalEnumerator_1_t1825 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11720_gshared (InternalEnumerator_1_t1825 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t30  L_0 = (( RaycastHit_t30  (*) (InternalEnumerator_1_t1825 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1825 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit_t30  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11721_gshared (InternalEnumerator_1_t1825 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m11722_gshared (InternalEnumerator_1_t1825 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" RaycastHit_t30  InternalEnumerator_1_get_Current_m11723_gshared (InternalEnumerator_1_t1825 * __this, const MethodInfo* method)
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
		RaycastHit_t30  L_8 = (( RaycastHit_t30  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0.h"
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m1651_gshared (UnityEvent_1_t116 * __this, const MethodInfo* method)
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
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
extern "C" void UnityEvent_1_AddListener_m1654_gshared (UnityEvent_1_t116 * __this, UnityAction_1_t302 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t302 * L_0 = ___call;
		BaseInvokableCall_t554 * L_1 = (( BaseInvokableCall_t554 * (*) (Object_t * /* static, unused */, UnityAction_1_t302 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t302 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_AddCall_m3031((UnityEventBase_t562 *)__this, (BaseInvokableCall_t554 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m11724_gshared (UnityEvent_1_t116 * __this, UnityAction_1_t302 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t302 * L_0 = ___call;
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t302 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3049(NULL /*static, unused*/, (Delegate_t346 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_RemoveListener_m3032((UnityEventBase_t562 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m11725_gshared (UnityEvent_1_t116 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
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
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m11726_gshared (UnityEvent_1_t116 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1826 * L_2 = (InvokableCall_1_t1826 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1826 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m11727_gshared (Object_t * __this /* static, unused */, UnityAction_1_t302 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t302 * L_0 = ___action;
		InvokableCall_1_t1826 * L_1 = (InvokableCall_1_t1826 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1826 *, UnityAction_1_t302 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t302 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void UnityEvent_1_Invoke_m1653_gshared (UnityEvent_1_t116 * __this, Color_t27  ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_InvokeArray_4);
		Color_t27  L_1 = ___arg0;
		Color_t27  L_2 = L_1;
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
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m1808_gshared (UnityAction_1_t302 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void UnityAction_1_Invoke_m11728_gshared (UnityAction_1_t302 * __this, Color_t27  ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m11728((UnityAction_1_t302 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Color_t27  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Color_t27  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Color_t27_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m11729_gshared (UnityAction_1_t302 * __this, Color_t27  ___arg0, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Color_t27_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m11730_gshared (UnityAction_1_t302 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisColor_t27_m16845_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisColor_t27_m16845(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisColor_t27_m16845_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern "C" void InvokableCall_1__ctor_m11731_gshared (InvokableCall_1_t1826 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		UnityAction_1_t302 * L_2 = (UnityAction_1_t302 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t346 * L_6 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t346 * L_7 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_2, (Delegate_t346 *)((UnityAction_1_t302 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t302 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
extern "C" void InvokableCall_1__ctor_m11732_gshared (InvokableCall_1_t1826 * __this, UnityAction_1_t302 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t554 *)__this);
		BaseInvokableCall__ctor_m3001((BaseInvokableCall_t554 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t302 * L_0 = (UnityAction_1_t302 *)(__this->___Delegate_0);
		UnityAction_1_t302 * L_1 = ___action;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_0, (Delegate_t346 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t302 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2716;
extern "C" void InvokableCall_1_Invoke_m11733_gshared (InvokableCall_1_t1826 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
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
		UnityAction_1_t302 * L_4 = (UnityAction_1_t302 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, (Delegate_t346 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t302 * L_6 = (UnityAction_1_t302 *)(__this->___Delegate_0);
		ObjectU5BU5D_t320* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t302 *)L_6);
		(( void (*) (UnityAction_1_t302 *, Color_t27 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t302 *)L_6, (Color_t27 )((*(Color_t27 *)((Color_t27 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m11734_gshared (InvokableCall_1_t1826 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t302 * L_0 = (UnityAction_1_t302 *)(__this->___Delegate_0);
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t302 * L_3 = (UnityAction_1_t302 *)(__this->___Delegate_0);
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
// UnityEngine.Events.UnityEvent`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_1.h"
// UnityEngine.Events.UnityEvent`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m1655_gshared (UnityEvent_1_t119 * __this, const MethodInfo* method)
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1.h"
extern "C" void UnityEvent_1_AddListener_m1658_gshared (UnityEvent_1_t119 * __this, UnityAction_1_t303 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t303 * L_0 = ___call;
		BaseInvokableCall_t554 * L_1 = (( BaseInvokableCall_t554 * (*) (Object_t * /* static, unused */, UnityAction_1_t303 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t303 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_AddCall_m3031((UnityEventBase_t562 *)__this, (BaseInvokableCall_t554 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m1991_gshared (UnityEvent_1_t119 * __this, UnityAction_1_t303 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t303 * L_0 = ___call;
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t303 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3049(NULL /*static, unused*/, (Delegate_t346 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_RemoveListener_m3032((UnityEventBase_t562 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m11735_gshared (UnityEvent_1_t119 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
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
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m11736_gshared (UnityEvent_1_t119 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1827 * L_2 = (InvokableCall_1_t1827 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1827 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m11737_gshared (Object_t * __this /* static, unused */, UnityAction_1_t303 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t303 * L_0 = ___action;
		InvokableCall_1_t1827 * L_1 = (InvokableCall_1_t1827 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1827 *, UnityAction_1_t303 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t303 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void UnityEvent_1_Invoke_m1657_gshared (UnityEvent_1_t119 * __this, float ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_InvokeArray_4);
		float L_1 = ___arg0;
		float L_2 = L_1;
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
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m1761_gshared (UnityAction_1_t303 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void UnityAction_1_Invoke_m11738_gshared (UnityAction_1_t303 * __this, float ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m11738((UnityAction_1_t303 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, float ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, float ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Single_t321_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m11739_gshared (UnityAction_1_t303 * __this, float ___arg0, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t321_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m11740_gshared (UnityAction_1_t303 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Single>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Single>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t321_m16846_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t321_m16846(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t321_m16846_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern "C" void InvokableCall_1__ctor_m11741_gshared (InvokableCall_1_t1827 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		UnityAction_1_t303 * L_2 = (UnityAction_1_t303 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t346 * L_6 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t346 * L_7 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_2, (Delegate_t346 *)((UnityAction_1_t303 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t303 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1.h"
extern "C" void InvokableCall_1__ctor_m11742_gshared (InvokableCall_1_t1827 * __this, UnityAction_1_t303 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t554 *)__this);
		BaseInvokableCall__ctor_m3001((BaseInvokableCall_t554 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t303 * L_0 = (UnityAction_1_t303 *)(__this->___Delegate_0);
		UnityAction_1_t303 * L_1 = ___action;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_0, (Delegate_t346 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t303 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2716;
extern "C" void InvokableCall_1_Invoke_m11743_gshared (InvokableCall_1_t1827 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
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
		UnityAction_1_t303 * L_4 = (UnityAction_1_t303 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, (Delegate_t346 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t303 * L_6 = (UnityAction_1_t303 *)(__this->___Delegate_0);
		ObjectU5BU5D_t320* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t303 *)L_6);
		(( void (*) (UnityAction_1_t303 *, float, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t303 *)L_6, (float)((*(float*)((float*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m11744_gshared (InvokableCall_1_t1827 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t303 * L_0 = (UnityAction_1_t303 *)(__this->___Delegate_0);
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t303 * L_3 = (UnityAction_1_t303 *)(__this->___Delegate_0);
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
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_2.h"
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_37.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_37MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void IndexedSet_1__ctor_m11745_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method)
{
	{
		List_1_t317 * L_0 = (List_1_t317 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t317 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_List_0 = L_0;
		Dictionary_2_t1830 * L_1 = (Dictionary_2_t1830 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Dictionary_1 = L_1;
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11747_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method)
{
	{
		NullCheck((IndexedSet_1_t1829 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(17 /* System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator() */, (IndexedSet_1_t1829 *)__this);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void IndexedSet_1_Add_m11749_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1830 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0) */, (Dictionary_2_t1830 *)L_0, (Object_t *)L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t317 * L_3 = (List_1_t317 *)(__this->___m_List_0);
		Object_t * L_4 = ___item;
		NullCheck((List_1_t317 *)L_3);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (List_1_t317 *)L_3, (Object_t *)L_4);
		Dictionary_2_t1830 * L_5 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_6 = ___item;
		List_1_t317 * L_7 = (List_1_t317 *)(__this->___m_List_0);
		NullCheck((List_1_t317 *)L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t317 *)L_7);
		NullCheck((Dictionary_2_t1830 *)L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1) */, (Dictionary_2_t1830 *)L_5, (Object_t *)L_6, (int32_t)((int32_t)((int32_t)L_8-(int32_t)1)));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11751_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1830 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&) */, (Dictionary_2_t1830 *)L_0, (Object_t *)L_1, (int32_t*)(&V_0));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_t1829 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32) */, (IndexedSet_1_t1829 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
extern TypeInfo* NotImplementedException_t643_il2cpp_TypeInfo_var;
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11753_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t643 * L_0 = (NotImplementedException_t643 *)il2cpp_codegen_object_new (NotImplementedException_t643_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m9876(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11755_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method)
{
	{
		List_1_t317 * L_0 = (List_1_t317 *)(__this->___m_List_0);
		NullCheck((List_1_t317 *)L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Object>::Clear() */, (List_1_t317 *)L_0);
		Dictionary_2_t1830 * L_1 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		NullCheck((Dictionary_2_t1830 *)L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear() */, (Dictionary_2_t1830 *)L_1);
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11757_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1830 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0) */, (Dictionary_2_t1830 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void IndexedSet_1_CopyTo_m11759_gshared (IndexedSet_1_t1829 * __this, ObjectU5BU5D_t320* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		List_1_t317 * L_0 = (List_1_t317 *)(__this->___m_List_0);
		ObjectU5BU5D_t320* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		NullCheck((List_1_t317 *)L_0);
		VirtActionInvoker2< ObjectU5BU5D_t320*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t317 *)L_0, (ObjectU5BU5D_t320*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11761_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method)
{
	{
		List_1_t317 * L_0 = (List_1_t317 *)(__this->___m_List_0);
		NullCheck((List_1_t317 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t317 *)L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11763_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11765_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1830 *)L_0);
		VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&) */, (Dictionary_2_t1830 *)L_0, (Object_t *)L_1, (int32_t*)(&V_0));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2725;
extern "C" void IndexedSet_1_Insert_m11767_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral2725 = il2cpp_codegen_string_literal_from_index(2725);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4096(L_0, (String_t*)_stringLiteral2725, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11769_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		List_1_t317 * L_0 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t317 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t317 *)L_0, (int32_t)L_1);
		V_0 = (Object_t *)L_2;
		Dictionary_2_t1830 * L_3 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck((Dictionary_2_t1830 *)L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0) */, (Dictionary_2_t1830 *)L_3, (Object_t *)L_4);
		int32_t L_5 = ___index;
		List_1_t317 * L_6 = (List_1_t317 *)(__this->___m_List_0);
		NullCheck((List_1_t317 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t317 *)L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)L_7-(int32_t)1))))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_t317 * L_8 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_9 = ___index;
		NullCheck((List_1_t317 *)L_8);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (List_1_t317 *)L_8, (int32_t)L_9);
		goto IL_007f;
	}

IL_003e:
	{
		List_1_t317 * L_10 = (List_1_t317 *)(__this->___m_List_0);
		NullCheck((List_1_t317 *)L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t317 *)L_10);
		V_1 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
		List_1_t317 * L_12 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_13 = V_1;
		NullCheck((List_1_t317 *)L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t317 *)L_12, (int32_t)L_13);
		V_2 = (Object_t *)L_14;
		List_1_t317 * L_15 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_16 = ___index;
		Object_t * L_17 = V_2;
		NullCheck((List_1_t317 *)L_15);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0) */, (List_1_t317 *)L_15, (int32_t)L_16, (Object_t *)L_17);
		Dictionary_2_t1830 * L_18 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_19 = V_2;
		int32_t L_20 = ___index;
		NullCheck((Dictionary_2_t1830 *)L_18);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1) */, (Dictionary_2_t1830 *)L_18, (Object_t *)L_19, (int32_t)L_20);
		List_1_t317 * L_21 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_22 = V_1;
		NullCheck((List_1_t317 *)L_21);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (List_1_t317 *)L_21, (int32_t)L_22);
	}

IL_007f:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11771_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		List_1_t317 * L_0 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t317 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t317 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11773_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		List_1_t317 * L_0 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t317 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t317 *)L_0, (int32_t)L_1);
		V_0 = (Object_t *)L_2;
		Dictionary_2_t1830 * L_3 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck((Dictionary_2_t1830 *)L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0) */, (Dictionary_2_t1830 *)L_3, (Object_t *)L_4);
		List_1_t317 * L_5 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_6 = ___index;
		Object_t * L_7 = ___value;
		NullCheck((List_1_t317 *)L_5);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0) */, (List_1_t317 *)L_5, (int32_t)L_6, (Object_t *)L_7);
		Dictionary_2_t1830 * L_8 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_9 = V_0;
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t1830 *)L_8);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1) */, (Dictionary_2_t1830 *)L_8, (Object_t *)L_9, (int32_t)L_10);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
extern "C" void IndexedSet_1_RemoveAll_m11774_gshared (IndexedSet_1_t1829 * __this, Predicate_1_t1716 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0007:
	{
		List_1_t317 * L_0 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_1 = V_0;
		NullCheck((List_1_t317 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t317 *)L_0, (int32_t)L_1);
		V_1 = (Object_t *)L_2;
		Predicate_1_t1716 * L_3 = ___match;
		Object_t * L_4 = V_1;
		NullCheck((Predicate_1_t1716 *)L_3);
		bool L_5 = (( bool (*) (Predicate_1_t1716 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Predicate_1_t1716 *)L_3, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_6 = V_1;
		NullCheck((IndexedSet_1_t1829 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(16 /* System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T) */, (IndexedSet_1_t1829 *)__this, (Object_t *)L_6);
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		List_1_t317 * L_9 = (List_1_t317 *)(__this->___m_List_0);
		NullCheck((List_1_t317 *)L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t317 *)L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
extern "C" void IndexedSet_1_Sort_m11775_gshared (IndexedSet_1_t1829 * __this, Comparison_1_t1722 * ___sortLayoutFunction, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		List_1_t317 * L_0 = (List_1_t317 *)(__this->___m_List_0);
		Comparison_1_t1722 * L_1 = ___sortLayoutFunction;
		NullCheck((List_1_t317 *)L_0);
		(( void (*) (List_1_t317 *, Comparison_1_t1722 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((List_1_t317 *)L_0, (Comparison_1_t1722 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0013:
	{
		List_1_t317 * L_2 = (List_1_t317 *)(__this->___m_List_0);
		int32_t L_3 = V_0;
		NullCheck((List_1_t317 *)L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t317 *)L_2, (int32_t)L_3);
		V_1 = (Object_t *)L_4;
		Dictionary_2_t1830 * L_5 = (Dictionary_2_t1830 *)(__this->___m_Dictionary_1);
		Object_t * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t1830 *)L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1) */, (Dictionary_2_t1830 *)L_5, (Object_t *)L_6, (int32_t)L_7);
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		List_1_t317 * L_10 = (List_1_t317 *)(__this->___m_List_0);
		NullCheck((List_1_t317 *)L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t317 *)L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2334;
struct Transform_1_t1831;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t987_TisDictionaryEntry_t987_m16861_gshared (Dictionary_2_t1830 * __this, DictionaryEntryU5BU5D_t2334* p0, int32_t p1, Transform_1_t1831 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t987_TisDictionaryEntry_t987_m16861(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1830 *, DictionaryEntryU5BU5D_t2334*, int32_t, Transform_1_t1831 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t987_TisDictionaryEntry_t987_m16861_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t1839;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1833_m16862_gshared (Dictionary_2_t1830 * __this, Array_t * p0, int32_t p1, Transform_1_t1839 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1833_m16862(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, Transform_1_t1839 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1833_m16862_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2262;
struct Transform_1_t1839;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1833_TisKeyValuePair_2_t1833_m16864_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2U5BU5D_t2262* p0, int32_t p1, Transform_1_t1839 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1833_TisKeyValuePair_2_t1833_m16864(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1830 *, KeyValuePair_2U5BU5D_t2262*, int32_t, Transform_1_t1839 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1833_TisKeyValuePair_2_t1833_m16864_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m11776_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1830 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11777_gshared (Dictionary_2_t1830 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1830 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m11778_gshared (Dictionary_2_t1830 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1830 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m11779_gshared (Dictionary_2_t1830 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t584 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11780_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t1830 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t1830 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1830 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1830 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Dictionary_2_t1830 *)__this);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey) */, (Dictionary_2_t1830 *)__this, (Object_t *)L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		return L_7;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11781_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t1830 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1830 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t1830 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Dictionary_2_t1830 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t1830 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue) */, (Dictionary_2_t1830 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11782_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t1830 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1830 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t1830 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Dictionary_2_t1830 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t1830 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t1830 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11783_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1830 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t1830 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11784_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1830 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey) */, (Dictionary_2_t1830 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11785_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11786_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11787_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11788_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2_t1833  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1833 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1833 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck((Dictionary_2_t1830 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t1830 *)__this, (Object_t *)L_0, (int32_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11789_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2_t1833  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1833  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t1830 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t1830 *, KeyValuePair_2_t1833 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t1830 *)__this, (KeyValuePair_2_t1833 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11790_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2U5BU5D_t2262* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2262* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, KeyValuePair_2U5BU5D_t2262*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1830 *)__this, (KeyValuePair_2U5BU5D_t2262*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11791_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2_t1833  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1833  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t1830 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t1830 *, KeyValuePair_2_t1833 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t1830 *)__this, (KeyValuePair_2_t1833 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1833 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck((Dictionary_2_t1830 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey) */, (Dictionary_2_t1830 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2334_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11792_gshared (Dictionary_2_t1830 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2561);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2262* V_0 = {0};
	DictionaryEntryU5BU5D_t2334* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2334* G_B5_1 = {0};
	Dictionary_2_t1830 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2334* G_B4_1 = {0};
	Dictionary_2_t1830 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2262*)((KeyValuePair_2U5BU5D_t2262*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		KeyValuePair_2U5BU5D_t2262* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2262* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, KeyValuePair_2U5BU5D_t2262*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1830 *)__this, (KeyValuePair_2U5BU5D_t2262*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t1830 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2334*)((DictionaryEntryU5BU5D_t2334*)IsInst(L_6, DictionaryEntryU5BU5D_t2334_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2334* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2334* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t1831 * L_10 = ((Dictionary_2_t1830_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t1830 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t1830 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Transform_1_t1831 * L_12 = (Transform_1_t1831 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		(( void (*) (Transform_1_t1831 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		((Dictionary_2_t1830_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t1830 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t1831 * L_13 = ((Dictionary_2_t1830_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t1830 *)G_B5_2);
		(( void (*) (Dictionary_2_t1830 *, DictionaryEntryU5BU5D_t2334*, int32_t, Transform_1_t1831 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((Dictionary_2_t1830 *)G_B5_2, (DictionaryEntryU5BU5D_t2334*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t1831 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t1839 * L_17 = (Transform_1_t1839 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t1839 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, Transform_1_t1839 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((Dictionary_2_t1830 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t1839 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11793_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1837  L_0 = {0};
		(( void (*) (Enumerator_t1837 *, Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1830 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t1837  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11794_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1837  L_0 = {0};
		(( void (*) (Enumerator_t1837 *, Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1830 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t1837  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11795_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t1840 * L_0 = (ShimEnumerator_t1840 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (ShimEnumerator_t1840 *, Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_0, (Dictionary_2_t1830 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11796_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1113_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" int32_t Dictionary_2_get_Item_m11797_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		KeyNotFoundException_t1113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2562);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t1799* L_9 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_14 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t388* L_19 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21, sizeof(int32_t)));
	}

IL_0089:
	{
		LinkU5BU5D_t1799* L_22 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1112 )))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1113 * L_26 = (KeyNotFoundException_t1113 *)il2cpp_codegen_object_new (KeyNotFoundException_t1113_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m6545(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" void Dictionary_2_set_Item_m11798_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t388* L_6 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t1799* L_11 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_16 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t1799* L_22 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1112 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t1830 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		int32_t L_31 = V_0;
		Int32U5BU5D_t388* L_32 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t1799* L_38 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_38, L_39, sizeof(Link_t1112 )))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t1799* L_41 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t388* L_43 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_41, L_42, sizeof(Link_t1112 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t388* L_46 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t1799* L_49 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_49, L_50, sizeof(Link_t1112 )))->___HashCode_0 = L_51;
		ObjectU5BU5D_t320* L_52 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53, sizeof(Object_t *))) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t1799* L_56 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t1799* L_58 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_58, L_59, sizeof(Link_t1112 )))->___Next_1);
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_56, L_57, sizeof(Link_t1112 )))->___Next_1 = L_60;
		LinkU5BU5D_t1799* L_61 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t388* L_63 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_61, L_62, sizeof(Link_t1112 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t388* L_66 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		Int32U5BU5D_t388* L_69 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		int32_t L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_69, L_70, sizeof(int32_t))) = (int32_t)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void Dictionary_2_Init_m11799_gshared (Dictionary_2_t1830 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral1238 = il2cpp_codegen_string_literal_from_index(1238);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t1830 * G_B4_0 = {0};
	Dictionary_2_t1830 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t1830 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_1 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_1, (String_t*)_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t1830 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t1830 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t1830 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		EqualityComparer_1_t1713 * L_5 = (( EqualityComparer_1_t1713 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t1830 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((Dictionary_2_t1830 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t388_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1799_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m11800_gshared (Dictionary_2_t1830 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(525);
		LinkU5BU5D_t1799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2563);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t388*)SZArrayNew(Int32U5BU5D_t388_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t1799*)SZArrayNew(LinkU5BU5D_t1799_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t320*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int32U5BU5D_t388*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t388* L_4 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t388* L_6 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral628;
extern Il2CppCodeGenString* _stringLiteral630;
extern Il2CppCodeGenString* _stringLiteral2717;
extern Il2CppCodeGenString* _stringLiteral2718;
extern "C" void Dictionary_2_CopyToCheck_m11801_gshared (Dictionary_2_t1830 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral628 = il2cpp_codegen_string_literal_from_index(628);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		_stringLiteral2717 = il2cpp_codegen_string_literal_from_index(2717);
		_stringLiteral2718 = il2cpp_codegen_string_literal_from_index(2718);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral628, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5103((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t370 * L_7 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_7, (String_t*)_stringLiteral2717, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m5103((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t1830 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (Dictionary_2_t1830 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t370 * L_12 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_12, (String_t*)_stringLiteral2718, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1833  Dictionary_2_make_pair_m11802_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t1833  L_2 = {0};
		(( void (*) (KeyValuePair_2_t1833 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(&L_2, (Object_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11803_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11804_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2U5BU5D_t2262* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2262* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t1830 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		KeyValuePair_2U5BU5D_t2262* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t1839 * L_5 = (Transform_1_t1839 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t1839 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, KeyValuePair_2U5BU5D_t2262*, int32_t, Transform_1_t1839 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t1830 *)__this, (KeyValuePair_2U5BU5D_t2262*)L_2, (int32_t)L_3, (Transform_1_t1839 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t53_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t388_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1799_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m11805_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		Int32U5BU5D_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(525);
		LinkU5BU5D_t1799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2563);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t388* V_1 = {0};
	LinkU5BU5D_t1799* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t320* V_7 = {0};
	Int32U5BU5D_t388* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t53_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m6779(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t388*)((Int32U5BU5D_t388*)SZArrayNew(Int32U5BU5D_t388_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t1799*)((LinkU5BU5D_t1799*)SZArrayNew(LinkU5BU5D_t1799_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t388* L_4 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t1799* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_10 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12, sizeof(Object_t *))));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_7, L_8, sizeof(Link_t1112 )))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t1799* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t388* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_18, L_19, sizeof(Link_t1112 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t388* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t1799* L_26 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_26, L_27, sizeof(Link_t1112 )))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t388* L_32 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t388* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t1799* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t320*)((ObjectU5BU5D_t320*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_35));
		int32_t L_36 = V_0;
		V_8 = (Int32U5BU5D_t388*)((Int32U5BU5D_t388*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_36));
		ObjectU5BU5D_t320* L_37 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		ObjectU5BU5D_t320* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		Int32U5BU5D_t388* L_40 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		Int32U5BU5D_t388* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t320* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int32U5BU5D_t388* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern Il2CppCodeGenString* _stringLiteral2719;
extern "C" void Dictionary_2_Add_m11806_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		_stringLiteral2719 = il2cpp_codegen_string_literal_from_index(2719);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t388* L_6 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t1799* L_10 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_15 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17, sizeof(Object_t *))), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t370 * L_20 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_20, (String_t*)_stringLiteral2719, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t1799* L_21 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_21, L_22, sizeof(Link_t1112 )))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t1830 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		int32_t L_29 = V_0;
		Int32U5BU5D_t388* L_30 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t1799* L_36 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1112 )))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t1799* L_39 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1112 )))->___HashCode_0 = L_41;
		LinkU5BU5D_t1799* L_42 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t388* L_44 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_42, L_43, sizeof(Link_t1112 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t388* L_47 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t320* L_50 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51, sizeof(Object_t *))) = (Object_t *)L_52;
		Int32U5BU5D_t388* L_53 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		int32_t L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_53, L_54, sizeof(int32_t))) = (int32_t)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11807_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->___table_4);
		Int32U5BU5D_t388* L_1 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t320* L_2 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		ObjectU5BU5D_t320* L_3 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t388* L_4 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t1799* L_6 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		LinkU5BU5D_t1799* L_7 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" bool Dictionary_2_ContainsKey_m11808_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t1799* L_9 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_14 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t1799* L_19 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_19, L_20, sizeof(Link_t1112 )))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11809_gshared (Dictionary_2_t1830 * __this, int32_t ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		EqualityComparer_1_t1815 * L_0 = (( EqualityComparer_1_t1815 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t388* L_1 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t)))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), (Object_t*)L_4, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7, sizeof(int32_t))), (int32_t)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t1799* L_10 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1112 )))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t388* L_16 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral639;
extern Il2CppCodeGenString* _stringLiteral641;
extern Il2CppCodeGenString* _stringLiteral643;
extern Il2CppCodeGenString* _stringLiteral1272;
extern Il2CppCodeGenString* _stringLiteral2720;
extern "C" void Dictionary_2_GetObjectData_m11810_gshared (Dictionary_2_t1830 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral639 = il2cpp_codegen_string_literal_from_index(639);
		_stringLiteral641 = il2cpp_codegen_string_literal_from_index(641);
		_stringLiteral643 = il2cpp_codegen_string_literal_from_index(643);
		_stringLiteral1272 = il2cpp_codegen_string_literal_from_index(1272);
		_stringLiteral2720 = il2cpp_codegen_string_literal_from_index(2720);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2262* V_0 = {0};
	{
		SerializationInfo_t584 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral639, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		SerializationInfo_t584 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t584 *)L_2);
		SerializationInfo_AddValue_m5110((SerializationInfo_t584 *)L_2, (String_t*)_stringLiteral641, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t584 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t584 *)L_4);
		SerializationInfo_AddValue_m4148((SerializationInfo_t584 *)L_4, (String_t*)_stringLiteral643, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2262*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2262*)((KeyValuePair_2U5BU5D_t2262*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43), L_7));
		KeyValuePair_2U5BU5D_t2262* L_8 = V_0;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, KeyValuePair_2U5BU5D_t2262*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1830 *)__this, (KeyValuePair_2U5BU5D_t2262*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0055:
	{
		SerializationInfo_t584 * L_9 = ___info;
		Int32U5BU5D_t388* L_10 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t584 *)L_9);
		SerializationInfo_AddValue_m5110((SerializationInfo_t584 *)L_9, (String_t*)_stringLiteral1272, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t584 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2262* L_12 = V_0;
		NullCheck((SerializationInfo_t584 *)L_11);
		SerializationInfo_AddValue_m4148((SerializationInfo_t584 *)L_11, (String_t*)_stringLiteral2720, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral641;
extern Il2CppCodeGenString* _stringLiteral643;
extern Il2CppCodeGenString* _stringLiteral1272;
extern Il2CppCodeGenString* _stringLiteral2720;
extern "C" void Dictionary_2_OnDeserialization_m11811_gshared (Dictionary_2_t1830 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		_stringLiteral641 = il2cpp_codegen_string_literal_from_index(641);
		_stringLiteral643 = il2cpp_codegen_string_literal_from_index(643);
		_stringLiteral1272 = il2cpp_codegen_string_literal_from_index(1272);
		_stringLiteral2720 = il2cpp_codegen_string_literal_from_index(2720);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2262* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t584 * L_0 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		SerializationInfo_t584 * L_1 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t584 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m5118((SerializationInfo_t584 *)L_1, (String_t*)_stringLiteral641, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t584 * L_3 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t584 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m5111((SerializationInfo_t584 *)L_3, (String_t*)_stringLiteral643, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)));
		SerializationInfo_t584 * L_6 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t584 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m5118((SerializationInfo_t584 *)L_6, (String_t*)_stringLiteral1272, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t584 * L_8 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t584 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m5111((SerializationInfo_t584 *)L_8, (String_t*)_stringLiteral2720, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2262*)((KeyValuePair_2U5BU5D_t2262*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t1830 *)__this);
		(( void (*) (Dictionary_2_t1830 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((Dictionary_2_t1830 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2262* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2262* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1833 *)((KeyValuePair_2_t1833 *)(KeyValuePair_2_t1833 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t1833 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		KeyValuePair_2U5BU5D_t2262* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1833 *)((KeyValuePair_2_t1833 *)(KeyValuePair_2_t1833 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t1833 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck((Dictionary_2_t1830 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t1830 *)__this, (Object_t *)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2262* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t584 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" bool Dictionary_2_Remove_m11812_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t388* L_6 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t1799* L_11 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_16 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t1799* L_22 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1112 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t388* L_29 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t1799* L_31 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_31, L_32, sizeof(Link_t1112 )))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t1799* L_34 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t1799* L_36 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1112 )))->___Next_1);
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_34, L_35, sizeof(Link_t1112 )))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t1799* L_39 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1112 )))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t1799* L_43 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_43, L_44, sizeof(Link_t1112 )))->___HashCode_0 = 0;
		ObjectU5BU5D_t320* L_45 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46, sizeof(Object_t *))) = (Object_t *)L_47;
		Int32U5BU5D_t388* L_48 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Int32_t36_il2cpp_TypeInfo_var, (&V_5));
		int32_t L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49, sizeof(int32_t))) = (int32_t)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" bool Dictionary_2_TryGetValue_m11813_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t1799* L_9 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_14 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		int32_t* L_19 = ___value;
		Int32U5BU5D_t388* L_20 = (Int32U5BU5D_t388*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t1799* L_23 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_23, L_24, sizeof(Link_t1112 )))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_27 = ___value;
		Initobj (Int32_t36_il2cpp_TypeInfo_var, (&V_2));
		int32_t L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1835 * Dictionary_2_get_Values_m11814_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t1835 * L_0 = (ValueCollection_t1835 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		(( void (*) (ValueCollection_t1835 *, Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)(L_0, (Dictionary_2_t1830 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern Il2CppCodeGenString* _stringLiteral2721;
extern "C" Object_t * Dictionary_2_ToTKey_m11815_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		_stringLiteral2721 = il2cpp_codegen_string_literal_from_index(2721);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m141(NULL /*static, unused*/, (String_t*)_stringLiteral2721, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t370 * L_6 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3211(L_6, (String_t*)L_5, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2721;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" int32_t Dictionary_2_ToTValue_m11816_gshared (Dictionary_2_t1830 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2721 = il2cpp_codegen_string_literal_from_index(2721);
		_stringLiteral307 = il2cpp_codegen_string_literal_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Int32_t36_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m141(NULL /*static, unused*/, (String_t*)_stringLiteral2721, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3211(L_8, (String_t*)L_7, (String_t*)_stringLiteral307, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11817_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2_t1833  ___pair, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1833 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck((Dictionary_2_t1830 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t1830 *)__this, (Object_t *)L_0, (int32_t*)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		EqualityComparer_1_t1815 * L_2 = (( EqualityComparer_1_t1815 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1833 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		int32_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t1815 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_t1815 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1837  Dictionary_2_GetEnumerator_m11818_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1837  L_0 = {0};
		(( void (*) (Enumerator_t1837 *, Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1830 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t987  Dictionary_2_U3CCopyToU3Em__0_m11819_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		DictionaryEntry_t987  L_4 = {0};
		DictionaryEntry__ctor_m5101(&L_4, (Object_t *)L_0, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t1833  Array_InternalArray__get_Item_TisKeyValuePair_2_t1833_m16847_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t1833_m16847(__this, p0, method) (( KeyValuePair_2_t1833  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t1833_m16847_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m11820_gshared (InternalEnumerator_1_t1834 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11821_gshared (InternalEnumerator_1_t1834 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1833  L_0 = (( KeyValuePair_2_t1833  (*) (InternalEnumerator_1_t1834 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1834 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1833  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11822_gshared (InternalEnumerator_1_t1834 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m11823_gshared (InternalEnumerator_1_t1834 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" KeyValuePair_2_t1833  InternalEnumerator_1_get_Current_m11824_gshared (InternalEnumerator_1_t1834 * __this, const MethodInfo* method)
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
		KeyValuePair_2_t1833  L_8 = (( KeyValuePair_2_t1833  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void KeyValuePair_2__ctor_m11825_gshared (KeyValuePair_2_t1833 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t1833 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t1833 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t1833 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t1833 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m11826_gshared (KeyValuePair_2_t1833 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m11827_gshared (KeyValuePair_2_t1833 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m11828_gshared (KeyValuePair_2_t1833 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m11829_gshared (KeyValuePair_2_t1833 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral257;
extern Il2CppCodeGenString* _stringLiteral267;
extern Il2CppCodeGenString* _stringLiteral258;
extern "C" String_t* KeyValuePair_2_ToString_m11830_gshared (KeyValuePair_2_t1833 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral257 = il2cpp_codegen_string_literal_from_index(257);
		_stringLiteral267 = il2cpp_codegen_string_literal_from_index(267);
		_stringLiteral258 = il2cpp_codegen_string_literal_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t48* G_B2_1 = {0};
	StringU5BU5D_t48* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t48* G_B1_1 = {0};
	StringU5BU5D_t48* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t48* G_B3_2 = {0};
	StringU5BU5D_t48* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t48* G_B5_1 = {0};
	StringU5BU5D_t48* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t48* G_B4_1 = {0};
	StringU5BU5D_t48* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t48* G_B6_2 = {0};
	StringU5BU5D_t48* G_B6_3 = {0};
	{
		StringU5BU5D_t48* L_0 = (StringU5BU5D_t48*)((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral257);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral257;
		StringU5BU5D_t48* L_1 = (StringU5BU5D_t48*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1833 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1833 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(String_t*))) = (String_t*)G_B3_0;
		StringU5BU5D_t48* L_6 = (StringU5BU5D_t48*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral267);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2, sizeof(String_t*))) = (String_t*)_stringLiteral267;
		StringU5BU5D_t48* L_7 = (StringU5BU5D_t48*)L_6;
		int32_t L_8 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1833 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}
	{
		int32_t L_9 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1833 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		NullCheck((int32_t*)(&V_1));
		String_t* L_10 = Int32_ToString_m131((int32_t*)(&V_1), NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(String_t*))) = (String_t*)G_B6_0;
		StringU5BU5D_t48* L_12 = (StringU5BU5D_t48*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral258);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4, sizeof(String_t*))) = (String_t*)_stringLiteral258;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m132(NULL /*static, unused*/, (StringU5BU5D_t48*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4MethodDeclarations.h"
struct Array_t;
struct Transform_1_t1838;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t36_m16858_gshared (Dictionary_2_t1830 * __this, Array_t * p0, int32_t p1, Transform_1_t1838 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t36_m16858(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, Transform_1_t1838 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t36_m16858_gshared)(__this, p0, p1, p2, method)
struct Int32U5BU5D_t388;
struct Transform_1_t1838;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t36_TisInt32_t36_m16860_gshared (Dictionary_2_t1830 * __this, Int32U5BU5D_t388* p0, int32_t p1, Transform_1_t1838 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t36_TisInt32_t36_m16860(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1830 *, Int32U5BU5D_t388*, int32_t, Transform_1_t1838 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t36_TisInt32_t36_m16860_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1267;
extern "C" void ValueCollection__ctor_m11831_gshared (ValueCollection_t1835 * __this, Dictionary_2_t1830 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1267 = il2cpp_codegen_string_literal_from_index(1267);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1830 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1267, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t1830 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2722;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11832_gshared (ValueCollection_t1835 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral2722 = il2cpp_codegen_string_literal_from_index(2722);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4096(L_0, (String_t*)_stringLiteral2722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2722;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11833_gshared (ValueCollection_t1835 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral2722 = il2cpp_codegen_string_literal_from_index(2722);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4096(L_0, (String_t*)_stringLiteral2722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11834_gshared (ValueCollection_t1835 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t1830 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t1830 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1830 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2722;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11835_gshared (ValueCollection_t1835 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral2722 = il2cpp_codegen_string_literal_from_index(2722);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4096(L_0, (String_t*)_stringLiteral2722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11836_gshared (ValueCollection_t1835 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t1835 *)__this);
		Enumerator_t1836  L_0 = (( Enumerator_t1836  (*) (ValueCollection_t1835 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t1835 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t1836  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m11837_gshared (ValueCollection_t1835 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int32U5BU5D_t388* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int32U5BU5D_t388*)((Int32U5BU5D_t388*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t388* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Int32U5BU5D_t388* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t1835 *)__this);
		(( void (*) (ValueCollection_t1835 *, Int32U5BU5D_t388*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t1835 *)__this, (Int32U5BU5D_t388*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t1830 * L_4 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t1830 *)L_4);
		(( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t1830 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1830 * L_7 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t1838 * L_11 = (Transform_1_t1838 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t1838 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t1830 *)L_7);
		(( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, Transform_1_t1838 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t1830 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t1838 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11838_gshared (ValueCollection_t1835 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t1835 *)__this);
		Enumerator_t1836  L_0 = (( Enumerator_t1836  (*) (ValueCollection_t1835 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t1835 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t1836  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11839_gshared (ValueCollection_t1835 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m11840_gshared (ValueCollection_t1835 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m11841_gshared (ValueCollection_t1835 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m11842_gshared (ValueCollection_t1835 * __this, Int32U5BU5D_t388* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		Int32U5BU5D_t388* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t1830 *)L_0);
		(( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t1830 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1830 * L_3 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		Int32U5BU5D_t388* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t1838 * L_7 = (Transform_1_t1838 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t1838 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t1830 *)L_3);
		(( void (*) (Dictionary_2_t1830 *, Int32U5BU5D_t388*, int32_t, Transform_1_t1838 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t1830 *)L_3, (Int32U5BU5D_t388*)L_4, (int32_t)L_5, (Transform_1_t1838 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1836  ValueCollection_GetEnumerator_m11843_gshared (ValueCollection_t1835 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		Enumerator_t1836  L_1 = {0};
		(( void (*) (Enumerator_t1836 *, Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t1830 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m11844_gshared (ValueCollection_t1835 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t1830 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (Dictionary_2_t1830 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
extern "C" void Enumerator__ctor_m11845_gshared (Enumerator_t1836 * __this, Dictionary_2_t1830 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t1830 * L_0 = ___host;
		NullCheck((Dictionary_2_t1830 *)L_0);
		Enumerator_t1837  L_1 = (( Enumerator_t1837  (*) (Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1830 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11846_gshared (Enumerator_t1836 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1837 * L_0 = (Enumerator_t1837 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1837 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11847_gshared (Enumerator_t1836 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1837 * L_0 = (Enumerator_t1837 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1837 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11848_gshared (Enumerator_t1836 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1837 * L_0 = (Enumerator_t1837 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t1837 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m11849_gshared (Enumerator_t1836 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1837 * L_0 = (Enumerator_t1837 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1833 * L_1 = (KeyValuePair_2_t1833 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t1833 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
extern "C" void Enumerator__ctor_m11850_gshared (Enumerator_t1837 * __this, Dictionary_2_t1830 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t1830 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t1830 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11851_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1837 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1833  L_0 = (KeyValuePair_2_t1833 )(__this->___current_3);
		KeyValuePair_2_t1833  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t987  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11852_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1837 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1833 * L_0 = (KeyValuePair_2_t1833 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1833 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t1833 * L_2 = (KeyValuePair_2_t1833 *)&(__this->___current_3);
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1833 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		DictionaryEntry_t987  L_6 = {0};
		DictionaryEntry__ctor_m5101(&L_6, (Object_t *)L_1, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11853_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t1837 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11854_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t1837 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11855_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t1837 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t1830 * L_4 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1799* L_5 = (LinkU5BU5D_t1799*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_5, L_6, sizeof(Link_t1112 )))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t1830 * L_8 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t320* L_9 = (ObjectU5BU5D_t320*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t1830 * L_12 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t388* L_13 = (Int32U5BU5D_t388*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t1833  L_16 = {0};
		(( void (*) (KeyValuePair_2_t1833 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15, sizeof(int32_t))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t1830 * L_18 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1833  Enumerator_get_Current_m11856_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1833  L_0 = (KeyValuePair_2_t1833 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11857_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1837 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1833 * L_0 = (KeyValuePair_2_t1833 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1833 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11858_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1837 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1833 * L_0 = (KeyValuePair_2_t1833 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1833 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2723;
extern "C" void Enumerator_VerifyState_m11859_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2723 = il2cpp_codegen_string_literal_from_index(2723);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t1830 * L_0 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t645 * L_1 = (ObjectDisposedException_t645 *)il2cpp_codegen_object_new (ObjectDisposedException_t645_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3212(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Dictionary_2_t1830 * L_2 = (Dictionary_2_t1830 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t815 * L_5 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_5, (String_t*)_stringLiteral2723, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2724;
extern "C" void Enumerator_VerifyCurrent_m11860_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2724 = il2cpp_codegen_string_literal_from_index(2724);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t1837 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_1, (String_t*)_stringLiteral2724, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11861_gshared (Enumerator_t1837 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t1830 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m11862_gshared (Transform_1_t1838 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Transform_1_Invoke_m11863_gshared (Transform_1_t1838 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m11863((Transform_1_t1838 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m11864_gshared (Transform_1_t1838 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t36_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m11865_gshared (Transform_1_t1838 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m11866_gshared (Transform_1_t1831 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" DictionaryEntry_t987  Transform_1_Invoke_m11867_gshared (Transform_1_t1831 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m11867((Transform_1_t1831 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t987  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t987  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t987  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m11868_gshared (Transform_1_t1831 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t36_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t987  Transform_1_EndInvoke_m11869_gshared (Transform_1_t1831 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t987 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m11870_gshared (Transform_1_t1839 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" KeyValuePair_2_t1833  Transform_1_Invoke_m11871_gshared (Transform_1_t1839 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m11871((Transform_1_t1839 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1833  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1833  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t1833  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m11872_gshared (Transform_1_t1839 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t36_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1833  Transform_1_EndInvoke_m11873_gshared (Transform_1_t1839 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t1833 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m11874_gshared (ShimEnumerator_t1840 * __this, Dictionary_2_t1830 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1830 * L_0 = ___host;
		NullCheck((Dictionary_2_t1830 *)L_0);
		Enumerator_t1837  L_1 = (( Enumerator_t1837  (*) (Dictionary_2_t1830 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1830 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11875_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1837 * L_0 = (Enumerator_t1837 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1837 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t986_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t987  ShimEnumerator_get_Entry_m11876_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t1837  L_0 = (Enumerator_t1837 )(__this->___host_enumerator_0);
		Enumerator_t1837  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t987  L_3 = (DictionaryEntry_t987 )InterfaceFuncInvoker0< DictionaryEntry_t987  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t986_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11877_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1833  V_0 = {0};
	{
		Enumerator_t1837 * L_0 = (Enumerator_t1837 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1833  L_1 = (( KeyValuePair_2_t1833  (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1837 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1833 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1833 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11878_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1833  V_0 = {0};
	{
		Enumerator_t1837 * L_0 = (Enumerator_t1837 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1833  L_1 = (( KeyValuePair_2_t1833  (*) (Enumerator_t1837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1837 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1833 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t1833 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t1833 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern TypeInfo* DictionaryEntry_t987_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m11879_gshared (ShimEnumerator_t1840 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t1840 *)__this);
		DictionaryEntry_t987  L_0 = (DictionaryEntry_t987 )VirtFuncInvoker0< DictionaryEntry_t987  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry() */, (ShimEnumerator_t1840 *)__this);
		DictionaryEntry_t987  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t987_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_2.h"
// UnityEngine.Events.UnityEvent`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_2MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_8.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m1707_gshared (UnityEvent_1_t143 * __this, const MethodInfo* method)
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_8.h"
extern "C" void UnityEvent_1_AddListener_m12073_gshared (UnityEvent_1_t143 * __this, UnityAction_1_t1850 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1850 * L_0 = ___call;
		BaseInvokableCall_t554 * L_1 = (( BaseInvokableCall_t554 * (*) (Object_t * /* static, unused */, UnityAction_1_t1850 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t1850 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_AddCall_m3031((UnityEventBase_t562 *)__this, (BaseInvokableCall_t554 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m12074_gshared (UnityEvent_1_t143 * __this, UnityAction_1_t1850 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1850 * L_0 = ___call;
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t1850 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3049(NULL /*static, unused*/, (Delegate_t346 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_RemoveListener_m3032((UnityEventBase_t562 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12075_gshared (UnityEvent_1_t143 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
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
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m12076_gshared (UnityEvent_1_t143 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1851 * L_2 = (InvokableCall_1_t1851 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1851 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m12077_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1850 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t1850 * L_0 = ___action;
		InvokableCall_1_t1851 * L_1 = (InvokableCall_1_t1851 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1851 *, UnityAction_1_t1850 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t1850 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UnityEvent_1_Invoke_m1712_gshared (UnityEvent_1_t143 * __this, int32_t ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_InvokeArray_4);
		int32_t L_1 = ___arg0;
		int32_t L_2 = L_1;
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
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_8MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m12078_gshared (UnityAction_1_t1850 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UnityAction_1_Invoke_m12079_gshared (UnityAction_1_t1850 * __this, int32_t ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m12079((UnityAction_1_t1850 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m12080_gshared (UnityAction_1_t1850 * __this, int32_t ___arg0, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t36_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12081_gshared (UnityAction_1_t1850 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t36_m16865_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t36_m16865(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t36_m16865_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern "C" void InvokableCall_1__ctor_m12082_gshared (InvokableCall_1_t1851 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		UnityAction_1_t1850 * L_2 = (UnityAction_1_t1850 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t346 * L_6 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t346 * L_7 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_2, (Delegate_t346 *)((UnityAction_1_t1850 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1850 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_8.h"
extern "C" void InvokableCall_1__ctor_m12083_gshared (InvokableCall_1_t1851 * __this, UnityAction_1_t1850 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t554 *)__this);
		BaseInvokableCall__ctor_m3001((BaseInvokableCall_t554 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t1850 * L_0 = (UnityAction_1_t1850 *)(__this->___Delegate_0);
		UnityAction_1_t1850 * L_1 = ___action;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_0, (Delegate_t346 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1850 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2716;
extern "C" void InvokableCall_1_Invoke_m12084_gshared (InvokableCall_1_t1851 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
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
		UnityAction_1_t1850 * L_4 = (UnityAction_1_t1850 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, (Delegate_t346 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t1850 * L_6 = (UnityAction_1_t1850 *)(__this->___Delegate_0);
		ObjectU5BU5D_t320* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t1850 *)L_6);
		(( void (*) (UnityAction_1_t1850 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t1850 *)L_6, (int32_t)((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12085_gshared (InvokableCall_1_t1851 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t1850 * L_0 = (UnityAction_1_t1850 *)(__this->___Delegate_0);
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t1850 * L_3 = (UnityAction_1_t1850 *)(__this->___Delegate_0);
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
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_g.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_gMethodDeclarations.h"
// UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_FloatTween.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_U.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_UMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void TweenRunner_1__ctor_m1713_gshared (TweenRunner_1_t148 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
// UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_FloatTween.h"
extern "C" Object_t * TweenRunner_1_Start_m12179_gshared (Object_t * __this /* static, unused */, FloatTween_t120  ___tweenInfo, const MethodInfo* method)
{
	U3CStartU3Ec__Iterator0_t1858 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator0_t1858 * L_0 = (U3CStartU3Ec__Iterator0_t1858 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CStartU3Ec__Iterator0_t1858 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t1858 *)L_0;
		U3CStartU3Ec__Iterator0_t1858 * L_1 = V_0;
		FloatTween_t120  L_2 = ___tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo_0 = L_2;
		U3CStartU3Ec__Iterator0_t1858 * L_3 = V_0;
		FloatTween_t120  L_4 = ___tweenInfo;
		NullCheck(L_3);
		L_3->___U3CU24U3EtweenInfo_5 = L_4;
		U3CStartU3Ec__Iterator0_t1858 * L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
extern "C" void TweenRunner_1_Init_m1714_gshared (TweenRunner_1_t148 * __this, MonoBehaviour_t3 * ___coroutineContainer, const MethodInfo* method)
{
	{
		MonoBehaviour_t3 * L_0 = ___coroutineContainer;
		__this->___m_CoroutineContainer_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_FloatTweenMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2726;
extern "C" void TweenRunner_1_StartTween_m1762_gshared (TweenRunner_1_t148 * __this, FloatTween_t120  ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2726 = il2cpp_codegen_string_literal_from_index(2726);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_t3 * L_0 = (MonoBehaviour_t3 *)(__this->___m_CoroutineContainer_0);
		bool L_1 = Object_op_Equality_m94(NULL /*static, unused*/, (Object_t38 *)L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m2518(NULL /*static, unused*/, (Object_t *)_stringLiteral2726, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		Object_t * L_2 = (Object_t *)(__this->___m_Tween_1);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		MonoBehaviour_t3 * L_3 = (MonoBehaviour_t3 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_4 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t3 *)L_3);
		MonoBehaviour_StopCoroutine_m2552((MonoBehaviour_t3 *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		__this->___m_Tween_1 = (Object_t *)NULL;
	}

IL_003f:
	{
		MonoBehaviour_t3 * L_5 = (MonoBehaviour_t3 *)(__this->___m_CoroutineContainer_0);
		NullCheck((Component_t42 *)L_5);
		GameObject_t4 * L_6 = Component_get_gameObject_m66((Component_t42 *)L_5, /*hidden argument*/NULL);
		NullCheck((GameObject_t4 *)L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m1582((GameObject_t4 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		NullCheck((FloatTween_t120 *)(&___info));
		FloatTween_TweenValue_m463((FloatTween_t120 *)(&___info), (float)(1.0f), NULL);
		return;
	}

IL_0067:
	{
		FloatTween_t120  L_8 = ___info;
		Object_t * L_9 = (( Object_t * (*) (Object_t * /* static, unused */, FloatTween_t120 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (FloatTween_t120 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Tween_1 = L_9;
		MonoBehaviour_t3 * L_10 = (MonoBehaviour_t3 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_11 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t3 *)L_10);
		MonoBehaviour_StartCoroutine_m157((MonoBehaviour_t3 *)L_10, (Object_t *)L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CStartU3Ec__Iterator0__ctor_m12180_gshared (U3CStartU3Ec__Iterator0_t1858 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m12181_gshared (U3CStartU3Ec__Iterator0_t1858 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12182_gshared (U3CStartU3Ec__Iterator0_t1858 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
// UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_FloatTweenMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" bool U3CStartU3Ec__Iterator0_MoveNext_m12183_gshared (U3CStartU3Ec__Iterator0_t1858 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t1858 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t1858 * G_B6_1 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t1858 * G_B8_2 = {0};
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0104;
	}

IL_0021:
	{
		FloatTween_t120 * L_2 = (FloatTween_t120 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t120 *)L_2);
		bool L_3 = FloatTween_ValidTarget_m467((FloatTween_t120 *)L_2, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0104;
	}

IL_003c:
	{
		__this->___U3CelapsedTimeU3E__0_1 = (0.0f);
		goto IL_00cb;
	}

IL_004c:
	{
		float L_4 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		FloatTween_t120 * L_5 = (FloatTween_t120 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t120 *)L_5);
		bool L_6 = FloatTween_get_ignoreTimeScale_m461((FloatTween_t120 *)L_5, NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t1858 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t1858 *)(__this));
			goto IL_0073;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m1660(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t1858 *)(G_B6_1));
		goto IL_0078;
	}

IL_0073:
	{
		float L_8 = Time_get_deltaTime_m105(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t1858 *)(G_B7_1));
	}

IL_0078:
	{
		NullCheck(G_B8_2);
		G_B8_2->___U3CelapsedTimeU3E__0_1 = ((float)((float)G_B8_1+(float)G_B8_0));
		float L_9 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		FloatTween_t120 * L_10 = (FloatTween_t120 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t120 *)L_10);
		float L_11 = FloatTween_get_duration_m459((FloatTween_t120 *)L_10, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1838(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->___U3CpercentageU3E__1_2 = L_12;
		FloatTween_t120 * L_13 = (FloatTween_t120 *)&(__this->___tweenInfo_0);
		float L_14 = (float)(__this->___U3CpercentageU3E__1_2);
		NullCheck((FloatTween_t120 *)L_13);
		FloatTween_TweenValue_m463((FloatTween_t120 *)L_13, (float)L_14, NULL);
		__this->___U24current_4 = NULL;
		__this->___U24PC_3 = 1;
		goto IL_0106;
	}

IL_00cb:
	{
		float L_15 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		FloatTween_t120 * L_16 = (FloatTween_t120 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t120 *)L_16);
		float L_17 = FloatTween_get_duration_m459((FloatTween_t120 *)L_16, NULL);
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_004c;
		}
	}
	{
		FloatTween_t120 * L_18 = (FloatTween_t120 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t120 *)L_18);
		FloatTween_TweenValue_m463((FloatTween_t120 *)L_18, (float)(1.0f), NULL);
		__this->___U24PC_3 = (-1);
	}

IL_0104:
	{
		return 0;
	}

IL_0106:
	{
		return 1;
	}
	// Dead block : IL_0108: ldloc.1
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Dispose()
extern "C" void U3CStartU3Ec__Iterator0_Dispose_m12184_gshared (U3CStartU3Ec__Iterator0_t1858 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator0_Reset_m12185_gshared (U3CStartU3Ec__Iterator0_t1858 * __this, const MethodInfo* method)
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
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C" Vector3_t10  Array_InternalArray__get_Item_TisVector3_t10_m16866_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector3_t10_m16866(__this, p0, method) (( Vector3_t10  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector3_t10_m16866_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12280_gshared (InternalEnumerator_1_t1865 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12281_gshared (InternalEnumerator_1_t1865 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (( Vector3_t10  (*) (InternalEnumerator_1_t1865 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1865 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3_t10  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12282_gshared (InternalEnumerator_1_t1865 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12283_gshared (InternalEnumerator_1_t1865 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" Vector3_t10  InternalEnumerator_1_get_Current_m12284_gshared (InternalEnumerator_1_t1865 * __this, const MethodInfo* method)
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
		Vector3_t10  L_8 = (( Vector3_t10  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_2.h"
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_2MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m1735_gshared (UnityAction_1_t338 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void UnityAction_1_Invoke_m12298_gshared (UnityAction_1_t338 * __this, bool ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m12298((UnityAction_1_t338 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t322_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m12299_gshared (UnityAction_1_t338 * __this, bool ___arg0, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t322_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12300_gshared (UnityAction_1_t338 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.UnityEvent`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_4.h"
// UnityEngine.Events.UnityEvent`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_4MethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m1964_gshared (UnityEvent_1_t202 * __this, const MethodInfo* method)
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_2.h"
extern "C" void UnityEvent_1_AddListener_m1736_gshared (UnityEvent_1_t202 * __this, UnityAction_1_t338 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t338 * L_0 = ___call;
		BaseInvokableCall_t554 * L_1 = (( BaseInvokableCall_t554 * (*) (Object_t * /* static, unused */, UnityAction_1_t338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_AddCall_m3031((UnityEventBase_t562 *)__this, (BaseInvokableCall_t554 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m12301_gshared (UnityEvent_1_t202 * __this, UnityAction_1_t338 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t338 * L_0 = ___call;
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t338 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3049(NULL /*static, unused*/, (Delegate_t346 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase_RemoveListener_m3032((UnityEventBase_t562 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12302_gshared (UnityEvent_1_t202 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
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
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m12303_gshared (UnityEvent_1_t202 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1870 * L_2 = (InvokableCall_1_t1870 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1870 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m12304_gshared (Object_t * __this /* static, unused */, UnityAction_1_t338 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t338 * L_0 = ___action;
		InvokableCall_1_t1870 * L_1 = (InvokableCall_1_t1870 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1870 *, UnityAction_1_t338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void UnityEvent_1_Invoke_m1969_gshared (UnityEvent_1_t202 * __this, bool ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_InvokeArray_4);
		bool L_1 = ___arg0;
		bool L_2 = L_1;
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
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t322_m16877_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t322_m16877(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t322_m16877_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern "C" void InvokableCall_1__ctor_m12305_gshared (InvokableCall_1_t1870 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		UnityAction_1_t338 * L_2 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t346 * L_6 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t346 * L_7 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_2, (Delegate_t346 *)((UnityAction_1_t338 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t338 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_2.h"
extern "C" void InvokableCall_1__ctor_m12306_gshared (InvokableCall_1_t1870 * __this, UnityAction_1_t338 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t554 *)__this);
		BaseInvokableCall__ctor_m3001((BaseInvokableCall_t554 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t338 * L_0 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		UnityAction_1_t338 * L_1 = ___action;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, (Delegate_t346 *)L_0, (Delegate_t346 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t338 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2716;
extern "C" void InvokableCall_1_Invoke_m12307_gshared (InvokableCall_1_t1870 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
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
		UnityAction_1_t338 * L_4 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, (Delegate_t346 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t338 * L_6 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		ObjectU5BU5D_t320* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t338 *)L_6);
		(( void (*) (UnityAction_1_t338 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t338 *)L_6, (bool)((*(bool*)((bool*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12308_gshared (InvokableCall_1_t1870 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t338 * L_0 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t338 * L_3 = (UnityAction_1_t338 *)(__this->___Delegate_0);
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
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2334;
struct Transform_1_t1882;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t987_TisDictionaryEntry_t987_m16891_gshared (Dictionary_2_t1881 * __this, DictionaryEntryU5BU5D_t2334* p0, int32_t p1, Transform_1_t1882 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t987_TisDictionaryEntry_t987_m16891(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1881 *, DictionaryEntryU5BU5D_t2334*, int32_t, Transform_1_t1882 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t987_TisDictionaryEntry_t987_m16891_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t1889;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1883_m16892_gshared (Dictionary_2_t1881 * __this, Array_t * p0, int32_t p1, Transform_1_t1889 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1883_m16892(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1881 *, Array_t *, int32_t, Transform_1_t1889 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1883_m16892_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2269;
struct Transform_1_t1889;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1883_TisKeyValuePair_2_t1883_m16894_gshared (Dictionary_2_t1881 * __this, KeyValuePair_2U5BU5D_t2269* p0, int32_t p1, Transform_1_t1889 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1883_TisKeyValuePair_2_t1883_m16894(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1881 *, KeyValuePair_2U5BU5D_t2269*, int32_t, Transform_1_t1889 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1883_TisKeyValuePair_2_t1883_m16894_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m12309_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1881 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12311_gshared (Dictionary_2_t1881 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1881 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m12313_gshared (Dictionary_2_t1881 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1881 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m12315_gshared (Dictionary_2_t1881 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t584 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12317_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t1881 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t1881 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1881 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t1881 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1881 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Dictionary_2_t1881 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(25 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey) */, (Dictionary_2_t1881 *)__this, (Object_t *)L_4);
		return L_5;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12319_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t1881 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t1881 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1881 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t1881 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t1881 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Dictionary_2_t1881 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t1881 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t1881 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12321_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t1881 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t1881 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1881 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t1881 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t1881 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Dictionary_2_t1881 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t1881 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t1881 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12323_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1881 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t1881 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12325_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1881 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t1881 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12327_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12329_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12331_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12333_gshared (Dictionary_2_t1881 * __this, KeyValuePair_2_t1883  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1883 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1883 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck((Dictionary_2_t1881 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t1881 *)__this, (Object_t *)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12335_gshared (Dictionary_2_t1881 * __this, KeyValuePair_2_t1883  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1883  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t1881 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t1881 *, KeyValuePair_2_t1883 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t1881 *)__this, (KeyValuePair_2_t1883 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12337_gshared (Dictionary_2_t1881 * __this, KeyValuePair_2U5BU5D_t2269* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2269* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, KeyValuePair_2U5BU5D_t2269*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1881 *)__this, (KeyValuePair_2U5BU5D_t2269*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12339_gshared (Dictionary_2_t1881 * __this, KeyValuePair_2_t1883  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1883  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t1881 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t1881 *, KeyValuePair_2_t1883 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t1881 *)__this, (KeyValuePair_2_t1883 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1883 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck((Dictionary_2_t1881 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t1881 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2334_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12341_gshared (Dictionary_2_t1881 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2561);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2269* V_0 = {0};
	DictionaryEntryU5BU5D_t2334* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2334* G_B5_1 = {0};
	Dictionary_2_t1881 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2334* G_B4_1 = {0};
	Dictionary_2_t1881 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2269*)((KeyValuePair_2U5BU5D_t2269*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		KeyValuePair_2U5BU5D_t2269* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2269* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, KeyValuePair_2U5BU5D_t2269*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1881 *)__this, (KeyValuePair_2U5BU5D_t2269*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t1881 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2334*)((DictionaryEntryU5BU5D_t2334*)IsInst(L_6, DictionaryEntryU5BU5D_t2334_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2334* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2334* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t1882 * L_10 = ((Dictionary_2_t1881_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t1881 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t1881 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Transform_1_t1882 * L_12 = (Transform_1_t1882 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		(( void (*) (Transform_1_t1882 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		((Dictionary_2_t1881_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t1881 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t1882 * L_13 = ((Dictionary_2_t1881_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t1881 *)G_B5_2);
		(( void (*) (Dictionary_2_t1881 *, DictionaryEntryU5BU5D_t2334*, int32_t, Transform_1_t1882 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((Dictionary_2_t1881 *)G_B5_2, (DictionaryEntryU5BU5D_t2334*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t1882 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t1889 * L_17 = (Transform_1_t1889 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t1889 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, Array_t *, int32_t, Transform_1_t1889 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((Dictionary_2_t1881 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t1889 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12343_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1887  L_0 = {0};
		(( void (*) (Enumerator_t1887 *, Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t1887  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12345_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1887  L_0 = {0};
		(( void (*) (Enumerator_t1887 *, Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t1887  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12347_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t1890 * L_0 = (ShimEnumerator_t1890 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (ShimEnumerator_t1890 *, Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_0, (Dictionary_2_t1881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12349_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1113_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" Object_t * Dictionary_2_get_Item_m12351_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		KeyNotFoundException_t1113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2562);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t1799* L_9 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_14 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t320* L_19 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_21, sizeof(Object_t *)));
	}

IL_0089:
	{
		LinkU5BU5D_t1799* L_22 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1112 )))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1113 * L_26 = (KeyNotFoundException_t1113 *)il2cpp_codegen_object_new (KeyNotFoundException_t1113_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m6545(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" void Dictionary_2_set_Item_m12353_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t388* L_6 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t1799* L_11 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_16 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t1799* L_22 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1112 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t1881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		int32_t L_31 = V_0;
		Int32U5BU5D_t388* L_32 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t1799* L_38 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_38, L_39, sizeof(Link_t1112 )))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t1799* L_41 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t388* L_43 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_41, L_42, sizeof(Link_t1112 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t388* L_46 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t1799* L_49 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_49, L_50, sizeof(Link_t1112 )))->___HashCode_0 = L_51;
		ObjectU5BU5D_t320* L_52 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53, sizeof(Object_t *))) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t1799* L_56 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t1799* L_58 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_58, L_59, sizeof(Link_t1112 )))->___Next_1);
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_56, L_57, sizeof(Link_t1112 )))->___Next_1 = L_60;
		LinkU5BU5D_t1799* L_61 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t388* L_63 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_61, L_62, sizeof(Link_t1112 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t388* L_66 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		ObjectU5BU5D_t320* L_69 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		Object_t * L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_69, L_70, sizeof(Object_t *))) = (Object_t *)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void Dictionary_2_Init_m12355_gshared (Dictionary_2_t1881 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		_stringLiteral1238 = il2cpp_codegen_string_literal_from_index(1238);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t1881 * G_B4_0 = {0};
	Dictionary_2_t1881 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t1881 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_1 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_1, (String_t*)_stringLiteral1238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t1881 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t1881 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t1881 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		EqualityComparer_1_t1713 * L_5 = (( EqualityComparer_1_t1713 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t1881 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((Dictionary_2_t1881 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t388_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1799_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m12357_gshared (Dictionary_2_t1881 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(525);
		LinkU5BU5D_t1799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2563);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t388*)SZArrayNew(Int32U5BU5D_t388_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t1799*)SZArrayNew(LinkU5BU5D_t1799_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t320*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t320*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t388* L_4 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t388* L_6 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral628;
extern Il2CppCodeGenString* _stringLiteral630;
extern Il2CppCodeGenString* _stringLiteral2717;
extern Il2CppCodeGenString* _stringLiteral2718;
extern "C" void Dictionary_2_CopyToCheck_m12359_gshared (Dictionary_2_t1881 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral628 = il2cpp_codegen_string_literal_from_index(628);
		_stringLiteral630 = il2cpp_codegen_string_literal_from_index(630);
		_stringLiteral2717 = il2cpp_codegen_string_literal_from_index(2717);
		_stringLiteral2718 = il2cpp_codegen_string_literal_from_index(2718);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral628, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t644 * L_3 = (ArgumentOutOfRangeException_t644 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4095(L_3, (String_t*)_stringLiteral630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5103((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t370 * L_7 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_7, (String_t*)_stringLiteral2717, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m5103((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t1881 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t1881 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t370 * L_12 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_12, (String_t*)_stringLiteral2718, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1883  Dictionary_2_make_pair_m12361_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t1883  L_2 = {0};
		(( void (*) (KeyValuePair_2_t1883 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12363_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12365_gshared (Dictionary_2_t1881 * __this, KeyValuePair_2U5BU5D_t2269* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2269* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t1881 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		KeyValuePair_2U5BU5D_t2269* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t1889 * L_5 = (Transform_1_t1889 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t1889 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, KeyValuePair_2U5BU5D_t2269*, int32_t, Transform_1_t1889 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t1881 *)__this, (KeyValuePair_2U5BU5D_t2269*)L_2, (int32_t)L_3, (Transform_1_t1889 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t53_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t388_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1799_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m12367_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		Int32U5BU5D_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(525);
		LinkU5BU5D_t1799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2563);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t388* V_1 = {0};
	LinkU5BU5D_t1799* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t320* V_7 = {0};
	ObjectU5BU5D_t320* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t53_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m6779(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t388*)((Int32U5BU5D_t388*)SZArrayNew(Int32U5BU5D_t388_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t1799*)((LinkU5BU5D_t1799*)SZArrayNew(LinkU5BU5D_t1799_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t388* L_4 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t1799* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_10 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12, sizeof(Object_t *))));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_7, L_8, sizeof(Link_t1112 )))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t1799* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t388* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_18, L_19, sizeof(Link_t1112 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t388* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t1799* L_26 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_26, L_27, sizeof(Link_t1112 )))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t388* L_32 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t388* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t1799* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t320*)((ObjectU5BU5D_t320*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t320*)((ObjectU5BU5D_t320*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_36));
		ObjectU5BU5D_t320* L_37 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		ObjectU5BU5D_t320* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t320* L_40 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		ObjectU5BU5D_t320* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t320* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t320* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern Il2CppCodeGenString* _stringLiteral2719;
extern "C" void Dictionary_2_Add_m12369_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		_stringLiteral2719 = il2cpp_codegen_string_literal_from_index(2719);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t388* L_6 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t1799* L_10 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_15 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17, sizeof(Object_t *))), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t370 * L_20 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_20, (String_t*)_stringLiteral2719, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t1799* L_21 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_21, L_22, sizeof(Link_t1112 )))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t1881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		int32_t L_29 = V_0;
		Int32U5BU5D_t388* L_30 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t1799* L_36 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1112 )))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t1799* L_39 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1112 )))->___HashCode_0 = L_41;
		LinkU5BU5D_t1799* L_42 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t388* L_44 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_42, L_43, sizeof(Link_t1112 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t388* L_47 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t320* L_50 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51, sizeof(Object_t *))) = (Object_t *)L_52;
		ObjectU5BU5D_t320* L_53 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54, sizeof(Object_t *))) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12371_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t388* L_0 = (Int32U5BU5D_t388*)(__this->___table_4);
		Int32U5BU5D_t388* L_1 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t320* L_2 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		ObjectU5BU5D_t320* L_3 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t320* L_4 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		ObjectU5BU5D_t320* L_5 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t1799* L_6 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		LinkU5BU5D_t1799* L_7 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" bool Dictionary_2_ContainsKey_m12373_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t1799* L_9 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_14 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t1799* L_19 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_19, L_20, sizeof(Link_t1112 )))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12375_gshared (Dictionary_2_t1881 * __this, Object_t * ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		EqualityComparer_1_t1713 * L_0 = (( EqualityComparer_1_t1713 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t388* L_1 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t)))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		ObjectU5BU5D_t320* L_5 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7, sizeof(Object_t *))), (Object_t *)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t1799* L_10 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1112 )))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t388* L_16 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral639;
extern Il2CppCodeGenString* _stringLiteral641;
extern Il2CppCodeGenString* _stringLiteral643;
extern Il2CppCodeGenString* _stringLiteral1272;
extern Il2CppCodeGenString* _stringLiteral2720;
extern "C" void Dictionary_2_GetObjectData_m12377_gshared (Dictionary_2_t1881 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral639 = il2cpp_codegen_string_literal_from_index(639);
		_stringLiteral641 = il2cpp_codegen_string_literal_from_index(641);
		_stringLiteral643 = il2cpp_codegen_string_literal_from_index(643);
		_stringLiteral1272 = il2cpp_codegen_string_literal_from_index(1272);
		_stringLiteral2720 = il2cpp_codegen_string_literal_from_index(2720);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2269* V_0 = {0};
	{
		SerializationInfo_t584 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral639, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		SerializationInfo_t584 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t584 *)L_2);
		SerializationInfo_AddValue_m5110((SerializationInfo_t584 *)L_2, (String_t*)_stringLiteral641, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t584 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t584 *)L_4);
		SerializationInfo_AddValue_m4148((SerializationInfo_t584 *)L_4, (String_t*)_stringLiteral643, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2269*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2269*)((KeyValuePair_2U5BU5D_t2269*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43), L_7));
		KeyValuePair_2U5BU5D_t2269* L_8 = V_0;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, KeyValuePair_2U5BU5D_t2269*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1881 *)__this, (KeyValuePair_2U5BU5D_t2269*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0055:
	{
		SerializationInfo_t584 * L_9 = ___info;
		Int32U5BU5D_t388* L_10 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t584 *)L_9);
		SerializationInfo_AddValue_m5110((SerializationInfo_t584 *)L_9, (String_t*)_stringLiteral1272, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t584 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2269* L_12 = V_0;
		NullCheck((SerializationInfo_t584 *)L_11);
		SerializationInfo_AddValue_m4148((SerializationInfo_t584 *)L_11, (String_t*)_stringLiteral2720, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral641;
extern Il2CppCodeGenString* _stringLiteral643;
extern Il2CppCodeGenString* _stringLiteral1272;
extern Il2CppCodeGenString* _stringLiteral2720;
extern "C" void Dictionary_2_OnDeserialization_m12379_gshared (Dictionary_2_t1881 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		_stringLiteral641 = il2cpp_codegen_string_literal_from_index(641);
		_stringLiteral643 = il2cpp_codegen_string_literal_from_index(643);
		_stringLiteral1272 = il2cpp_codegen_string_literal_from_index(1272);
		_stringLiteral2720 = il2cpp_codegen_string_literal_from_index(2720);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2269* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t584 * L_0 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		SerializationInfo_t584 * L_1 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t584 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m5118((SerializationInfo_t584 *)L_1, (String_t*)_stringLiteral641, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t584 * L_3 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t584 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m5111((SerializationInfo_t584 *)L_3, (String_t*)_stringLiteral643, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)));
		SerializationInfo_t584 * L_6 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t584 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m5118((SerializationInfo_t584 *)L_6, (String_t*)_stringLiteral1272, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t584 * L_8 = (SerializationInfo_t584 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t584 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m5111((SerializationInfo_t584 *)L_8, (String_t*)_stringLiteral2720, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2269*)((KeyValuePair_2U5BU5D_t2269*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t1881 *)__this);
		(( void (*) (Dictionary_2_t1881 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((Dictionary_2_t1881 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2269* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2269* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1883 *)((KeyValuePair_2_t1883 *)(KeyValuePair_2_t1883 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t1883 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		KeyValuePair_2U5BU5D_t2269* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1883 *)((KeyValuePair_2_t1883 *)(KeyValuePair_2_t1883 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t1883 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck((Dictionary_2_t1881 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t1881 *)__this, (Object_t *)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2269* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t584 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" bool Dictionary_2_Remove_m12381_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t388* L_6 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t1799* L_11 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_16 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t1799* L_22 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1112 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t388* L_29 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t1799* L_31 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_31, L_32, sizeof(Link_t1112 )))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t1799* L_34 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t1799* L_36 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1112 )))->___Next_1);
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_34, L_35, sizeof(Link_t1112 )))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t1799* L_39 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1112 )))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t1799* L_43 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_43, L_44, sizeof(Link_t1112 )))->___HashCode_0 = 0;
		ObjectU5BU5D_t320* L_45 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46, sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t320* L_48 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, L_49, sizeof(Object_t *))) = (Object_t *)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern "C" bool Dictionary_2_TryGetValue_m12383_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t388* L_5 = (Int32U5BU5D_t388*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t388* L_7 = (Int32U5BU5D_t388*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t1799* L_9 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1112 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t320* L_14 = (ObjectU5BU5D_t320*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		Object_t ** L_19 = ___value;
		ObjectU5BU5D_t320* L_20 = (ObjectU5BU5D_t320*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22, sizeof(Object_t *)));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t1799* L_23 = (LinkU5BU5D_t1799*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_23, L_24, sizeof(Link_t1112 )))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		Object_t ** L_27 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1885 * Dictionary_2_get_Values_m12385_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t1885 * L_0 = (ValueCollection_t1885 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		(( void (*) (ValueCollection_t1885 *, Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)(L_0, (Dictionary_2_t1881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral626;
extern Il2CppCodeGenString* _stringLiteral2721;
extern "C" Object_t * Dictionary_2_ToTKey_m12387_gshared (Dictionary_2_t1881 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral626 = il2cpp_codegen_string_literal_from_index(626);
		_stringLiteral2721 = il2cpp_codegen_string_literal_from_index(2721);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m141(NULL /*static, unused*/, (String_t*)_stringLiteral2721, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t370 * L_6 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3211(L_6, (String_t*)L_5, (String_t*)_stringLiteral626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2721;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" Object_t * Dictionary_2_ToTValue_m12389_gshared (Dictionary_2_t1881 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		_stringLiteral2721 = il2cpp_codegen_string_literal_from_index(2721);
		_stringLiteral307 = il2cpp_codegen_string_literal_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m141(NULL /*static, unused*/, (String_t*)_stringLiteral2721, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3211(L_8, (String_t*)L_7, (String_t*)_stringLiteral307, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12391_gshared (Dictionary_2_t1881 * __this, KeyValuePair_2_t1883  ___pair, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1883 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck((Dictionary_2_t1881 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t1881 *)__this, (Object_t *)L_0, (Object_t **)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		EqualityComparer_1_t1713 * L_2 = (( EqualityComparer_1_t1713 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1883 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t1713 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t1713 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1887  Dictionary_2_GetEnumerator_m12393_gshared (Dictionary_2_t1881 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1887  L_0 = {0};
		(( void (*) (Enumerator_t1887 *, Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t987  Dictionary_2_U3CCopyToU3Em__0_m12395_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		DictionaryEntry_t987  L_2 = {0};
		DictionaryEntry__ctor_m5101(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t1883  Array_InternalArray__get_Item_TisKeyValuePair_2_t1883_m16878_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t1883_m16878(__this, p0, method) (( KeyValuePair_2_t1883  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t1883_m16878_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12440_gshared (InternalEnumerator_1_t1884 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12441_gshared (InternalEnumerator_1_t1884 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1883  L_0 = (( KeyValuePair_2_t1883  (*) (InternalEnumerator_1_t1884 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1884 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1883  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12442_gshared (InternalEnumerator_1_t1884 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12443_gshared (InternalEnumerator_1_t1884 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" KeyValuePair_2_t1883  InternalEnumerator_1_get_Current_m12444_gshared (InternalEnumerator_1_t1884 * __this, const MethodInfo* method)
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
		KeyValuePair_2_t1883  L_8 = (( KeyValuePair_2_t1883  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void KeyValuePair_2__ctor_m12445_gshared (KeyValuePair_2_t1883 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t1883 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t1883 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t1883 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t1883 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m12446_gshared (KeyValuePair_2_t1883 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12447_gshared (KeyValuePair_2_t1883 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m12448_gshared (KeyValuePair_2_t1883 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12449_gshared (KeyValuePair_2_t1883 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral257;
extern Il2CppCodeGenString* _stringLiteral267;
extern Il2CppCodeGenString* _stringLiteral258;
extern "C" String_t* KeyValuePair_2_ToString_m12450_gshared (KeyValuePair_2_t1883 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral257 = il2cpp_codegen_string_literal_from_index(257);
		_stringLiteral267 = il2cpp_codegen_string_literal_from_index(267);
		_stringLiteral258 = il2cpp_codegen_string_literal_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t48* G_B2_1 = {0};
	StringU5BU5D_t48* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t48* G_B1_1 = {0};
	StringU5BU5D_t48* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t48* G_B3_2 = {0};
	StringU5BU5D_t48* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t48* G_B5_1 = {0};
	StringU5BU5D_t48* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t48* G_B4_1 = {0};
	StringU5BU5D_t48* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t48* G_B6_2 = {0};
	StringU5BU5D_t48* G_B6_3 = {0};
	{
		StringU5BU5D_t48* L_0 = (StringU5BU5D_t48*)((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral257);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral257;
		StringU5BU5D_t48* L_1 = (StringU5BU5D_t48*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1883 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1883 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(String_t*))) = (String_t*)G_B3_0;
		StringU5BU5D_t48* L_6 = (StringU5BU5D_t48*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral267);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2, sizeof(String_t*))) = (String_t*)_stringLiteral267;
		StringU5BU5D_t48* L_7 = (StringU5BU5D_t48*)L_6;
		Object_t * L_8 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1883 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1883 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_9;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(String_t*))) = (String_t*)G_B6_0;
		StringU5BU5D_t48* L_12 = (StringU5BU5D_t48*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral258);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4, sizeof(String_t*))) = (String_t*)_stringLiteral258;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m132(NULL /*static, unused*/, (StringU5BU5D_t48*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6MethodDeclarations.h"
struct Array_t;
struct Transform_1_t1888;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m16889_gshared (Dictionary_2_t1881 * __this, Array_t * p0, int32_t p1, Transform_1_t1888 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m16889(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1881 *, Array_t *, int32_t, Transform_1_t1888 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m16889_gshared)(__this, p0, p1, p2, method)
struct ObjectU5BU5D_t320;
struct Transform_1_t1888;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m16890_gshared (Dictionary_2_t1881 * __this, ObjectU5BU5D_t320* p0, int32_t p1, Transform_1_t1888 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m16890(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1881 *, ObjectU5BU5D_t320*, int32_t, Transform_1_t1888 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m16890_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1267;
extern "C" void ValueCollection__ctor_m12451_gshared (ValueCollection_t1885 * __this, Dictionary_2_t1881 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1267 = il2cpp_codegen_string_literal_from_index(1267);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1881 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t614 * L_1 = (ArgumentNullException_t614 *)il2cpp_codegen_object_new (ArgumentNullException_t614_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3135(L_1, (String_t*)_stringLiteral1267, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t1881 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2722;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12452_gshared (ValueCollection_t1885 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral2722 = il2cpp_codegen_string_literal_from_index(2722);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4096(L_0, (String_t*)_stringLiteral2722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2722;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12453_gshared (ValueCollection_t1885 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral2722 = il2cpp_codegen_string_literal_from_index(2722);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4096(L_0, (String_t*)_stringLiteral2722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12454_gshared (ValueCollection_t1885 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t1881 * L_0 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1881 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t1881 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1881 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2722;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12455_gshared (ValueCollection_t1885 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		_stringLiteral2722 = il2cpp_codegen_string_literal_from_index(2722);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t49 * L_0 = (NotSupportedException_t49 *)il2cpp_codegen_object_new (NotSupportedException_t49_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4096(L_0, (String_t*)_stringLiteral2722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12456_gshared (ValueCollection_t1885 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t1885 *)__this);
		Enumerator_t1886  L_0 = (( Enumerator_t1886  (*) (ValueCollection_t1885 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t1885 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t1886  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12457_gshared (ValueCollection_t1885 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t320* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t320*)((ObjectU5BU5D_t320*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t320* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t320* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t1885 *)__this);
		(( void (*) (ValueCollection_t1885 *, ObjectU5BU5D_t320*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t1885 *)__this, (ObjectU5BU5D_t320*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t1881 * L_4 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t1881 *)L_4);
		(( void (*) (Dictionary_2_t1881 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t1881 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1881 * L_7 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t1888 * L_11 = (Transform_1_t1888 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t1888 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t1881 *)L_7);
		(( void (*) (Dictionary_2_t1881 *, Array_t *, int32_t, Transform_1_t1888 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t1881 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t1888 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12458_gshared (ValueCollection_t1885 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t1885 *)__this);
		Enumerator_t1886  L_0 = (( Enumerator_t1886  (*) (ValueCollection_t1885 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t1885 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t1886  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12459_gshared (ValueCollection_t1885 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12460_gshared (ValueCollection_t1885 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12461_gshared (ValueCollection_t1885 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t1881 * L_0 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m12462_gshared (ValueCollection_t1885 * __this, ObjectU5BU5D_t320* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t1881 * L_0 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		ObjectU5BU5D_t320* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t1881 *)L_0);
		(( void (*) (Dictionary_2_t1881 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t1881 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1881 * L_3 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		ObjectU5BU5D_t320* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t1888 * L_7 = (Transform_1_t1888 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t1888 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t1881 *)L_3);
		(( void (*) (Dictionary_2_t1881 *, ObjectU5BU5D_t320*, int32_t, Transform_1_t1888 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t1881 *)L_3, (ObjectU5BU5D_t320*)L_4, (int32_t)L_5, (Transform_1_t1888 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1886  ValueCollection_GetEnumerator_m12463_gshared (ValueCollection_t1885 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1881 * L_0 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		Enumerator_t1886  L_1 = {0};
		(( void (*) (Enumerator_t1886 *, Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t1881 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m12464_gshared (ValueCollection_t1885 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1881 * L_0 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t1881 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t1881 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
extern "C" void Enumerator__ctor_m12465_gshared (Enumerator_t1886 * __this, Dictionary_2_t1881 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t1881 * L_0 = ___host;
		NullCheck((Dictionary_2_t1881 *)L_0);
		Enumerator_t1887  L_1 = (( Enumerator_t1887  (*) (Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1881 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12466_gshared (Enumerator_t1886 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1887 * L_0 = (Enumerator_t1887 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1887 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12467_gshared (Enumerator_t1886 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1887 * L_0 = (Enumerator_t1887 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1887 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12468_gshared (Enumerator_t1886 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1887 * L_0 = (Enumerator_t1887 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t1887 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m12469_gshared (Enumerator_t1886 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1887 * L_0 = (Enumerator_t1887 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1883 * L_1 = (KeyValuePair_2_t1883 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t1883 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
extern "C" void Enumerator__ctor_m12470_gshared (Enumerator_t1887 * __this, Dictionary_2_t1881 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t1881 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t1881 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12471_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1883  L_0 = (KeyValuePair_2_t1883 )(__this->___current_3);
		KeyValuePair_2_t1883  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t987  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12472_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1883 * L_0 = (KeyValuePair_2_t1883 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1883 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t1883 * L_2 = (KeyValuePair_2_t1883 *)&(__this->___current_3);
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1883 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		DictionaryEntry_t987  L_4 = {0};
		DictionaryEntry__ctor_m5101(&L_4, (Object_t *)L_1, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12473_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t1887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12474_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t1887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12475_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t1887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t1881 * L_4 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1799* L_5 = (LinkU5BU5D_t1799*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1112 *)(Link_t1112 *)SZArrayLdElema(L_5, L_6, sizeof(Link_t1112 )))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t1881 * L_8 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t320* L_9 = (ObjectU5BU5D_t320*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t1881 * L_12 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t320* L_13 = (ObjectU5BU5D_t320*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t1883  L_16 = {0};
		(( void (*) (KeyValuePair_2_t1883 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t1881 * L_18 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1883  Enumerator_get_Current_m12476_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1883  L_0 = (KeyValuePair_2_t1883 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12477_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1883 * L_0 = (KeyValuePair_2_t1883 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1883 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12478_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1883 * L_0 = (KeyValuePair_2_t1883 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1883 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2723;
extern "C" void Enumerator_VerifyState_m12479_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2723 = il2cpp_codegen_string_literal_from_index(2723);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t1881 * L_0 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t645 * L_1 = (ObjectDisposedException_t645 *)il2cpp_codegen_object_new (ObjectDisposedException_t645_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3212(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Dictionary_2_t1881 * L_2 = (Dictionary_2_t1881 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t815 * L_5 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_5, (String_t*)_stringLiteral2723, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2724;
extern "C" void Enumerator_VerifyCurrent_m12480_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		_stringLiteral2724 = il2cpp_codegen_string_literal_from_index(2724);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t1887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t815 * L_1 = (InvalidOperationException_t815 *)il2cpp_codegen_object_new (InvalidOperationException_t815_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4173(L_1, (String_t*)_stringLiteral2724, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12481_gshared (Enumerator_t1887 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t1881 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12482_gshared (Transform_1_t1888 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m12483_gshared (Transform_1_t1888 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12483((Transform_1_t1888 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m12484_gshared (Transform_1_t1888 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m12485_gshared (Transform_1_t1888 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12486_gshared (Transform_1_t1882 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t987  Transform_1_Invoke_m12487_gshared (Transform_1_t1882 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12487((Transform_1_t1882 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t987  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t987  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t987  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m12488_gshared (Transform_1_t1882 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t987  Transform_1_EndInvoke_m12489_gshared (Transform_1_t1882 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t987 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12490_gshared (Transform_1_t1889 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1883  Transform_1_Invoke_m12491_gshared (Transform_1_t1889 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12491((Transform_1_t1889 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1883  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1883  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t1883  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m12492_gshared (Transform_1_t1889 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1883  Transform_1_EndInvoke_m12493_gshared (Transform_1_t1889 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t1883 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m12494_gshared (ShimEnumerator_t1890 * __this, Dictionary_2_t1881 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1881 * L_0 = ___host;
		NullCheck((Dictionary_2_t1881 *)L_0);
		Enumerator_t1887  L_1 = (( Enumerator_t1887  (*) (Dictionary_2_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1881 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12495_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1887 * L_0 = (Enumerator_t1887 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1887 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t986_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t987  ShimEnumerator_get_Entry_m12496_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t1887  L_0 = (Enumerator_t1887 )(__this->___host_enumerator_0);
		Enumerator_t1887  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t987  L_3 = (DictionaryEntry_t987 )InterfaceFuncInvoker0< DictionaryEntry_t987  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t986_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12497_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1883  V_0 = {0};
	{
		Enumerator_t1887 * L_0 = (Enumerator_t1887 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1883  L_1 = (( KeyValuePair_2_t1883  (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1887 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1883 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1883 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12498_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1883  V_0 = {0};
	{
		Enumerator_t1887 * L_0 = (Enumerator_t1887 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1883  L_1 = (( KeyValuePair_2_t1883  (*) (Enumerator_t1887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1887 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1883 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t1883 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t987_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m12499_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t1890 *)__this);
		DictionaryEntry_t987  L_0 = (DictionaryEntry_t987 )VirtFuncInvoker0< DictionaryEntry_t987  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry() */, (ShimEnumerator_t1890 *)__this);
		DictionaryEntry_t987  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t987_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5.h"
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Action_1__ctor_m12585_gshared (Action_1_t1894 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m12586_gshared (Action_1_t1894 * __this, Object_t * ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m12586((Action_1_t1894 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Action_1_BeginInvoke_m12588_gshared (Action_1_t1894 * __this, Object_t * ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m12590_gshared (Action_1_t1894 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_g_0.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_g_0MethodDeclarations.h"
// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTween.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_U_0.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_U_0MethodDeclarations.h"
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void TweenRunner_1__ctor_m1774_gshared (TweenRunner_1_t157 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTween.h"
extern "C" Object_t * TweenRunner_1_Start_m12591_gshared (Object_t * __this /* static, unused */, ColorTween_t117  ___tweenInfo, const MethodInfo* method)
{
	U3CStartU3Ec__Iterator0_t1895 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator0_t1895 * L_0 = (U3CStartU3Ec__Iterator0_t1895 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CStartU3Ec__Iterator0_t1895 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t1895 *)L_0;
		U3CStartU3Ec__Iterator0_t1895 * L_1 = V_0;
		ColorTween_t117  L_2 = ___tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo_0 = L_2;
		U3CStartU3Ec__Iterator0_t1895 * L_3 = V_0;
		ColorTween_t117  L_4 = ___tweenInfo;
		NullCheck(L_3);
		L_3->___U3CU24U3EtweenInfo_5 = L_4;
		U3CStartU3Ec__Iterator0_t1895 * L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
extern "C" void TweenRunner_1_Init_m1775_gshared (TweenRunner_1_t157 * __this, MonoBehaviour_t3 * ___coroutineContainer, const MethodInfo* method)
{
	{
		MonoBehaviour_t3 * L_0 = ___coroutineContainer;
		__this->___m_CoroutineContainer_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTweenMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2726;
extern "C" void TweenRunner_1_StartTween_m1809_gshared (TweenRunner_1_t157 * __this, ColorTween_t117  ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2726 = il2cpp_codegen_string_literal_from_index(2726);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_t3 * L_0 = (MonoBehaviour_t3 *)(__this->___m_CoroutineContainer_0);
		bool L_1 = Object_op_Equality_m94(NULL /*static, unused*/, (Object_t38 *)L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m2518(NULL /*static, unused*/, (Object_t *)_stringLiteral2726, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		Object_t * L_2 = (Object_t *)(__this->___m_Tween_1);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		MonoBehaviour_t3 * L_3 = (MonoBehaviour_t3 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_4 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t3 *)L_3);
		MonoBehaviour_StopCoroutine_m2552((MonoBehaviour_t3 *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		__this->___m_Tween_1 = (Object_t *)NULL;
	}

IL_003f:
	{
		MonoBehaviour_t3 * L_5 = (MonoBehaviour_t3 *)(__this->___m_CoroutineContainer_0);
		NullCheck((Component_t42 *)L_5);
		GameObject_t4 * L_6 = Component_get_gameObject_m66((Component_t42 *)L_5, /*hidden argument*/NULL);
		NullCheck((GameObject_t4 *)L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m1582((GameObject_t4 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		NullCheck((ColorTween_t117 *)(&___info));
		ColorTween_TweenValue_m449((ColorTween_t117 *)(&___info), (float)(1.0f), NULL);
		return;
	}

IL_0067:
	{
		ColorTween_t117  L_8 = ___info;
		Object_t * L_9 = (( Object_t * (*) (Object_t * /* static, unused */, ColorTween_t117 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (ColorTween_t117 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Tween_1 = L_9;
		MonoBehaviour_t3 * L_10 = (MonoBehaviour_t3 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_11 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t3 *)L_10);
		MonoBehaviour_StartCoroutine_m157((MonoBehaviour_t3 *)L_10, (Object_t *)L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CStartU3Ec__Iterator0__ctor_m12592_gshared (U3CStartU3Ec__Iterator0_t1895 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m12593_gshared (U3CStartU3Ec__Iterator0_t1895 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12594_gshared (U3CStartU3Ec__Iterator0_t1895 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTweenMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" bool U3CStartU3Ec__Iterator0_MoveNext_m12595_gshared (U3CStartU3Ec__Iterator0_t1895 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t1895 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t1895 * G_B6_1 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t1895 * G_B8_2 = {0};
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0104;
	}

IL_0021:
	{
		ColorTween_t117 * L_2 = (ColorTween_t117 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t117 *)L_2);
		bool L_3 = ColorTween_ValidTarget_m453((ColorTween_t117 *)L_2, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0104;
	}

IL_003c:
	{
		__this->___U3CelapsedTimeU3E__0_1 = (0.0f);
		goto IL_00cb;
	}

IL_004c:
	{
		float L_4 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t117 * L_5 = (ColorTween_t117 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t117 *)L_5);
		bool L_6 = ColorTween_get_ignoreTimeScale_m447((ColorTween_t117 *)L_5, NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t1895 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t1895 *)(__this));
			goto IL_0073;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m1660(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t1895 *)(G_B6_1));
		goto IL_0078;
	}

IL_0073:
	{
		float L_8 = Time_get_deltaTime_m105(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t1895 *)(G_B7_1));
	}

IL_0078:
	{
		NullCheck(G_B8_2);
		G_B8_2->___U3CelapsedTimeU3E__0_1 = ((float)((float)G_B8_1+(float)G_B8_0));
		float L_9 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t117 * L_10 = (ColorTween_t117 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t117 *)L_10);
		float L_11 = ColorTween_get_duration_m445((ColorTween_t117 *)L_10, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1838(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->___U3CpercentageU3E__1_2 = L_12;
		ColorTween_t117 * L_13 = (ColorTween_t117 *)&(__this->___tweenInfo_0);
		float L_14 = (float)(__this->___U3CpercentageU3E__1_2);
		NullCheck((ColorTween_t117 *)L_13);
		ColorTween_TweenValue_m449((ColorTween_t117 *)L_13, (float)L_14, NULL);
		__this->___U24current_4 = NULL;
		__this->___U24PC_3 = 1;
		goto IL_0106;
	}

IL_00cb:
	{
		float L_15 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t117 * L_16 = (ColorTween_t117 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t117 *)L_16);
		float L_17 = ColorTween_get_duration_m445((ColorTween_t117 *)L_16, NULL);
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_004c;
		}
	}
	{
		ColorTween_t117 * L_18 = (ColorTween_t117 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t117 *)L_18);
		ColorTween_TweenValue_m449((ColorTween_t117 *)L_18, (float)(1.0f), NULL);
		__this->___U24PC_3 = (-1);
	}

IL_0104:
	{
		return 0;
	}

IL_0106:
	{
		return 1;
	}
	// Dead block : IL_0108: ldloc.1
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Dispose()
extern "C" void U3CStartU3Ec__Iterator0_Dispose_m12596_gshared (U3CStartU3Ec__Iterator0_t1895 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator0_Reset_m12597_gshared (U3CStartU3Ec__Iterator0_t1895 * __this, const MethodInfo* method)
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
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_14.h"
// System.Predicate`1<UnityEngine.UIVertex>
#include "mscorlib_System_Predicate_1_gen_17.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
// System.Comparison`1<UnityEngine.UIVertex>
#include "mscorlib_System_Comparison_1_gen_17.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_14MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UIVertex>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"
struct UIVertexU5BU5D_t192;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UIVertex>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UIVertex>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUIVertex_t199_m16908_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t192* p0, UIVertex_t199  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisUIVertex_t199_m16908(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192*, UIVertex_t199 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUIVertex_t199_m16908_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct UIVertexU5BU5D_t192;
struct IComparer_1_t2390;
// Declaration System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUIVertex_t199_m16909_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t192* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisUIVertex_t199_m16909(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisUIVertex_t199_m16909_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct UIVertexU5BU5D_t192;
struct Comparison_1_t1905;
// Declaration System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisUIVertex_t199_m16915_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t192* p0, int32_t p1, Comparison_1_t1905 * p2, const MethodInfo* method);
#define Array_Sort_TisUIVertex_t199_m16915(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192*, int32_t, Comparison_1_t1905 *, const MethodInfo*))Array_Sort_TisUIVertex_t199_m16915_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct UIVertexU5BU5D_t192;
// Declaration System.Void System.Array::Resize<UnityEngine.UIVertex>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UIVertex>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUIVertex_t199_m16906_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t192** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisUIVertex_t199_m16906(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192**, int32_t, const MethodInfo*))Array_Resize_TisUIVertex_t199_m16906_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m2129_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertexU5BU5D_t192* L_0 = ((List_1_t305_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m12598_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t305 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		UIVertexU5BU5D_t192* L_3 = ((List_1_t305_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t305 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((UIVertexU5BU5D_t192*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t305 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void List_1__ctor_m3106_gshared (List_1_t305 * __this, int32_t ___capacity, const MethodInfo* method)
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
		__this->____items_1 = ((UIVertexU5BU5D_t192*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m12599_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t305_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((UIVertexU5BU5D_t192*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12600_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t305 *)__this);
		Enumerator_t1897  L_0 = (( Enumerator_t1897  (*) (List_1_t305 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t1897  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12601_gshared (List_1_t305 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12602_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t305 *)__this);
		Enumerator_t1897  L_0 = (( Enumerator_t1897  (*) (List_1_t305 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t1897  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t List_1_System_Collections_IList_Add_m12603_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t305 *)__this);
			VirtActionInvoker1< UIVertex_t199  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (List_1_t305 *)__this, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m12604_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t305 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, UIVertex_t199  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T) */, (List_1_t305 *)__this, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12605_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t305 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (List_1_t305 *)__this, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" void List_1_System_Collections_IList_Insert_m12606_gshared (List_1_t305 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
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
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t305 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t305 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t199  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, (List_1_t305 *)__this, (int32_t)L_1, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m12607_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t305 *)__this);
			VirtFuncInvoker1< bool, UIVertex_t199  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T) */, (List_1_t305 *)__this, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12608_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12609_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12610_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12611_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12612_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12613_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t305 *)__this);
		UIVertex_t199  L_1 = (UIVertex_t199 )VirtFuncInvoker1< UIVertex_t199 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (List_1_t305 *)__this, (int32_t)L_0);
		UIVertex_t199  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" void List_1_System_Collections_IList_set_Item_m12614_gshared (List_1_t305 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
			NullCheck((List_1_t305 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t199  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, (List_1_t305 *)__this, (int32_t)L_0, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" void List_1_Add_m12615_gshared (List_1_t305 * __this, UIVertex_t199  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		UIVertexU5BU5D_t192* L_1 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t305 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		UIVertexU5BU5D_t192* L_2 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UIVertex_t199  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_2, L_5, sizeof(UIVertex_t199 ))) = (UIVertex_t199 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m12616_gshared (List_1_t305 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UIVertexU5BU5D_t192* L_3 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t305 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t305 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t305 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12617_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t305 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		UIVertexU5BU5D_t192* L_5 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< UIVertexU5BU5D_t192*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (UIVertexU5BU5D_t192*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m12618_gshared (List_1_t305 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t199  V_0 = {0};
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			UIVertex_t199  L_3 = (UIVertex_t199 )InterfaceFuncInvoker0< UIVertex_t199  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (UIVertex_t199 )L_3;
			UIVertex_t199  L_4 = V_0;
			NullCheck((List_1_t305 *)__this);
			VirtActionInvoker1< UIVertex_t199  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (List_1_t305 *)__this, (UIVertex_t199 )L_4);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12619_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t305 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t305 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t305 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1898 * List_1_AsReadOnly_m12620_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1898 * L_0 = (ReadOnlyCollection_1_t1898 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t1898 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m12621_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		UIVertexU5BU5D_t192* L_1 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m12622_gshared (List_1_t305 * __this, UIVertex_t199  ___item, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		UIVertex_t199  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192*, UIVertex_t199 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t192*)L_0, (UIVertex_t199 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void List_1_CopyTo_m12623_gshared (List_1_t305 * __this, UIVertexU5BU5D_t192* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		UIVertexU5BU5D_t192* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.UIVertex>
#include "mscorlib_System_Predicate_1_gen_17.h"
extern TypeInfo* UIVertex_t199_il2cpp_TypeInfo_var;
extern "C" UIVertex_t199  List_1_Find_m12624_gshared (List_1_t305 * __this, Predicate_1_t1902 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	UIVertex_t199  V_1 = {0};
	UIVertex_t199  G_B3_0 = {0};
	{
		Predicate_1_t1902 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1902 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1902 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t1902 * L_2 = ___match;
		NullCheck((List_1_t305 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t305 *, int32_t, int32_t, Predicate_1_t1902 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t305 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t1902 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		UIVertexU5BU5D_t192* L_5 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_5, L_7, sizeof(UIVertex_t199 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (UIVertex_t199_il2cpp_TypeInfo_var, (&V_1));
		UIVertex_t199  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void List_1_CheckMatch_m12625_gshared (Object_t * __this /* static, unused */, Predicate_1_t1902 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t1902 * L_0 = ___match;
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
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12626_gshared (List_1_t305 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1902 * ___match, const MethodInfo* method)
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
		Predicate_1_t1902 * L_3 = ___match;
		UIVertexU5BU5D_t192* L_4 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t1902 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t1902 *, UIVertex_t199 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1902 *)L_3, (UIVertex_t199 )(*(UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_4, L_6, sizeof(UIVertex_t199 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1897  List_1_GetEnumerator_m12627_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1897  L_0 = {0};
		(( void (*) (Enumerator_t1897 *, List_1_t305 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12628_gshared (List_1_t305 * __this, UIVertex_t199  ___item, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		UIVertex_t199  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192*, UIVertex_t199 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t192*)L_0, (UIVertex_t199 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12629_gshared (List_1_t305 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
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
		UIVertexU5BU5D_t192* L_5 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_6 = ___start;
		UIVertexU5BU5D_t192* L_7 = (UIVertexU5BU5D_t192*)(__this->____items_1);
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
		UIVertexU5BU5D_t192* L_15 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_CheckIndex_m12630_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12631_gshared (List_1_t305 * __this, int32_t ___index, UIVertex_t199  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t305 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		UIVertexU5BU5D_t192* L_2 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t305 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t305 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		UIVertexU5BU5D_t192* L_4 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_5 = ___index;
		UIVertex_t199  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_4, L_5, sizeof(UIVertex_t199 ))) = (UIVertex_t199 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2713;
extern "C" void List_1_CheckCollection_m12632_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m12633_gshared (List_1_t305 * __this, UIVertex_t199  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UIVertex_t199  L_0 = ___item;
		NullCheck((List_1_t305 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (List_1_t305 *)__this, (UIVertex_t199 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t305 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, (List_1_t305 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12634_gshared (List_1_t305 * __this, Predicate_1_t1902 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1902 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1902 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1902 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t1902 * L_1 = ___match;
		UIVertexU5BU5D_t192* L_2 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t1902 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t1902 *, UIVertex_t199 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1902 *)L_1, (UIVertex_t199 )(*(UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_2, L_4, sizeof(UIVertex_t199 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
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
		Predicate_1_t1902 * L_13 = ___match;
		UIVertexU5BU5D_t192* L_14 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t1902 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t1902 *, UIVertex_t199 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1902 *)L_13, (UIVertex_t199 )(*(UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_14, L_16, sizeof(UIVertex_t199 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		UIVertexU5BU5D_t192* L_18 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		UIVertexU5BU5D_t192* L_21 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_18, L_20, sizeof(UIVertex_t199 ))) = (UIVertex_t199 )(*(UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_21, L_23, sizeof(UIVertex_t199 )));
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
		UIVertexU5BU5D_t192* L_29 = (UIVertexU5BU5D_t192*)(__this->____items_1);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_RemoveAt_m12635_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method)
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
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t305 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		UIVertexU5BU5D_t192* L_5 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m12636_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4137(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m12637_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t1903 * L_2 = (( Comparer_1_t1903 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t192*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.UIVertex>
#include "mscorlib_System_Comparison_1_gen_17.h"
extern "C" void List_1_Sort_m12638_gshared (List_1_t305 * __this, Comparison_1_t1905 * ___comparison, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t1905 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192*, int32_t, Comparison_1_t1905 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t192*)L_0, (int32_t)L_1, (Comparison_1_t1905 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t192* List_1_ToArray_m12639_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	UIVertexU5BU5D_t192* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (UIVertexU5BU5D_t192*)((UIVertexU5BU5D_t192*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		UIVertexU5BU5D_t192* L_1 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		UIVertexU5BU5D_t192* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		UIVertexU5BU5D_t192* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m12640_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t305 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2130_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t192* L_0 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m2131_gshared (List_1_t305 * __this, int32_t ___value, const MethodInfo* method)
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
		UIVertexU5BU5D_t192** L_3 = (UIVertexU5BU5D_t192**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t192**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t192**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m12641_gshared (List_1_t305 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" UIVertex_t199  List_1_get_Item_m12642_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method)
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
		UIVertexU5BU5D_t192* L_3 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_3, L_5, sizeof(UIVertex_t199 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_set_Item_m12643_gshared (List_1_t305 * __this, int32_t ___index, UIVertex_t199  ___value, const MethodInfo* method)
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
		NullCheck((List_1_t305 *)__this);
		(( void (*) (List_1_t305 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t305 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
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
		UIVertexU5BU5D_t192* L_4 = (UIVertexU5BU5D_t192*)(__this->____items_1);
		int32_t L_5 = ___index;
		UIVertex_t199  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_4, L_5, sizeof(UIVertex_t199 ))) = (UIVertex_t199 )L_6;
		return;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
// System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
extern "C" UIVertex_t199  Array_InternalArray__get_Item_TisUIVertex_t199_m16895_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUIVertex_t199_m16895(__this, p0, method) (( UIVertex_t199  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUIVertex_t199_m16895_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12644_gshared (InternalEnumerator_1_t1896 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12645_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method)
{
	{
		UIVertex_t199  L_0 = (( UIVertex_t199  (*) (InternalEnumerator_1_t1896 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1896 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertex_t199  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12646_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12647_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" UIVertex_t199  InternalEnumerator_1_get_Current_m12648_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method)
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
		UIVertex_t199  L_8 = (( UIVertex_t199  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
extern "C" void Enumerator__ctor_m12649_gshared (Enumerator_t1897 * __this, List_1_t305 * ___l, const MethodInfo* method)
{
	{
		List_1_t305 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t305 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12650_gshared (Enumerator_t1897 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t1897 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1897 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		UIVertex_t199  L_2 = (UIVertex_t199 )(__this->___current_3);
		UIVertex_t199  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::Dispose()
extern "C" void Enumerator_Dispose_m12651_gshared (Enumerator_t1897 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t305 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2711;
extern "C" void Enumerator_VerifyState_m12652_gshared (Enumerator_t1897 * __this, const MethodInfo* method)
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
		List_1_t305 * L_0 = (List_1_t305 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t1897  L_1 = (*(Enumerator_t1897 *)__this);
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
		List_1_t305 * L_7 = (List_1_t305 *)(__this->___l_0);
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
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12653_gshared (Enumerator_t1897 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t1897 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1897 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t305 * L_2 = (List_1_t305 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t305 * L_4 = (List_1_t305 *)(__this->___l_0);
		NullCheck(L_4);
		UIVertexU5BU5D_t192* L_5 = (UIVertexU5BU5D_t192*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UIVertex_t199 *)(UIVertex_t199 *)SZArrayLdElema(L_5, L_9, sizeof(UIVertex_t199 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::get_Current()
extern "C" UIVertex_t199  Enumerator_get_Current_m12654_gshared (Enumerator_t1897 * __this, const MethodInfo* method)
{
	{
		UIVertex_t199  L_0 = (UIVertex_t199 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1249;
extern "C" void ReadOnlyCollection_1__ctor_m12655_gshared (ReadOnlyCollection_1_t1898 * __this, Object_t* ___list, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12656_gshared (ReadOnlyCollection_1_t1898 * __this, UIVertex_t199  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12657_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12658_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, UIVertex_t199  ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12659_gshared (ReadOnlyCollection_1_t1898 * __this, UIVertex_t199  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12660_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" UIVertex_t199  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12661_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t1898 *)__this);
		UIVertex_t199  L_1 = (UIVertex_t199 )VirtFuncInvoker1< UIVertex_t199 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1898 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12662_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, UIVertex_t199  ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12663_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12664_gshared (ReadOnlyCollection_1_t1898 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12665_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
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
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m12666_gshared (ReadOnlyCollection_1_t1898 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m12667_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m12668_gshared (ReadOnlyCollection_1_t1898 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t199  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12669_gshared (ReadOnlyCollection_1_t1898 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m12670_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m12671_gshared (ReadOnlyCollection_1_t1898 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12672_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12673_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12674_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12675_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12676_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m12677_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t199  L_2 = (UIVertex_t199 )InterfaceFuncInvoker1< UIVertex_t199 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		UIVertex_t199  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m12678_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m12679_gshared (ReadOnlyCollection_1_t1898 * __this, UIVertex_t199  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t199  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t199  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UIVertex_t199 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m12680_gshared (ReadOnlyCollection_1_t1898 * __this, UIVertexU5BU5D_t192* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertexU5BU5D_t192* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UIVertexU5BU5D_t192*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UIVertexU5BU5D_t192*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m12681_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m12682_gshared (ReadOnlyCollection_1_t1898 * __this, UIVertex_t199  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t199  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (UIVertex_t199 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m12683_gshared (ReadOnlyCollection_1_t1898 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t199  ReadOnlyCollection_1_get_Item_m12684_gshared (ReadOnlyCollection_1_t1898 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t199  L_2 = (UIVertex_t199 )InterfaceFuncInvoker1< UIVertex_t199 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m12685_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t305 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t305 * L_0 = (List_1_t305 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t305 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t305 *)L_0;
		List_1_t305 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t305 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12686_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12687_gshared (Collection_1_t1899 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12688_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12689_gshared (Collection_1_t1899 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		UIVertex_t199  L_4 = (( UIVertex_t199  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t199  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t1899 *)__this, (int32_t)L_2, (UIVertex_t199 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12690_gshared (Collection_1_t1899 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t199  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12691_gshared (Collection_1_t1899 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12692_gshared (Collection_1_t1899 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UIVertex_t199  L_2 = (( UIVertex_t199  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t199  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t1899 *)__this, (int32_t)L_0, (UIVertex_t199 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12693_gshared (Collection_1_t1899 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		UIVertex_t199  L_2 = (( UIVertex_t199  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1899 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T) */, (Collection_1_t1899 *)__this, (UIVertex_t199 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t1899 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m12694_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12695_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m12696_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m12697_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12698_gshared (Collection_1_t1899 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t199  L_2 = (UIVertex_t199 )InterfaceFuncInvoker1< UIVertex_t199 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		UIVertex_t199  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12699_gshared (Collection_1_t1899 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UIVertex_t199  L_2 = (( UIVertex_t199  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t199  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T) */, (Collection_1_t1899 *)__this, (int32_t)L_0, (UIVertex_t199 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Add(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" void Collection_1_Add_m12700_gshared (Collection_1_t1899 * __this, UIVertex_t199  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		UIVertex_t199  L_3 = ___item;
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t199  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t1899 *)__this, (int32_t)L_2, (UIVertex_t199 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Clear()
extern "C" void Collection_1_Clear_m12701_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ClearItems() */, (Collection_1_t1899 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ClearItems()
extern "C" void Collection_1_ClearItems_m12702_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool Collection_1_Contains_m12703_gshared (Collection_1_t1899 * __this, UIVertex_t199  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t199  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t199  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UIVertex_t199 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m12704_gshared (Collection_1_t1899 * __this, UIVertexU5BU5D_t192* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertexU5BU5D_t192* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UIVertexU5BU5D_t192*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UIVertexU5BU5D_t192*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12705_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12706_gshared (Collection_1_t1899 * __this, UIVertex_t199  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t199  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (UIVertex_t199 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12707_gshared (Collection_1_t1899 * __this, int32_t ___index, UIVertex_t199  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UIVertex_t199  L_1 = ___item;
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t199  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t1899 *)__this, (int32_t)L_0, (UIVertex_t199 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12708_gshared (Collection_1_t1899 * __this, int32_t ___index, UIVertex_t199  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UIVertex_t199  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UIVertex_t199  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (UIVertex_t199 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool Collection_1_Remove_m12709_gshared (Collection_1_t1899 * __this, UIVertex_t199  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UIVertex_t199  L_0 = ___item;
		NullCheck((Collection_1_t1899 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T) */, (Collection_1_t1899 *)__this, (UIVertex_t199 )L_0);
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
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t1899 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12710_gshared (Collection_1_t1899 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t1899 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12711_gshared (Collection_1_t1899 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12712_gshared (Collection_1_t1899 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t199  Collection_1_get_Item_m12713_gshared (Collection_1_t1899 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t199  L_2 = (UIVertex_t199 )InterfaceFuncInvoker1< UIVertex_t199 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12714_gshared (Collection_1_t1899 * __this, int32_t ___index, UIVertex_t199  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UIVertex_t199  L_1 = ___value;
		NullCheck((Collection_1_t1899 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t199  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T) */, (Collection_1_t1899 *)__this, (int32_t)L_0, (UIVertex_t199 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12715_gshared (Collection_1_t1899 * __this, int32_t ___index, UIVertex_t199  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UIVertex_t199  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UIVertex_t199  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (UIVertex_t199 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m12716_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" UIVertex_t199  Collection_1_ConvertItem_m12717_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
		return ((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m12718_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m12719_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t947_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m12720_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m12721_gshared (EqualityComparer_1_t1900 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2430_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m12722_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t1900_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t1900 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1901 * L_8 = (DefaultComparer_t1901 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t1900_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12723_gshared (EqualityComparer_1_t1900 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t1900 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T) */, (EqualityComparer_1_t1900 *)__this, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12724_gshared (EqualityComparer_1_t1900 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t1900 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, UIVertex_t199 , UIVertex_t199  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T) */, (EqualityComparer_1_t1900 *)__this, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::get_Default()
extern "C" EqualityComparer_1_t1900 * EqualityComparer_1_get_Default_m12725_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t1900 * L_0 = ((EqualityComparer_1_t1900_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12726_gshared (DefaultComparer_t1901 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1900 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1900 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1900 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" int32_t DefaultComparer_GetHashCode_m12727_gshared (DefaultComparer_t1901 * __this, UIVertex_t199  ___obj, const MethodInfo* method)
{
	{
		UIVertex_t199  L_0 = ___obj;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12728_gshared (DefaultComparer_t1901 * __this, UIVertex_t199  ___x, UIVertex_t199  ___y, const MethodInfo* method)
{
	{
		UIVertex_t199  L_0 = ___x;
		goto IL_0015;
	}
	{
		UIVertex_t199  L_1 = ___y;
		UIVertex_t199  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		UIVertex_t199  L_4 = ___y;
		UIVertex_t199  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m12729_gshared (Predicate_1_t1902 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" bool Predicate_1_Invoke_m12730_gshared (Predicate_1_t1902 * __this, UIVertex_t199  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m12730((Predicate_1_t1902 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UIVertex_t199  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, UIVertex_t199  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UIVertex_t199_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m12731_gshared (Predicate_1_t1902 * __this, UIVertex_t199  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UIVertex_t199_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12732_gshared (Predicate_1_t1902 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m12733_gshared (Comparer_1_t1903 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2431_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m12734_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t1903_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t1903 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1904 * L_8 = (DefaultComparer_t1904 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t1903_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12735_gshared (Comparer_1_t1903 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t1903 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UIVertex_t199 , UIVertex_t199  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::Compare(T,T) */, (Comparer_1_t1903 *)__this, (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UIVertex_t199 )((*(UIVertex_t199 *)((UIVertex_t199 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9336(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::get_Default()
extern "C" Comparer_1_t1903 * Comparer_1_get_Default_m12736_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t1903 * L_0 = ((Comparer_1_t1903_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12737_gshared (DefaultComparer_t1904 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t1903 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t1903 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t1903 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>::Compare(T,T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2714;
extern "C" int32_t DefaultComparer_Compare_m12738_gshared (DefaultComparer_t1904 * __this, UIVertex_t199  ___x, UIVertex_t199  ___y, const MethodInfo* method)
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
		UIVertex_t199  L_0 = ___x;
		goto IL_001e;
	}
	{
		UIVertex_t199  L_1 = ___y;
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
		UIVertex_t199  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		UIVertex_t199  L_3 = ___x;
		UIVertex_t199  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		UIVertex_t199  L_6 = ___x;
		UIVertex_t199  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		UIVertex_t199  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t199  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UIVertex>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (UIVertex_t199 )L_9);
		return L_10;
	}

IL_004d:
	{
		UIVertex_t199  L_11 = ___x;
		UIVertex_t199  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1671_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		UIVertex_t199  L_14 = ___x;
		UIVertex_t199  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		UIVertex_t199  L_17 = ___y;
		UIVertex_t199  L_18 = L_17;
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
// System.Comparison`1<UnityEngine.UIVertex>
#include "mscorlib_System_Comparison_1_gen_17MethodDeclarations.h"
// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m12739_gshared (Comparison_1_t1905 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" int32_t Comparison_1_Invoke_m12740_gshared (Comparison_1_t1905 * __this, UIVertex_t199  ___x, UIVertex_t199  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m12740((Comparison_1_t1905 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UIVertex_t199  ___x, UIVertex_t199  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, UIVertex_t199  ___x, UIVertex_t199  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UIVertex_t199_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m12741_gshared (Comparison_1_t1905 * __this, UIVertex_t199  ___x, UIVertex_t199  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UIVertex_t199_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(UIVertex_t199_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12742_gshared (Comparison_1_t1905 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17.h"
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C" Vector2_t11  Array_InternalArray__get_Item_TisVector2_t11_m16918_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector2_t11_m16918(__this, p0, method) (( Vector2_t11  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector2_t11_m16918_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13045_gshared (InternalEnumerator_1_t1924 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13046_gshared (InternalEnumerator_1_t1924 * __this, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = (( Vector2_t11  (*) (InternalEnumerator_1_t1924 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1924 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector2_t11  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13047_gshared (InternalEnumerator_1_t1924 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13048_gshared (InternalEnumerator_1_t1924 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" Vector2_t11  InternalEnumerator_1_get_Current_m13049_gshared (InternalEnumerator_1_t1924 * __this, const MethodInfo* method)
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
		Vector2_t11  L_8 = (( Vector2_t11  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18.h"
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18MethodDeclarations.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisContentType_t176_m16929_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisContentType_t176_m16929(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisContentType_t176_m16929_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13050_gshared (InternalEnumerator_1_t1925 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13051_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t1925 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1925 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13052_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13053_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" int32_t InternalEnumerator_1_get_Current_m13054_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method)
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
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19.h"
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19MethodDeclarations.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
extern "C" UILineInfo_t356  Array_InternalArray__get_Item_TisUILineInfo_t356_m16940_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUILineInfo_t356_m16940(__this, p0, method) (( UILineInfo_t356  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUILineInfo_t356_m16940_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13134_gshared (InternalEnumerator_1_t1931 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13135_gshared (InternalEnumerator_1_t1931 * __this, const MethodInfo* method)
{
	{
		UILineInfo_t356  L_0 = (( UILineInfo_t356  (*) (InternalEnumerator_1_t1931 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1931 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UILineInfo_t356  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13136_gshared (InternalEnumerator_1_t1931 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13137_gshared (InternalEnumerator_1_t1931 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" UILineInfo_t356  InternalEnumerator_1_get_Current_m13138_gshared (InternalEnumerator_1_t1931 * __this, const MethodInfo* method)
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
		UILineInfo_t356  L_8 = (( UILineInfo_t356  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20MethodDeclarations.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
extern "C" UICharInfo_t358  Array_InternalArray__get_Item_TisUICharInfo_t358_m16951_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUICharInfo_t358_m16951(__this, p0, method) (( UICharInfo_t358  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUICharInfo_t358_m16951_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13139_gshared (InternalEnumerator_1_t1932 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13140_gshared (InternalEnumerator_1_t1932 * __this, const MethodInfo* method)
{
	{
		UICharInfo_t358  L_0 = (( UICharInfo_t358  (*) (InternalEnumerator_1_t1932 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1932 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UICharInfo_t358  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13141_gshared (InternalEnumerator_1_t1932 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13142_gshared (InternalEnumerator_1_t1932 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" UICharInfo_t358  InternalEnumerator_1_get_Current_m13143_gshared (InternalEnumerator_1_t1932 * __this, const MethodInfo* method)
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
		UICharInfo_t358  L_8 = (( UICharInfo_t358  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
