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

// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33.h"
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Byte
#include "mscorlib_System_Byte.h"
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
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t596_m17071_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t596_m17071(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisByte_t596_m17071_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15059_gshared (InternalEnumerator_1_t2077 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15060_gshared (InternalEnumerator_1_t2077 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (InternalEnumerator_1_t2077 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2077 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15061_gshared (InternalEnumerator_1_t2077 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15062_gshared (InternalEnumerator_1_t2077 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" uint8_t InternalEnumerator_1_get_Current_m15063_gshared (InternalEnumerator_1_t2077 * __this, const MethodInfo* method)
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
		uint8_t L_8 = (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36.h"
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36MethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
extern "C" IntPtr_t Array_InternalArray__get_Item_TisIntPtr_t_m17082_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisIntPtr_t_m17082(__this, p0, method) (( IntPtr_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisIntPtr_t_m17082_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15259_gshared (InternalEnumerator_1_t2090 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15260_gshared (InternalEnumerator_1_t2090 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (( IntPtr_t (*) (InternalEnumerator_1_t2090 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2090 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		IntPtr_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15261_gshared (InternalEnumerator_1_t2090 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15262_gshared (InternalEnumerator_1_t2090 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" IntPtr_t InternalEnumerator_1_get_Current_m15263_gshared (InternalEnumerator_1_t2090 * __this, const MethodInfo* method)
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
		IntPtr_t L_8 = (( IntPtr_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge_0.h"
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge_0MethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAdsDelegate_2__ctor_m15265_gshared (UnityAdsDelegate_2_t2091 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::Invoke(T1,T2)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void UnityAdsDelegate_2_Invoke_m15266_gshared (UnityAdsDelegate_2_t2091 * __this, Object_t * ___p1, bool ___p2, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_2_Invoke_m15266((UnityAdsDelegate_2_t2091 *)__this->___prev_9,___p1, ___p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___p1, bool ___p2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___p1, ___p2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___p1, bool ___p2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___p1, ___p2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___p2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___p1, ___p2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t322_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m15268_gshared (UnityAdsDelegate_2_t2091 * __this, Object_t * ___p1, bool ___p2, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___p1;
	__d_args[1] = Box(Boolean_t322_il2cpp_TypeInfo_var, &___p2);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m15270_gshared (UnityAdsDelegate_2_t2091 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37.h"
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37MethodDeclarations.h"
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.ContactPoint>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.ContactPoint>(System.Int32)
extern "C" ContactPoint_t466  Array_InternalArray__get_Item_TisContactPoint_t466_m17093_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisContactPoint_t466_m17093(__this, p0, method) (( ContactPoint_t466  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisContactPoint_t466_m17093_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15271_gshared (InternalEnumerator_1_t2092 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15272_gshared (InternalEnumerator_1_t2092 * __this, const MethodInfo* method)
{
	{
		ContactPoint_t466  L_0 = (( ContactPoint_t466  (*) (InternalEnumerator_1_t2092 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2092 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ContactPoint_t466  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15273_gshared (InternalEnumerator_1_t2092 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15274_gshared (InternalEnumerator_1_t2092 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" ContactPoint_t466  InternalEnumerator_1_get_Current_m15275_gshared (InternalEnumerator_1_t2092 * __this, const MethodInfo* method)
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
		ContactPoint_t466  L_8 = (( ContactPoint_t466  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38.h"
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38MethodDeclarations.h"
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.ContactPoint2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.ContactPoint2D>(System.Int32)
extern "C" ContactPoint2D_t471  Array_InternalArray__get_Item_TisContactPoint2D_t471_m17104_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisContactPoint2D_t471_m17104(__this, p0, method) (( ContactPoint2D_t471  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisContactPoint2D_t471_m17104_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15369_gshared (InternalEnumerator_1_t2099 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15370_gshared (InternalEnumerator_1_t2099 * __this, const MethodInfo* method)
{
	{
		ContactPoint2D_t471  L_0 = (( ContactPoint2D_t471  (*) (InternalEnumerator_1_t2099 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2099 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ContactPoint2D_t471  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15371_gshared (InternalEnumerator_1_t2099 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15372_gshared (InternalEnumerator_1_t2099 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" ContactPoint2D_t471  InternalEnumerator_1_get_Current_m15373_gshared (InternalEnumerator_1_t2099 * __this, const MethodInfo* method)
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
		ContactPoint2D_t471  L_8 = (( ContactPoint2D_t471  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39.h"
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39MethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" float Array_InternalArray__get_Item_TisSingle_t321_m17115_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSingle_t321_m17115(__this, p0, method) (( float (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSingle_t321_m17115_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15374_gshared (InternalEnumerator_1_t2100 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15375_gshared (InternalEnumerator_1_t2100 * __this, const MethodInfo* method)
{
	{
		float L_0 = (( float (*) (InternalEnumerator_1_t2100 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2100 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15376_gshared (InternalEnumerator_1_t2100 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15377_gshared (InternalEnumerator_1_t2100 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" float InternalEnumerator_1_get_Current_m15378_gshared (InternalEnumerator_1_t2100 * __this, const MethodInfo* method)
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
		float L_8 = (( float (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_40.h"
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_40MethodDeclarations.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" Keyframe_t486  Array_InternalArray__get_Item_TisKeyframe_t486_m17126_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyframe_t486_m17126(__this, p0, method) (( Keyframe_t486  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyframe_t486_m17126_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15379_gshared (InternalEnumerator_1_t2101 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15380_gshared (InternalEnumerator_1_t2101 * __this, const MethodInfo* method)
{
	{
		Keyframe_t486  L_0 = (( Keyframe_t486  (*) (InternalEnumerator_1_t2101 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2101 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Keyframe_t486  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15381_gshared (InternalEnumerator_1_t2101 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15382_gshared (InternalEnumerator_1_t2101 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" Keyframe_t486  InternalEnumerator_1_get_Current_m15383_gshared (InternalEnumerator_1_t2101 * __this, const MethodInfo* method)
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
		Keyframe_t486  L_8 = (( Keyframe_t486  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_41.h"
// System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_41MethodDeclarations.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.CharacterInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.CharacterInfo>(System.Int32)
extern "C" CharacterInfo_t495  Array_InternalArray__get_Item_TisCharacterInfo_t495_m17137_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisCharacterInfo_t495_m17137(__this, p0, method) (( CharacterInfo_t495  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisCharacterInfo_t495_m17137_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15384_gshared (InternalEnumerator_1_t2102 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15385_gshared (InternalEnumerator_1_t2102 * __this, const MethodInfo* method)
{
	{
		CharacterInfo_t495  L_0 = (( CharacterInfo_t495  (*) (InternalEnumerator_1_t2102 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2102 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		CharacterInfo_t495  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15386_gshared (InternalEnumerator_1_t2102 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15387_gshared (InternalEnumerator_1_t2102 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" CharacterInfo_t495  InternalEnumerator_1_get_Current_m15388_gshared (InternalEnumerator_1_t2102 * __this, const MethodInfo* method)
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
		CharacterInfo_t495  L_8 = (( CharacterInfo_t495  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_32.h"
// System.Predicate`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Predicate_1_gen_35.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7.h"
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_35.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_32MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Predicate_1_gen_35MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7MethodDeclarations.h"
struct UICharInfoU5BU5D_t580;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UICharInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UICharInfo>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUICharInfo_t358_m17150_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t580* p0, UICharInfo_t358  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisUICharInfo_t358_m17150(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580*, UICharInfo_t358 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUICharInfo_t358_m17150_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct UICharInfoU5BU5D_t580;
struct IComparer_1_t2406;
// Declaration System.Void System.Array::Sort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUICharInfo_t358_m17151_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t580* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisUICharInfo_t358_m17151(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisUICharInfo_t358_m17151_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct UICharInfoU5BU5D_t580;
struct Comparison_1_t2111;
// Declaration System.Void System.Array::Sort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisUICharInfo_t358_m17157_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t580* p0, int32_t p1, Comparison_1_t2111 * p2, const MethodInfo* method);
#define Array_Sort_TisUICharInfo_t358_m17157(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580*, int32_t, Comparison_1_t2111 *, const MethodInfo*))Array_Sort_TisUICharInfo_t358_m17157_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct UICharInfoU5BU5D_t580;
// Declaration System.Void System.Array::Resize<UnityEngine.UICharInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UICharInfo>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUICharInfo_t358_m17148_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t580** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisUICharInfo_t358_m17148(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580**, int32_t, const MethodInfo*))Array_Resize_TisUICharInfo_t358_m17148_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m15389_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UICharInfoU5BU5D_t580* L_0 = ((List_1_t497_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15390_gshared (List_1_t497 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t497 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		UICharInfoU5BU5D_t580* L_3 = ((List_1_t497_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t497 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((UICharInfoU5BU5D_t580*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t497 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void List_1__ctor_m3107_gshared (List_1_t497 * __this, int32_t ___capacity, const MethodInfo* method)
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
		__this->____items_1 = ((UICharInfoU5BU5D_t580*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m15391_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t497_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((UICharInfoU5BU5D_t580*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15392_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t497 *)__this);
		Enumerator_t2103  L_0 = (( Enumerator_t2103  (*) (List_1_t497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2103  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15393_gshared (List_1_t497 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15394_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t497 *)__this);
		Enumerator_t2103  L_0 = (( Enumerator_t2103  (*) (List_1_t497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2103  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t List_1_System_Collections_IList_Add_m15395_gshared (List_1_t497 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t497 *)__this);
			VirtActionInvoker1< UICharInfo_t358  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T) */, (List_1_t497 *)__this, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m15396_gshared (List_1_t497 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t497 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, UICharInfo_t358  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T) */, (List_1_t497 *)__this, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15397_gshared (List_1_t497 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t497 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T) */, (List_1_t497 *)__this, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" void List_1_System_Collections_IList_Insert_m15398_gshared (List_1_t497 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
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
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t497 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t497 *)__this);
			VirtActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T) */, (List_1_t497 *)__this, (int32_t)L_1, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m15399_gshared (List_1_t497 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t497 *)__this);
			VirtFuncInvoker1< bool, UICharInfo_t358  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T) */, (List_1_t497 *)__this, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15400_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15401_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15402_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15403_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15404_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15405_gshared (List_1_t497 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t497 *)__this);
		UICharInfo_t358  L_1 = (UICharInfo_t358 )VirtFuncInvoker1< UICharInfo_t358 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32) */, (List_1_t497 *)__this, (int32_t)L_0);
		UICharInfo_t358  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" void List_1_System_Collections_IList_set_Item_m15406_gshared (List_1_t497 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
			NullCheck((List_1_t497 *)__this);
			VirtActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T) */, (List_1_t497 *)__this, (int32_t)L_0, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
extern "C" void List_1_Add_m15407_gshared (List_1_t497 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		UICharInfoU5BU5D_t580* L_1 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t497 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		UICharInfoU5BU5D_t580* L_2 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UICharInfo_t358  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_2, L_5, sizeof(UICharInfo_t358 ))) = (UICharInfo_t358 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m15408_gshared (List_1_t497 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UICharInfoU5BU5D_t580* L_3 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t497 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t497 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15409_gshared (List_1_t497 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t497 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		UICharInfoU5BU5D_t580* L_5 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t580*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (UICharInfoU5BU5D_t580*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m15410_gshared (List_1_t497 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	UICharInfo_t358  V_0 = {0};
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			UICharInfo_t358  L_3 = (UICharInfo_t358 )InterfaceFuncInvoker0< UICharInfo_t358  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (UICharInfo_t358 )L_3;
			UICharInfo_t358  L_4 = V_0;
			NullCheck((List_1_t497 *)__this);
			VirtActionInvoker1< UICharInfo_t358  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T) */, (List_1_t497 *)__this, (UICharInfo_t358 )L_4);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15411_gshared (List_1_t497 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t497 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t497 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t497 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2104 * List_1_AsReadOnly_m15412_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2104 * L_0 = (ReadOnlyCollection_1_t2104 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t2104 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m15413_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		UICharInfoU5BU5D_t580* L_1 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m15414_gshared (List_1_t497 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		UICharInfo_t358  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580*, UICharInfo_t358 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t580*)L_0, (UICharInfo_t358 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void List_1_CopyTo_m15415_gshared (List_1_t497 * __this, UICharInfoU5BU5D_t580* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		UICharInfoU5BU5D_t580* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Predicate_1_gen_35.h"
extern TypeInfo* UICharInfo_t358_il2cpp_TypeInfo_var;
extern "C" UICharInfo_t358  List_1_Find_m15416_gshared (List_1_t497 * __this, Predicate_1_t2108 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICharInfo_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	UICharInfo_t358  V_1 = {0};
	UICharInfo_t358  G_B3_0 = {0};
	{
		Predicate_1_t2108 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2108 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2108 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2108 * L_2 = ___match;
		NullCheck((List_1_t497 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t497 *, int32_t, int32_t, Predicate_1_t2108 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t497 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2108 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		UICharInfoU5BU5D_t580* L_5 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_5, L_7, sizeof(UICharInfo_t358 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (UICharInfo_t358_il2cpp_TypeInfo_var, (&V_1));
		UICharInfo_t358  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void List_1_CheckMatch_m15417_gshared (Object_t * __this /* static, unused */, Predicate_1_t2108 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t2108 * L_0 = ___match;
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
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15418_gshared (List_1_t497 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2108 * ___match, const MethodInfo* method)
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
		Predicate_1_t2108 * L_3 = ___match;
		UICharInfoU5BU5D_t580* L_4 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2108 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2108 *, UICharInfo_t358 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2108 *)L_3, (UICharInfo_t358 )(*(UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_4, L_6, sizeof(UICharInfo_t358 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2103  List_1_GetEnumerator_m15419_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2103  L_0 = {0};
		(( void (*) (Enumerator_t2103 *, List_1_t497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t497 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15420_gshared (List_1_t497 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		UICharInfo_t358  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580*, UICharInfo_t358 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t580*)L_0, (UICharInfo_t358 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15421_gshared (List_1_t497 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
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
		UICharInfoU5BU5D_t580* L_5 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_6 = ___start;
		UICharInfoU5BU5D_t580* L_7 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
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
		UICharInfoU5BU5D_t580* L_15 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_CheckIndex_m15422_gshared (List_1_t497 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15423_gshared (List_1_t497 * __this, int32_t ___index, UICharInfo_t358  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t497 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		UICharInfoU5BU5D_t580* L_2 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t497 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t497 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		UICharInfoU5BU5D_t580* L_4 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_5 = ___index;
		UICharInfo_t358  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_4, L_5, sizeof(UICharInfo_t358 ))) = (UICharInfo_t358 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2713;
extern "C" void List_1_CheckCollection_m15424_gshared (List_1_t497 * __this, Object_t* ___collection, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m15425_gshared (List_1_t497 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UICharInfo_t358  L_0 = ___item;
		NullCheck((List_1_t497 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T) */, (List_1_t497 *)__this, (UICharInfo_t358 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t497 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32) */, (List_1_t497 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15426_gshared (List_1_t497 * __this, Predicate_1_t2108 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2108 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2108 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2108 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t2108 * L_1 = ___match;
		UICharInfoU5BU5D_t580* L_2 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2108 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2108 *, UICharInfo_t358 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2108 *)L_1, (UICharInfo_t358 )(*(UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_2, L_4, sizeof(UICharInfo_t358 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
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
		Predicate_1_t2108 * L_13 = ___match;
		UICharInfoU5BU5D_t580* L_14 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t2108 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t2108 *, UICharInfo_t358 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2108 *)L_13, (UICharInfo_t358 )(*(UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_14, L_16, sizeof(UICharInfo_t358 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		UICharInfoU5BU5D_t580* L_18 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		UICharInfoU5BU5D_t580* L_21 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_18, L_20, sizeof(UICharInfo_t358 ))) = (UICharInfo_t358 )(*(UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_21, L_23, sizeof(UICharInfo_t358 )));
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
		UICharInfoU5BU5D_t580* L_29 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_RemoveAt_m15427_gshared (List_1_t497 * __this, int32_t ___index, const MethodInfo* method)
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
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t497 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		UICharInfoU5BU5D_t580* L_5 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m15428_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4137(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m15429_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t2109 * L_2 = (( Comparer_1_t2109 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t580*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_35.h"
extern "C" void List_1_Sort_m15430_gshared (List_1_t497 * __this, Comparison_1_t2111 * ___comparison, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t2111 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580*, int32_t, Comparison_1_t2111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t580*)L_0, (int32_t)L_1, (Comparison_1_t2111 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t580* List_1_ToArray_m15431_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	UICharInfoU5BU5D_t580* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (UICharInfoU5BU5D_t580*)((UICharInfoU5BU5D_t580*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		UICharInfoU5BU5D_t580* L_1 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		UICharInfoU5BU5D_t580* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		UICharInfoU5BU5D_t580* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15432_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t497 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15433_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t580* L_0 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m15434_gshared (List_1_t497 * __this, int32_t ___value, const MethodInfo* method)
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
		UICharInfoU5BU5D_t580** L_3 = (UICharInfoU5BU5D_t580**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t580**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t580**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15435_gshared (List_1_t497 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" UICharInfo_t358  List_1_get_Item_m15436_gshared (List_1_t497 * __this, int32_t ___index, const MethodInfo* method)
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
		UICharInfoU5BU5D_t580* L_3 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_3, L_5, sizeof(UICharInfo_t358 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_set_Item_m15437_gshared (List_1_t497 * __this, int32_t ___index, UICharInfo_t358  ___value, const MethodInfo* method)
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
		NullCheck((List_1_t497 *)__this);
		(( void (*) (List_1_t497 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t497 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
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
		UICharInfoU5BU5D_t580* L_4 = (UICharInfoU5BU5D_t580*)(__this->____items_1);
		int32_t L_5 = ___index;
		UICharInfo_t358  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_4, L_5, sizeof(UICharInfo_t358 ))) = (UICharInfo_t358 )L_6;
		return;
	}
}
// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
extern "C" void Enumerator__ctor_m15438_gshared (Enumerator_t2103 * __this, List_1_t497 * ___l, const MethodInfo* method)
{
	{
		List_1_t497 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t497 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15439_gshared (Enumerator_t2103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2103 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2103 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		UICharInfo_t358  L_2 = (UICharInfo_t358 )(__this->___current_3);
		UICharInfo_t358  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::Dispose()
extern "C" void Enumerator_Dispose_m15440_gshared (Enumerator_t2103 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t497 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2711;
extern "C" void Enumerator_VerifyState_m15441_gshared (Enumerator_t2103 * __this, const MethodInfo* method)
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
		List_1_t497 * L_0 = (List_1_t497 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2103  L_1 = (*(Enumerator_t2103 *)__this);
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
		List_1_t497 * L_7 = (List_1_t497 *)(__this->___l_0);
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
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15442_gshared (Enumerator_t2103 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2103 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2103 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t497 * L_2 = (List_1_t497 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t497 * L_4 = (List_1_t497 *)(__this->___l_0);
		NullCheck(L_4);
		UICharInfoU5BU5D_t580* L_5 = (UICharInfoU5BU5D_t580*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UICharInfo_t358 *)(UICharInfo_t358 *)SZArrayLdElema(L_5, L_9, sizeof(UICharInfo_t358 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::get_Current()
extern "C" UICharInfo_t358  Enumerator_get_Current_m15443_gshared (Enumerator_t2103 * __this, const MethodInfo* method)
{
	{
		UICharInfo_t358  L_0 = (UICharInfo_t358 )(__this->___current_3);
		return L_0;
	}
}
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_7MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1249;
extern "C" void ReadOnlyCollection_1__ctor_m15444_gshared (ReadOnlyCollection_1_t2104 * __this, Object_t* ___list, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15445_gshared (ReadOnlyCollection_1_t2104 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15446_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15447_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, UICharInfo_t358  ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15448_gshared (ReadOnlyCollection_1_t2104 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15449_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" UICharInfo_t358  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15450_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2104 *)__this);
		UICharInfo_t358  L_1 = (UICharInfo_t358 )VirtFuncInvoker1< UICharInfo_t358 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2104 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15451_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, UICharInfo_t358  ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15452_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15453_gshared (ReadOnlyCollection_1_t2104 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15454_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
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
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m15455_gshared (ReadOnlyCollection_1_t2104 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m15456_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m15457_gshared (ReadOnlyCollection_1_t2104 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UICharInfo_t358  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15458_gshared (ReadOnlyCollection_1_t2104 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m15459_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m15460_gshared (ReadOnlyCollection_1_t2104 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15461_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15462_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15463_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15464_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15465_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m15466_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UICharInfo_t358  L_2 = (UICharInfo_t358 )InterfaceFuncInvoker1< UICharInfo_t358 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		UICharInfo_t358  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m15467_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m15468_gshared (ReadOnlyCollection_1_t2104 * __this, UICharInfo_t358  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UICharInfo_t358  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UICharInfo_t358  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UICharInfo_t358 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m15469_gshared (ReadOnlyCollection_1_t2104 * __this, UICharInfoU5BU5D_t580* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UICharInfoU5BU5D_t580* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t580*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UICharInfoU5BU5D_t580*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m15470_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m15471_gshared (ReadOnlyCollection_1_t2104 * __this, UICharInfo_t358  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UICharInfo_t358  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (UICharInfo_t358 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m15472_gshared (ReadOnlyCollection_1_t2104 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t358  ReadOnlyCollection_1_get_Item_m15473_gshared (ReadOnlyCollection_1_t2104 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UICharInfo_t358  L_2 = (UICharInfo_t358 )InterfaceFuncInvoker1< UICharInfo_t358 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_7.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m15474_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t497 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t497 * L_0 = (List_1_t497 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t497 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t497 *)L_0;
		List_1_t497 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t497 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15475_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m15476_gshared (Collection_1_t2105 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m15477_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m15478_gshared (Collection_1_t2105 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		UICharInfo_t358  L_4 = (( UICharInfo_t358  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::InsertItem(System.Int32,T) */, (Collection_1_t2105 *)__this, (int32_t)L_2, (UICharInfo_t358 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m15479_gshared (Collection_1_t2105 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UICharInfo_t358  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m15480_gshared (Collection_1_t2105 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m15481_gshared (Collection_1_t2105 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UICharInfo_t358  L_2 = (( UICharInfo_t358  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::InsertItem(System.Int32,T) */, (Collection_1_t2105 *)__this, (int32_t)L_0, (UICharInfo_t358 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m15482_gshared (Collection_1_t2105 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		UICharInfo_t358  L_2 = (( UICharInfo_t358  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2105 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IndexOf(T) */, (Collection_1_t2105 *)__this, (UICharInfo_t358 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::RemoveItem(System.Int32) */, (Collection_1_t2105 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m15483_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m15484_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m15485_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m15486_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m15487_gshared (Collection_1_t2105 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UICharInfo_t358  L_2 = (UICharInfo_t358 )InterfaceFuncInvoker1< UICharInfo_t358 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		UICharInfo_t358  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m15488_gshared (Collection_1_t2105 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UICharInfo_t358  L_2 = (( UICharInfo_t358  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::SetItem(System.Int32,T) */, (Collection_1_t2105 *)__this, (int32_t)L_0, (UICharInfo_t358 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Add(T)
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
extern "C" void Collection_1_Add_m15489_gshared (Collection_1_t2105 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		UICharInfo_t358  L_3 = ___item;
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::InsertItem(System.Int32,T) */, (Collection_1_t2105 *)__this, (int32_t)L_2, (UICharInfo_t358 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Clear()
extern "C" void Collection_1_Clear_m15490_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::ClearItems() */, (Collection_1_t2105 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::ClearItems()
extern "C" void Collection_1_ClearItems_m15491_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool Collection_1_Contains_m15492_gshared (Collection_1_t2105 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UICharInfo_t358  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UICharInfo_t358  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UICharInfo_t358 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m15493_gshared (Collection_1_t2105 * __this, UICharInfoU5BU5D_t580* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UICharInfoU5BU5D_t580* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t580*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UICharInfoU5BU5D_t580*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m15494_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m15495_gshared (Collection_1_t2105 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UICharInfo_t358  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (UICharInfo_t358 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m15496_gshared (Collection_1_t2105 * __this, int32_t ___index, UICharInfo_t358  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UICharInfo_t358  L_1 = ___item;
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::InsertItem(System.Int32,T) */, (Collection_1_t2105 *)__this, (int32_t)L_0, (UICharInfo_t358 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m15497_gshared (Collection_1_t2105 * __this, int32_t ___index, UICharInfo_t358  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UICharInfo_t358  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (UICharInfo_t358 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool Collection_1_Remove_m15498_gshared (Collection_1_t2105 * __this, UICharInfo_t358  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UICharInfo_t358  L_0 = ___item;
		NullCheck((Collection_1_t2105 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IndexOf(T) */, (Collection_1_t2105 *)__this, (UICharInfo_t358 )L_0);
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
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::RemoveItem(System.Int32) */, (Collection_1_t2105 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m15499_gshared (Collection_1_t2105 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::RemoveItem(System.Int32) */, (Collection_1_t2105 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m15500_gshared (Collection_1_t2105 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t Collection_1_get_Count_m15501_gshared (Collection_1_t2105 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t358  Collection_1_get_Item_m15502_gshared (Collection_1_t2105 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UICharInfo_t358  L_2 = (UICharInfo_t358 )InterfaceFuncInvoker1< UICharInfo_t358 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m15503_gshared (Collection_1_t2105 * __this, int32_t ___index, UICharInfo_t358  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UICharInfo_t358  L_1 = ___value;
		NullCheck((Collection_1_t2105 *)__this);
		VirtActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::SetItem(System.Int32,T) */, (Collection_1_t2105 *)__this, (int32_t)L_0, (UICharInfo_t358 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m15504_gshared (Collection_1_t2105 * __this, int32_t ___index, UICharInfo_t358  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UICharInfo_t358  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UICharInfo_t358  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (UICharInfo_t358 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m15505_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" UICharInfo_t358  Collection_1_ConvertItem_m15506_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
		return ((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m15507_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m15508_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t947_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m15509_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_7.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_7MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m15510_gshared (EqualityComparer_1_t2106 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2430_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m15511_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t2106_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2106 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2107 * L_8 = (DefaultComparer_t2107 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2107 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2106_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15512_gshared (EqualityComparer_1_t2106 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2106 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::GetHashCode(T) */, (EqualityComparer_1_t2106 *)__this, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15513_gshared (EqualityComparer_1_t2106 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2106 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, UICharInfo_t358 , UICharInfo_t358  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::Equals(T,T) */, (EqualityComparer_1_t2106 *)__this, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::get_Default()
extern "C" EqualityComparer_1_t2106 * EqualityComparer_1_get_Default_m15514_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2106 * L_0 = ((EqualityComparer_1_t2106_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m15515_gshared (DefaultComparer_t2107 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2106 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2106 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
extern "C" int32_t DefaultComparer_GetHashCode_m15516_gshared (DefaultComparer_t2107 * __this, UICharInfo_t358  ___obj, const MethodInfo* method)
{
	{
		UICharInfo_t358  L_0 = ___obj;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15517_gshared (DefaultComparer_t2107 * __this, UICharInfo_t358  ___x, UICharInfo_t358  ___y, const MethodInfo* method)
{
	{
		UICharInfo_t358  L_0 = ___x;
		goto IL_0015;
	}
	{
		UICharInfo_t358  L_1 = ___y;
		UICharInfo_t358  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		UICharInfo_t358  L_4 = ___y;
		UICharInfo_t358  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m15518_gshared (Predicate_1_t2108 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
extern "C" bool Predicate_1_Invoke_m15519_gshared (Predicate_1_t2108 * __this, UICharInfo_t358  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m15519((Predicate_1_t2108 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UICharInfo_t358  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, UICharInfo_t358  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UICharInfo_t358_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m15520_gshared (Predicate_1_t2108 * __this, UICharInfo_t358  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICharInfo_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UICharInfo_t358_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15521_gshared (Predicate_1_t2108 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m15522_gshared (Comparer_1_t2109 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2431_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m15523_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t2109_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2109 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2110 * L_8 = (DefaultComparer_t2110 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2110 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2109_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m15524_gshared (Comparer_1_t2109 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t2109 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UICharInfo_t358 , UICharInfo_t358  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::Compare(T,T) */, (Comparer_1_t2109 *)__this, (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UICharInfo_t358 )((*(UICharInfo_t358 *)((UICharInfo_t358 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9336(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::get_Default()
extern "C" Comparer_1_t2109 * Comparer_1_get_Default_m15525_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2109 * L_0 = ((Comparer_1_t2109_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m15526_gshared (DefaultComparer_t2110 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2109 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2109 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2109 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>::Compare(T,T)
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2714;
extern "C" int32_t DefaultComparer_Compare_m15527_gshared (DefaultComparer_t2110 * __this, UICharInfo_t358  ___x, UICharInfo_t358  ___y, const MethodInfo* method)
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
		UICharInfo_t358  L_0 = ___x;
		goto IL_001e;
	}
	{
		UICharInfo_t358  L_1 = ___y;
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
		UICharInfo_t358  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		UICharInfo_t358  L_3 = ___x;
		UICharInfo_t358  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		UICharInfo_t358  L_6 = ___x;
		UICharInfo_t358  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		UICharInfo_t358  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t358  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UICharInfo>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (UICharInfo_t358 )L_9);
		return L_10;
	}

IL_004d:
	{
		UICharInfo_t358  L_11 = ___x;
		UICharInfo_t358  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1671_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		UICharInfo_t358  L_14 = ___x;
		UICharInfo_t358  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		UICharInfo_t358  L_17 = ___y;
		UICharInfo_t358  L_18 = L_17;
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
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_35MethodDeclarations.h"
// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m15528_gshared (Comparison_1_t2111 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
extern "C" int32_t Comparison_1_Invoke_m15529_gshared (Comparison_1_t2111 * __this, UICharInfo_t358  ___x, UICharInfo_t358  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m15529((Comparison_1_t2111 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UICharInfo_t358  ___x, UICharInfo_t358  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, UICharInfo_t358  ___x, UICharInfo_t358  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UICharInfo_t358_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m15530_gshared (Comparison_1_t2111 * __this, UICharInfo_t358  ___x, UICharInfo_t358  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICharInfo_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UICharInfo_t358_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(UICharInfo_t358_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15531_gshared (Comparison_1_t2111 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_34.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_33.h"
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_36.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_8.h"
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_36.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_33MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_36MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_34MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_8MethodDeclarations.h"
struct UILineInfoU5BU5D_t581;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUILineInfo_t356_m17162_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t581* p0, UILineInfo_t356  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisUILineInfo_t356_m17162(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581*, UILineInfo_t356 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUILineInfo_t356_m17162_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct UILineInfoU5BU5D_t581;
struct IComparer_1_t2407;
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUILineInfo_t356_m17163_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t581* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisUILineInfo_t356_m17163(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisUILineInfo_t356_m17163_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct UILineInfoU5BU5D_t581;
struct Comparison_1_t2120;
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisUILineInfo_t356_m17169_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t581* p0, int32_t p1, Comparison_1_t2120 * p2, const MethodInfo* method);
#define Array_Sort_TisUILineInfo_t356_m17169(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581*, int32_t, Comparison_1_t2120 *, const MethodInfo*))Array_Sort_TisUILineInfo_t356_m17169_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct UILineInfoU5BU5D_t581;
// Declaration System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUILineInfo_t356_m17160_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t581** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisUILineInfo_t356_m17160(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581**, int32_t, const MethodInfo*))Array_Resize_TisUILineInfo_t356_m17160_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m15532_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UILineInfoU5BU5D_t581* L_0 = ((List_1_t498_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15533_gshared (List_1_t498 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t498 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		UILineInfoU5BU5D_t581* L_3 = ((List_1_t498_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t498 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((UILineInfoU5BU5D_t581*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t498 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1238;
extern "C" void List_1__ctor_m3108_gshared (List_1_t498 * __this, int32_t ___capacity, const MethodInfo* method)
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
		__this->____items_1 = ((UILineInfoU5BU5D_t581*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15534_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t498_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((UILineInfoU5BU5D_t581*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15535_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t498 *)__this);
		Enumerator_t2112  L_0 = (( Enumerator_t2112  (*) (List_1_t498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t498 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2112  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15536_gshared (List_1_t498 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15537_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t498 *)__this);
		Enumerator_t2112  L_0 = (( Enumerator_t2112  (*) (List_1_t498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t498 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t2112  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" int32_t List_1_System_Collections_IList_Add_m15538_gshared (List_1_t498 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t498 *)__this);
			VirtActionInvoker1< UILineInfo_t356  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T) */, (List_1_t498 *)__this, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m15539_gshared (List_1_t498 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t498 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, UILineInfo_t356  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T) */, (List_1_t498 *)__this, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15540_gshared (List_1_t498 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t498 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T) */, (List_1_t498 *)__this, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" void List_1_System_Collections_IList_Insert_m15541_gshared (List_1_t498 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
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
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t498 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t498 *)__this);
			VirtActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T) */, (List_1_t498 *)__this, (int32_t)L_1, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m15542_gshared (List_1_t498 * __this, Object_t * ___item, const MethodInfo* method)
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
			NullCheck((List_1_t498 *)__this);
			VirtFuncInvoker1< bool, UILineInfo_t356  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T) */, (List_1_t498 *)__this, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15543_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15544_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15545_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15546_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15547_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15548_gshared (List_1_t498 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t498 *)__this);
		UILineInfo_t356  L_1 = (UILineInfo_t356 )VirtFuncInvoker1< UILineInfo_t356 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32) */, (List_1_t498 *)__this, (int32_t)L_0);
		UILineInfo_t356  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t586_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1584_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral307;
extern "C" void List_1_System_Collections_IList_set_Item_m15549_gshared (List_1_t498 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
			NullCheck((List_1_t498 *)__this);
			VirtActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T) */, (List_1_t498 *)__this, (int32_t)L_0, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
extern "C" void List_1_Add_m15550_gshared (List_1_t498 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		UILineInfoU5BU5D_t581* L_1 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t498 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		UILineInfoU5BU5D_t581* L_2 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UILineInfo_t356  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_2, L_5, sizeof(UILineInfo_t356 ))) = (UILineInfo_t356 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m15551_gshared (List_1_t498 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UILineInfoU5BU5D_t581* L_3 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t498 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t498 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3109(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t498 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15552_gshared (List_1_t498 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t498 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		UILineInfoU5BU5D_t581* L_5 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t581*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (UILineInfoU5BU5D_t581*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t28_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m15553_gshared (List_1_t498 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	UILineInfo_t356  V_0 = {0};
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			UILineInfo_t356  L_3 = (UILineInfo_t356 )InterfaceFuncInvoker0< UILineInfo_t356  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (UILineInfo_t356 )L_3;
			UILineInfo_t356  L_4 = V_0;
			NullCheck((List_1_t498 *)__this);
			VirtActionInvoker1< UILineInfo_t356  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T) */, (List_1_t498 *)__this, (UILineInfo_t356 )L_4);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15554_gshared (List_1_t498 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t498 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t498 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t498 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2113 * List_1_AsReadOnly_m15555_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2113 * L_0 = (ReadOnlyCollection_1_t2113 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t2113 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15556_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		UILineInfoU5BU5D_t581* L_1 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15557_gshared (List_1_t498 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		UILineInfo_t356  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581*, UILineInfo_t356 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t581*)L_0, (UILineInfo_t356 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void List_1_CopyTo_m15558_gshared (List_1_t498 * __this, UILineInfoU5BU5D_t581* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		UILineInfoU5BU5D_t581* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5900(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_36.h"
extern TypeInfo* UILineInfo_t356_il2cpp_TypeInfo_var;
extern "C" UILineInfo_t356  List_1_Find_m15559_gshared (List_1_t498 * __this, Predicate_1_t2117 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UILineInfo_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	UILineInfo_t356  V_1 = {0};
	UILineInfo_t356  G_B3_0 = {0};
	{
		Predicate_1_t2117 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2117 * L_2 = ___match;
		NullCheck((List_1_t498 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t498 *, int32_t, int32_t, Predicate_1_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t498 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2117 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		UILineInfoU5BU5D_t581* L_5 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_5, L_7, sizeof(UILineInfo_t356 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (UILineInfo_t356_il2cpp_TypeInfo_var, (&V_1));
		UILineInfo_t356  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829;
extern "C" void List_1_CheckMatch_m15560_gshared (Object_t * __this /* static, unused */, Predicate_1_t2117 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		_stringLiteral1829 = il2cpp_codegen_string_literal_from_index(1829);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t2117 * L_0 = ___match;
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
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15561_gshared (List_1_t498 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2117 * ___match, const MethodInfo* method)
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
		Predicate_1_t2117 * L_3 = ___match;
		UILineInfoU5BU5D_t581* L_4 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2117 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2117 *, UILineInfo_t356 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2117 *)L_3, (UILineInfo_t356 )(*(UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_4, L_6, sizeof(UILineInfo_t356 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2112  List_1_GetEnumerator_m15562_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2112  L_0 = {0};
		(( void (*) (Enumerator_t2112 *, List_1_t498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t498 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15563_gshared (List_1_t498 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		UILineInfo_t356  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581*, UILineInfo_t356 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t581*)L_0, (UILineInfo_t356 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15564_gshared (List_1_t498 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
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
		UILineInfoU5BU5D_t581* L_5 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_6 = ___start;
		UILineInfoU5BU5D_t581* L_7 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
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
		UILineInfoU5BU5D_t581* L_15 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_CheckIndex_m15565_gshared (List_1_t498 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15566_gshared (List_1_t498 * __this, int32_t ___index, UILineInfo_t356  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t498 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		UILineInfoU5BU5D_t581* L_2 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t498 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t498 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		UILineInfoU5BU5D_t581* L_4 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_5 = ___index;
		UILineInfo_t356  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_4, L_5, sizeof(UILineInfo_t356 ))) = (UILineInfo_t356 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2713;
extern "C" void List_1_CheckCollection_m15567_gshared (List_1_t498 * __this, Object_t* ___collection, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15568_gshared (List_1_t498 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UILineInfo_t356  L_0 = ___item;
		NullCheck((List_1_t498 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T) */, (List_1_t498 *)__this, (UILineInfo_t356 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t498 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32) */, (List_1_t498 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15569_gshared (List_1_t498 * __this, Predicate_1_t2117 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2117 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t2117 * L_1 = ___match;
		UILineInfoU5BU5D_t581* L_2 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2117 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2117 *, UILineInfo_t356 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2117 *)L_1, (UILineInfo_t356 )(*(UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_2, L_4, sizeof(UILineInfo_t356 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
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
		Predicate_1_t2117 * L_13 = ___match;
		UILineInfoU5BU5D_t581* L_14 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t2117 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t2117 *, UILineInfo_t356 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2117 *)L_13, (UILineInfo_t356 )(*(UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_14, L_16, sizeof(UILineInfo_t356 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		UILineInfoU5BU5D_t581* L_18 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		UILineInfoU5BU5D_t581* L_21 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_18, L_20, sizeof(UILineInfo_t356 ))) = (UILineInfo_t356 )(*(UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_21, L_23, sizeof(UILineInfo_t356 )));
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
		UILineInfoU5BU5D_t581* L_29 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_RemoveAt_m15570_gshared (List_1_t498 * __this, int32_t ___index, const MethodInfo* method)
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
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t498 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		UILineInfoU5BU5D_t581* L_5 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15571_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4137(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15572_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t2118 * L_2 = (( Comparer_1_t2118 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t581*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_36.h"
extern "C" void List_1_Sort_m15573_gshared (List_1_t498 * __this, Comparison_1_t2120 * ___comparison, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t2120 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581*, int32_t, Comparison_1_t2120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t581*)L_0, (int32_t)L_1, (Comparison_1_t2120 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t581* List_1_ToArray_m15574_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	UILineInfoU5BU5D_t581* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (UILineInfoU5BU5D_t581*)((UILineInfoU5BU5D_t581*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		UILineInfoU5BU5D_t581* L_1 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		UILineInfoU5BU5D_t581* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5172(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		UILineInfoU5BU5D_t581* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15575_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t498 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15576_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t581* L_0 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m15577_gshared (List_1_t498 * __this, int32_t ___value, const MethodInfo* method)
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
		UILineInfoU5BU5D_t581** L_3 = (UILineInfoU5BU5D_t581**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t581**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t581**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15578_gshared (List_1_t498 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" UILineInfo_t356  List_1_get_Item_m15579_gshared (List_1_t498 * __this, int32_t ___index, const MethodInfo* method)
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
		UILineInfoU5BU5D_t581* L_3 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_3, L_5, sizeof(UILineInfo_t356 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral630;
extern "C" void List_1_set_Item_m15580_gshared (List_1_t498 * __this, int32_t ___index, UILineInfo_t356  ___value, const MethodInfo* method)
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
		NullCheck((List_1_t498 *)__this);
		(( void (*) (List_1_t498 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t498 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
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
		UILineInfoU5BU5D_t581* L_4 = (UILineInfoU5BU5D_t581*)(__this->____items_1);
		int32_t L_5 = ___index;
		UILineInfo_t356  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_4, L_5, sizeof(UILineInfo_t356 ))) = (UILineInfo_t356 )L_6;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
extern "C" void Enumerator__ctor_m15581_gshared (Enumerator_t2112 * __this, List_1_t498 * ___l, const MethodInfo* method)
{
	{
		List_1_t498 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t498 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15582_gshared (Enumerator_t2112 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2112 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		UILineInfo_t356  L_2 = (UILineInfo_t356 )(__this->___current_3);
		UILineInfo_t356  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::Dispose()
extern "C" void Enumerator_Dispose_m15583_gshared (Enumerator_t2112 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t498 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t645_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2711;
extern "C" void Enumerator_VerifyState_m15584_gshared (Enumerator_t2112 * __this, const MethodInfo* method)
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
		List_1_t498 * L_0 = (List_1_t498 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2112  L_1 = (*(Enumerator_t2112 *)__this);
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
		List_1_t498 * L_7 = (List_1_t498 *)(__this->___l_0);
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
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15585_gshared (Enumerator_t2112 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2112 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t498 * L_2 = (List_1_t498 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t498 * L_4 = (List_1_t498 *)(__this->___l_0);
		NullCheck(L_4);
		UILineInfoU5BU5D_t581* L_5 = (UILineInfoU5BU5D_t581*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UILineInfo_t356 *)(UILineInfo_t356 *)SZArrayLdElema(L_5, L_9, sizeof(UILineInfo_t356 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::get_Current()
extern "C" UILineInfo_t356  Enumerator_get_Current_m15586_gshared (Enumerator_t2112 * __this, const MethodInfo* method)
{
	{
		UILineInfo_t356  L_0 = (UILineInfo_t356 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_8MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1249;
extern "C" void ReadOnlyCollection_1__ctor_m15587_gshared (ReadOnlyCollection_1_t2113 * __this, Object_t* ___list, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15588_gshared (ReadOnlyCollection_1_t2113 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15589_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15590_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, UILineInfo_t356  ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15591_gshared (ReadOnlyCollection_1_t2113 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15592_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" UILineInfo_t356  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15593_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2113 *)__this);
		UILineInfo_t356  L_1 = (UILineInfo_t356 )VirtFuncInvoker1< UILineInfo_t356 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2113 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15594_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, UILineInfo_t356  ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15595_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15596_gshared (ReadOnlyCollection_1_t2113 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15597_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
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
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m15598_gshared (ReadOnlyCollection_1_t2113 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m15599_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m15600_gshared (ReadOnlyCollection_1_t2113 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t356  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15601_gshared (ReadOnlyCollection_1_t2113 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m15602_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m15603_gshared (ReadOnlyCollection_1_t2113 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15604_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15605_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15606_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15607_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15608_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m15609_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UILineInfo_t356  L_2 = (UILineInfo_t356 )InterfaceFuncInvoker1< UILineInfo_t356 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		UILineInfo_t356  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m15610_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m15611_gshared (ReadOnlyCollection_1_t2113 * __this, UILineInfo_t356  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UILineInfo_t356  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t356  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UILineInfo_t356 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m15612_gshared (ReadOnlyCollection_1_t2113 * __this, UILineInfoU5BU5D_t581* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UILineInfoU5BU5D_t581* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t581*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UILineInfoU5BU5D_t581*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m15613_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m15614_gshared (ReadOnlyCollection_1_t2113 * __this, UILineInfo_t356  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UILineInfo_t356  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (UILineInfo_t356 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m15615_gshared (ReadOnlyCollection_1_t2113 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t356  ReadOnlyCollection_1_get_Item_m15616_gshared (ReadOnlyCollection_1_t2113 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UILineInfo_t356  L_2 = (UILineInfo_t356 )InterfaceFuncInvoker1< UILineInfo_t356 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_8.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m15617_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t498 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t498 * L_0 = (List_1_t498 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t498 *)L_0;
		List_1_t498 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t988_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t498 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15618_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m15619_gshared (Collection_1_t2114 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m15620_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m15621_gshared (Collection_1_t2114 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		UILineInfo_t356  L_4 = (( UILineInfo_t356  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::InsertItem(System.Int32,T) */, (Collection_1_t2114 *)__this, (int32_t)L_2, (UILineInfo_t356 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m15622_gshared (Collection_1_t2114 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t356  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m15623_gshared (Collection_1_t2114 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m15624_gshared (Collection_1_t2114 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UILineInfo_t356  L_2 = (( UILineInfo_t356  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::InsertItem(System.Int32,T) */, (Collection_1_t2114 *)__this, (int32_t)L_0, (UILineInfo_t356 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m15625_gshared (Collection_1_t2114 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		UILineInfo_t356  L_2 = (( UILineInfo_t356  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2114 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IndexOf(T) */, (Collection_1_t2114 *)__this, (UILineInfo_t356 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveItem(System.Int32) */, (Collection_1_t2114 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m15626_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m15627_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m15628_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m15629_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m15630_gshared (Collection_1_t2114 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UILineInfo_t356  L_2 = (UILineInfo_t356 )InterfaceFuncInvoker1< UILineInfo_t356 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		UILineInfo_t356  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m15631_gshared (Collection_1_t2114 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UILineInfo_t356  L_2 = (( UILineInfo_t356  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::SetItem(System.Int32,T) */, (Collection_1_t2114 *)__this, (int32_t)L_0, (UILineInfo_t356 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Add(T)
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
extern "C" void Collection_1_Add_m15632_gshared (Collection_1_t2114 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		UILineInfo_t356  L_3 = ___item;
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::InsertItem(System.Int32,T) */, (Collection_1_t2114 *)__this, (int32_t)L_2, (UILineInfo_t356 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Clear()
extern "C" void Collection_1_Clear_m15633_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::ClearItems() */, (Collection_1_t2114 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::ClearItems()
extern "C" void Collection_1_ClearItems_m15634_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool Collection_1_Contains_m15635_gshared (Collection_1_t2114 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UILineInfo_t356  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t356  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UILineInfo_t356 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m15636_gshared (Collection_1_t2114 * __this, UILineInfoU5BU5D_t581* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UILineInfoU5BU5D_t581* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t581*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UILineInfoU5BU5D_t581*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m15637_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m15638_gshared (Collection_1_t2114 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UILineInfo_t356  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (UILineInfo_t356 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m15639_gshared (Collection_1_t2114 * __this, int32_t ___index, UILineInfo_t356  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t356  L_1 = ___item;
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::InsertItem(System.Int32,T) */, (Collection_1_t2114 *)__this, (int32_t)L_0, (UILineInfo_t356 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m15640_gshared (Collection_1_t2114 * __this, int32_t ___index, UILineInfo_t356  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UILineInfo_t356  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (UILineInfo_t356 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool Collection_1_Remove_m15641_gshared (Collection_1_t2114 * __this, UILineInfo_t356  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UILineInfo_t356  L_0 = ___item;
		NullCheck((Collection_1_t2114 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IndexOf(T) */, (Collection_1_t2114 *)__this, (UILineInfo_t356 )L_0);
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
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveItem(System.Int32) */, (Collection_1_t2114 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m15642_gshared (Collection_1_t2114 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveItem(System.Int32) */, (Collection_1_t2114 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m15643_gshared (Collection_1_t2114 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t Collection_1_get_Count_m15644_gshared (Collection_1_t2114 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t356  Collection_1_get_Item_m15645_gshared (Collection_1_t2114 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UILineInfo_t356  L_2 = (UILineInfo_t356 )InterfaceFuncInvoker1< UILineInfo_t356 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m15646_gshared (Collection_1_t2114 * __this, int32_t ___index, UILineInfo_t356  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t356  L_1 = ___value;
		NullCheck((Collection_1_t2114 *)__this);
		VirtActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::SetItem(System.Int32,T) */, (Collection_1_t2114 *)__this, (int32_t)L_0, (UILineInfo_t356 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m15647_gshared (Collection_1_t2114 * __this, int32_t ___index, UILineInfo_t356  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UILineInfo_t356  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UILineInfo_t356  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (UILineInfo_t356 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m15648_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2712;
extern "C" UILineInfo_t356  Collection_1_ConvertItem_m15649_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
		return ((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t370 * L_3 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_3, (String_t*)_stringLiteral2712, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t49_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m15650_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t988_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m15651_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t947_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m15652_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m15653_gshared (EqualityComparer_1_t2115 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2430_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m15654_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t2115_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2115 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2116 * L_8 = (DefaultComparer_t2116 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2116 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2115_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15655_gshared (EqualityComparer_1_t2115 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2115 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T) */, (EqualityComparer_1_t2115 *)__this, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15656_gshared (EqualityComparer_1_t2115 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2115 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, UILineInfo_t356 , UILineInfo_t356  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T) */, (EqualityComparer_1_t2115 *)__this, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::get_Default()
extern "C" EqualityComparer_1_t2115 * EqualityComparer_1_get_Default_m15657_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2115 * L_0 = ((EqualityComparer_1_t2115_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m15658_gshared (DefaultComparer_t2116 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2115 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2115 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2115 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
extern "C" int32_t DefaultComparer_GetHashCode_m15659_gshared (DefaultComparer_t2116 * __this, UILineInfo_t356  ___obj, const MethodInfo* method)
{
	{
		UILineInfo_t356  L_0 = ___obj;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15660_gshared (DefaultComparer_t2116 * __this, UILineInfo_t356  ___x, UILineInfo_t356  ___y, const MethodInfo* method)
{
	{
		UILineInfo_t356  L_0 = ___x;
		goto IL_0015;
	}
	{
		UILineInfo_t356  L_1 = ___y;
		UILineInfo_t356  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		UILineInfo_t356  L_4 = ___y;
		UILineInfo_t356  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m15661_gshared (Predicate_1_t2117 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
extern "C" bool Predicate_1_Invoke_m15662_gshared (Predicate_1_t2117 * __this, UILineInfo_t356  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m15662((Predicate_1_t2117 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t356  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, UILineInfo_t356  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UILineInfo_t356_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m15663_gshared (Predicate_1_t2117 * __this, UILineInfo_t356  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UILineInfo_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UILineInfo_t356_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15664_gshared (Predicate_1_t2117 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_8.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_8MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m15665_gshared (Comparer_1_t2118 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m138((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2431_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m15666_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t2118_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2118 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2119 * L_8 = (DefaultComparer_t2119 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2119 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2118_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m15667_gshared (Comparer_1_t2118 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t2118 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UILineInfo_t356 , UILineInfo_t356  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::Compare(T,T) */, (Comparer_1_t2118 *)__this, (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UILineInfo_t356 )((*(UILineInfo_t356 *)((UILineInfo_t356 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t370 * L_8 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9336(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::get_Default()
extern "C" Comparer_1_t2118 * Comparer_1_get_Default_m15668_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2118 * L_0 = ((Comparer_1_t2118_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m15669_gshared (DefaultComparer_t2119 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2118 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2118 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2118 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::Compare(T,T)
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2714;
extern "C" int32_t DefaultComparer_Compare_m15670_gshared (DefaultComparer_t2119 * __this, UILineInfo_t356  ___x, UILineInfo_t356  ___y, const MethodInfo* method)
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
		UILineInfo_t356  L_0 = ___x;
		goto IL_001e;
	}
	{
		UILineInfo_t356  L_1 = ___y;
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
		UILineInfo_t356  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		UILineInfo_t356  L_3 = ___x;
		UILineInfo_t356  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		UILineInfo_t356  L_6 = ___x;
		UILineInfo_t356  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		UILineInfo_t356  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t356  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UILineInfo>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (UILineInfo_t356 )L_9);
		return L_10;
	}

IL_004d:
	{
		UILineInfo_t356  L_11 = ___x;
		UILineInfo_t356  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1671_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		UILineInfo_t356  L_14 = ___x;
		UILineInfo_t356  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		UILineInfo_t356  L_17 = ___y;
		UILineInfo_t356  L_18 = L_17;
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
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_36MethodDeclarations.h"
// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m15671_gshared (Comparison_1_t2120 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
extern "C" int32_t Comparison_1_Invoke_m15672_gshared (Comparison_1_t2120 * __this, UILineInfo_t356  ___x, UILineInfo_t356  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m15672((Comparison_1_t2120 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t356  ___x, UILineInfo_t356  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, UILineInfo_t356  ___x, UILineInfo_t356  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UILineInfo_t356_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m15673_gshared (Comparison_1_t2120 * __this, UILineInfo_t356  ___x, UILineInfo_t356  ___y, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UILineInfo_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UILineInfo_t356_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(UILineInfo_t356_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15674_gshared (Comparison_1_t2120 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45.h"
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45MethodDeclarations.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C" ParameterModifier_t1267  Array_InternalArray__get_Item_TisParameterModifier_t1267_m17172_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisParameterModifier_t1267_m17172(__this, p0, method) (( ParameterModifier_t1267  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisParameterModifier_t1267_m17172_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15795_gshared (InternalEnumerator_1_t2130 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15796_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	{
		ParameterModifier_t1267  L_0 = (( ParameterModifier_t1267  (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2130 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ParameterModifier_t1267  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15797_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15798_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" ParameterModifier_t1267  InternalEnumerator_1_get_Current_m15799_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
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
		ParameterModifier_t1267  L_8 = (( ParameterModifier_t1267  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46MethodDeclarations.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" HitInfo_t536  Array_InternalArray__get_Item_TisHitInfo_t536_m17183_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisHitInfo_t536_m17183(__this, p0, method) (( HitInfo_t536  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisHitInfo_t536_m17183_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m15800_gshared (InternalEnumerator_1_t2131 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15801_gshared (InternalEnumerator_1_t2131 * __this, const MethodInfo* method)
{
	{
		HitInfo_t536  L_0 = (( HitInfo_t536  (*) (InternalEnumerator_1_t2131 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2131 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		HitInfo_t536  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15802_gshared (InternalEnumerator_1_t2131 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m15803_gshared (InternalEnumerator_1_t2131 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" HitInfo_t536  InternalEnumerator_1_get_Current_m15804_gshared (InternalEnumerator_1_t2131 * __this, const MethodInfo* method)
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
		HitInfo_t536  L_8 = (( HitInfo_t536  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_gen.h"
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_genMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_2_genMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m16779_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m16779(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m16779_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_2__ctor_m15810_gshared (InvokableCall_2_t2133 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		MethodInfo_t * L_2 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		Delegate_t346 * L_5 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_2_t2134 *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2716;
extern "C" void InvokableCall_2_Invoke_m15811_gshared (InvokableCall_2_t2133 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
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
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)2)))
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
		ObjectU5BU5D_t320* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_2_t2134 * L_6 = (UnityAction_2_t2134 *)(__this->___Delegate_0);
		bool L_7 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, (Delegate_t346 *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		UnityAction_2_t2134 * L_8 = (UnityAction_2_t2134 *)(__this->___Delegate_0);
		ObjectU5BU5D_t320* L_9 = ___args;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		ObjectU5BU5D_t320* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck((UnityAction_2_t2134 *)L_8);
		(( void (*) (UnityAction_2_t2134 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((UnityAction_2_t2134 *)L_8, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_10, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_004f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern "C" bool InvokableCall_2_Find_m15812_gshared (InvokableCall_2_t2133 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t2134 * L_0 = (UnityAction_2_t2134 *)(__this->___Delegate_0);
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_2_t2134 * L_3 = (UnityAction_2_t2134 *)(__this->___Delegate_0);
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
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_2__ctor_m15813_gshared (UnityAction_2_t2134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" void UnityAction_2_Invoke_m15814_gshared (UnityAction_2_t2134 * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_2_Invoke_m15814((UnityAction_2_t2134 *)__this->___prev_9,___arg0, ___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_2_BeginInvoke_m15815_gshared (UnityAction_2_t2134 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_2_EndInvoke_m15816_gshared (UnityAction_2_t2134 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_gen.h"
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_genMethodDeclarations.h"
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_gen.h"
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_genMethodDeclarations.h"
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_3__ctor_m15817_gshared (InvokableCall_3_t2135 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		MethodInfo_t * L_2 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		Delegate_t346 * L_5 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_3_t2136 *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2716;
extern "C" void InvokableCall_3_Invoke_m15818_gshared (InvokableCall_3_t2135 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
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
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)3)))
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
		ObjectU5BU5D_t320* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t320* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		UnityAction_3_t2136 * L_8 = (UnityAction_3_t2136 *)(__this->___Delegate_0);
		bool L_9 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, (Delegate_t346 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		UnityAction_3_t2136 * L_10 = (UnityAction_3_t2136 *)(__this->___Delegate_0);
		ObjectU5BU5D_t320* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		ObjectU5BU5D_t320* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		int32_t L_14 = 1;
		ObjectU5BU5D_t320* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		NullCheck((UnityAction_3_t2136 *)L_10);
		(( void (*) (UnityAction_3_t2136 *, Object_t *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((UnityAction_3_t2136 *)L_10, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_005f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern "C" bool InvokableCall_3_Find_m15819_gshared (InvokableCall_3_t2135 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t2136 * L_0 = (UnityAction_3_t2136 *)(__this->___Delegate_0);
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_3_t2136 * L_3 = (UnityAction_3_t2136 *)(__this->___Delegate_0);
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
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_3__ctor_m15820_gshared (UnityAction_3_t2136 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m15821_gshared (UnityAction_3_t2136 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_3_Invoke_m15821((UnityAction_3_t2136 *)__this->___prev_9,___arg0, ___arg1, ___arg2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_3_BeginInvoke_m15822_gshared (UnityAction_3_t2136 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_3_EndInvoke_m15823_gshared (UnityAction_3_t2136 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_gen.h"
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_genMethodDeclarations.h"
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_gen.h"
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_genMethodDeclarations.h"
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
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
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_4__ctor_m15824_gshared (InvokableCall_4_t2137 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		MethodInfo_t * L_2 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		Delegate_t346 * L_5 = NetFxCoreExtensions_CreateDelegate_m3048(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_4_t2138 *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2716;
extern "C" void InvokableCall_4_Invoke_m15825_gshared (InvokableCall_4_t2137 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
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
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)4)))
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
		ObjectU5BU5D_t320* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t320* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		ObjectU5BU5D_t320* L_8 = ___args;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		int32_t L_9 = 3;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		UnityAction_4_t2138 * L_10 = (UnityAction_4_t2138 *)(__this->___Delegate_0);
		bool L_11 = BaseInvokableCall_AllowInvoke_m3003(NULL /*static, unused*/, (Delegate_t346 *)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		UnityAction_4_t2138 * L_12 = (UnityAction_4_t2138 *)(__this->___Delegate_0);
		ObjectU5BU5D_t320* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		int32_t L_14 = 0;
		ObjectU5BU5D_t320* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		int32_t L_16 = 1;
		ObjectU5BU5D_t320* L_17 = ___args;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		int32_t L_18 = 2;
		ObjectU5BU5D_t320* L_19 = ___args;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		int32_t L_20 = 3;
		NullCheck((UnityAction_4_t2138 *)L_12);
		(( void (*) (UnityAction_4_t2138 *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((UnityAction_4_t2138 *)L_12, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
	}

IL_006f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern "C" bool InvokableCall_4_Find_m15826_gshared (InvokableCall_4_t2137 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_t2138 * L_0 = (UnityAction_4_t2138 *)(__this->___Delegate_0);
		NullCheck((Delegate_t346 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3136((Delegate_t346 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_4_t2138 * L_3 = (UnityAction_4_t2138 *)(__this->___Delegate_0);
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
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_4__ctor_m15827_gshared (UnityAction_4_t2138 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m15828_gshared (UnityAction_4_t2138 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_4_Invoke_m15828((UnityAction_4_t2138 *)__this->___prev_9,___arg0, ___arg1, ___arg2, ___arg3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAction_4_BeginInvoke_m15829_gshared (UnityAction_4_t2138 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	__d_args[3] = ___arg3;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_4_EndInvoke_m15830_gshared (UnityAction_4_t2138 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m15831_gshared (CachedInvokableCall_1_t2139 * __this, Object_t38 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 1));
		Object_t38 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t1792 *)__this);
		(( void (*) (InvokableCall_1_t1792 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t1792 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t320* L_2 = (ObjectU5BU5D_t320*)(__this->___m_Arg1_1);
		Object_t * L_3 = ___argument;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void CachedInvokableCall_1_Invoke_m15832_gshared (CachedInvokableCall_1_t2139 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t1792 *)__this);
		(( void (*) (InvokableCall_1_t1792 *, ObjectU5BU5D_t320*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t1792 *)__this, (ObjectU5BU5D_t320*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m3137_gshared (CachedInvokableCall_1_t615 * __this, Object_t38 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 1));
		Object_t38 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t1827 *)__this);
		(( void (*) (InvokableCall_1_t1827 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t1827 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t320* L_2 = (ObjectU5BU5D_t320*)(__this->___m_Arg1_1);
		float L_3 = ___argument;
		float L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void CachedInvokableCall_1_Invoke_m15833_gshared (CachedInvokableCall_1_t615 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t1827 *)__this);
		(( void (*) (InvokableCall_1_t1827 *, ObjectU5BU5D_t320*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t1827 *)__this, (ObjectU5BU5D_t320*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2MethodDeclarations.h"
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m3138_gshared (CachedInvokableCall_1_t616 * __this, Object_t38 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 1));
		Object_t38 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t1851 *)__this);
		(( void (*) (InvokableCall_1_t1851 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t1851 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t320* L_2 = (ObjectU5BU5D_t320*)(__this->___m_Arg1_1);
		int32_t L_3 = ___argument;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void CachedInvokableCall_1_Invoke_m15834_gshared (CachedInvokableCall_1_t616 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t1851 *)__this);
		(( void (*) (InvokableCall_1_t1851 *, ObjectU5BU5D_t320*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t1851 *)__this, (ObjectU5BU5D_t320*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m3140_gshared (CachedInvokableCall_1_t618 * __this, Object_t38 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 1));
		Object_t38 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t1870 *)__this);
		(( void (*) (InvokableCall_1_t1870 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t1870 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t320* L_2 = (ObjectU5BU5D_t320*)(__this->___m_Arg1_1);
		bool L_3 = ___argument;
		bool L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" void CachedInvokableCall_1_Invoke_m15840_gshared (CachedInvokableCall_1_t618 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t320* L_0 = (ObjectU5BU5D_t320*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t1870 *)__this);
		(( void (*) (InvokableCall_1_t1870 *, ObjectU5BU5D_t320*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((InvokableCall_1_t1870 *)__this, (ObjectU5BU5D_t320*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen.h"
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_genMethodDeclarations.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_2__ctor_m16021_gshared (UnityEvent_2_t2151 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 2));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase__ctor_m3024((UnityEventBase_t562 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m16022_gshared (UnityEvent_2_t2151 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
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
		TypeU5BU5D_t582* L_2 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1, sizeof(Type_t *))) = (Type_t *)L_5;
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t582*)L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t554 * UnityEvent_2_GetDelegate_m16023_gshared (UnityEvent_2_t2151 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_2_t2133 * L_2 = (InvokableCall_2_t2133 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_2_t2133 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen.h"
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_genMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_3__ctor_m16024_gshared (UnityEvent_3_t2152 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 3));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase__ctor_m3024((UnityEventBase_t562 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m16025_gshared (UnityEvent_3_t2152 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
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
		TypeU5BU5D_t582* L_2 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1, sizeof(Type_t *))) = (Type_t *)L_5;
		TypeU5BU5D_t582* L_6 = (TypeU5BU5D_t582*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2, sizeof(Type_t *))) = (Type_t *)L_7;
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t582*)L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t554 * UnityEvent_3_GetDelegate_m16026_gshared (UnityEvent_3_t2152 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_3_t2135 * L_2 = (InvokableCall_3_t2135 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_3_t2135 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen.h"
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_genMethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_4__ctor_m16027_gshared (UnityEvent_4_t2153 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 4));
		NullCheck((UnityEventBase_t562 *)__this);
		UnityEventBase__ctor_m3024((UnityEventBase_t562 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m16028_gshared (UnityEvent_4_t2153 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
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
		TypeU5BU5D_t582* L_2 = (TypeU5BU5D_t582*)((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		TypeU5BU5D_t582* L_4 = (TypeU5BU5D_t582*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1, sizeof(Type_t *))) = (Type_t *)L_5;
		TypeU5BU5D_t582* L_6 = (TypeU5BU5D_t582*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2, sizeof(Type_t *))) = (Type_t *)L_7;
		TypeU5BU5D_t582* L_8 = (TypeU5BU5D_t582*)L_6;
		Type_t * L_9 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, (RuntimeTypeHandle_t1015 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 3, sizeof(Type_t *))) = (Type_t *)L_9;
		MethodInfo_t * L_10 = UnityEventBase_GetValidMethodInfo_m3035(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t582*)L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t554 * UnityEvent_4_GetDelegate_m16029_gshared (UnityEvent_4_t2153 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_4_t2137 * L_2 = (InvokableCall_4_t2137 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (InvokableCall_4_t2137 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge_1.h"
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge_1MethodDeclarations.h"
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAdsDelegate_2__ctor_m16030_gshared (UnityAdsDelegate_2_t2154 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m16031_gshared (UnityAdsDelegate_2_t2154 * __this, Object_t * ___p1, Object_t * ___p2, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_2_Invoke_m16031((UnityAdsDelegate_2_t2154 *)__this->___prev_9,___p1, ___p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___p1, Object_t * ___p2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___p1, ___p2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___p1, Object_t * ___p2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___p1, ___p2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___p2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___p1, ___p2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m16032_gshared (UnityAdsDelegate_2_t2154 * __this, Object_t * ___p1, Object_t * ___p2, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___p1;
	__d_args[1] = ___p2;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m16033_gshared (UnityAdsDelegate_2_t2154 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_49.h"
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_49MethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t608_m17195_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt32_t608_m17195(__this, p0, method) (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt32_t608_m17195_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m16039_gshared (InternalEnumerator_1_t2156 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16040_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (( uint32_t (*) (InternalEnumerator_1_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16041_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m16042_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" uint32_t InternalEnumerator_1_get_Current_m16043_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method)
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
		uint32_t L_8 = (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_3.h"
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Func_2__ctor_m16044_gshared (Func_2_t2157 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m16045_gshared (Func_2_t2157 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m16045((Func_2_t2157 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Func_2_BeginInvoke_m16046_gshared (Func_2_t2157 * __this, Object_t * ___arg1, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m16047_gshared (Func_2_t2157 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisClientCertificateType_t762_m17206_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisClientCertificateType_t762_m17206(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisClientCertificateType_t762_m17206_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m16058_gshared (InternalEnumerator_1_t2160 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16059_gshared (InternalEnumerator_1_t2160 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t2160 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2160 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16060_gshared (InternalEnumerator_1_t2160 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m16061_gshared (InternalEnumerator_1_t2160 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2709;
extern Il2CppCodeGenString* _stringLiteral2710;
extern "C" int32_t InternalEnumerator_1_get_Current_m16062_gshared (InternalEnumerator_1_t2160 * __this, const MethodInfo* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
