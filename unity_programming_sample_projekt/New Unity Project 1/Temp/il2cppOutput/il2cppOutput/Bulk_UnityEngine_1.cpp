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

// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPointMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t10  RaycastHit_get_point_m80 (RaycastHit_t30 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t10  RaycastHit_get_normal_m1650 (RaycastHit_t30 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m1649 (RaycastHit_t30 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t35 * RaycastHit_get_collider_m61 (RaycastHit_t30 * __this, const MethodInfo* method)
{
	{
		Collider_t35 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Void UnityEngine.Physics2D::.cctor()
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
extern TypeInfo* List_1_t469_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t329_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3103_MethodInfo_var;
extern "C" void Physics2D__cctor_m2660 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		Physics2D_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		List_1__ctor_m3103_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483964);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t469 * L_0 = (List_1_t469 *)il2cpp_codegen_object_new (List_1_t469_il2cpp_TypeInfo_var);
		List_1__ctor_m3103(L_0, /*hidden argument*/List_1__ctor_m3103_MethodInfo_var);
		((Physics2D_t329_StaticFields*)Physics2D_t329_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
extern TypeInfo* Physics2D_t329_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m2661 (Object_t * __this /* static, unused */, Vector2_t11  ___origin, Vector2_t11  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t330 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t330 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t329_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m2662(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m2662 (Object_t * __this /* static, unused */, Vector2_t11 * ___origin, Vector2_t11 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t330 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m2662_ftn) (Vector2_t11 *, Vector2_t11 *, float, int32_t, float, float, RaycastHit2D_t330 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m2662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m2662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t329_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t330  Physics2D_Raycast_m1819 (Object_t * __this /* static, unused */, Vector2_t11  ___origin, Vector2_t11  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t11  L_0 = ___origin;
		Vector2_t11  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t329_il2cpp_TypeInfo_var);
		RaycastHit2D_t330  L_6 = Physics2D_Raycast_m2663(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t329_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t330  Physics2D_Raycast_m2663 (Object_t * __this /* static, unused */, Vector2_t11  ___origin, Vector2_t11  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t330  V_0 = {0};
	{
		Vector2_t11  L_0 = ___origin;
		Vector2_t11  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t329_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m2661(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t330  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t329_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t327* Physics2D_RaycastAll_m1634 (Object_t * __this /* static, unused */, Vector2_t11  ___origin, Vector2_t11  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t329_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t327* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m2664(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t327* Physics2D_INTERNAL_CALL_RaycastAll_m2664 (Object_t * __this /* static, unused */, Vector2_t11 * ___origin, Vector2_t11 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t327* (*Physics2D_INTERNAL_CALL_RaycastAll_m2664_ftn) (Vector2_t11 *, Vector2_t11 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m2664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m2664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t11  RaycastHit2D_get_point_m1639 (RaycastHit2D_t330 * __this, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t11  RaycastHit2D_get_normal_m1640 (RaycastHit2D_t330 * __this, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m1820 (RaycastHit2D_t330 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t331 * RaycastHit2D_get_collider_m1635 (RaycastHit2D_t330 * __this, const MethodInfo* method)
{
	{
		Collider2D_t331 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern "C" Rigidbody2D_t470 * RaycastHit2D_get_rigidbody_m2665 (RaycastHit2D_t330 * __this, const MethodInfo* method)
{
	Rigidbody2D_t470 * G_B3_0 = {0};
	{
		Collider2D_t331 * L_0 = RaycastHit2D_get_collider_m1635(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m79(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t331 * L_2 = RaycastHit2D_get_collider_m1635(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t470 * L_3 = Collider2D_get_attachedRigidbody_m2666(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t470 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" Transform_t9 * RaycastHit2D_get_transform_m1637 (RaycastHit2D_t330 * __this, const MethodInfo* method)
{
	Rigidbody2D_t470 * V_0 = {0};
	{
		Rigidbody2D_t470 * L_0 = RaycastHit2D_get_rigidbody_m2665(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t470 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m79(NULL /*static, unused*/, L_1, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t470 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t9 * L_4 = Component_get_transform_m64(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t331 * L_5 = RaycastHit2D_get_collider_m1635(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m79(NULL /*static, unused*/, L_5, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t331 * L_7 = RaycastHit2D_get_collider_m1635(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t9 * L_8 = Component_get_transform_m64(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t9 *)NULL;
	}
}
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t470 * Collider2D_get_attachedRigidbody_m2666 (Collider2D_t331 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t470 * (*Collider2D_get_attachedRigidbody_m2666_ftn) (Collider2D_t331 *);
	static Collider2D_get_attachedRigidbody_m2666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m2666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2DMethodDeclarations.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void AudioConfigurationChangeHandler__ctor_m2667 (AudioConfigurationChangeHandler_t474 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void AudioConfigurationChangeHandler_Invoke_m2668 (AudioConfigurationChangeHandler_t474 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m2668((AudioConfigurationChangeHandler_t474 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t474(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t322_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m2669 (AudioConfigurationChangeHandler_t474 * __this, bool ___deviceWasChanged, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t322_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m2670 (AudioConfigurationChangeHandler_t474 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
extern TypeInfo* AudioSettings_t475_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m2671 (Object_t * __this /* static, unused */, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t474 * L_0 = ((AudioSettings_t475_StaticFields*)AudioSettings_t475_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t474 * L_1 = ((AudioSettings_t475_StaticFields*)AudioSettings_t475_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m2668(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMReaderCallback__ctor_m2672 (PCMReaderCallback_t476 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
#include "mscorlib_ArrayTypes.h"
extern "C" void PCMReaderCallback_Invoke_m2673 (PCMReaderCallback_t476 * __this, SingleU5BU5D_t477* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m2673((PCMReaderCallback_t476 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t477* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t477* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t476(Il2CppObject* delegate, SingleU5BU5D_t477* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m2674 (PCMReaderCallback_t476 * __this, SingleU5BU5D_t477* ___data, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m2675 (PCMReaderCallback_t476 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMSetPositionCallback__ctor_m2676 (PCMSetPositionCallback_t478 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void PCMSetPositionCallback_Invoke_m2677 (PCMSetPositionCallback_t478 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m2677((PCMSetPositionCallback_t478 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t478(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m2678 (PCMSetPositionCallback_t478 * __this, int32_t ___position, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t36_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m2679 (PCMSetPositionCallback_t478 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m2680 (AudioClip_t479 * __this, SingleU5BU5D_t477* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t476 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t476 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t477* L_2 = ___data;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m2673(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m2681 (AudioClip_t479 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t478 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t478 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m2677(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m2682 (WebCamDevice_t480 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m2683 (WebCamDevice_t480 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t480_marshal(const WebCamDevice_t480& unmarshaled, WebCamDevice_t480_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
extern "C" void WebCamDevice_t480_marshal_back(const WebCamDevice_t480_marshaled& marshaled, WebCamDevice_t480& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t480_marshal_cleanup(WebCamDevice_t480_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Void UnityEngine.AnimationEvent::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m2684 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t38 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t483 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m2685 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void AnimationEvent_set_data_m2686 (AnimationEvent_t482 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m2687 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m2688 (AnimationEvent_t482 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m2689 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void AnimationEvent_set_floatParameter_m2690 (AnimationEvent_t482 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m2691 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void AnimationEvent_set_intParameter_m2692 (AnimationEvent_t482 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t38 * AnimationEvent_get_objectReferenceParameter_m2693 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		Object_t38 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" void AnimationEvent_set_objectReferenceParameter_m2694 (AnimationEvent_t482 * __this, Object_t38 * ___value, const MethodInfo* method)
{
	{
		Object_t38 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m2695 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m2696 (AnimationEvent_t482 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m2697 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m2698 (AnimationEvent_t482 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m2699 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void AnimationEvent_set_messageOptions_m2700 (AnimationEvent_t482 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m2701 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m2702 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral199;
extern "C" AnimationState_t483 * AnimationEvent_get_animationState_m2703 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral199 = il2cpp_codegen_string_literal_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m2701(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1528(NULL /*static, unused*/, _stringLiteral199, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t483 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern Il2CppCodeGenString* _stringLiteral200;
extern "C" AnimatorStateInfo_t484  AnimationEvent_get_animatorStateInfo_m2704 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral200 = il2cpp_codegen_string_literal_from_index(200);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m2702(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1528(NULL /*static, unused*/, _stringLiteral200, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t484  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern Il2CppCodeGenString* _stringLiteral201;
extern "C" AnimatorClipInfo_t485  AnimationEvent_get_animatorClipInfo_m2705 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral201 = il2cpp_codegen_string_literal_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m2702(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1528(NULL /*static, unused*/, _stringLiteral201, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t485  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t AnimationEvent_GetHash_m2706 (AnimationEvent_t482 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m2695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m3104(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m2697(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m3072((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
#include "UnityEngine_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
extern "C" void AnimationCurve__ctor_m2707 (AnimationCurve_t487 * __this, KeyframeU5BU5D_t578* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t578* L_0 = ___keys;
		AnimationCurve_Init_m2711(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2708 (AnimationCurve_t487 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m2711(__this, (KeyframeU5BU5D_t578*)(KeyframeU5BU5D_t578*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2709 (AnimationCurve_t487 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m2709_ftn) (AnimationCurve_t487 *);
	static AnimationCurve_Cleanup_m2709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m2709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2710 (AnimationCurve_t487 * __this, const MethodInfo* method)
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
		AnimationCurve_Cleanup_m2709(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2711 (AnimationCurve_t487 * __this, KeyframeU5BU5D_t578* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m2711_ftn) (AnimationCurve_t487 *, KeyframeU5BU5D_t578*);
	static AnimationCurve_Init_m2711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m2711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t487_marshal(const AnimationCurve_t487& unmarshaled, AnimationCurve_t487_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void AnimationCurve_t487_marshal_back(const AnimationCurve_t487_marshaled& marshaled, AnimationCurve_t487& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t487_marshal_cleanup(AnimationCurve_t487_marshaled& marshaled)
{
}
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" bool AnimatorStateInfo_IsName_m2712 (AnimatorStateInfo_t484 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m2732(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m2713 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m2714 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m2715 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m2716 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m2717 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C" float AnimatorStateInfo_get_speed_m2718 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Speed_5);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C" float AnimatorStateInfo_get_speedMultiplier_m2719 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_SpeedMultiplier_6);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m2720 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m2721 (AnimatorStateInfo_t484 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m2732(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_7);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m2722 (AnimatorStateInfo_t484 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_8);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" bool AnimatorTransitionInfo_IsName_m2723 (AnimatorTransitionInfo_t489 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m2732(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m2732(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m2724 (AnimatorTransitionInfo_t489 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m2732(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m2725 (AnimatorTransitionInfo_t489 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m2726 (AnimatorTransitionInfo_t489 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m2727 (AnimatorTransitionInfo_t489 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m2728 (AnimatorTransitionInfo_t489 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m2729 (AnimatorTransitionInfo_t489 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m2730 (AnimatorTransitionInfo_t489 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m2731 (AnimatorTransitionInfo_t489 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t489_marshal(const AnimatorTransitionInfo_t489& unmarshaled, AnimatorTransitionInfo_t489_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
extern "C" void AnimatorTransitionInfo_t489_marshal_back(const AnimatorTransitionInfo_t489_marshaled& marshaled, AnimatorTransitionInfo_t489& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t489_marshal_cleanup(AnimatorTransitionInfo_t489_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
// System.Void UnityEngine.Animator::SetTrigger(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" void Animator_SetTrigger_m2033 (Animator_t310 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m2733(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m2032 (Animator_t310 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m2734(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t364 * Animator_get_runtimeAnimatorController_m2031 (Animator_t310 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t364 * (*Animator_get_runtimeAnimatorController_m2031_ftn) (Animator_t310 *);
	static Animator_get_runtimeAnimatorController_m2031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m2732 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m2732_ftn) (String_t*);
	static Animator_StringToHash_m2732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m2732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m2733 (Animator_t310 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m2733_ftn) (Animator_t310 *, String_t*);
	static Animator_SetTriggerString_m2733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m2733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m2734 (Animator_t310 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m2734_ftn) (Animator_t310 *, String_t*);
	static Animator_ResetTriggerString_m2734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m2734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t490_marshal(const SkeletonBone_t490& unmarshaled, SkeletonBone_t490_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
extern "C" void SkeletonBone_t490_marshal_back(const SkeletonBone_t490_marshaled& marshaled, SkeletonBone_t490& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t490_marshal_cleanup(SkeletonBone_t490_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"
// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m2735 (HumanBone_t492 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void HumanBone_set_boneName_m2736 (HumanBone_t492 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m2737 (HumanBone_t492 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m2738 (HumanBone_t492 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t492_marshal(const HumanBone_t492& unmarshaled, HumanBone_t492_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
extern "C" void HumanBone_t492_marshal_back(const HumanBone_t492_marshaled& marshaled, HumanBone_t492& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t492_marshal_cleanup(HumanBone_t492_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m2739 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Void UnityEngine.CharacterInfo::set_advance(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CharacterInfo_set_advance_m2740 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___width_3 = (((float)L_0));
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" int32_t CharacterInfo_get_glyphWidth_m2741 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m1791(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_glyphWidth(System.Int32)
extern "C" void CharacterInfo_set_glyphWidth_m2742 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_set_width_m1853(L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m2743 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m1737(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_glyphHeight(System.Int32)
extern "C" void CharacterInfo_set_glyphHeight_m2744 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m1737(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t191 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		Rect_set_height_m1851(L_2, (((float)((-L_3)))), /*hidden argument*/NULL);
		Rect_t191 * L_4 = &(__this->___vert_2);
		Rect_t191 * L_5 = L_4;
		float L_6 = Rect_get_y_m1796(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Rect_t191 * L_8 = &(__this->___vert_2);
		float L_9 = Rect_get_height_m1737(L_8, /*hidden argument*/NULL);
		Rect_set_y_m1852(L_5, ((float)((float)L_6+(float)((float)((float)L_7-(float)L_9)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m2745 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1795(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_bearing(System.Int32)
extern "C" void CharacterInfo_set_bearing_m2746 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_set_x_m1854(L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m2747 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t191 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m1796(L_1, /*hidden argument*/NULL);
		Rect_t191 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m1737(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_minY(System.Int32)
extern "C" void CharacterInfo_set_minY_m2748 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		int32_t L_2 = (__this->___ascent_7);
		Rect_t191 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_y_m1796(L_3, /*hidden argument*/NULL);
		Rect_set_height_m1851(L_0, ((float)((float)(((float)((int32_t)((int32_t)L_1-(int32_t)L_2))))-(float)L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m2749 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t191 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m1796(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_maxY(System.Int32)
extern "C" void CharacterInfo_set_maxY_m2750 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_y_m1796(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t191 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		int32_t L_4 = (__this->___ascent_7);
		Rect_set_y_m1852(L_2, (((float)((int32_t)((int32_t)L_3-(int32_t)L_4)))), /*hidden argument*/NULL);
		Rect_t191 * L_5 = &(__this->___vert_2);
		Rect_t191 * L_6 = L_5;
		float L_7 = Rect_get_height_m1737(L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		Rect_t191 * L_9 = &(__this->___vert_2);
		float L_10 = Rect_get_y_m1796(L_9, /*hidden argument*/NULL);
		Rect_set_height_m1851(L_6, ((float)((float)L_7+(float)((float)((float)L_8-(float)L_10)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m2751 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1795(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_minX(System.Int32)
extern "C" void CharacterInfo_set_minX_m2752 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1795(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t191 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		Rect_set_x_m1854(L_2, (((float)L_3)), /*hidden argument*/NULL);
		Rect_t191 * L_4 = &(__this->___vert_2);
		Rect_t191 * L_5 = L_4;
		float L_6 = Rect_get_width_m1791(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Rect_t191 * L_8 = &(__this->___vert_2);
		float L_9 = Rect_get_x_m1795(L_8, /*hidden argument*/NULL);
		Rect_set_width_m1853(L_5, ((float)((float)L_6+(float)((float)((float)L_7-(float)L_9)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m2753 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1795(L_0, /*hidden argument*/NULL);
		Rect_t191 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m1791(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_maxX(System.Int32)
extern "C" void CharacterInfo_set_maxX_m2754 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_t191 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_x_m1795(L_2, /*hidden argument*/NULL);
		Rect_set_width_m1853(L_0, ((float)((float)(((float)L_1))-(float)L_3)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t11  CharacterInfo_get_uvBottomLeftUnFlipped_m2755 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1795(L_0, /*hidden argument*/NULL);
		Rect_t191 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m1796(L_2, /*hidden argument*/NULL);
		Vector2_t11  L_4 = {0};
		Vector2__ctor_m1578(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeftUnFlipped(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
extern "C" void CharacterInfo_set_uvBottomLeftUnFlipped_m2756 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		Vector2_t11  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m2759(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t191 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_set_x_m1854(L_1, L_2, /*hidden argument*/NULL);
		Rect_t191 * L_3 = &(__this->___uv_1);
		float L_4 = ((&___value)->___y_2);
		Rect_set_y_m1852(L_3, L_4, /*hidden argument*/NULL);
		Rect_t191 * L_5 = &(__this->___uv_1);
		float L_6 = ((&V_0)->___x_1);
		Rect_t191 * L_7 = &(__this->___uv_1);
		float L_8 = Rect_get_x_m1795(L_7, /*hidden argument*/NULL);
		Rect_set_width_m1853(L_5, ((float)((float)L_6-(float)L_8)), /*hidden argument*/NULL);
		Rect_t191 * L_9 = &(__this->___uv_1);
		float L_10 = ((&V_0)->___y_2);
		Rect_t191 * L_11 = &(__this->___uv_1);
		float L_12 = Rect_get_y_m1796(L_11, /*hidden argument*/NULL);
		Rect_set_height_m1851(L_9, ((float)((float)L_10-(float)L_12)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t11  CharacterInfo_get_uvBottomRightUnFlipped_m2757 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1795(L_0, /*hidden argument*/NULL);
		Rect_t191 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m1791(L_2, /*hidden argument*/NULL);
		Rect_t191 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m1796(L_4, /*hidden argument*/NULL);
		Vector2_t11  L_6 = {0};
		Vector2__ctor_m1578(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRightUnFlipped_m2758 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		Vector2_t11  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m2759(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t191 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_t191 * L_3 = &(__this->___uv_1);
		float L_4 = Rect_get_x_m1795(L_3, /*hidden argument*/NULL);
		Rect_set_width_m1853(L_1, ((float)((float)L_2-(float)L_4)), /*hidden argument*/NULL);
		Rect_t191 * L_5 = &(__this->___uv_1);
		float L_6 = ((&___value)->___y_2);
		Rect_set_y_m1852(L_5, L_6, /*hidden argument*/NULL);
		Rect_t191 * L_7 = &(__this->___uv_1);
		float L_8 = ((&V_0)->___y_2);
		Rect_t191 * L_9 = &(__this->___uv_1);
		float L_10 = Rect_get_y_m1796(L_9, /*hidden argument*/NULL);
		Rect_set_height_m1851(L_7, ((float)((float)L_8-(float)L_10)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t11  CharacterInfo_get_uvTopRightUnFlipped_m2759 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1795(L_0, /*hidden argument*/NULL);
		Rect_t191 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m1791(L_2, /*hidden argument*/NULL);
		Rect_t191 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m1796(L_4, /*hidden argument*/NULL);
		Rect_t191 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m1737(L_6, /*hidden argument*/NULL);
		Vector2_t11  L_8 = {0};
		Vector2__ctor_m1578(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRightUnFlipped_m2760 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___uv_1);
		float L_1 = ((&___value)->___x_1);
		Rect_t191 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_x_m1795(L_2, /*hidden argument*/NULL);
		Rect_set_width_m1853(L_0, ((float)((float)L_1-(float)L_3)), /*hidden argument*/NULL);
		Rect_t191 * L_4 = &(__this->___uv_1);
		float L_5 = ((&___value)->___y_2);
		Rect_t191 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_y_m1796(L_6, /*hidden argument*/NULL);
		Rect_set_height_m1851(L_4, ((float)((float)L_5-(float)L_7)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t11  CharacterInfo_get_uvTopLeftUnFlipped_m2761 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Rect_t191 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1795(L_0, /*hidden argument*/NULL);
		Rect_t191 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m1796(L_2, /*hidden argument*/NULL);
		Rect_t191 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m1737(L_4, /*hidden argument*/NULL);
		Vector2_t11  L_6 = {0};
		Vector2__ctor_m1578(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopLeftUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeftUnFlipped_m2762 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		Vector2_t11  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m2759(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t191 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_set_x_m1854(L_1, L_2, /*hidden argument*/NULL);
		Rect_t191 * L_3 = &(__this->___uv_1);
		float L_4 = ((&___value)->___y_2);
		Rect_t191 * L_5 = &(__this->___uv_1);
		float L_6 = Rect_get_y_m1796(L_5, /*hidden argument*/NULL);
		Rect_set_height_m1851(L_3, ((float)((float)L_4-(float)L_6)), /*hidden argument*/NULL);
		Rect_t191 * L_7 = &(__this->___uv_1);
		float L_8 = ((&V_0)->___x_1);
		Rect_t191 * L_9 = &(__this->___uv_1);
		float L_10 = Rect_get_x_m1795(L_9, /*hidden argument*/NULL);
		Rect_set_width_m1853(L_7, ((float)((float)L_8-(float)L_10)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t11  CharacterInfo_get_uvBottomLeft_m2763 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = CharacterInfo_get_uvBottomLeftUnFlipped_m2755(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomLeft_m2764 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = ___value;
		CharacterInfo_set_uvBottomLeftUnFlipped_m2756(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t11  CharacterInfo_get_uvBottomRight_m2765 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	Vector2_t11  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t11  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m2761(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t11  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m2757(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRight_m2766 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t11  L_1 = ___value;
		CharacterInfo_set_uvTopLeftUnFlipped_m2762(__this, L_1, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0017:
	{
		Vector2_t11  L_2 = ___value;
		CharacterInfo_set_uvBottomRightUnFlipped_m2758(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t11  CharacterInfo_get_uvTopRight_m2767 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m2759(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRight_m2768 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		Vector2_t11  L_0 = ___value;
		CharacterInfo_set_uvTopRightUnFlipped_m2760(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t11  CharacterInfo_get_uvTopLeft_m2769 (CharacterInfo_t495 * __this, const MethodInfo* method)
{
	Vector2_t11  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t11  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m2757(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t11  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m2761(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeft_m2770 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t11  L_1 = ___value;
		CharacterInfo_set_uvBottomRightUnFlipped_m2758(__this, L_1, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0017:
	{
		Vector2_t11  L_2 = ___value;
		CharacterInfo_set_uvTopLeftUnFlipped_m2762(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t495_marshal(const CharacterInfo_t495& unmarshaled, CharacterInfo_t495_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
extern "C" void CharacterInfo_t495_marshal_back(const CharacterInfo_t495_marshaled& marshaled, CharacterInfo_t495& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t495_marshal_cleanup(CharacterInfo_t495_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void FontTextureRebuildCallback__ctor_m2771 (FontTextureRebuildCallback_t496 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m2772 (FontTextureRebuildCallback_t496 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m2772((FontTextureRebuildCallback_t496 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t496(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m2773 (FontTextureRebuildCallback_t496 * __this, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m2774 (FontTextureRebuildCallback_t496 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// System.Void UnityEngine.Font::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
extern "C" void Font__ctor_m2775 (Font_t150 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		Font_Internal_CreateFont_m2782(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Font__ctor_m2776 (Font_t150 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		Font_Internal_CreateFont_m2782(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Font__ctor_m2777 (Font_t150 * __this, StringU5BU5D_t48* ___names, int32_t ___size, const MethodInfo* method)
{
	{
		Object__ctor_m2560(__this, /*hidden argument*/NULL);
		StringU5BU5D_t48* L_0 = ___names;
		int32_t L_1 = ___size;
		Font_Internal_CreateDynamicFont_m2783(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Font_t150_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t341_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m1772 (Object_t * __this /* static, unused */, Action_1_t341 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		Action_1_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t341 * L_0 = ((Font_t150_StaticFields*)Font_t150_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t341 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t150_StaticFields*)Font_t150_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t341 *)CastclassSealed(L_2, Action_1_t341_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t150_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t341_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m2778 (Object_t * __this /* static, unused */, Action_1_t341 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		Action_1_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t341 * L_0 = ((Font_t150_StaticFields*)Font_t150_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t341 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t150_StaticFields*)Font_t150_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t341 *)CastclassSealed(L_2, Action_1_t341_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
extern TypeInfo* FontTextureRebuildCallback_t496_il2cpp_TypeInfo_var;
extern "C" void Font_add_m_FontTextureRebuildCallback_m2779 (Font_t150 * __this, FontTextureRebuildCallback_t496 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FontTextureRebuildCallback_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(341);
		s_Il2CppMethodIntialized = true;
	}
	{
		FontTextureRebuildCallback_t496 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		FontTextureRebuildCallback_t496 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_FontTextureRebuildCallback_3 = ((FontTextureRebuildCallback_t496 *)CastclassSealed(L_2, FontTextureRebuildCallback_t496_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern TypeInfo* FontTextureRebuildCallback_t496_il2cpp_TypeInfo_var;
extern "C" void Font_remove_m_FontTextureRebuildCallback_m2780 (Font_t150 * __this, FontTextureRebuildCallback_t496 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FontTextureRebuildCallback_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(341);
		s_Il2CppMethodIntialized = true;
	}
	{
		FontTextureRebuildCallback_t496 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		FontTextureRebuildCallback_t496 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_FontTextureRebuildCallback_3 = ((FontTextureRebuildCallback_t496 *)CastclassSealed(L_2, FontTextureRebuildCallback_t496_il2cpp_TypeInfo_var));
		return;
	}
}
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C" StringU5BU5D_t48* Font_GetOSInstalledFontNames_m2781 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef StringU5BU5D_t48* (*Font_GetOSInstalledFontNames_m2781_ftn) ();
	static Font_GetOSInstalledFontNames_m2781_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetOSInstalledFontNames_m2781_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetOSInstalledFontNames()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern "C" void Font_Internal_CreateFont_m2782 (Object_t * __this /* static, unused */, Font_t150 * ____font, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Font_Internal_CreateFont_m2782_ftn) (Font_t150 *, String_t*);
	static Font_Internal_CreateFont_m2782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateFont_m2782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)");
	_il2cpp_icall_func(____font, ___name);
}
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C" void Font_Internal_CreateDynamicFont_m2783 (Object_t * __this /* static, unused */, Font_t150 * ____font, StringU5BU5D_t48* ____names, int32_t ___size, const MethodInfo* method)
{
	typedef void (*Font_Internal_CreateDynamicFont_m2783_ftn) (Font_t150 *, StringU5BU5D_t48*, int32_t);
	static Font_Internal_CreateDynamicFont_m2783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateDynamicFont_m2783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)");
	_il2cpp_icall_func(____font, ____names, ___size);
}
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Font_t150_il2cpp_TypeInfo_var;
extern "C" Font_t150 * Font_CreateDynamicFontFromOSFont_m2784 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Font_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		s_Il2CppMethodIntialized = true;
	}
	Font_t150 * V_0 = {0};
	{
		StringU5BU5D_t48* L_0 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___fontname;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)L_1;
		int32_t L_2 = ___size;
		Font_t150 * L_3 = (Font_t150 *)il2cpp_codegen_object_new (Font_t150_il2cpp_TypeInfo_var);
		Font__ctor_m2777(L_3, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Font_t150 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern TypeInfo* Font_t150_il2cpp_TypeInfo_var;
extern "C" Font_t150 * Font_CreateDynamicFontFromOSFont_m2785 (Object_t * __this /* static, unused */, StringU5BU5D_t48* ___fontnames, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		s_Il2CppMethodIntialized = true;
	}
	Font_t150 * V_0 = {0};
	{
		StringU5BU5D_t48* L_0 = ___fontnames;
		int32_t L_1 = ___size;
		Font_t150 * L_2 = (Font_t150 *)il2cpp_codegen_object_new (Font_t150_il2cpp_TypeInfo_var);
		Font__ctor_m2777(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Font_t150 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t19 * Font_get_material_m2043 (Font_t150 * __this, const MethodInfo* method)
{
	typedef Material_t19 * (*Font_get_material_m2043_ftn) (Font_t150 *);
	static Font_get_material_m2043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void Font_set_material_m2786 (Font_t150 * __this, Material_t19 * ___value, const MethodInfo* method)
{
	typedef void (*Font_set_material_m2786_ftn) (Font_t150 *, Material_t19 *);
	static Font_set_material_m2786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_material_m2786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_material(UnityEngine.Material)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" bool Font_HasCharacter_m1914 (Font_t150 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m1914_ftn) (Font_t150 *, uint16_t);
	static Font_HasCharacter_m1914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m1914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t48* Font_get_fontNames_m2787 (Font_t150 * __this, const MethodInfo* method)
{
	typedef StringU5BU5D_t48* (*Font_get_fontNames_m2787_ftn) (Font_t150 *);
	static Font_get_fontNames_m2787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontNames_m2787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontNames()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C" void Font_set_fontNames_m2788 (Font_t150 * __this, StringU5BU5D_t48* ___value, const MethodInfo* method)
{
	typedef void (*Font_set_fontNames_m2788_ftn) (Font_t150 *, StringU5BU5D_t48*);
	static Font_set_fontNames_m2788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_fontNames_m2788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_fontNames(System.String[])");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C" CharacterInfoU5BU5D_t579* Font_get_characterInfo_m2789 (Font_t150 * __this, const MethodInfo* method)
{
	typedef CharacterInfoU5BU5D_t579* (*Font_get_characterInfo_m2789_ftn) (Font_t150 *);
	static Font_get_characterInfo_m2789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_characterInfo_m2789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_characterInfo()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void Font_set_characterInfo_m2790 (Font_t150 * __this, CharacterInfoU5BU5D_t579* ___value, const MethodInfo* method)
{
	typedef void (*Font_set_characterInfo_m2790_ftn) (Font_t150 *, CharacterInfoU5BU5D_t579*);
	static Font_set_characterInfo_m2790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_characterInfo_m2790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
extern "C" void Font_RequestCharactersInTexture_m2791 (Font_t150 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef void (*Font_RequestCharactersInTexture_m2791_ftn) (Font_t150 *, String_t*, int32_t, int32_t);
	static Font_RequestCharactersInTexture_m2791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_RequestCharactersInTexture_m2791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___characters, ___size, ___style);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C" void Font_RequestCharactersInTexture_m2792 (Font_t150 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___characters;
		int32_t L_1 = ___size;
		int32_t L_2 = V_0;
		Font_RequestCharactersInTexture_m2791(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C" void Font_RequestCharactersInTexture_m2793 (Font_t150 * __this, String_t* ___characters, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___characters;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		Font_RequestCharactersInTexture_m2791(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
extern TypeInfo* Font_t150_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3105_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m2794 (Object_t * __this /* static, unused */, Font_t150 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		Action_1_Invoke_m3105_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483965);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t341 * V_0 = {0};
	{
		Action_1_t341 * L_0 = ((Font_t150_StaticFields*)Font_t150_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t341 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t341 * L_2 = V_0;
		Font_t150 * L_3 = ___font;
		NullCheck(L_2);
		Action_1_Invoke_m3105(L_2, L_3, /*hidden argument*/Action_1_Invoke_m3105_MethodInfo_var);
	}

IL_0013:
	{
		Font_t150 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t496 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t150 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t496 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m2772(L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t496 * Font_get_textureRebuildCallback_m2795 (Font_t150 * __this, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t496 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		return L_0;
	}
}
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m2796 (Font_t150 * __this, FontTextureRebuildCallback_t496 * ___value, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t496 * L_0 = ___value;
		__this->___m_FontTextureRebuildCallback_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" int32_t Font_GetMaxVertsForString_m2797 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m153(L_0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)4))+(int32_t)4));
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m2798 (Font_t150 * __this, uint16_t ___ch, CharacterInfo_t495 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef bool (*Font_GetCharacterInfo_m2798_ftn) (Font_t150 *, uint16_t, CharacterInfo_t495 *, int32_t, int32_t);
	static Font_GetCharacterInfo_m2798_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetCharacterInfo_m2798_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)");
	return _il2cpp_icall_func(__this, ___ch, ___info, ___size, ___style);
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C" bool Font_GetCharacterInfo_m2799 (Font_t150 * __this, uint16_t ___ch, CharacterInfo_t495 * ___info, int32_t ___size, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		uint16_t L_0 = ___ch;
		CharacterInfo_t495 * L_1 = ___info;
		int32_t L_2 = ___size;
		int32_t L_3 = V_0;
		bool L_4 = Font_GetCharacterInfo_m2798(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C" bool Font_GetCharacterInfo_m2800 (Font_t150 * __this, uint16_t ___ch, CharacterInfo_t495 * ___info, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		uint16_t L_0 = ___ch;
		CharacterInfo_t495 * L_1 = ___info;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Font_GetCharacterInfo_m2798(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m2046 (Font_t150 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2046_ftn) (Font_t150 *);
	static Font_get_dynamic_m2046_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2046_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_ascent()
extern "C" int32_t Font_get_ascent_m2801 (Font_t150 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_ascent_m2801_ftn) (Font_t150 *);
	static Font_get_ascent_m2801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_ascent_m2801_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_ascent()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C" int32_t Font_get_lineHeight_m2802 (Font_t150 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_lineHeight_m2802_ftn) (Font_t150 *);
	static Font_get_lineHeight_m2802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_lineHeight_m2802_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_lineHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m2048 (Font_t150 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2048_ftn) (Font_t150 *);
	static Font_get_fontSize_m2048_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2048_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
// System.Void UnityEngine.TextGenerator::.ctor()
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
extern "C" void TextGenerator__ctor_m1877 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m2042(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
extern TypeInfo* List_1_t305_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t497_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t498_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3106_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3107_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3108_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2042 (TextGenerator_t193 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		List_1_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		List_1_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		List_1__ctor_m3106_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483966);
		List_1__ctor_m3107_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483967);
		List_1__ctor_m3108_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483968);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t305 * L_1 = (List_1_t305 *)il2cpp_codegen_object_new (List_1_t305_il2cpp_TypeInfo_var);
		List_1__ctor_m3106(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m3106_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t497 * L_3 = (List_1_t497 *)il2cpp_codegen_object_new (List_1_t497_il2cpp_TypeInfo_var);
		List_1__ctor_m3107(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m3107_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t498 * L_4 = (List_1_t498 *)il2cpp_codegen_object_new (List_1_t498_il2cpp_TypeInfo_var);
		List_1__ctor_m3108(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m3108_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m2804(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m2803 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m2805(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m2804 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m2804_ftn) (TextGenerator_t193 *);
	static TextGenerator_Init_m2804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m2804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m2805 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m2805_ftn) (TextGenerator_t193 *);
	static TextGenerator_Dispose_cpp_m2805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m2805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" bool TextGenerator_Populate_Internal_m2806 (TextGenerator_t193 * __this, String_t* ___str, Font_t150 * ___font, Color_t27  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t11  ___extents, Vector2_t11  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t150 * L_1 = ___font;
		Color_t27  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m2807(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m2807 (TextGenerator_t193 * __this, String_t* ___str, Font_t150 * ___font, Color_t27  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t150 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2808(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2808 (Object_t * __this /* static, unused */, TextGenerator_t193 * ___self, String_t* ___str, Font_t150 * ___font, Color_t27 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2808_ftn) (TextGenerator_t193 *, String_t*, Font_t150 *, Color_t27 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2808_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2808_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t191  TextGenerator_get_rectExtents_m1932 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	Rect_t191  V_0 = {0};
	{
		TextGenerator_INTERNAL_get_rectExtents_m2809(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t191  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C" void TextGenerator_INTERNAL_get_rectExtents_m2809 (TextGenerator_t193 * __this, Rect_t191 * ___value, const MethodInfo* method)
{
	typedef void (*TextGenerator_INTERNAL_get_rectExtents_m2809_ftn) (TextGenerator_t193 *, Rect_t191 *);
	static TextGenerator_INTERNAL_get_rectExtents_m2809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_get_rectExtents_m2809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m2810 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m2810_ftn) (TextGenerator_t193 *);
	static TextGenerator_get_vertexCount_m2810_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m2810_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void TextGenerator_GetVerticesInternal_m2811 (TextGenerator_t193 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m2811_ftn) (TextGenerator_t193 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m2811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m2811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t192* TextGenerator_GetVerticesArray_m2812 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t192* (*TextGenerator_GetVerticesArray_m2812_ftn) (TextGenerator_t193 *);
	static TextGenerator_GetVerticesArray_m2812_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m2812_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m2813 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m2813_ftn) (TextGenerator_t193 *);
	static TextGenerator_get_characterCount_m2813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m2813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m1908 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1930(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m153(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m2810(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m1921(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m1923(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m2814 (TextGenerator_t193 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m2814_ftn) (TextGenerator_t193 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m2814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m2814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t580* TextGenerator_GetCharactersArray_m2815 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t580* (*TextGenerator_GetCharactersArray_m2815_ftn) (TextGenerator_t193 *);
	static TextGenerator_GetCharactersArray_m2815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m2815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m1907 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m1907_ftn) (TextGenerator_t193 *);
	static TextGenerator_get_lineCount_m1907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m1907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m2816 (TextGenerator_t193 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m2816_ftn) (TextGenerator_t193 *, Object_t *);
	static TextGenerator_GetLinesInternal_m2816_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m2816_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t581* TextGenerator_GetLinesArray_m2817 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t581* (*TextGenerator_GetLinesArray_m2817_ftn) (TextGenerator_t193 *);
	static TextGenerator_GetLinesArray_m2817_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m2817_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m1946 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m1946_ftn) (TextGenerator_t193 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m1946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m1946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t37_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m2818 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
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
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t37_il2cpp_TypeInfo_var, __this);
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
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral202;
extern Il2CppCodeGenString* _stringLiteral203;
extern "C" TextGenerationSettings_t311  TextGenerator_ValidatedSettings_m2819 (TextGenerator_t193 * __this, TextGenerationSettings_t311  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral202 = il2cpp_codegen_string_literal_from_index(202);
		_stringLiteral203 = il2cpp_codegen_string_literal_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t150 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m79(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t150 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2046(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t311  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m2518(NULL /*static, unused*/, _stringLiteral202, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m2518(NULL /*static, unused*/, _stringLiteral203, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t311  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m2045 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
extern "C" void TextGenerator_GetCharacters_m2820 (TextGenerator_t193 * __this, List_1_t497 * ___characters, const MethodInfo* method)
{
	{
		List_1_t497 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m2814(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
extern "C" void TextGenerator_GetLines_m2821 (TextGenerator_t193 * __this, List_1_t498 * ___lines, const MethodInfo* method)
{
	{
		List_1_t498 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m2816(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
extern "C" void TextGenerator_GetVertices_m2822 (TextGenerator_t193 * __this, List_1_t305 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t305 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m2811(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" float TextGenerator_GetPreferredWidth_m2050 (TextGenerator_t193 * __this, String_t* ___str, TextGenerationSettings_t311  ___settings, const MethodInfo* method)
{
	Rect_t191  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t311  L_1 = ___settings;
		TextGenerator_Populate_m1931(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t191  L_2 = TextGenerator_get_rectExtents_m1932(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m1791((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m2051 (TextGenerator_t193 * __this, String_t* ___str, TextGenerationSettings_t311  ___settings, const MethodInfo* method)
{
	Rect_t191  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t311  L_1 = ___settings;
		TextGenerator_Populate_m1931(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t191  L_2 = TextGenerator_get_rectExtents_m1932(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m1737((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m1931 (TextGenerator_t193 * __this, String_t* ___str, TextGenerationSettings_t311  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m63(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t311  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m2987((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t311  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m2823(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m2823 (TextGenerator_t193 * __this, String_t* ___str, TextGenerationSettings_t311  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t311  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t311  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t311  L_2 = ___settings;
		TextGenerationSettings_t311  L_3 = TextGenerator_ValidatedSettings_m2819(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t150 * L_5 = ((&V_0)->___font_0);
		Color_t27  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t11  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t11  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m2806(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m2049 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t305 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m2822(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t305 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m1909 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t497 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m2820(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t497 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m1906 (TextGenerator_t193 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t498 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m2821(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t498 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void WillRenderCanvases__ctor_m1663 (WillRenderCanvases_t333 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m2824 (WillRenderCanvases_t333 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m2824((WillRenderCanvases_t333 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t333(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m2825 (WillRenderCanvases_t333 * __this, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m2826 (WillRenderCanvases_t333 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Canvas_t155_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t333_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m1664 (Object_t * __this /* static, unused */, WillRenderCanvases_t333 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		WillRenderCanvases_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t333 * L_0 = ((Canvas_t155_StaticFields*)Canvas_t155_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t333 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Combine_m1811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t155_StaticFields*)Canvas_t155_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t333 *)CastclassSealed(L_2, WillRenderCanvases_t333_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t155_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t333_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m2827 (Object_t * __this /* static, unused */, WillRenderCanvases_t333 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		WillRenderCanvases_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t333 * L_0 = ((Canvas_t155_StaticFields*)Canvas_t155_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t333 * L_1 = ___value;
		Delegate_t346 * L_2 = Delegate_Remove_m1812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t155_StaticFields*)Canvas_t155_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t333 *)CastclassSealed(L_2, WillRenderCanvases_t333_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m1814 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m1814_ftn) (Canvas_t155 *);
	static Canvas_get_renderMode_m1814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m1814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m2064 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2064_ftn) (Canvas_t155 *);
	static Canvas_get_isRootCanvas_m2064_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2064_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t34 * Canvas_get_worldCamera_m1828 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef Camera_t34 * (*Canvas_get_worldCamera_m1828_ftn) (Canvas_t155 *);
	static Canvas_get_worldCamera_m1828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m1828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m2047 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2047_ftn) (Canvas_t155 *);
	static Canvas_get_scaleFactor_m2047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Canvas_set_scaleFactor_m2067 (Canvas_t155 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2067_ftn) (Canvas_t155 *, float);
	static Canvas_set_scaleFactor_m2067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2067_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m1845 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m1845_ftn) (Canvas_t155 *);
	static Canvas_get_referencePixelsPerUnit_m1845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m1845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m2068 (Canvas_t155 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2068_ftn) (Canvas_t155 *, float);
	static Canvas_set_referencePixelsPerUnit_m2068_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2068_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m1802 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m1802_ftn) (Canvas_t155 *);
	static Canvas_get_pixelPerfect_m1802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m1802_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m1815 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m1815_ftn) (Canvas_t155 *);
	static Canvas_get_renderOrder_m1815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m1815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_overrideSorting()
extern "C" bool Canvas_get_overrideSorting_m1974 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_overrideSorting_m1974_ftn) (Canvas_t155 *);
	static Canvas_get_overrideSorting_m1974_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_overrideSorting_m1974_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_overrideSorting()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Canvas_set_overrideSorting_m1721 (Canvas_t155 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_overrideSorting_m1721_ftn) (Canvas_t155 *, bool);
	static Canvas_set_overrideSorting_m1721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_overrideSorting_m1721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_overrideSorting(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m1751 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m1751_ftn) (Canvas_t155 *);
	static Canvas_get_sortingOrder_m1751_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m1751_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Canvas_set_sortingOrder_m1722 (Canvas_t155 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_sortingOrder_m1722_ftn) (Canvas_t155 *, int32_t);
	static Canvas_set_sortingOrder_m1722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_sortingOrder_m1722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern "C" int32_t Canvas_get_sortingLayerID_m1749 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingLayerID_m1749_ftn) (Canvas_t155 *);
	static Canvas_get_sortingLayerID_m1749_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingLayerID_m1749_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
extern "C" void Canvas_set_sortingLayerID_m1750 (Canvas_t155 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_sortingLayerID_m1750_ftn) (Canvas_t155 *, int32_t);
	static Canvas_set_sortingLayerID_m1750_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_sortingLayerID_m1750_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_sortingLayerID(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m1827 (Canvas_t155 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m1827_ftn) (Canvas_t155 *);
	static Canvas_get_cachedSortingLayerValue_m1827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m1827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t19 * Canvas_GetDefaultCanvasMaterial_m1776 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t19 * (*Canvas_GetDefaultCanvasMaterial_m1776_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m1776_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m1776_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
extern TypeInfo* Canvas_t155_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m2828 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t333 * L_0 = ((Canvas_t155_StaticFields*)Canvas_t155_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t333 * L_1 = ((Canvas_t155_StaticFields*)Canvas_t155_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		WillRenderCanvases_Invoke_m2824(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
extern "C" void Canvas_ForceUpdateCanvases_m1992 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m2828(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// System.Single UnityEngine.CanvasGroup::get_alpha()
extern "C" float CanvasGroup_get_alpha_m1759 (CanvasGroup_t335 * __this, const MethodInfo* method)
{
	typedef float (*CanvasGroup_get_alpha_m1759_ftn) (CanvasGroup_t335 *);
	static CanvasGroup_get_alpha_m1759_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_alpha_m1759_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_alpha()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void CanvasGroup_set_alpha_m1763 (CanvasGroup_t335 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*CanvasGroup_set_alpha_m1763_ftn) (CanvasGroup_t335 *, float);
	static CanvasGroup_set_alpha_m1763_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_set_alpha_m1763_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::set_alpha(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m2022 (CanvasGroup_t335 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2022_ftn) (CanvasGroup_t335 *);
	static CanvasGroup_get_interactable_m2022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m2829 (CanvasGroup_t335 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m2829_ftn) (CanvasGroup_t335 *);
	static CanvasGroup_get_blocksRaycasts_m2829_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m2829_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m1801 (CanvasGroup_t335 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m1801_ftn) (CanvasGroup_t335 *);
	static CanvasGroup_get_ignoreParentGroups_m1801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m1801_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
extern "C" bool CanvasGroup_IsRaycastLocationValid_m2830 (CanvasGroup_t335 * __this, Vector2_t11  ___sp, Camera_t34 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m2829(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// System.Void UnityEngine.UIVertex::.cctor()
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* UIVertex_t199_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m2831 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t199  V_0 = {0};
	{
		Color32_t307  L_0 = {0};
		Color32__ctor_m1671(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t199_StaticFields*)UIVertex_t199_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t277  L_1 = {0};
		Vector4__ctor_m1797(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t199_StaticFields*)UIVertex_t199_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t199_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t10  L_2 = Vector3_get_zero_m1570(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t10  L_3 = Vector3_get_back_m2115(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t277  L_4 = ((UIVertex_t199_StaticFields*)UIVertex_t199_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t307  L_5 = ((UIVertex_t199_StaticFields*)UIVertex_t199_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t11  L_6 = Vector2_get_zero_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t11  L_7 = Vector2_get_zero_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t199  L_8 = V_0;
		((UIVertex_t199_StaticFields*)UIVertex_t199_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
extern "C" void CanvasRenderer_SetColor_m1807 (CanvasRenderer_t154 * __this, Color_t27  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m2832(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m2832 (Object_t * __this /* static, unused */, CanvasRenderer_t154 * ___self, Color_t27 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m2832_ftn) (CanvasRenderer_t154 *, Color_t27 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m2832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m2832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t27  CanvasRenderer_GetColor_m1805 (CanvasRenderer_t154 * __this, const MethodInfo* method)
{
	typedef Color_t27  (*CanvasRenderer_GetColor_m1805_ftn) (CanvasRenderer_t154 *);
	static CanvasRenderer_GetColor_m1805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m1805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern "C" void CanvasRenderer_EnableRectClipping_m1970 (CanvasRenderer_t154 * __this, Rect_t191  ___rect, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2833(NULL /*static, unused*/, __this, (&___rect), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C" void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2833 (Object_t * __this /* static, unused */, CanvasRenderer_t154 * ___self, Rect_t191 * ___rect, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2833_ftn) (CanvasRenderer_t154 *, Rect_t191 *);
	static CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)");
	_il2cpp_icall_func(___self, ___rect);
}
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C" void CanvasRenderer_DisableRectClipping_m1971 (CanvasRenderer_t154 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_DisableRectClipping_m1971_ftn) (CanvasRenderer_t154 *);
	static CanvasRenderer_DisableRectClipping_m1971_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_DisableRectClipping_m1971_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::DisableRectClipping()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void CanvasRenderer_set_hasPopInstruction_m1961 (CanvasRenderer_t154 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_hasPopInstruction_m1961_ftn) (CanvasRenderer_t154 *, bool);
	static CanvasRenderer_set_hasPopInstruction_m1961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_hasPopInstruction_m1961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C" int32_t CanvasRenderer_get_materialCount_m2834 (CanvasRenderer_t154 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_materialCount_m2834_ftn) (CanvasRenderer_t154 *);
	static CanvasRenderer_get_materialCount_m2834_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_materialCount_m2834_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_materialCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CanvasRenderer_set_materialCount_m1788 (CanvasRenderer_t154 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_materialCount_m1788_ftn) (CanvasRenderer_t154 *, int32_t);
	static CanvasRenderer_set_materialCount_m1788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_materialCount_m1788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_materialCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void CanvasRenderer_SetMaterial_m1789 (CanvasRenderer_t154 * __this, Material_t19 * ___material, int32_t ___index, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m1789_ftn) (CanvasRenderer_t154 *, Material_t19 *, int32_t);
	static CanvasRenderer_SetMaterial_m1789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m1789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)");
	_il2cpp_icall_func(__this, ___material, ___index);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void CanvasRenderer_SetMaterial_m1936 (CanvasRenderer_t154 * __this, Material_t19 * ___material, Texture_t209 * ___texture, const MethodInfo* method)
{
	{
		int32_t L_0 = CanvasRenderer_get_materialCount_m2834(__this, /*hidden argument*/NULL);
		int32_t L_1 = Math_Max_m3109(NULL /*static, unused*/, 1, L_0, /*hidden argument*/NULL);
		CanvasRenderer_set_materialCount_m1788(__this, L_1, /*hidden argument*/NULL);
		Material_t19 * L_2 = ___material;
		CanvasRenderer_SetMaterial_m1789(__this, L_2, 0, /*hidden argument*/NULL);
		Texture_t209 * L_3 = ___texture;
		CanvasRenderer_SetTexture_m1790(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C" void CanvasRenderer_set_popMaterialCount_m1962 (CanvasRenderer_t154 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_popMaterialCount_m1962_ftn) (CanvasRenderer_t154 *, int32_t);
	static CanvasRenderer_set_popMaterialCount_m1962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_popMaterialCount_m1962_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C" void CanvasRenderer_SetPopMaterial_m1963 (CanvasRenderer_t154 * __this, Material_t19 * ___material, int32_t ___index, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetPopMaterial_m1963_ftn) (CanvasRenderer_t154 *, Material_t19 *, int32_t);
	static CanvasRenderer_SetPopMaterial_m1963_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetPopMaterial_m1963_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)");
	_il2cpp_icall_func(__this, ___material, ___index);
}
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C" void CanvasRenderer_SetTexture_m1790 (CanvasRenderer_t154 * __this, Texture_t209 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetTexture_m1790_ftn) (CanvasRenderer_t154 *, Texture_t209 *);
	static CanvasRenderer_SetTexture_m1790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetTexture_m1790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern "C" void CanvasRenderer_SetMesh_m1792 (CanvasRenderer_t154 * __this, Mesh_t159 * ___mesh, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMesh_m1792_ftn) (CanvasRenderer_t154 *, Mesh_t159 *);
	static CanvasRenderer_SetMesh_m1792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMesh_m1792_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)");
	_il2cpp_icall_func(__this, ___mesh);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m1786 (CanvasRenderer_t154 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m1786_ftn) (CanvasRenderer_t154 *);
	static CanvasRenderer_Clear_m1786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m1786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C" bool CanvasRenderer_get_cull_m1787 (CanvasRenderer_t154 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasRenderer_get_cull_m1787_ftn) (CanvasRenderer_t154 *);
	static CanvasRenderer_get_cull_m1787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_cull_m1787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_cull()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C" void CanvasRenderer_set_cull_m1968 (CanvasRenderer_t154 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_cull_m1968_ftn) (CanvasRenderer_t154 *, bool);
	static CanvasRenderer_set_cull_m1968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_cull_m1968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_cull(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m1778 (CanvasRenderer_t154 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m1778_ftn) (CanvasRenderer_t154 *);
	static CanvasRenderer_get_absoluteDepth_m1778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m1778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C" bool CanvasRenderer_get_hasMoved_m1966 (CanvasRenderer_t154 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasRenderer_get_hasMoved_m1966_ftn) (CanvasRenderer_t154 *);
	static CanvasRenderer_get_hasMoved_m1966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_hasMoved_m1966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_hasMoved()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t175_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t339_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m2835 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		RectTransformUtility_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t339_StaticFields*)RectTransformUtility_t339_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t175*)SZArrayNew(Vector3U5BU5D_t175_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t339_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m1829 (Object_t * __this /* static, unused */, RectTransform_t138 * ___rect, Vector2_t11  ___screenPoint, Camera_t34 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t138 * L_0 = ___rect;
		Camera_t34 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2836(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2836 (Object_t * __this /* static, unused */, RectTransform_t138 * ___rect, Vector2_t11 * ___screenPoint, Camera_t34 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2836_ftn) (RectTransform_t138 *, Vector2_t11 *, Camera_t34 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m2836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
extern TypeInfo* RectTransformUtility_t339_il2cpp_TypeInfo_var;
extern "C" Vector2_t11  RectTransformUtility_PixelAdjustPoint_m1803 (Object_t * __this /* static, unused */, Vector2_t11  ___point, Transform_t9 * ___elementTransform, Canvas_t155 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t11  V_0 = {0};
	{
		Vector2_t11  L_0 = ___point;
		Transform_t9 * L_1 = ___elementTransform;
		Canvas_t155 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m2837(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t339_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m2837 (Object_t * __this /* static, unused */, Vector2_t11  ___point, Transform_t9 * ___elementTransform, Canvas_t155 * ___canvas, Vector2_t11 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t9 * L_0 = ___elementTransform;
		Canvas_t155 * L_1 = ___canvas;
		Vector2_t11 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2838(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2838 (Object_t * __this /* static, unused */, Vector2_t11 * ___point, Transform_t9 * ___elementTransform, Canvas_t155 * ___canvas, Vector2_t11 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2838_ftn) (Vector2_t11 *, Transform_t9 *, Canvas_t155 *, Vector2_t11 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t191  RectTransformUtility_PixelAdjustRect_m1804 (Object_t * __this /* static, unused */, RectTransform_t138 * ___rectTransform, Canvas_t155 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t191  (*RectTransformUtility_PixelAdjustRect_m1804_ftn) (RectTransform_t138 *, Canvas_t155 *);
	static RectTransformUtility_PixelAdjustRect_m1804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m1804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t339_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m2839 (Object_t * __this /* static, unused */, RectTransform_t138 * ___rect, Vector2_t11  ___screenPoint, Camera_t34 * ___cam, Vector3_t10 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t29  V_0 = {0};
	Plane_t355  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t10 * L_0 = ___worldPoint;
		Vector2_t11  L_1 = Vector2_get_zero_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t10  L_2 = Vector2_op_Implicit_m1629(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t34 * L_3 = ___cam;
		Vector2_t11  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		Ray_t29  L_5 = RectTransformUtility_ScreenPointToRay_m2840(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t138 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t39  L_7 = Transform_get_rotation_m1821(L_6, /*hidden argument*/NULL);
		Vector3_t10  L_8 = Vector3_get_back_m2115(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t10  L_9 = Quaternion_op_Multiply_m1823(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t138 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t10  L_11 = Transform_get_position_m134(L_10, /*hidden argument*/NULL);
		Plane__ctor_m1903((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t29  L_12 = V_0;
		bool L_13 = Plane_Raycast_m1904((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t10 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t10  L_16 = Ray_GetPoint_m1905((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t339_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m1864 (Object_t * __this /* static, unused */, RectTransform_t138 * ___rect, Vector2_t11  ___screenPoint, Camera_t34 * ___cam, Vector2_t11 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	{
		Vector2_t11 * L_0 = ___localPoint;
		Vector2_t11  L_1 = Vector2_get_zero_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t138 * L_2 = ___rect;
		Vector2_t11  L_3 = ___screenPoint;
		Camera_t34 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m2839(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t11 * L_6 = ___localPoint;
		RectTransform_t138 * L_7 = ___rect;
		Vector3_t10  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t10  L_9 = Transform_InverseTransformPoint_m1739(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t11  L_10 = Vector2_op_Implicit_m109(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Ray_t29  RectTransformUtility_ScreenPointToRay_m2840 (Object_t * __this /* static, unused */, Camera_t34 * ___cam, Vector2_t11  ___screenPos, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Camera_t34 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m79(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t34 * L_2 = ___cam;
		Vector2_t11  L_3 = ___screenPos;
		Vector3_t10  L_4 = Vector2_op_Implicit_m1629(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t29  L_5 = Camera_ScreenPointToRay_m59(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t11  L_6 = ___screenPos;
		Vector3_t10  L_7 = Vector2_op_Implicit_m1629(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t10 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t10  L_10 = V_0;
		Vector3_t10  L_11 = Vector3_get_forward_m1822(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t29  L_12 = {0};
		Ray__ctor_m2394(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern TypeInfo* RectTransform_t138_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t339_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m1741 (Object_t * __this /* static, unused */, RectTransform_t138 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		RectTransformUtility_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t138 * V_1 = {0};
	Vector2_t11  V_2 = {0};
	Vector2_t11  V_3 = {0};
	Vector2_t11  V_4 = {0};
	Vector2_t11  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t138 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m94(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t138 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t9 * L_5 = Transform_GetChild_m1679(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t138 *)IsInstSealed(L_5, RectTransform_t138_il2cpp_TypeInfo_var));
		RectTransform_t138 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m79(NULL /*static, unused*/, L_6, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t138 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m1741(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t138 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m1680(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t138 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t11  L_15 = RectTransform_get_pivot_m1745(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m1861((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m1869((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t138 * L_19 = ___rect;
		Vector2_t11  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m1698(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t138 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t11  L_23 = RectTransform_get_anchoredPosition_m1744(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m1861((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m1869((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t138 * L_27 = ___rect;
		Vector2_t11  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m1685(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t138 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t11  L_30 = RectTransform_get_anchorMin_m1742(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t138 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t11  L_32 = RectTransform_get_anchorMax_m1743(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m1861((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m1861((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m1869((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m1869((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t138 * L_40 = ___rect;
		Vector2_t11  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m1682(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t138 * L_42 = ___rect;
		Vector2_t11  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m1684(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t138_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t339_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m1989 (Object_t * __this /* static, unused */, RectTransform_t138 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		RectTransformUtility_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t138 * V_1 = {0};
	{
		RectTransform_t138 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m94(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t138 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t9 * L_5 = Transform_GetChild_m1679(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t138 *)IsInstSealed(L_5, RectTransform_t138_il2cpp_TypeInfo_var));
		RectTransform_t138 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m79(NULL /*static, unused*/, L_6, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t138 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m1989(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t138 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m1680(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t138 * L_13 = ___rect;
		RectTransform_t138 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t11  L_15 = RectTransform_get_pivot_m1745(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		Vector2_t11  L_16 = RectTransformUtility_GetTransposed_m2841(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m1698(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t138 * L_17 = ___rect;
		RectTransform_t138 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t11  L_19 = RectTransform_get_sizeDelta_m1699(L_18, /*hidden argument*/NULL);
		Vector2_t11  L_20 = RectTransformUtility_GetTransposed_m2841(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m1676(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t138 * L_22 = ___rect;
		RectTransform_t138 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t11  L_24 = RectTransform_get_anchoredPosition_m1744(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t339_il2cpp_TypeInfo_var);
		Vector2_t11  L_25 = RectTransformUtility_GetTransposed_m2841(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m1685(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t138 * L_26 = ___rect;
		RectTransform_t138 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t11  L_28 = RectTransform_get_anchorMin_m1742(L_27, /*hidden argument*/NULL);
		Vector2_t11  L_29 = RectTransformUtility_GetTransposed_m2841(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m1682(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t138 * L_30 = ___rect;
		RectTransform_t138 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t11  L_32 = RectTransform_get_anchorMax_m1743(L_31, /*hidden argument*/NULL);
		Vector2_t11  L_33 = RectTransformUtility_GetTransposed_m2841(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m1684(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t11  RectTransformUtility_GetTransposed_m2841 (Object_t * __this /* static, unused */, Vector2_t11  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t11  L_2 = {0};
		Vector2__ctor_m1578(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// System.Type
#include "mscorlib_System_Type.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// System.Void UnityEngine.Event::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
extern "C" void Event__ctor_m1876 (Event_t195 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		Event_Init_m2849(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m2842 (Event_t195 * __this, const MethodInfo* method)
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
		Event_Cleanup_m2850(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t11  Event_get_mousePosition_m2843 (Event_t195 * __this, const MethodInfo* method)
{
	Vector2_t11  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m2851(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t11  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m2844 (Event_t195 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m2845 (Event_t195 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" int32_t Event_GetHashCode_m2846 (Event_t195 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t11  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m2844(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m1912(__this, /*hidden argument*/NULL);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m2845(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t11  L_3 = Event_get_mousePosition_m2843(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m2299((&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m1911(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t195_il2cpp_TypeInfo_var;
extern "C" bool Event_Equals_m2847 (Event_t195 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	Event_t195 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m3110(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_3 = ___obj;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1595(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Object_GetType_m1595(__this, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		Object_t * L_6 = ___obj;
		V_0 = ((Event_t195 *)CastclassSealed(L_6, Event_t195_il2cpp_TypeInfo_var));
		int32_t L_7 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		Event_t195 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m1916(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m1911(__this, /*hidden argument*/NULL);
		Event_t195 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m1911(L_11, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = Event_get_isKey_m2844(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m1912(__this, /*hidden argument*/NULL);
		Event_t195 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m1912(L_15, /*hidden argument*/NULL);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = Event_get_isMouse_m2845(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t11  L_18 = Event_get_mousePosition_m2843(__this, /*hidden argument*/NULL);
		Event_t195 * L_19 = V_0;
		NullCheck(L_19);
		Vector2_t11  L_20 = Event_get_mousePosition_m2843(L_19, /*hidden argument*/NULL);
		bool L_21 = Vector2_op_Equality_m2133(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t501_il2cpp_TypeInfo_var;
extern TypeInfo* EventModifiers_t502_il2cpp_TypeInfo_var;
extern TypeInfo* KeyCode_t500_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t11_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral204;
extern Il2CppCodeGenString* _stringLiteral205;
extern Il2CppCodeGenString* _stringLiteral206;
extern Il2CppCodeGenString* _stringLiteral207;
extern Il2CppCodeGenString* _stringLiteral208;
extern Il2CppCodeGenString* _stringLiteral209;
extern Il2CppCodeGenString* _stringLiteral210;
extern "C" String_t* Event_ToString_m2848 (Event_t195 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		EventType_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		EventModifiers_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		KeyCode_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Vector2_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		_stringLiteral204 = il2cpp_codegen_string_literal_from_index(204);
		_stringLiteral205 = il2cpp_codegen_string_literal_from_index(205);
		_stringLiteral206 = il2cpp_codegen_string_literal_from_index(206);
		_stringLiteral207 = il2cpp_codegen_string_literal_from_index(207);
		_stringLiteral208 = il2cpp_codegen_string_literal_from_index(208);
		_stringLiteral209 = il2cpp_codegen_string_literal_from_index(209);
		_stringLiteral210 = il2cpp_codegen_string_literal_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Event_get_isKey_m2844(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m1913(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t320* L_2 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(EventType_t501_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t320* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m1911(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(EventModifiers_t502_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t320* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m1912(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(KeyCode_t500_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2, sizeof(Object_t *))) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral204, L_10, /*hidden argument*/NULL);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t320* L_15 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, _stringLiteral205);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral205;
		ObjectU5BU5D_t320* L_16 = L_15;
		int32_t L_17 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(EventType_t501_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t320* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, _stringLiteral206);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral206;
		ObjectU5BU5D_t320* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m1913(__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3, sizeof(Object_t *))) = (Object_t *)L_24;
		ObjectU5BU5D_t320* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, _stringLiteral207);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral207;
		ObjectU5BU5D_t320* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m1911(__this, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(EventModifiers_t502_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5, sizeof(Object_t *))) = (Object_t *)L_29;
		ObjectU5BU5D_t320* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, _stringLiteral208);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral208;
		ObjectU5BU5D_t320* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m1912(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(KeyCode_t500_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7, sizeof(Object_t *))) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m1572(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		return L_35;
	}

IL_00b5:
	{
		bool L_36 = Event_get_isMouse_m2845(__this, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00fb;
		}
	}
	{
		ObjectU5BU5D_t320* L_37 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 3));
		int32_t L_38 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		int32_t L_39 = L_38;
		Object_t * L_40 = Box(EventType_t501_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 0, sizeof(Object_t *))) = (Object_t *)L_40;
		ObjectU5BU5D_t320* L_41 = L_37;
		Vector2_t11  L_42 = Event_get_mousePosition_m2843(__this, /*hidden argument*/NULL);
		Vector2_t11  L_43 = L_42;
		Object_t * L_44 = Box(Vector2_t11_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 1);
		ArrayElementTypeCheck (L_41, L_44);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 1, sizeof(Object_t *))) = (Object_t *)L_44;
		ObjectU5BU5D_t320* L_45 = L_41;
		int32_t L_46 = Event_get_modifiers_m1911(__this, /*hidden argument*/NULL);
		int32_t L_47 = L_46;
		Object_t * L_48 = Box(EventModifiers_t502_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 2);
		ArrayElementTypeCheck (L_45, L_48);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 2, sizeof(Object_t *))) = (Object_t *)L_48;
		String_t* L_49 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral209, L_45, /*hidden argument*/NULL);
		return L_49;
	}

IL_00fb:
	{
		int32_t L_50 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_50) == ((int32_t)((int32_t)14))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_51 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_013d;
		}
	}

IL_0115:
	{
		ObjectU5BU5D_t320* L_52 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 2));
		int32_t L_53 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		int32_t L_54 = L_53;
		Object_t * L_55 = Box(EventType_t501_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 0);
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 0, sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t320* L_56 = L_52;
		String_t* L_57 = Event_get_commandName_m1917(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 1);
		ArrayElementTypeCheck (L_56, L_57);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, 1, sizeof(Object_t *))) = (Object_t *)L_57;
		String_t* L_58 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral210, L_56, /*hidden argument*/NULL);
		return L_58;
	}

IL_013d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_60 = Event_get_type_m1916(__this, /*hidden argument*/NULL);
		int32_t L_61 = L_60;
		Object_t * L_62 = Box(EventType_t501_il2cpp_TypeInfo_var, &L_61);
		String_t* L_63 = String_Concat_m72(NULL /*static, unused*/, L_59, L_62, /*hidden argument*/NULL);
		return L_63;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m2849 (Event_t195 * __this, const MethodInfo* method)
{
	typedef void (*Event_Init_m2849_ftn) (Event_t195 *);
	static Event_Init_m2849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m2849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m2850 (Event_t195 * __this, const MethodInfo* method)
{
	typedef void (*Event_Cleanup_m2850_ftn) (Event_t195 *);
	static Event_Cleanup_m2850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m2850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m1915 (Event_t195 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_rawType_m1915_ftn) (Event_t195 *);
	static Event_get_rawType_m1915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m1915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m1916 (Event_t195 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m1916_ftn) (Event_t195 *);
	static Event_get_type_m1916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m1916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m2851 (Event_t195 * __this, Vector2_t11 * ___value, const MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m2851_ftn) (Event_t195 *, Vector2_t11 *);
	static Event_Internal_GetMousePosition_m2851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m2851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m1911 (Event_t195 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m1911_ftn) (Event_t195 *);
	static Event_get_modifiers_m1911_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m1911_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m1913 (Event_t195 * __this, const MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m1913_ftn) (Event_t195 *);
	static Event_get_character_m1913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m1913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m1917 (Event_t195 * __this, const MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m1917_ftn) (Event_t195 *);
	static Event_get_commandName_m1917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m1917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m1912 (Event_t195 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m1912_ftn) (Event_t195 *);
	static Event_get_keyCode_m1912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m1912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
extern "C" bool Event_PopEvent_m1919 (Object_t * __this /* static, unused */, Event_t195 * ___outEvent, const MethodInfo* method)
{
	typedef bool (*Event_PopEvent_m1919_ftn) (Event_t195 *);
	static Event_PopEvent_m1919_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m1919_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(___outEvent);
}
// Conversion methods for marshalling of: UnityEngine.Event
extern "C" void Event_t195_marshal(const Event_t195& unmarshaled, Event_t195_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)___s_Current_1Exception);
}
extern "C" void Event_t195_marshal_back(const Event_t195_marshaled& marshaled, Event_t195& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
extern "C" void Event_t195_marshal_cleanup(Event_t195_marshaled& marshaled)
{
}
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// System.Void UnityEngine.GUIStyleState::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
extern "C" void GUIStyleState__ctor_m2852 (GUIStyleState_t503 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		GUIStyleState_Init_m2854(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m2853 (GUIStyleState_t503 * __this, const MethodInfo* method)
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
		{
			GUIStyle_t504 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			GUIStyleState_Cleanup_m2855(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m2854 (GUIStyleState_t503 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Init_m2854_ftn) (GUIStyleState_t503 *);
	static GUIStyleState_Init_m2854_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m2854_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m2855 (GUIStyleState_t503 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Cleanup_m2855_ftn) (GUIStyleState_t503 *);
	static GUIStyleState_Cleanup_m2855_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m2855_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// System.Void UnityEngine.RectOffset::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern "C" void RectOffset__ctor_m2083 (RectOffset_t263 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		RectOffset_Init_m2858(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::Finalize()
extern "C" void RectOffset_Finalize_m2856 (RectOffset_t263 * __this, const MethodInfo* method)
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
		{
			GUIStyle_t504 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			RectOffset_Cleanup_m2859(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t32 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m3057(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t32 *)
	}

IL_001d:
	{
		return;
	}
}
// System.String UnityEngine.RectOffset::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral211;
extern "C" String_t* RectOffset_ToString_m2857 (RectOffset_t263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral211 = il2cpp_codegen_string_literal_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = RectOffset_get_left_m2081(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		int32_t L_5 = RectOffset_get_right_m2860(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		int32_t L_9 = RectOffset_get_top_m2082(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		int32_t L_13 = RectOffset_get_bottom_m2861(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral211, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m2858 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Init_m2858_ftn) (RectOffset_t263 *);
	static RectOffset_Init_m2858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Init_m2858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m2859 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Cleanup_m2859_ftn) (RectOffset_t263 *);
	static RectOffset_Cleanup_m2859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Cleanup_m2859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m2081 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_left_m2081_ftn) (RectOffset_t263 *);
	static RectOffset_get_left_m2081_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_left_m2081_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m2860 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_right_m2860_ftn) (RectOffset_t263 *);
	static RectOffset_get_right_m2860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_right_m2860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m2082 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_top_m2082_ftn) (RectOffset_t263 *);
	static RectOffset_get_top_m2082_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_top_m2082_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m2861 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_bottom_m2861_ftn) (RectOffset_t263 *);
	static RectOffset_get_bottom_m2861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_bottom_m2861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m2076 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_horizontal_m2076_ftn) (RectOffset_t263 *);
	static RectOffset_get_horizontal_m2076_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_horizontal_m2076_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m2078 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_vertical_m2078_ftn) (RectOffset_t263 *);
	static RectOffset_get_vertical_m2078_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_vertical_m2078_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyleMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Void UnityEngine.GUIStyle::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern "C" void GUIStyle__ctor_m2862 (GUIStyle_t504 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		GUIStyle_Init_m2866(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern TypeInfo* GUIStyle_t504_il2cpp_TypeInfo_var;
extern "C" void GUIStyle__cctor_m2863 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUIStyle_t504_StaticFields*)GUIStyle_t504_il2cpp_TypeInfo_var->static_fields)->___showKeyboardFocus_14 = 1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m2864 (GUIStyle_t504 * __this, const MethodInfo* method)
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
		GUIStyle_Cleanup_m2867(__this, /*hidden argument*/NULL);
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
// System.String UnityEngine.GUIStyle::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral212;
extern "C" String_t* GUIStyle_ToString_m2865 (GUIStyle_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = GUIStyle_get_name_m2868(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		String_t* L_2 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral212, L_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m2866 (GUIStyle_t504 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Init_m2866_ftn) (GUIStyle_t504 *);
	static GUIStyle_Init_m2866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Init_m2866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m2867 (GUIStyle_t504 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Cleanup_m2867_ftn) (GUIStyle_t504 *);
	static GUIStyle_Cleanup_m2867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Cleanup_m2867_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m2868 (GUIStyle_t504 * __this, const MethodInfo* method)
{
	typedef String_t* (*GUIStyle_get_name_m2868_ftn) (GUIStyle_t504 *);
	static GUIStyle_get_name_m2868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m2868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtility.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// System.Void UnityEngine.GUIUtility::.cctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* GUIUtility_t354_il2cpp_TypeInfo_var;
extern "C" void GUIUtility__cctor_m2869 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t11  L_0 = Vector2_get_zero_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		((GUIUtility_t354_StaticFields*)GUIUtility_t354_il2cpp_TypeInfo_var->static_fields)->___s_EditorScreenPointOffset_0 = L_0;
		((GUIUtility_t354_StaticFields*)GUIUtility_t354_il2cpp_TypeInfo_var->static_fields)->___s_HasKeyboardFocus_1 = 0;
		return;
	}
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m1895 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m1895_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m1895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m1895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GUIUtility_set_systemCopyBuffer_m1896 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m1896_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m1896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m1896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Void UnityEngine.WrapperlessIcall::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void WrapperlessIcall__ctor_m2870 (WrapperlessIcall_t506 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m2871 (IL2CPPStructAlignmentAttribute_t507 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"
// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t509_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t508_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t510_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t511_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m2872 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		AttributeHelperEngine_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(350);
		ExecuteInEditModeU5BU5D_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		RequireComponentU5BU5D_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t508_StaticFields*)AttributeHelperEngine_t508_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t509*)SZArrayNew(DisallowMultipleComponentU5BU5D_t509_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t508_StaticFields*)AttributeHelperEngine_t508_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t510*)SZArrayNew(ExecuteInEditModeU5BU5D_t510_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t508_StaticFields*)AttributeHelperEngine_t508_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t511*)SZArrayNew(RequireComponentU5BU5D_t511_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t512_0_0_0_var;
extern TypeInfo* Stack_1_t601_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m3111_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m3112_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m3113_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m2873 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(355);
		DisallowMultipleComponent_t512_0_0_0_var = il2cpp_codegen_type_from_index(349);
		Stack_1_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Stack_1__ctor_m3111_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483969);
		Stack_1_Push_m3112_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483970);
		Stack_1_Pop_m3113_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483971);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t601 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t320* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stack_1_t601 * L_0 = (Stack_1_t601 *)il2cpp_codegen_object_new (Stack_1_t601_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3111(L_0, /*hidden argument*/Stack_1__ctor_m3111_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t601 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m3112(L_1, L_2, /*hidden argument*/Stack_1_Push_m3112_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005c;
	}

IL_0037:
	{
		Stack_1_t601 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m3113(L_8, /*hidden argument*/Stack_1_Pop_m3113_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t512_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t320* L_12 = (ObjectU5BU5D_t320*)VirtFuncInvoker2< ObjectU5BU5D_t320*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t320* L_13 = V_2;
		NullCheck(L_13);
		V_3 = (((int32_t)(((Array_t *)L_13)->max_length)));
		int32_t L_14 = V_3;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_15 = V_1;
		return L_15;
	}

IL_005c:
	{
		Stack_1_t601 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_16);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"
extern const Il2CppType* RequireComponent_t513_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t511_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t602_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3114_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3115_MethodInfo_var;
extern "C" TypeU5BU5D_t582* AttributeHelperEngine_GetRequiredComponents_m2874 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t513_0_0_0_var = il2cpp_codegen_type_from_index(354);
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(355);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		RequireComponentU5BU5D_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		TypeU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		List_1_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		List_1__ctor_m3114_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483972);
		List_1_ToArray_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483973);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t602 * V_0 = {0};
	RequireComponentU5BU5D_t511* V_1 = {0};
	Type_t * V_2 = {0};
	RequireComponent_t513 * V_3 = {0};
	RequireComponentU5BU5D_t511* V_4 = {0};
	int32_t V_5 = 0;
	TypeU5BU5D_t582* V_6 = {0};
	{
		V_0 = (List_1_t602 *)NULL;
		goto IL_00e0;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t513_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t320* L_2 = (ObjectU5BU5D_t320*)VirtFuncInvoker2< ObjectU5BU5D_t320*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = ((RequireComponentU5BU5D_t511*)Castclass(L_2, RequireComponentU5BU5D_t511_il2cpp_TypeInfo_var));
		Type_t * L_3 = ___klass;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		V_2 = L_4;
		RequireComponentU5BU5D_t511* L_5 = V_1;
		V_4 = L_5;
		V_5 = 0;
		goto IL_00d2;
	}

IL_0030:
	{
		RequireComponentU5BU5D_t511* L_6 = V_4;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(RequireComponent_t513 **)(RequireComponent_t513 **)SZArrayLdElema(L_6, L_8, sizeof(RequireComponent_t513 *)));
		List_1_t602 * L_9 = V_0;
		if (L_9)
		{
			goto IL_007b;
		}
	}
	{
		RequireComponentU5BU5D_t511* L_10 = V_1;
		NullCheck(L_10);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		Type_t * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_11) == ((Object_t*)(Type_t *)L_12))))
		{
			goto IL_007b;
		}
	}
	{
		TypeU5BU5D_t582* L_13 = ((TypeU5BU5D_t582*)SZArrayNew(TypeU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		RequireComponent_t513 * L_14 = V_3;
		NullCheck(L_14);
		Type_t * L_15 = (L_14->___m_Type0_0);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_15);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 0, sizeof(Type_t *))) = (Type_t *)L_15;
		TypeU5BU5D_t582* L_16 = L_13;
		RequireComponent_t513 * L_17 = V_3;
		NullCheck(L_17);
		Type_t * L_18 = (L_17->___m_Type1_1);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_16, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t582* L_19 = L_16;
		RequireComponent_t513 * L_20 = V_3;
		NullCheck(L_20);
		Type_t * L_21 = (L_20->___m_Type2_2);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_21;
		V_6 = L_19;
		TypeU5BU5D_t582* L_22 = V_6;
		return L_22;
	}

IL_007b:
	{
		List_1_t602 * L_23 = V_0;
		if (L_23)
		{
			goto IL_0087;
		}
	}
	{
		List_1_t602 * L_24 = (List_1_t602 *)il2cpp_codegen_object_new (List_1_t602_il2cpp_TypeInfo_var);
		List_1__ctor_m3114(L_24, /*hidden argument*/List_1__ctor_m3114_MethodInfo_var);
		V_0 = L_24;
	}

IL_0087:
	{
		RequireComponent_t513 * L_25 = V_3;
		NullCheck(L_25);
		Type_t * L_26 = (L_25->___m_Type0_0);
		if (!L_26)
		{
			goto IL_009e;
		}
	}
	{
		List_1_t602 * L_27 = V_0;
		RequireComponent_t513 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type0_0);
		NullCheck(L_27);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_27, L_29);
	}

IL_009e:
	{
		RequireComponent_t513 * L_30 = V_3;
		NullCheck(L_30);
		Type_t * L_31 = (L_30->___m_Type1_1);
		if (!L_31)
		{
			goto IL_00b5;
		}
	}
	{
		List_1_t602 * L_32 = V_0;
		RequireComponent_t513 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type1_1);
		NullCheck(L_32);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_32, L_34);
	}

IL_00b5:
	{
		RequireComponent_t513 * L_35 = V_3;
		NullCheck(L_35);
		Type_t * L_36 = (L_35->___m_Type2_2);
		if (!L_36)
		{
			goto IL_00cc;
		}
	}
	{
		List_1_t602 * L_37 = V_0;
		RequireComponent_t513 * L_38 = V_3;
		NullCheck(L_38);
		Type_t * L_39 = (L_38->___m_Type2_2);
		NullCheck(L_37);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_37, L_39);
	}

IL_00cc:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00d2:
	{
		int32_t L_41 = V_5;
		RequireComponentU5BU5D_t511* L_42 = V_4;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_43 = V_2;
		___klass = L_43;
	}

IL_00e0:
	{
		Type_t * L_44 = ___klass;
		if (!L_44)
		{
			goto IL_00f6;
		}
	}
	{
		Type_t * L_45 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_45) == ((Object_t*)(Type_t *)L_46))))
		{
			goto IL_0007;
		}
	}

IL_00f6:
	{
		List_1_t602 * L_47 = V_0;
		if (L_47)
		{
			goto IL_00fe;
		}
	}
	{
		return (TypeU5BU5D_t582*)NULL;
	}

IL_00fe:
	{
		List_1_t602 * L_48 = V_0;
		NullCheck(L_48);
		TypeU5BU5D_t582* L_49 = List_1_ToArray_m3115(L_48, /*hidden argument*/List_1_ToArray_m3115_MethodInfo_var);
		return L_49;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t515_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m2875 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t515_0_0_0_var = il2cpp_codegen_type_from_index(352);
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(355);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t320* V_0 = {0};
	int32_t V_1 = 0;
	{
		goto IL_002b;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t515_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t320* L_2 = (ObjectU5BU5D_t320*)VirtFuncInvoker2< ObjectU5BU5D_t320*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t320* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		Type_t * L_5 = ___klass;
		NullCheck(L_5);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_5);
		___klass = L_6;
	}

IL_002b:
	{
		Type_t * L_7 = ___klass;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		Type_t * L_8 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1782(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
		{
			goto IL_0005;
		}
	}

IL_0041:
	{
		return 0;
	}
}
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"
// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DisallowMultipleComponent__ctor_m2876 (DisallowMultipleComponent_t512 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void RequireComponent__ctor_m2877 (RequireComponent_t513 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void AddComponentMenu__ctor_m2878 (AddComponentMenu_t514 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void AddComponentMenu__ctor_m2879 (AddComponentMenu_t514 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
// System.Void UnityEngine.ExecuteInEditMode::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ExecuteInEditMode__ctor_m2880 (ExecuteInEditMode_t515 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Void UnityEngine.SetupCoroutine::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void SetupCoroutine__ctor_m2881 (SetupCoroutine_t516 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m2882 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t320* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t320*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t320* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1595(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t320* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t603 *, Object_t *, ObjectU5BU5D_t320*, ParameterModifierU5BU5D_t604*, CultureInfo_t605 *, StringU5BU5D_t48* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t603 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t604*)(ParameterModifierU5BU5D_t604*)NULL, (CultureInfo_t605 *)NULL, (StringU5BU5D_t48*)(StringU5BU5D_t48*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m2883 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t320* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t320*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t320* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t320* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t603 *, Object_t *, ObjectU5BU5D_t320*, ParameterModifierU5BU5D_t604*, CultureInfo_t605 *, StringU5BU5D_t48* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t603 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t604*)(ParameterModifierU5BU5D_t604*)NULL, (CultureInfo_t605 *)NULL, (StringU5BU5D_t48*)(StringU5BU5D_t48*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
// System.Void UnityEngine.WritableAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void WritableAttribute__ctor_m2884 (WritableAttribute_t517 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"
// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void AssemblyIsEditorAssembly__ctor_m2885 (AssemblyIsEditorAssembly_t518 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern TypeInfo* UserProfile_t528_il2cpp_TypeInfo_var;
extern "C" UserProfile_t528 * GcUserProfileData_ToUserProfile_m2886 (GcUserProfileData_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t158 * L_3 = (__this->___image_3);
		UserProfile_t528 * L_4 = (UserProfile_t528 *)il2cpp_codegen_object_new (UserProfile_t528_il2cpp_TypeInfo_var);
		UserProfile__ctor_m2904(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral213;
extern "C" void GcUserProfileData_AddToArray_m2887 (GcUserProfileData_t519 * __this, UserProfileU5BU5D_t409** ___array, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral213 = il2cpp_codegen_string_literal_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t409** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t409**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t409**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t409** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t528 * L_5 = GcUserProfileData_ToUserProfile_m2886(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t409**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t409**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t409**)L_3)), L_5);
		*((UserProfile_t528 **)(UserProfile_t528 **)SZArrayLdElema((*((UserProfileU5BU5D_t409**)L_3)), L_4, sizeof(UserProfile_t528 *))) = (UserProfile_t528 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m73(NULL /*static, unused*/, _stringLiteral213, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern TypeInfo* AchievementDescription_t531_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t531 * GcAchievementDescriptionData_ToAchievementDescription_m2888 (GcAchievementDescriptionData_t520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t158 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t158 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t158 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t158 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t531 * L_7 = (AchievementDescription_t531 *)il2cpp_codegen_object_new (AchievementDescription_t531_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m2924(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern TypeInfo* Achievement_t530_il2cpp_TypeInfo_var;
extern "C" Achievement_t530 * GcAchievementData_ToAchievement_m2889 (GcAchievementData_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t54  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m3116((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t54  L_5 = DateTime_AddSeconds_m3117((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t530 * L_6 = (Achievement_t530 *)il2cpp_codegen_object_new (Achievement_t530_il2cpp_TypeInfo_var);
		Achievement__ctor_m2913(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t521_marshal(const GcAchievementData_t521& unmarshaled, GcAchievementData_t521_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
extern "C" void GcAchievementData_t521_marshal_back(const GcAchievementData_t521_marshaled& marshaled, GcAchievementData_t521& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t521_marshal_cleanup(GcAchievementData_t521_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern TypeInfo* Score_t532_il2cpp_TypeInfo_var;
extern "C" Score_t532 * GcScoreData_ToScore_m2890 (GcScoreData_t522 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t54  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m3116((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t54  L_5 = DateTime_AddSeconds_m3117((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t532 * L_8 = (Score_t532 *)il2cpp_codegen_object_new (Score_t532_il2cpp_TypeInfo_var);
		Score__ctor_m2935(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t522_marshal(const GcScoreData_t522& unmarshaled, GcScoreData_t522_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
extern "C" void GcScoreData_t522_marshal_back(const GcScoreData_t522_marshaled& marshaled, GcScoreData_t522& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t522_marshal_cleanup(GcScoreData_t522_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"
// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m2891 (Resolution_t523 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Resolution_set_width_m2892 (Resolution_t523 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m2893 (Resolution_t523 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m2894 (Resolution_t523 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m2895 (Resolution_t523 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m2896 (Resolution_t523 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral214;
extern "C" String_t* Resolution_ToString_m2897 (Resolution_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral214 = il2cpp_codegen_string_literal_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t320* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2485(NULL /*static, unused*/, _stringLiteral214, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"
// UnityEngine.Rendering.CompareFunction
#include "UnityEngine_UnityEngine_Rendering_CompareFunction.h"
// UnityEngine.Rendering.CompareFunction
#include "UnityEngine_UnityEngine_Rendering_CompareFunctionMethodDeclarations.h"
// UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMask.h"
// UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMaskMethodDeclarations.h"
// UnityEngine.Rendering.StencilOp
#include "UnityEngine_UnityEngine_Rendering_StencilOp.h"
// UnityEngine.Rendering.StencilOp
#include "UnityEngine_UnityEngine_Rendering_StencilOpMethodDeclarations.h"
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern TypeInfo* UserProfileU5BU5D_t409_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m2898 (LocalUser_t410 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m2903(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t529*)((UserProfileU5BU5D_t409*)SZArrayNew(UserProfileU5BU5D_t409_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void LocalUser_SetFriends_m2899 (LocalUser_t410 * __this, IUserProfileU5BU5D_t529* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t529* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void LocalUser_SetAuthenticated_m2900 (LocalUser_t410 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m2901 (LocalUser_t410 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m2902 (LocalUser_t410 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* Texture2D_t158_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral215;
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" void UserProfile__ctor_m2903 (UserProfile_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		_stringLiteral215 = il2cpp_codegen_string_literal_from_index(215);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = _stringLiteral215;
		__this->___m_ID_1 = _stringLiteral6;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t158 * L_0 = (Texture2D_t158 *)il2cpp_codegen_object_new (Texture2D_t158_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2268(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
extern "C" void UserProfile__ctor_m2904 (UserProfile_t528 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t158 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t158 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t322_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t540_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral216;
extern "C" String_t* UserProfile_ToString_m2905 (UserProfile_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Boolean_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		UserState_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t320* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t320* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t322_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t320* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t540_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6, sizeof(Object_t *))) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m1572(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m2906 (UserProfile_t528 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m2907 (UserProfile_t528 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m2908 (UserProfile_t528 * __this, Texture2D_t158 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t158 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m2909 (UserProfile_t528 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m2910 (UserProfile_t528 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m2911 (UserProfile_t528 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m2912 (UserProfile_t528 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
// System.String
#include "mscorlib_System_String.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Achievement__ctor_m2913 (Achievement_t530 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t54  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t54  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t54_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m2914 (Achievement_t530 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t54_il2cpp_TypeInfo_var);
		DateTime_t54  L_2 = ((DateTime_t54_StaticFields*)DateTime_t54_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral217;
extern "C" void Achievement__ctor_m2915 (Achievement_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral217 = il2cpp_codegen_string_literal_from_index(217);
		s_Il2CppMethodIntialized = true;
	}
	{
		Achievement__ctor_m2914(__this, _stringLiteral217, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t606_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t322_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t54_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral216;
extern "C" String_t* Achievement_ToString_m2916 (Achievement_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Double_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(360);
		Boolean_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		DateTime_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t320* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t606_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t320* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t322_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t320* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t322_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t320* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_18 = L_17;
		DateTime_t54  L_19 = (DateTime_t54 )VirtFuncInvoker0< DateTime_t54  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t54  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t54_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8, sizeof(Object_t *))) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m1572(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m2917 (Achievement_t530 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m2918 (Achievement_t530 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m2919 (Achievement_t530 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m2920 (Achievement_t530 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m2921 (Achievement_t530 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m2922 (Achievement_t530 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t54  Achievement_get_lastReportedDate_m2923 (Achievement_t530 * __this, const MethodInfo* method)
{
	{
		DateTime_t54  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AchievementDescription__ctor_m2924 (AchievementDescription_t531 * __this, String_t* ___id, String_t* ___title, Texture2D_t158 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t158 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t322_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral216;
extern "C" String_t* AchievementDescription_ToString_m2925 (AchievementDescription_t531 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Boolean_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t320* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t320* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t320* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t320* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t320* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, _stringLiteral216);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)_stringLiteral216;
		ObjectU5BU5D_t320* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t322_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1572(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m2926 (AchievementDescription_t531 * __this, Texture2D_t158 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t158 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m2927 (AchievementDescription_t531 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m2928 (AchievementDescription_t531 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m2929 (AchievementDescription_t531 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m2930 (AchievementDescription_t531 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m2931 (AchievementDescription_t531 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m2932 (AchievementDescription_t531 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m2933 (AchievementDescription_t531 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
// System.String
#include "mscorlib_System_String.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern TypeInfo* DateTime_t54_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" void Score__ctor_m2934 (Score_t532 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t54_il2cpp_TypeInfo_var);
		DateTime_t54  L_2 = DateTime_get_Now_m144(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m2935(__this, L_0, L_1, _stringLiteral6, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Score__ctor_m2935 (Score_t532 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t54  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t54  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t607_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t54_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral218;
extern Il2CppCodeGenString* _stringLiteral219;
extern Il2CppCodeGenString* _stringLiteral220;
extern Il2CppCodeGenString* _stringLiteral221;
extern Il2CppCodeGenString* _stringLiteral222;
extern "C" String_t* Score_ToString_m2936 (Score_t532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Int64_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		DateTime_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral218 = il2cpp_codegen_string_literal_from_index(218);
		_stringLiteral219 = il2cpp_codegen_string_literal_from_index(219);
		_stringLiteral220 = il2cpp_codegen_string_literal_from_index(220);
		_stringLiteral221 = il2cpp_codegen_string_literal_from_index(221);
		_stringLiteral222 = il2cpp_codegen_string_literal_from_index(222);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral218);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral218;
		ObjectU5BU5D_t320* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t320* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, _stringLiteral219);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral219;
		ObjectU5BU5D_t320* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t607_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t320* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral220);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral220;
		ObjectU5BU5D_t320* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t320* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, _stringLiteral221);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral221;
		ObjectU5BU5D_t320* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t320* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, _stringLiteral222);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8, sizeof(Object_t *))) = (Object_t *)_stringLiteral222;
		ObjectU5BU5D_t320* L_17 = L_16;
		DateTime_t54  L_18 = (__this->___m_Date_0);
		DateTime_t54  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t54_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1572(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m2937 (Score_t532 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m2938 (Score_t532 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m2939 (Score_t532 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m2940 (Score_t532 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern TypeInfo* Score_t532_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t592_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral223;
extern "C" void Leaderboard__ctor_m2941 (Leaderboard_t413 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		ScoreU5BU5D_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral223 = il2cpp_codegen_string_literal_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, _stringLiteral223);
		Range_t534  L_0 = {0};
		Range__ctor_m2962(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t534  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t532 * L_1 = (Score_t532 *)il2cpp_codegen_object_new (Score_t532_il2cpp_TypeInfo_var);
		Score__ctor_m2934(L_1, _stringLiteral223, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t533*)((ScoreU5BU5D_t592*)SZArrayNew(ScoreU5BU5D_t592_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = _stringLiteral223;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t322_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t36_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t608_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t541_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t542_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral224;
extern Il2CppCodeGenString* _stringLiteral225;
extern Il2CppCodeGenString* _stringLiteral226;
extern Il2CppCodeGenString* _stringLiteral227;
extern Il2CppCodeGenString* _stringLiteral228;
extern Il2CppCodeGenString* _stringLiteral229;
extern Il2CppCodeGenString* _stringLiteral230;
extern Il2CppCodeGenString* _stringLiteral231;
extern Il2CppCodeGenString* _stringLiteral232;
extern Il2CppCodeGenString* _stringLiteral233;
extern "C" String_t* Leaderboard_ToString_m2942 (Leaderboard_t413 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Boolean_t322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Int32_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		UInt32_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(362);
		UserScope_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		TimeScope_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral224 = il2cpp_codegen_string_literal_from_index(224);
		_stringLiteral225 = il2cpp_codegen_string_literal_from_index(225);
		_stringLiteral226 = il2cpp_codegen_string_literal_from_index(226);
		_stringLiteral227 = il2cpp_codegen_string_literal_from_index(227);
		_stringLiteral228 = il2cpp_codegen_string_literal_from_index(228);
		_stringLiteral229 = il2cpp_codegen_string_literal_from_index(229);
		_stringLiteral230 = il2cpp_codegen_string_literal_from_index(230);
		_stringLiteral231 = il2cpp_codegen_string_literal_from_index(231);
		_stringLiteral232 = il2cpp_codegen_string_literal_from_index(232);
		_stringLiteral233 = il2cpp_codegen_string_literal_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	Range_t534  V_0 = {0};
	Range_t534  V_1 = {0};
	{
		ObjectU5BU5D_t320* L_0 = ((ObjectU5BU5D_t320*)SZArrayNew(ObjectU5BU5D_t320_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral224);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral224;
		ObjectU5BU5D_t320* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_2;
		ObjectU5BU5D_t320* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral225);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral225;
		ObjectU5BU5D_t320* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t320* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, _stringLiteral226);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral226;
		ObjectU5BU5D_t320* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t322_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t320* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, _stringLiteral227);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral227;
		ObjectU5BU5D_t320* L_12 = L_11;
		Range_t534  L_13 = (Range_t534 )VirtFuncInvoker0< Range_t534  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t320* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, _stringLiteral228);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8, sizeof(Object_t *))) = (Object_t *)_stringLiteral228;
		ObjectU5BU5D_t320* L_18 = L_17;
		Range_t534  L_19 = (Range_t534 )VirtFuncInvoker0< Range_t534  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_22;
		ObjectU5BU5D_t320* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, _stringLiteral229);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)_stringLiteral229;
		ObjectU5BU5D_t320* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t608_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t320* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, _stringLiteral230);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)_stringLiteral230;
		ObjectU5BU5D_t320* L_29 = L_28;
		IScoreU5BU5D_t533* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t320* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, _stringLiteral231);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)_stringLiteral231;
		ObjectU5BU5D_t320* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t541_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_37;
		ObjectU5BU5D_t320* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, _stringLiteral232);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16), sizeof(Object_t *))) = (Object_t *)_stringLiteral232;
		ObjectU5BU5D_t320* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t542_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17), sizeof(Object_t *))) = (Object_t *)L_42;
		ObjectU5BU5D_t320* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, _stringLiteral233);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18), sizeof(Object_t *))) = (Object_t *)_stringLiteral233;
		ObjectU5BU5D_t320* L_44 = L_43;
		StringU5BU5D_t48* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t36_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19), sizeof(Object_t *))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m1572(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m2943 (Leaderboard_t413 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern "C" void Leaderboard_SetMaxRange_m2944 (Leaderboard_t413 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void Leaderboard_SetScores_m2945 (Leaderboard_t413 * __this, IScoreU5BU5D_t533* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t533* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Leaderboard_SetTitle_m2946 (Leaderboard_t413 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t48* Leaderboard_GetUserFilter_m2947 (Leaderboard_t413 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t48* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m2948 (Leaderboard_t413 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m2949 (Leaderboard_t413 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m2950 (Leaderboard_t413 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
extern "C" void Leaderboard_set_userScope_m2951 (Leaderboard_t413 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t534  Leaderboard_get_range_m2952 (Leaderboard_t413 * __this, const MethodInfo* method)
{
	{
		Range_t534  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
extern "C" void Leaderboard_set_range_m2953 (Leaderboard_t413 * __this, Range_t534  ___value, const MethodInfo* method)
{
	{
		Range_t534  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m2954 (Leaderboard_t413 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
extern "C" void Leaderboard_set_timeScope_m2955 (Leaderboard_t413 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" void HitInfo_SendMessage_m2956 (HitInfo_t536 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t4 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m2585(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" bool HitInfo_Compare_m2957 (Object_t * __this /* static, unused */, HitInfo_t536  ___lhs, HitInfo_t536  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t4 * L_0 = ((&___lhs)->___target_0);
		GameObject_t4 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m94(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t34 * L_3 = ((&___lhs)->___camera_1);
		Camera_t34 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m94(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m2958 (Object_t * __this /* static, unused */, HitInfo_t536  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t4 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m79(NULL /*static, unused*/, L_0, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t34 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m79(NULL /*static, unused*/, L_2, (Object_t38 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
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
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
struct GUILayer_t417;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m92_gshared (Component_t42 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m92(__this, method) (( Object_t * (*) (Component_t42 *, const MethodInfo*))Component_GetComponent_TisObject_t_m92_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t417_m3118(__this, method) (( GUILayer_t417 * (*) (Component_t42 *, const MethodInfo*))Component_GetComponent_TisObject_t_m92_gshared)(__this, method)
// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* SendMouseEvents_t537_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfoU5BU5D_t538_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t536_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m2959 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SendMouseEvents_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		HitInfoU5BU5D_t538_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		HitInfo_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t536  V_0 = {0};
	HitInfo_t536  V_1 = {0};
	HitInfo_t536  V_2 = {0};
	HitInfo_t536  V_3 = {0};
	HitInfo_t536  V_4 = {0};
	HitInfo_t536  V_5 = {0};
	HitInfo_t536  V_6 = {0};
	HitInfo_t536  V_7 = {0};
	HitInfo_t536  V_8 = {0};
	{
		((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 0;
		HitInfoU5BU5D_t538* L_0 = ((HitInfoU5BU5D_t538*)SZArrayNew(HitInfoU5BU5D_t538_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t536  L_1 = V_0;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_0, 0, sizeof(HitInfo_t536 ))) = L_1;
		HitInfoU5BU5D_t538* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t536  L_3 = V_1;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_2, 1, sizeof(HitInfo_t536 ))) = L_3;
		HitInfoU5BU5D_t538* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t536  L_5 = V_2;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_4, 2, sizeof(HitInfo_t536 ))) = L_5;
		((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4 = L_4;
		HitInfoU5BU5D_t538* L_6 = ((HitInfoU5BU5D_t538*)SZArrayNew(HitInfoU5BU5D_t538_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t536  L_7 = V_3;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_6, 0, sizeof(HitInfo_t536 ))) = L_7;
		HitInfoU5BU5D_t538* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t536  L_9 = V_4;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_8, 1, sizeof(HitInfo_t536 ))) = L_9;
		HitInfoU5BU5D_t538* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t536  L_11 = V_5;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_10, 2, sizeof(HitInfo_t536 ))) = L_11;
		((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5 = L_10;
		HitInfoU5BU5D_t538* L_12 = ((HitInfoU5BU5D_t538*)SZArrayNew(HitInfoU5BU5D_t538_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t536  L_13 = V_6;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_12, 0, sizeof(HitInfo_t536 ))) = L_13;
		HitInfoU5BU5D_t538* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t536  L_15 = V_7;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_14, 1, sizeof(HitInfo_t536 ))) = L_15;
		HitInfoU5BU5D_t538* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t536  L_17 = V_8;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_16, 2, sizeof(HitInfo_t536 ))) = L_17;
		((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"
extern TypeInfo* Input_t33_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t537_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t539_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t536_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t417_m3118_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m2960 (Object_t * __this /* static, unused */, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		SendMouseEvents_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		CameraU5BU5D_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		HitInfo_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Component_GetComponent_TisGUILayer_t417_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483974);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t34 * V_3 = {0};
	CameraU5BU5D_t539* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t191  V_6 = {0};
	GUILayer_t417 * V_7 = {0};
	GUIElement_t416 * V_8 = {0};
	Ray_t29  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t4 * V_12 = {0};
	GameObject_t4 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t536  V_15 = {0};
	Vector3_t10  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t33_il2cpp_TypeInfo_var);
		Vector3_t10  L_0 = Input_get_mousePosition_m58(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m2506(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		CameraU5BU5D_t539* L_2 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		CameraU5BU5D_t539* L_3 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7 = ((CameraU5BU5D_t539*)SZArrayNew(CameraU5BU5D_t539_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		CameraU5BU5D_t539* L_6 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		Camera_GetAllCameras_m2507(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_7 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t536  L_9 = V_15;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_7, L_8, sizeof(HitInfo_t536 ))) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_12 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		bool L_13 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3;
		if (L_13)
		{
			goto IL_02c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		CameraU5BU5D_t539* L_14 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b8;
	}

IL_0084:
	{
		CameraU5BU5D_t539* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t34 **)(Camera_t34 **)SZArrayLdElema(L_15, L_17, sizeof(Camera_t34 *)));
		Camera_t34 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m94(NULL /*static, unused*/, L_18, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		Camera_t34 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t418 * L_22 = Camera_get_targetTexture_m2502(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m79(NULL /*static, unused*/, L_22, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b2;
		}
	}

IL_00ad:
	{
		goto IL_02b2;
	}

IL_00b2:
	{
		Camera_t34 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t191  L_25 = Camera_get_pixelRect_m2500(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t10  L_26 = V_0;
		bool L_27 = Rect_Contains_m1740((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_02b2;
	}

IL_00cc:
	{
		Camera_t34 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t417 * L_29 = Component_GetComponent_TisGUILayer_t417_m3118(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t417_m3118_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t417 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m1526(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0145;
		}
	}
	{
		GUILayer_t417 * L_32 = V_7;
		Vector3_t10  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t416 * L_34 = GUILayer_HitTest_m2261(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t416 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m1526(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_37 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t416 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t4 * L_39 = Component_get_gameObject_m66(L_38, /*hidden argument*/NULL);
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_37, 0, sizeof(HitInfo_t536 )))->___target_0 = L_39;
		HitInfoU5BU5D_t538* L_40 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t34 * L_41 = V_3;
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_40, 0, sizeof(HitInfo_t536 )))->___camera_1 = L_41;
		goto IL_0145;
	}

IL_0123:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_42 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_42, 0, sizeof(HitInfo_t536 )))->___target_0 = (GameObject_t4 *)NULL;
		HitInfoU5BU5D_t538* L_43 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_43, 0, sizeof(HitInfo_t536 )))->___camera_1 = (Camera_t34 *)NULL;
	}

IL_0145:
	{
		Camera_t34 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m2499(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_02b2;
	}

IL_0155:
	{
		Camera_t34 * L_46 = V_3;
		Vector3_t10  L_47 = V_0;
		NullCheck(L_46);
		Ray_t29  L_48 = Camera_ScreenPointToRay_m59(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t10  L_49 = Ray_get_direction_m1633((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m1607(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_018b;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_01a0;
	}

IL_018b:
	{
		Camera_t34 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m1630(L_53, /*hidden argument*/NULL);
		Camera_t34 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m1631(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_01a0:
	{
		V_11 = G_B23_0;
		Camera_t34 * L_59 = V_3;
		Ray_t29  L_60 = V_9;
		float L_61 = V_11;
		Camera_t34 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m1644(L_62, /*hidden argument*/NULL);
		Camera_t34 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m2499(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t4 * L_66 = Camera_RaycastTry_m2511(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t4 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m79(NULL /*static, unused*/, L_67, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01f0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_69 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t4 * L_70 = V_12;
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_69, 1, sizeof(HitInfo_t536 )))->___target_0 = L_70;
		HitInfoU5BU5D_t538* L_71 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t34 * L_72 = V_3;
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_71, 1, sizeof(HitInfo_t536 )))->___camera_1 = L_72;
		goto IL_022a;
	}

IL_01f0:
	{
		Camera_t34 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m2503(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0208;
		}
	}
	{
		Camera_t34 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m2503(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_022a;
		}
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_77 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_77, 1, sizeof(HitInfo_t536 )))->___target_0 = (GameObject_t4 *)NULL;
		HitInfoU5BU5D_t538* L_78 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_78, 1, sizeof(HitInfo_t536 )))->___camera_1 = (Camera_t34 *)NULL;
	}

IL_022a:
	{
		Camera_t34 * L_79 = V_3;
		Ray_t29  L_80 = V_9;
		float L_81 = V_11;
		Camera_t34 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m1644(L_82, /*hidden argument*/NULL);
		Camera_t34 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m2499(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t4 * L_86 = Camera_RaycastTry2D_m2513(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t4 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m79(NULL /*static, unused*/, L_87, (Object_t38 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0278;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_89 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t4 * L_90 = V_13;
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_89, 2, sizeof(HitInfo_t536 )))->___target_0 = L_90;
		HitInfoU5BU5D_t538* L_91 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t34 * L_92 = V_3;
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_91, 2, sizeof(HitInfo_t536 )))->___camera_1 = L_92;
		goto IL_02b2;
	}

IL_0278:
	{
		Camera_t34 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m2503(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_0290;
		}
	}
	{
		Camera_t34 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m2503(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02b2;
		}
	}

IL_0290:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_97 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_97, 2, sizeof(HitInfo_t536 )))->___target_0 = (GameObject_t4 *)NULL;
		HitInfoU5BU5D_t538* L_98 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_98, 2, sizeof(HitInfo_t536 )))->___camera_1 = (Camera_t34 *)NULL;
	}

IL_02b2:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b8:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t539* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0084;
		}
	}

IL_02c3:
	{
		V_14 = 0;
		goto IL_02e9;
	}

IL_02cb:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_103 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m2961(NULL /*static, unused*/, L_102, (*(HitInfo_t536 *)((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_103, L_104, sizeof(HitInfo_t536 )))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e9:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_107 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02cb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 0;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"
extern TypeInfo* Input_t33_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t537_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t536_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral234;
extern Il2CppCodeGenString* _stringLiteral235;
extern Il2CppCodeGenString* _stringLiteral236;
extern Il2CppCodeGenString* _stringLiteral237;
extern Il2CppCodeGenString* _stringLiteral238;
extern Il2CppCodeGenString* _stringLiteral239;
extern Il2CppCodeGenString* _stringLiteral240;
extern "C" void SendMouseEvents_SendEvents_m2961 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t536  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		SendMouseEvents_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		HitInfo_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		_stringLiteral234 = il2cpp_codegen_string_literal_from_index(234);
		_stringLiteral235 = il2cpp_codegen_string_literal_from_index(235);
		_stringLiteral236 = il2cpp_codegen_string_literal_from_index(236);
		_stringLiteral237 = il2cpp_codegen_string_literal_from_index(237);
		_stringLiteral238 = il2cpp_codegen_string_literal_from_index(238);
		_stringLiteral239 = il2cpp_codegen_string_literal_from_index(239);
		_stringLiteral240 = il2cpp_codegen_string_literal_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t536  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t33_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m56(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m85(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t536  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m2958(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_5 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t536  L_7 = ___hit;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_5, L_6, sizeof(HitInfo_t536 ))) = L_7;
		HitInfoU5BU5D_t538* L_8 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m2956(((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_8, L_9, sizeof(HitInfo_t536 ))), _stringLiteral234, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_11 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m2958(NULL /*static, unused*/, (*(HitInfo_t536 *)((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_11, L_12, sizeof(HitInfo_t536 )))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t536  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_15 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m2957(NULL /*static, unused*/, L_14, (*(HitInfo_t536 *)((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_15, L_16, sizeof(HitInfo_t536 )))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_18 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m2956(((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_18, L_19, sizeof(HitInfo_t536 ))), _stringLiteral235, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_20 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m2956(((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_20, L_21, sizeof(HitInfo_t536 ))), _stringLiteral236, /*hidden argument*/NULL);
		HitInfoU5BU5D_t538* L_22 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t536_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t536  L_24 = V_2;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_22, L_23, sizeof(HitInfo_t536 ))) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_25 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m2958(NULL /*static, unused*/, (*(HitInfo_t536 *)((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_25, L_26, sizeof(HitInfo_t536 )))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_28 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m2956(((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_28, L_29, sizeof(HitInfo_t536 ))), _stringLiteral237, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t536  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_31 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m2957(NULL /*static, unused*/, L_30, (*(HitInfo_t536 *)((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_31, L_32, sizeof(HitInfo_t536 )))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t536  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m2958(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m2956((&___hit), _stringLiteral238, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_36 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m2958(NULL /*static, unused*/, (*(HitInfo_t536 *)((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_36, L_37, sizeof(HitInfo_t536 )))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_39 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m2956(((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_39, L_40, sizeof(HitInfo_t536 ))), _stringLiteral239, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t536  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m2958(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m2956((&___hit), _stringLiteral240, /*hidden argument*/NULL);
		HitInfo_SendMessage_m2956((&___hit), _stringLiteral238, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t537_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t538* L_43 = ((SendMouseEvents_t537_StaticFields*)SendMouseEvents_t537_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t536  L_45 = ___hit;
		*((HitInfo_t536 *)(HitInfo_t536 *)SZArrayLdElema(L_43, L_44, sizeof(HitInfo_t536 ))) = L_45;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Range__ctor_m2962 (Range_t534 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
// System.Void UnityEngine.PropertyAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void PropertyAttribute__ctor_m2963 (PropertyAttribute_t543 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void TooltipAttribute__ctor_m2964 (TooltipAttribute_t544 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2963(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"
// System.Void UnityEngine.SpaceAttribute::.ctor()
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void SpaceAttribute__ctor_m2965 (SpaceAttribute_t545 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2963(__this, /*hidden argument*/NULL);
		__this->___height_0 = (8.0f);
		return;
	}
}
// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void SpaceAttribute__ctor_m2966 (SpaceAttribute_t545 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2963(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void RangeAttribute__ctor_m2967 (RangeAttribute_t546 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2963(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"
// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void TextAreaAttribute__ctor_m2968 (TextAreaAttribute_t547 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m2963(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"
// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SelectionBaseAttribute__ctor_m2969 (SelectionBaseAttribute_t548 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Void UnityEngine.StackTraceUtility::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void StackTraceUtility__ctor_m2970 (StackTraceUtility_t549 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m138(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t549_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m2971 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t549_StaticFields*)StackTraceUtility_t549_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* StackTraceUtility_t549_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m2972 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		((StackTraceUtility_t549_StaticFields*)StackTraceUtility_t549_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StackTrace_t583_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t549_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m2973 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		StackTraceUtility_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t583 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t583 * L_0 = (StackTrace_t583 *)il2cpp_codegen_object_new (StackTrace_t583_il2cpp_TypeInfo_var);
		StackTrace__ctor_m3119(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t583 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m2978(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToString_m152(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral241;
extern Il2CppCodeGenString* _stringLiteral242;
extern Il2CppCodeGenString* _stringLiteral243;
extern Il2CppCodeGenString* _stringLiteral244;
extern Il2CppCodeGenString* _stringLiteral245;
extern Il2CppCodeGenString* _stringLiteral246;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m2974 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral241 = il2cpp_codegen_string_literal_from_index(241);
		_stringLiteral242 = il2cpp_codegen_string_literal_from_index(242);
		_stringLiteral243 = il2cpp_codegen_string_literal_from_index(243);
		_stringLiteral244 = il2cpp_codegen_string_literal_from_index(244);
		_stringLiteral245 = il2cpp_codegen_string_literal_from_index(245);
		_stringLiteral246 = il2cpp_codegen_string_literal_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m3096(L_1, _stringLiteral241, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m3096(L_3, _stringLiteral242, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m3096(L_5, _stringLiteral243, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3096(L_7, _stringLiteral244, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m3096(L_9, _stringLiteral245, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m3096(L_11, _stringLiteral246, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t549_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral247;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m2975 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m2976(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m148(NULL /*static, unused*/, L_3, _stringLiteral247, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern TypeInfo* ArgumentException_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t32_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t316_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t583_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t549_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral248;
extern Il2CppCodeGenString* _stringLiteral249;
extern Il2CppCodeGenString* _stringLiteral247;
extern Il2CppCodeGenString* _stringLiteral113;
extern Il2CppCodeGenString* _stringLiteral250;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m2976 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		Exception_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		StringBuilder_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTrace_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		StackTraceUtility_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		_stringLiteral248 = il2cpp_codegen_string_literal_from_index(248);
		_stringLiteral249 = il2cpp_codegen_string_literal_from_index(249);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		_stringLiteral113 = il2cpp_codegen_string_literal_from_index(113);
		_stringLiteral250 = il2cpp_codegen_string_literal_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t32 * V_0 = {0};
	StringBuilder_t316 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t583 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t370 * L_1 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_1, _stringLiteral248, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t32 *)IsInstClass(L_2, Exception_t32_il2cpp_TypeInfo_var));
		Exception_t32 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t370 * L_4 = (ArgumentException_t370 *)il2cpp_codegen_object_new (ArgumentException_t370_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2053(L_4, _stringLiteral249, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0029:
	{
		Exception_t32 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t32 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m153(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t316 * L_10 = (StringBuilder_t316 *)il2cpp_codegen_object_new (StringBuilder_t316_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3120(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m153(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t32 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t32 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m148(NULL /*static, unused*/, L_19, _stringLiteral247, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t32 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t32 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t32 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m3085(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m153(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m141(NULL /*static, unused*/, L_33, _stringLiteral113, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m141(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t32 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t32 * L_41 = (Exception_t32 *)VirtFuncInvoker0< Exception_t32 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m3121(NULL /*static, unused*/, _stringLiteral250, L_42, _stringLiteral247, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t32 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t32 * L_46 = (Exception_t32 *)VirtFuncInvoker0< Exception_t32 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t32 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t316 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m141(NULL /*static, unused*/, L_49, _stringLiteral247, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m3122(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t583 * L_51 = (StackTrace_t583 *)il2cpp_codegen_object_new (StackTrace_t583_il2cpp_TypeInfo_var);
		StackTrace__ctor_m3119(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t316 * L_52 = V_1;
		StackTrace_t583 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m2978(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m3122(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t316 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = StringBuilder_ToString_m1539(L_56, /*hidden argument*/NULL);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t316_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t549_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral251;
extern Il2CppCodeGenString* _stringLiteral252;
extern Il2CppCodeGenString* _stringLiteral253;
extern Il2CppCodeGenString* _stringLiteral254;
extern Il2CppCodeGenString* _stringLiteral255;
extern Il2CppCodeGenString* _stringLiteral256;
extern Il2CppCodeGenString* _stringLiteral257;
extern Il2CppCodeGenString* _stringLiteral258;
extern Il2CppCodeGenString* _stringLiteral259;
extern Il2CppCodeGenString* _stringLiteral260;
extern Il2CppCodeGenString* _stringLiteral261;
extern Il2CppCodeGenString* _stringLiteral262;
extern Il2CppCodeGenString* _stringLiteral263;
extern Il2CppCodeGenString* _stringLiteral264;
extern Il2CppCodeGenString* _stringLiteral247;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m2977 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		StringBuilder_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		StackTraceUtility_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		_stringLiteral251 = il2cpp_codegen_string_literal_from_index(251);
		_stringLiteral252 = il2cpp_codegen_string_literal_from_index(252);
		_stringLiteral253 = il2cpp_codegen_string_literal_from_index(253);
		_stringLiteral254 = il2cpp_codegen_string_literal_from_index(254);
		_stringLiteral255 = il2cpp_codegen_string_literal_from_index(255);
		_stringLiteral256 = il2cpp_codegen_string_literal_from_index(256);
		_stringLiteral257 = il2cpp_codegen_string_literal_from_index(257);
		_stringLiteral258 = il2cpp_codegen_string_literal_from_index(258);
		_stringLiteral259 = il2cpp_codegen_string_literal_from_index(259);
		_stringLiteral260 = il2cpp_codegen_string_literal_from_index(260);
		_stringLiteral261 = il2cpp_codegen_string_literal_from_index(261);
		_stringLiteral262 = il2cpp_codegen_string_literal_from_index(262);
		_stringLiteral263 = il2cpp_codegen_string_literal_from_index(263);
		_stringLiteral264 = il2cpp_codegen_string_literal_from_index(264);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t48* V_0 = {0};
	StringBuilder_t316 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t197* L_3 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t48* L_4 = String_Split_m3123(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m153(L_5, /*hidden argument*/NULL);
		StringBuilder_t316 * L_7 = (StringBuilder_t316 *)il2cpp_codegen_object_new (StringBuilder_t316_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3120(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t48* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t48* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))));
		String_t* L_13 = String_Trim_m3085((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9, sizeof(String_t*))) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t48* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t48* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19, sizeof(String_t*)));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m153(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1900(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m3096(L_24, _stringLiteral251, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m3096(L_27, _stringLiteral252, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t48* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m2974(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t48* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m2974(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36, sizeof(String_t*))), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m3097(L_38, _stringLiteral253, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1901(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m3097(L_44, _stringLiteral254, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m3097(L_46, _stringLiteral255, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m3097(L_48, _stringLiteral256, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m3096(L_51, _stringLiteral257, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m3124(L_53, _stringLiteral258, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m3096(L_55, _stringLiteral259, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1924(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m3097(L_59, _stringLiteral260, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m3125(L_62, _stringLiteral258, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1924(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m126(L_73, _stringLiteral261, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t549_StaticFields*)StackTraceUtility_t549_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m126(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m3126(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m3127(L_82, _stringLiteral262, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1924(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1926(L_88, L_89, _stringLiteral263, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m153(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1926(L_91, L_93, _stringLiteral264, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t316 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m141(NULL /*static, unused*/, L_96, _stringLiteral247, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m3122(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t48* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t316 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = StringBuilder_ToString_m1539(L_101, /*hidden argument*/NULL);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern TypeInfo* StringBuilder_t316_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t549_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral119;
extern Il2CppCodeGenString* _stringLiteral265;
extern Il2CppCodeGenString* _stringLiteral266;
extern Il2CppCodeGenString* _stringLiteral267;
extern Il2CppCodeGenString* _stringLiteral264;
extern Il2CppCodeGenString* _stringLiteral268;
extern Il2CppCodeGenString* _stringLiteral269;
extern Il2CppCodeGenString* _stringLiteral263;
extern Il2CppCodeGenString* _stringLiteral247;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m2978 (Object_t * __this /* static, unused */, StackTrace_t583 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		_stringLiteral265 = il2cpp_codegen_string_literal_from_index(265);
		_stringLiteral266 = il2cpp_codegen_string_literal_from_index(266);
		_stringLiteral267 = il2cpp_codegen_string_literal_from_index(267);
		_stringLiteral264 = il2cpp_codegen_string_literal_from_index(264);
		_stringLiteral268 = il2cpp_codegen_string_literal_from_index(268);
		_stringLiteral269 = il2cpp_codegen_string_literal_from_index(269);
		_stringLiteral263 = il2cpp_codegen_string_literal_from_index(263);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t316 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t609 * V_2 = {0};
	MethodBase_t610 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t611* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t316 * L_0 = (StringBuilder_t316 *)il2cpp_codegen_object_new (StringBuilder_t316_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3120(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t583 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t609 * L_3 = (StackFrame_t609 *)VirtFuncInvoker1< StackFrame_t609 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t609 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t610 * L_5 = (MethodBase_t610 *)VirtFuncInvoker0< MethodBase_t610 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t610 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t610 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m153(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t316 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m3122(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t316 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3122(L_17, _stringLiteral119, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t316 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3122(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t316 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3122(L_21, _stringLiteral265, /*hidden argument*/NULL);
		StringBuilder_t316 * L_22 = V_0;
		MethodBase_t610 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m3122(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t316 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3122(L_25, _stringLiteral266, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t610 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t611* L_27 = (ParameterInfoU5BU5D_t611*)VirtFuncInvoker0< ParameterInfoU5BU5D_t611* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t316 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m3122(L_29, _stringLiteral267, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t316 * L_30 = V_0;
		ParameterInfoU5BU5D_t611* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t612 **)(ParameterInfo_t612 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t612 *))));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t612 **)(ParameterInfo_t612 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t612 *))));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m3122(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t611* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t316 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3122(L_39, _stringLiteral264, /*hidden argument*/NULL);
		StackFrame_t609 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m63(NULL /*static, unused*/, L_44, _stringLiteral268, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m63(NULL /*static, unused*/, L_47, _stringLiteral269, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t316 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3122(L_49, _stringLiteral263, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t549_StaticFields*)StackTraceUtility_t549_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m3096(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t549_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t549_StaticFields*)StackTraceUtility_t549_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m153(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m153(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t549_StaticFields*)StackTraceUtility_t549_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m153(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1901(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t316 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m3122(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t316 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m3122(L_63, _stringLiteral265, /*hidden argument*/NULL);
		StringBuilder_t316 * L_64 = V_0;
		StackFrame_t609 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m131((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m3122(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t316 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m3122(L_68, _stringLiteral264, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t316 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m3122(L_69, _stringLiteral247, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t583 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t316 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = StringBuilder_ToString_m1539(L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Void UnityEngine.UnityException::.ctor()
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral270;
extern "C" void UnityException__ctor_m2979 (UnityException_t351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral270 = il2cpp_codegen_string_literal_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m3128(__this, _stringLiteral270, /*hidden argument*/NULL);
		Exception_set_HResult_m3129(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void UnityException__ctor_m2980 (UnityException_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3128(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3129(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
// System.Exception
#include "mscorlib_System_Exception.h"
extern "C" void UnityException__ctor_m2981 (UnityException_t351 * __this, String_t* ___message, Exception_t32 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t32 * L_1 = ___innerException;
		Exception__ctor_m3130(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m3129(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void UnityException__ctor_m2982 (UnityException_t351 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t584 * L_0 = ___info;
		StreamingContext_t585  L_1 = ___context;
		Exception__ctor_m3131(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m2983 (SharedBetweenAnimatorsAttribute_t550 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3081(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern "C" void StateMachineBehaviour__ctor_m2984 (StateMachineBehaviour_t551 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m2147(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m2985 (TextGenerationSettings_t311 * __this, Color_t27  ___left, Color_t27  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___left)->___r_0);
		float L_1 = ((&___right)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3 = ((&___left)->___g_1);
		float L_4 = ((&___right)->___g_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6 = ((&___left)->___b_2);
		float L_7 = ((&___right)->___b_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9 = ((&___left)->___a_3);
		float L_10 = ((&___right)->___a_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_11 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m2986 (TextGenerationSettings_t311 * __this, Vector2_t11  ___left, Vector2_t11  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* Mathf_t43_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m2987 (TextGenerationSettings_t311 * __this, TextGenerationSettings_t311  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t27  L_0 = (__this->___color_1);
		Color_t27  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m2985(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t43_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m1607(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t11  L_35 = (__this->___generationExtents_14);
		Vector2_t11  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m2986(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t11  L_38 = (__this->___pivot_15);
		Vector2_t11  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m2986(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t150 * L_41 = (__this->___font_0);
		Font_t150 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m94(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"
extern TypeInfo* TrackedReference_t488_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m2988 (TrackedReference_t488 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m2990(NULL /*static, unused*/, ((TrackedReference_t488 *)IsInstClass(L_0, TrackedReference_t488_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern "C" int32_t TrackedReference_GetHashCode_m2989 (TrackedReference_t488 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m3132(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m2990 (Object_t * __this /* static, unused */, TrackedReference_t488 * ___x, TrackedReference_t488 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t488 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t488 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t488 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m3133(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t488 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m3133(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t488 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t488 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m3133(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t488_marshal(const TrackedReference_t488& unmarshaled, TrackedReference_t488_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void TrackedReference_t488_marshal_back(const TrackedReference_t488_marshaled& marshaled, TrackedReference_t488& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t488_marshal_cleanup(TrackedReference_t488_marshaled& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
