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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
extern "C" void CaptureAssertion__ctor_m6505 (CaptureAssertion_t1215 * __this, Literal_t1217 * ___l, const MethodInfo* method)
{
	{
		Assertion__ctor_m6499(__this, /*hidden argument*/NULL);
		Literal_t1217 * L_0 = ___l;
		__this->___literal_3 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
extern "C" void CaptureAssertion_set_CapturingGroup_m6506 (CaptureAssertion_t1215 * __this, CapturingGroup_t1210 * ___value, const MethodInfo* method)
{
	{
		CapturingGroup_t1210 * L_0 = ___value;
		__this->___group_2 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern TypeInfo* ICompiler_t1243_il2cpp_TypeInfo_var;
extern "C" void CaptureAssertion_Compile_m6507 (CaptureAssertion_t1215 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	LinkRef_t1186 * V_1 = {0};
	LinkRef_t1186 * V_2 = {0};
	{
		CapturingGroup_t1210 * L_0 = (__this->___group_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ExpressionAssertion_t1216 * L_1 = CaptureAssertion_get_Alternate_m6509(__this, /*hidden argument*/NULL);
		Object_t * L_2 = ___cmp;
		bool L_3 = ___reverse;
		NullCheck(L_1);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_1, L_2, L_3);
		return;
	}

IL_0019:
	{
		CapturingGroup_t1210 * L_4 = (__this->___group_2);
		NullCheck(L_4);
		int32_t L_5 = CapturingGroup_get_Index_m6478(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		LinkRef_t1186 * L_7 = (LinkRef_t1186 *)InterfaceFuncInvoker0< LinkRef_t1186 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		Expression_t1206 * L_8 = Assertion_get_FalseExpression_m6502(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_9 = ___cmp;
		int32_t L_10 = V_0;
		LinkRef_t1186 * L_11 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, LinkRef_t1186 * >::Invoke(15 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		Expression_t1206 * L_12 = Assertion_get_TrueExpression_m6500(__this, /*hidden argument*/NULL);
		Object_t * L_13 = ___cmp;
		bool L_14 = ___reverse;
		NullCheck(L_12);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_12, L_13, L_14);
		goto IL_0088;
	}

IL_0051:
	{
		Object_t * L_15 = ___cmp;
		NullCheck(L_15);
		LinkRef_t1186 * L_16 = (LinkRef_t1186 *)InterfaceFuncInvoker0< LinkRef_t1186 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
		Object_t * L_17 = ___cmp;
		int32_t L_18 = V_0;
		LinkRef_t1186 * L_19 = V_2;
		NullCheck(L_17);
		InterfaceActionInvoker2< int32_t, LinkRef_t1186 * >::Invoke(15 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_17, L_18, L_19);
		Expression_t1206 * L_20 = Assertion_get_TrueExpression_m6500(__this, /*hidden argument*/NULL);
		Object_t * L_21 = ___cmp;
		bool L_22 = ___reverse;
		NullCheck(L_20);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_20, L_21, L_22);
		Object_t * L_23 = ___cmp;
		LinkRef_t1186 * L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_23, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t1186 * L_26 = V_2;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_25, L_26);
		Expression_t1206 * L_27 = Assertion_get_FalseExpression_m6502(__this, /*hidden argument*/NULL);
		Object_t * L_28 = ___cmp;
		bool L_29 = ___reverse;
		NullCheck(L_27);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_27, L_28, L_29);
	}

IL_0088:
	{
		Object_t * L_30 = ___cmp;
		LinkRef_t1186 * L_31 = V_1;
		NullCheck(L_30);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_30, L_31);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern "C" bool CaptureAssertion_IsComplex_m6508 (CaptureAssertion_t1215 * __this, const MethodInfo* method)
{
	{
		CapturingGroup_t1210 * L_0 = (__this->___group_2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ExpressionAssertion_t1216 * L_1 = CaptureAssertion_get_Alternate_m6509(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex() */, L_1);
		return L_2;
	}

IL_0017:
	{
		Expression_t1206 * L_3 = Assertion_get_TrueExpression_m6500(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Expression_t1206 * L_4 = Assertion_get_TrueExpression_m6500(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Expression_t1206 * L_6 = Assertion_get_FalseExpression_m6502(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Expression_t1206 * L_7 = Assertion_get_FalseExpression_m6502(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_7);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return 1;
	}

IL_0051:
	{
		int32_t L_9 = Expression_GetFixedWidth_m6463(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern TypeInfo* ExpressionAssertion_t1216_il2cpp_TypeInfo_var;
extern "C" ExpressionAssertion_t1216 * CaptureAssertion_get_Alternate_m6509 (CaptureAssertion_t1215 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExpressionAssertion_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(854);
		s_Il2CppMethodIntialized = true;
	}
	{
		ExpressionAssertion_t1216 * L_0 = (__this->___alternate_1);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		ExpressionAssertion_t1216 * L_1 = (ExpressionAssertion_t1216 *)il2cpp_codegen_object_new (ExpressionAssertion_t1216_il2cpp_TypeInfo_var);
		ExpressionAssertion__ctor_m6510(L_1, /*hidden argument*/NULL);
		__this->___alternate_1 = L_1;
		ExpressionAssertion_t1216 * L_2 = (__this->___alternate_1);
		Expression_t1206 * L_3 = Assertion_get_TrueExpression_m6500(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Assertion_set_TrueExpression_m6501(L_2, L_3, /*hidden argument*/NULL);
		ExpressionAssertion_t1216 * L_4 = (__this->___alternate_1);
		Expression_t1206 * L_5 = Assertion_get_FalseExpression_m6502(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assertion_set_FalseExpression_m6503(L_4, L_5, /*hidden argument*/NULL);
		ExpressionAssertion_t1216 * L_6 = (__this->___alternate_1);
		Literal_t1217 * L_7 = (__this->___literal_3);
		NullCheck(L_6);
		ExpressionAssertion_set_TestExpression_m6514(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		ExpressionAssertion_t1216 * L_8 = (__this->___alternate_1);
		return L_8;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern "C" void ExpressionAssertion__ctor_m6510 (ExpressionAssertion_t1216 * __this, const MethodInfo* method)
{
	{
		Assertion__ctor_m6499(__this, /*hidden argument*/NULL);
		ExpressionCollection_t1205 * L_0 = CompositeExpression_get_Expressions_m6466(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExpressionCollection_Add_m6458(L_0, (Expression_t1206 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ExpressionAssertion_set_Reverse_m6511 (ExpressionAssertion_t1216 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___reverse_1 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C" void ExpressionAssertion_set_Negate_m6512 (ExpressionAssertion_t1216 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___negate_2 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C" Expression_t1206 * ExpressionAssertion_get_TestExpression_m6513 (ExpressionAssertion_t1216 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t1205 * L_0 = CompositeExpression_get_Expressions_m6466(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t1206 * L_1 = ExpressionCollection_get_Item_m6459(L_0, 2, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
extern "C" void ExpressionAssertion_set_TestExpression_m6514 (ExpressionAssertion_t1216 * __this, Expression_t1206 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t1205 * L_0 = CompositeExpression_get_Expressions_m6466(__this, /*hidden argument*/NULL);
		Expression_t1206 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m6460(L_0, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern TypeInfo* ICompiler_t1243_il2cpp_TypeInfo_var;
extern "C" void ExpressionAssertion_Compile_m6515 (ExpressionAssertion_t1216 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t1186 * V_0 = {0};
	LinkRef_t1186 * V_1 = {0};
	LinkRef_t1186 * V_2 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1186 * L_1 = (LinkRef_t1186 *)InterfaceFuncInvoker0< LinkRef_t1186 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		NullCheck(L_2);
		LinkRef_t1186 * L_3 = (LinkRef_t1186 *)InterfaceFuncInvoker0< LinkRef_t1186 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		bool L_4 = (__this->___negate_2);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_5 = ___cmp;
		LinkRef_t1186 * L_6 = V_0;
		LinkRef_t1186 * L_7 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker2< LinkRef_t1186 *, LinkRef_t1186 * >::Invoke(17 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		goto IL_002e;
	}

IL_0026:
	{
		Object_t * L_8 = ___cmp;
		LinkRef_t1186 * L_9 = V_1;
		LinkRef_t1186 * L_10 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker2< LinkRef_t1186 *, LinkRef_t1186 * >::Invoke(17 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_8, L_9, L_10);
	}

IL_002e:
	{
		Expression_t1206 * L_11 = ExpressionAssertion_get_TestExpression_m6513(__this, /*hidden argument*/NULL);
		Object_t * L_12 = ___cmp;
		bool L_13 = (__this->___reverse_1);
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_11, L_12, L_13);
		Object_t * L_14 = ___cmp;
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_14);
		Expression_t1206 * L_15 = Assertion_get_TrueExpression_m6500(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_006a;
		}
	}
	{
		Object_t * L_16 = ___cmp;
		LinkRef_t1186 * L_17 = V_1;
		NullCheck(L_16);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_16, L_17);
		Object_t * L_18 = ___cmp;
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_18);
		Object_t * L_19 = ___cmp;
		LinkRef_t1186 * L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_19, L_20);
		goto IL_00be;
	}

IL_006a:
	{
		Object_t * L_21 = ___cmp;
		LinkRef_t1186 * L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_21, L_22);
		Expression_t1206 * L_23 = Assertion_get_TrueExpression_m6500(__this, /*hidden argument*/NULL);
		Object_t * L_24 = ___cmp;
		bool L_25 = ___reverse;
		NullCheck(L_23);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_23, L_24, L_25);
		Expression_t1206 * L_26 = Assertion_get_FalseExpression_m6502(__this, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0095;
		}
	}
	{
		Object_t * L_27 = ___cmp;
		LinkRef_t1186 * L_28 = V_1;
		NullCheck(L_27);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_27, L_28);
		goto IL_00be;
	}

IL_0095:
	{
		Object_t * L_29 = ___cmp;
		NullCheck(L_29);
		LinkRef_t1186 * L_30 = (LinkRef_t1186 *)InterfaceFuncInvoker0< LinkRef_t1186 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_29);
		V_2 = L_30;
		Object_t * L_31 = ___cmp;
		LinkRef_t1186 * L_32 = V_2;
		NullCheck(L_31);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_31, L_32);
		Object_t * L_33 = ___cmp;
		LinkRef_t1186 * L_34 = V_1;
		NullCheck(L_33);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_33, L_34);
		Expression_t1206 * L_35 = Assertion_get_FalseExpression_m6502(__this, /*hidden argument*/NULL);
		Object_t * L_36 = ___cmp;
		bool L_37 = ___reverse;
		NullCheck(L_35);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_35, L_36, L_37);
		Object_t * L_38 = ___cmp;
		LinkRef_t1186 * L_39 = V_2;
		NullCheck(L_38);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_38, L_39);
	}

IL_00be:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C" bool ExpressionAssertion_IsComplex_m6516 (ExpressionAssertion_t1216 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBase.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBaseMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern "C" void Alternation__ctor_m6517 (Alternation_t1218 * __this, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m6465(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern "C" ExpressionCollection_t1205 * Alternation_get_Alternatives_m6518 (Alternation_t1218 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t1205 * L_0 = CompositeExpression_get_Expressions_m6466(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern "C" void Alternation_AddAlternative_m6519 (Alternation_t1218 * __this, Expression_t1206 * ___e, const MethodInfo* method)
{
	{
		ExpressionCollection_t1205 * L_0 = Alternation_get_Alternatives_m6518(__this, /*hidden argument*/NULL);
		Expression_t1206 * L_1 = ___e;
		NullCheck(L_0);
		ExpressionCollection_Add_m6458(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* ICompiler_t1243_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t1206_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t38_il2cpp_TypeInfo_var;
extern "C" void Alternation_Compile_m6520 (Alternation_t1218 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		IEnumerator_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		Expression_t1206_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(859);
		IDisposable_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t1186 * V_0 = {0};
	Expression_t1206 * V_1 = {0};
	Object_t * V_2 = {0};
	LinkRef_t1186 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1186 * L_1 = (LinkRef_t1186 *)InterfaceFuncInvoker0< LinkRef_t1186 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		ExpressionCollection_t1205 * L_2 = Alternation_get_Alternatives_m6518(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0018:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Expression_t1206 *)CastclassClass(L_5, Expression_t1206_il2cpp_TypeInfo_var));
			Object_t * L_6 = ___cmp;
			NullCheck(L_6);
			LinkRef_t1186 * L_7 = (LinkRef_t1186 *)InterfaceFuncInvoker0< LinkRef_t1186 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			Object_t * L_8 = ___cmp;
			LinkRef_t1186 * L_9 = V_3;
			NullCheck(L_8);
			InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(18 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_8, L_9);
			Expression_t1206 * L_10 = V_1;
			Object_t * L_11 = ___cmp;
			bool L_12 = ___reverse;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_10, L_11, L_12);
			Object_t * L_13 = ___cmp;
			LinkRef_t1186 * L_14 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_13, L_14);
			Object_t * L_15 = ___cmp;
			LinkRef_t1186 * L_16 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_15, L_16);
			Object_t * L_17 = ___cmp;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(26 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_17);
		}

IL_004e:
		{
			Object_t * L_18 = V_2;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0018;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x73, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t33 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_2;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t38_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_006b;
			}
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(94)
		}

IL_006b:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t38_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t33 *)
	}

IL_0073:
	{
		Object_t * L_23 = ___cmp;
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_23);
		Object_t * L_24 = ___cmp;
		LinkRef_t1186 * L_25 = V_0;
		NullCheck(L_24);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_24, L_25);
		Object_t * L_26 = ___cmp;
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(27 /* System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_26);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern "C" void Alternation_GetWidth_m6521 (Alternation_t1218 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		ExpressionCollection_t1205 * L_2 = Alternation_get_Alternatives_m6518(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_2);
		CompositeExpression_GetWidth_m6467(__this, L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern "C" void Literal__ctor_m6522 (Literal_t1217 * __this, String_t* ___str, bool ___ignore, const MethodInfo* method)
{
	{
		Expression__ctor_m6462(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str;
		__this->___str_0 = L_0;
		bool L_1 = ___ignore;
		__this->___ignore_1 = L_1;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ICompiler_t1243_il2cpp_TypeInfo_var;
extern "C" void Literal_CompileLiteral_m6523 (Object_t * __this /* static, unused */, String_t* ___str, Object_t * ___cmp, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m159(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		String_t* L_2 = ___str;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m159(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_4 = ___cmp;
		String_t* L_5 = ___str;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m1913(L_5, 0, /*hidden argument*/NULL);
		bool L_7 = ___ignore;
		bool L_8 = ___reverse;
		NullCheck(L_4);
		InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(3 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_4, L_6, 0, L_7, L_8);
		goto IL_0036;
	}

IL_002d:
	{
		Object_t * L_9 = ___cmp;
		String_t* L_10 = ___str;
		bool L_11 = ___ignore;
		bool L_12 = ___reverse;
		NullCheck(L_9);
		InterfaceActionInvoker3< String_t*, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern "C" void Literal_Compile_m6524 (Literal_t1217 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_0);
		Object_t * L_1 = ___cmp;
		bool L_2 = (__this->___ignore_1);
		bool L_3 = ___reverse;
		Literal_CompileLiteral_m6523(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C" void Literal_GetWidth_m6525 (Literal_t1217 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		String_t* L_2 = (__this->___str_0);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m159(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		V_0 = L_4;
		*((int32_t*)(L_1)) = (int32_t)L_4;
		int32_t L_5 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_5;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern TypeInfo* AnchorInfo_t1224_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t1224 * Literal_GetAnchorInfo_m6526 (Literal_t1217 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t1224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(860);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___str_0);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m159(L_0, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___str_0);
		bool L_3 = (__this->___ignore_1);
		AnchorInfo_t1224 * L_4 = (AnchorInfo_t1224 *)il2cpp_codegen_object_new (AnchorInfo_t1224_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6554(L_4, __this, 0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C" bool Literal_IsComplex_m6527 (Literal_t1217 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern "C" void PositionAssertion__ctor_m6528 (PositionAssertion_t1219 * __this, uint16_t ___pos, const MethodInfo* method)
{
	{
		Expression__ctor_m6462(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___pos;
		__this->___pos_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* ICompiler_t1243_il2cpp_TypeInfo_var;
extern "C" void PositionAssertion_Compile_m6529 (PositionAssertion_t1219 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___cmp;
		uint16_t L_1 = (__this->___pos_0);
		NullCheck(L_0);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void PositionAssertion_GetWidth_m6530 (PositionAssertion_t1219 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 0;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern "C" bool PositionAssertion_IsComplex_m6531 (PositionAssertion_t1219 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern TypeInfo* AnchorInfo_t1224_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t1224 * PositionAssertion_GetAnchorInfo_m6532 (PositionAssertion_t1219 * __this, bool ___revers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t1224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(860);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = {0};
	{
		uint16_t L_0 = (__this->___pos_0);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002f;
	}

IL_0020:
	{
		uint16_t L_2 = (__this->___pos_0);
		AnchorInfo_t1224 * L_3 = (AnchorInfo_t1224 *)il2cpp_codegen_object_new (AnchorInfo_t1224_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6555(L_3, __this, 0, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002f:
	{
		AnchorInfo_t1224 * L_4 = (AnchorInfo_t1224 *)il2cpp_codegen_object_new (AnchorInfo_t1224_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m6553(L_4, __this, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern "C" void Reference__ctor_m6533 (Reference_t1220 * __this, bool ___ignore, const MethodInfo* method)
{
	{
		Expression__ctor_m6462(__this, /*hidden argument*/NULL);
		bool L_0 = ___ignore;
		__this->___ignore_1 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern "C" CapturingGroup_t1210 * Reference_get_CapturingGroup_m6534 (Reference_t1220 * __this, const MethodInfo* method)
{
	{
		CapturingGroup_t1210 * L_0 = (__this->___group_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
extern "C" void Reference_set_CapturingGroup_m6535 (Reference_t1220 * __this, CapturingGroup_t1210 * ___value, const MethodInfo* method)
{
	{
		CapturingGroup_t1210 * L_0 = ___value;
		__this->___group_0 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern "C" bool Reference_get_IgnoreCase_m6536 (Reference_t1220 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignore_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern TypeInfo* ICompiler_t1243_il2cpp_TypeInfo_var;
extern "C" void Reference_Compile_m6537 (Reference_t1220 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t1243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___cmp;
		CapturingGroup_t1210 * L_1 = (__this->___group_0);
		NullCheck(L_1);
		int32_t L_2 = CapturingGroup_get_Index_m6478(L_1, /*hidden argument*/NULL);
		bool L_3 = (__this->___ignore_1);
		bool L_4 = ___reverse;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, bool, bool >::Invoke(14 /* System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern "C" void Reference_GetWidth_m6538 (Reference_t1220 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)2147483647);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern "C" bool Reference_IsComplex_m6539 (Reference_t1220 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
extern "C" void BackslashNumber__ctor_m6540 (BackslashNumber_t1221 * __this, bool ___ignore, bool ___ecma, const MethodInfo* method)
{
	{
		bool L_0 = ___ignore;
		Reference__ctor_m6533(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___ecma;
		__this->___ecma_3 = L_1;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
// System.String
#include "mscorlib_System_String.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
extern TypeInfo* CapturingGroup_t1210_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool BackslashNumber_ResolveReference_m6541 (BackslashNumber_t1221 * __this, String_t* ___num_str, Hashtable_t53 * ___groups, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapturingGroup_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = (__this->___ecma_3);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0014:
	{
		Hashtable_t53 * L_1 = ___groups;
		String_t* L_2 = ___num_str;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = String_Substring_m1914(L_2, 0, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_4);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = ___num_str;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m159(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		Hashtable_t53 * L_12 = ___groups;
		String_t* L_13 = ___num_str;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m1914(L_13, 0, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, L_15);
		Reference_set_CapturingGroup_m6535(__this, ((CapturingGroup_t1210 *)CastclassClass(L_16, CapturingGroup_t1210_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_17 = ___num_str;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m1941(L_17, L_18, /*hidden argument*/NULL);
		__this->___literal_2 = L_19;
		return 1;
	}

IL_0067:
	{
		goto IL_007a;
	}

IL_006c:
	{
		String_t* L_20 = ___num_str;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m159(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		return 0;
	}

IL_007a:
	{
		V_2 = 0;
		String_t* L_22 = ___num_str;
		int32_t L_23 = Parser_ParseOctal_m6412(NULL /*static, unused*/, L_22, (&V_2), /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_008e;
		}
	}
	{
		return 0;
	}

IL_008e:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)255))))
		{
			goto IL_00ac;
		}
	}
	{
		bool L_26 = (__this->___ecma_3);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27/(int32_t)8));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28-(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29&(int32_t)((int32_t)255)));
		int32_t L_30 = V_3;
		uint16_t L_31 = (((uint16_t)L_30));
		Object_t * L_32 = Box(Char_t355_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33 = ___num_str;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		String_t* L_35 = String_Substring_m1941(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m76(NULL /*static, unused*/, L_32, L_35, /*hidden argument*/NULL);
		__this->___literal_2 = L_36;
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern "C" void BackslashNumber_Compile_m6542 (BackslashNumber_t1221 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	{
		CapturingGroup_t1210 * L_0 = Reference_get_CapturingGroup_m6534(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___cmp;
		bool L_2 = ___reverse;
		Reference_Compile_m6537(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		String_t* L_3 = (__this->___literal_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = (__this->___literal_2);
		Object_t * L_5 = ___cmp;
		bool L_6 = Reference_get_IgnoreCase_m6536(__this, /*hidden argument*/NULL);
		bool L_7 = ___reverse;
		Literal_CompileLiteral_m6523(NULL /*static, unused*/, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArray.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArrayMethodDeclarations.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArrayMethodDeclarations.h"
extern TypeInfo* IntervalCollection_t1202_il2cpp_TypeInfo_var;
extern TypeInfo* BitArray_t1223_il2cpp_TypeInfo_var;
extern "C" void CharacterClass__ctor_m6543 (CharacterClass_t1222 * __this, bool ___negate, bool ___ignore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntervalCollection_t1202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(843);
		BitArray_t1223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(862);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Expression__ctor_m6462(__this, /*hidden argument*/NULL);
		bool L_0 = ___negate;
		__this->___negate_1 = L_0;
		bool L_1 = ___ignore;
		__this->___ignore_2 = L_1;
		IntervalCollection_t1202 * L_2 = (IntervalCollection_t1202 *)il2cpp_codegen_object_new (IntervalCollection_t1202_il2cpp_TypeInfo_var);
		IntervalCollection__ctor_m6399(L_2, /*hidden argument*/NULL);
		__this->___intervals_5 = L_2;
		V_0 = ((int32_t)144);
		int32_t L_3 = V_0;
		BitArray_t1223 * L_4 = (BitArray_t1223 *)il2cpp_codegen_object_new (BitArray_t1223_il2cpp_TypeInfo_var);
		BitArray__ctor_m6802(L_4, L_3, /*hidden argument*/NULL);
		__this->___pos_cats_3 = L_4;
		int32_t L_5 = V_0;
		BitArray_t1223 * L_6 = (BitArray_t1223 *)il2cpp_codegen_object_new (BitArray_t1223_il2cpp_TypeInfo_var);
		BitArray__ctor_m6802(L_6, L_5, /*hidden argument*/NULL);
		__this->___neg_cats_4 = L_6;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
extern "C" void CharacterClass__ctor_m6544 (CharacterClass_t1222 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method)
{
	{
		CharacterClass__ctor_m6543(__this, 0, 0, /*hidden argument*/NULL);
		uint16_t L_0 = ___cat;
		bool L_1 = ___negate;
		CharacterClass_AddCategory_m6546(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern TypeInfo* CharacterClass_t1222_il2cpp_TypeInfo_var;
extern "C" void CharacterClass__cctor_m6545 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterClass_t1222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(849);
		s_Il2CppMethodIntialized = true;
	}
	{
		Interval_t1199  L_0 = {0};
		Interval__ctor_m6378(&L_0, ((int32_t)65), ((int32_t)90), /*hidden argument*/NULL);
		((CharacterClass_t1222_StaticFields*)CharacterClass_t1222_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass_AddCategory_m6546 (CharacterClass_t1222 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		uint16_t L_0 = ___cat;
		V_0 = L_0;
		bool L_1 = ___negate;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		BitArray_t1223 * L_2 = (__this->___neg_cats_4);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		BitArray_set_Item_m6803(L_2, L_3, 1, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001a:
	{
		BitArray_t1223 * L_4 = (__this->___pos_cats_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BitArray_set_Item_m6803(L_4, L_5, 1, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" void CharacterClass_AddCharacter_m6547 (CharacterClass_t1222 * __this, uint16_t ___c, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___c;
		uint16_t L_1 = ___c;
		CharacterClass_AddRange_m6548(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern TypeInfo* CharacterClass_t1222_il2cpp_TypeInfo_var;
extern "C" void CharacterClass_AddRange_m6548 (CharacterClass_t1222 * __this, uint16_t ___lo, uint16_t ___hi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterClass_t1222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(849);
		s_Il2CppMethodIntialized = true;
	}
	Interval_t1199  V_0 = {0};
	Interval_t1199  V_1 = {0};
	{
		uint16_t L_0 = ___lo;
		uint16_t L_1 = ___hi;
		Interval__ctor_m6378((&V_0), L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___ignore_2);
		if (!L_2)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1222_il2cpp_TypeInfo_var);
		Interval_t1199  L_3 = V_0;
		bool L_4 = Interval_Intersects_m6388((&((CharacterClass_t1222_StaticFields*)CharacterClass_t1222_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_5 = ((&V_0)->___low_0);
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1222_il2cpp_TypeInfo_var);
		int32_t L_6 = ((&((CharacterClass_t1222_StaticFields*)CharacterClass_t1222_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1222_il2cpp_TypeInfo_var);
		int32_t L_7 = ((&((CharacterClass_t1222_StaticFields*)CharacterClass_t1222_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		int32_t L_8 = ((&V_0)->___high_1);
		Interval__ctor_m6378((&V_1), ((int32_t)((int32_t)L_7+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_8+(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		int32_t L_9 = ((&((CharacterClass_t1222_StaticFields*)CharacterClass_t1222_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		(&V_0)->___high_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_00a1;
	}

IL_0070:
	{
		int32_t L_10 = ((&V_0)->___low_0);
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1222_il2cpp_TypeInfo_var);
		int32_t L_11 = ((&((CharacterClass_t1222_StaticFields*)CharacterClass_t1222_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___high_1);
		Interval__ctor_m6378((&V_1), ((int32_t)((int32_t)L_10+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_11+(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		int32_t L_12 = ((&((CharacterClass_t1222_StaticFields*)CharacterClass_t1222_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___high_1);
		(&V_0)->___low_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_00a1:
	{
		IntervalCollection_t1202 * L_13 = (__this->___intervals_5);
		Interval_t1199  L_14 = V_1;
		NullCheck(L_13);
		IntervalCollection_Add_m6401(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00e2;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t1222_il2cpp_TypeInfo_var);
		Interval_t1199  L_15 = V_0;
		bool L_16 = Interval_Contains_m6386((&((CharacterClass_t1222_StaticFields*)CharacterClass_t1222_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00e2;
		}
	}
	{
		Interval_t1199 * L_17 = (&V_0);
		int32_t L_18 = (L_17->___high_1);
		L_17->___high_1 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)32)));
		Interval_t1199 * L_19 = (&V_0);
		int32_t L_20 = (L_19->___low_0);
		L_19->___low_0 = ((int32_t)((int32_t)L_20+(int32_t)((int32_t)32)));
	}

IL_00e2:
	{
		IntervalCollection_t1202 * L_21 = (__this->___intervals_5);
		Interval_t1199  L_22 = V_0;
		NullCheck(L_21);
		IntervalCollection_Add_m6401(L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
extern TypeInfo* CostDelegate_t1201_il2cpp_TypeInfo_var;
extern TypeInfo* ICompiler_t1243_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Interval_t1199_il2cpp_TypeInfo_var;
extern TypeInfo* BitArray_t1223_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t38_il2cpp_TypeInfo_var;
extern const MethodInfo* CharacterClass_GetIntervalCost_m6552_MethodInfo_var;
extern "C" void CharacterClass_Compile_m6549 (CharacterClass_t1222 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CostDelegate_t1201_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(863);
		ICompiler_t1243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		IEnumerator_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		Interval_t1199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(841);
		BitArray_t1223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(862);
		IDisposable_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		CharacterClass_GetIntervalCost_m6552_MethodInfo_var = il2cpp_codegen_method_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	IntervalCollection_t1202 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	LinkRef_t1186 * V_3 = {0};
	Interval_t1199  V_4 = {0};
	Object_t * V_5 = {0};
	BitArray_t1223 * V_6 = {0};
	Interval_t1199  V_7 = {0};
	Object_t * V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Exception_t33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IntervalCollection_t1202 * L_0 = (__this->___intervals_5);
		IntPtr_t L_1 = { (void*)CharacterClass_GetIntervalCost_m6552_MethodInfo_var };
		CostDelegate_t1201 * L_2 = (CostDelegate_t1201 *)il2cpp_codegen_object_new (CostDelegate_t1201_il2cpp_TypeInfo_var);
		CostDelegate__ctor_m6395(L_2, NULL, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IntervalCollection_t1202 * L_3 = IntervalCollection_GetMetaCollection_m6403(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IntervalCollection_t1202 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count() */, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0050;
	}

IL_0026:
	{
		BitArray_t1223 * L_6 = (__this->___pos_cats_3);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		bool L_8 = BitArray_get_Item_m6800(L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		BitArray_t1223 * L_9 = (__this->___neg_cats_4);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = BitArray_get_Item_m6800(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_14 = V_2;
		BitArray_t1223 * L_15 = (__this->___pos_cats_3);
		NullCheck(L_15);
		int32_t L_16 = BitArray_get_Length_m6799(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		Object_t * L_18 = ___cmp;
		NullCheck(L_18);
		LinkRef_t1186 * L_19 = (LinkRef_t1186 *)InterfaceFuncInvoker0< LinkRef_t1186 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		Object_t * L_21 = ___cmp;
		LinkRef_t1186 * L_22 = V_3;
		NullCheck(L_21);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(22 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_007d:
	{
		IntervalCollection_t1202 * L_23 = V_0;
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_23);
		V_5 = L_24;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ac;
		}

IL_008a:
		{
			Object_t * L_25 = V_5;
			NullCheck(L_25);
			Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_25);
			V_4 = ((*(Interval_t1199 *)((Interval_t1199 *)UnBox (L_26, Interval_t1199_il2cpp_TypeInfo_var))));
			bool L_27 = Interval_get_IsDiscontiguous_m6380((&V_4), /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_015d;
			}
		}

IL_00a4:
		{
			int32_t L_28 = Interval_get_Size_m6383((&V_4), /*hidden argument*/NULL);
			BitArray_t1223 * L_29 = (BitArray_t1223 *)il2cpp_codegen_object_new (BitArray_t1223_il2cpp_TypeInfo_var);
			BitArray__ctor_m6802(L_29, L_28, /*hidden argument*/NULL);
			V_6 = L_29;
			IntervalCollection_t1202 * L_30 = (__this->___intervals_5);
			NullCheck(L_30);
			Object_t * L_31 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_30);
			V_8 = L_31;
		}

IL_00bf:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0114;
			}

IL_00c4:
			{
				Object_t * L_32 = V_8;
				NullCheck(L_32);
				Object_t * L_33 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_32);
				V_7 = ((*(Interval_t1199 *)((Interval_t1199 *)UnBox (L_33, Interval_t1199_il2cpp_TypeInfo_var))));
				Interval_t1199  L_34 = V_7;
				bool L_35 = Interval_Contains_m6386((&V_4), L_34, /*hidden argument*/NULL);
				if (!L_35)
				{
					goto IL_0114;
				}
			}

IL_00e0:
			{
				int32_t L_36 = ((&V_7)->___low_0);
				V_9 = L_36;
				goto IL_0106;
			}

IL_00ee:
			{
				BitArray_t1223 * L_37 = V_6;
				int32_t L_38 = V_9;
				int32_t L_39 = ((&V_4)->___low_0);
				NullCheck(L_37);
				BitArray_set_Item_m6803(L_37, ((int32_t)((int32_t)L_38-(int32_t)L_39)), 1, /*hidden argument*/NULL);
				int32_t L_40 = V_9;
				V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
			}

IL_0106:
			{
				int32_t L_41 = V_9;
				int32_t L_42 = ((&V_7)->___high_1);
				if ((((int32_t)L_41) <= ((int32_t)L_42)))
				{
					goto IL_00ee;
				}
			}

IL_0114:
			{
				Object_t * L_43 = V_8;
				NullCheck(L_43);
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00c4;
				}
			}

IL_0120:
			{
				IL2CPP_LEAVE(0x13B, FINALLY_0125);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t33 *)e.ex;
			goto FINALLY_0125;
		}

FINALLY_0125:
		{ // begin finally (depth: 2)
			{
				Object_t * L_45 = V_8;
				V_11 = ((Object_t *)IsInst(L_45, IDisposable_t38_il2cpp_TypeInfo_var));
				Object_t * L_46 = V_11;
				if (L_46)
				{
					goto IL_0133;
				}
			}

IL_0132:
			{
				IL2CPP_END_FINALLY(293)
			}

IL_0133:
			{
				Object_t * L_47 = V_11;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t38_il2cpp_TypeInfo_var, L_47);
				IL2CPP_END_FINALLY(293)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(293)
		{
			IL2CPP_JUMP_TBL(0x13B, IL_013b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t33 *)
		}

IL_013b:
		{
			Object_t * L_48 = ___cmp;
			int32_t L_49 = ((&V_4)->___low_0);
			BitArray_t1223 * L_50 = V_6;
			bool L_51 = (__this->___negate_1);
			bool L_52 = (__this->___ignore_2);
			bool L_53 = ___reverse;
			NullCheck(L_48);
			InterfaceActionInvoker5< uint16_t, BitArray_t1223 *, bool, bool, bool >::Invoke(7 /* System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_48, (((uint16_t)L_49)), L_50, L_51, L_52, L_53);
			goto IL_01ac;
		}

IL_015d:
		{
			bool L_54 = Interval_get_IsSingleton_m6381((&V_4), /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_0189;
			}
		}

IL_0169:
		{
			Object_t * L_55 = ___cmp;
			int32_t L_56 = ((&V_4)->___low_0);
			bool L_57 = (__this->___negate_1);
			bool L_58 = (__this->___ignore_2);
			bool L_59 = ___reverse;
			NullCheck(L_55);
			InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(3 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_55, (((uint16_t)L_56)), L_57, L_58, L_59);
			goto IL_01ac;
		}

IL_0189:
		{
			Object_t * L_60 = ___cmp;
			int32_t L_61 = ((&V_4)->___low_0);
			int32_t L_62 = ((&V_4)->___high_1);
			bool L_63 = (__this->___negate_1);
			bool L_64 = (__this->___ignore_2);
			bool L_65 = ___reverse;
			NullCheck(L_60);
			InterfaceActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(6 /* System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_60, (((uint16_t)L_61)), (((uint16_t)L_62)), L_63, L_64, L_65);
		}

IL_01ac:
		{
			Object_t * L_66 = V_5;
			NullCheck(L_66);
			bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_66);
			if (L_67)
			{
				goto IL_008a;
			}
		}

IL_01b8:
		{
			IL2CPP_LEAVE(0x1D3, FINALLY_01bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t33 *)e.ex;
		goto FINALLY_01bd;
	}

FINALLY_01bd:
	{ // begin finally (depth: 1)
		{
			Object_t * L_68 = V_5;
			V_12 = ((Object_t *)IsInst(L_68, IDisposable_t38_il2cpp_TypeInfo_var));
			Object_t * L_69 = V_12;
			if (L_69)
			{
				goto IL_01cb;
			}
		}

IL_01ca:
		{
			IL2CPP_END_FINALLY(445)
		}

IL_01cb:
		{
			Object_t * L_70 = V_12;
			NullCheck(L_70);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t38_il2cpp_TypeInfo_var, L_70);
			IL2CPP_END_FINALLY(445)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(445)
	{
		IL2CPP_JUMP_TBL(0x1D3, IL_01d3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t33 *)
	}

IL_01d3:
	{
		V_10 = 0;
		goto IL_024f;
	}

IL_01db:
	{
		BitArray_t1223 * L_71 = (__this->___pos_cats_3);
		int32_t L_72 = V_10;
		NullCheck(L_71);
		bool L_73 = BitArray_get_Item_m6800(L_71, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0227;
		}
	}
	{
		BitArray_t1223 * L_74 = (__this->___neg_cats_4);
		int32_t L_75 = V_10;
		NullCheck(L_74);
		bool L_76 = BitArray_get_Item_m6800(L_74, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0212;
		}
	}
	{
		Object_t * L_77 = ___cmp;
		bool L_78 = (__this->___negate_1);
		bool L_79 = ___reverse;
		NullCheck(L_77);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_77, 2, L_78, L_79);
		goto IL_0222;
	}

IL_0212:
	{
		Object_t * L_80 = ___cmp;
		int32_t L_81 = V_10;
		bool L_82 = (__this->___negate_1);
		bool L_83 = ___reverse;
		NullCheck(L_80);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_80, (((uint16_t)L_81)), L_82, L_83);
	}

IL_0222:
	{
		goto IL_0249;
	}

IL_0227:
	{
		BitArray_t1223 * L_84 = (__this->___neg_cats_4);
		int32_t L_85 = V_10;
		NullCheck(L_84);
		bool L_86 = BitArray_get_Item_m6800(L_84, L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0249;
		}
	}
	{
		Object_t * L_87 = ___cmp;
		int32_t L_88 = V_10;
		bool L_89 = (__this->___negate_1);
		bool L_90 = ___reverse;
		NullCheck(L_87);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(5 /* System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_87, (((uint16_t)L_88)), L_89, L_90);
	}

IL_0249:
	{
		int32_t L_91 = V_10;
		V_10 = ((int32_t)((int32_t)L_91+(int32_t)1));
	}

IL_024f:
	{
		int32_t L_92 = V_10;
		BitArray_t1223 * L_93 = (__this->___pos_cats_3);
		NullCheck(L_93);
		int32_t L_94 = BitArray_get_Length_m6799(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_95 = V_1;
		if ((((int32_t)L_95) <= ((int32_t)1)))
		{
			goto IL_028b;
		}
	}
	{
		bool L_96 = (__this->___negate_1);
		if (!L_96)
		{
			goto IL_027e;
		}
	}
	{
		Object_t * L_97 = ___cmp;
		NullCheck(L_97);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_97);
		goto IL_0284;
	}

IL_027e:
	{
		Object_t * L_98 = ___cmp;
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t1243_il2cpp_TypeInfo_var, L_98);
	}

IL_0284:
	{
		Object_t * L_99 = ___cmp;
		LinkRef_t1186 * L_100 = V_3;
		NullCheck(L_99);
		InterfaceActionInvoker1< LinkRef_t1186 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t1243_il2cpp_TypeInfo_var, L_99, L_100);
	}

IL_028b:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern "C" void CharacterClass_GetWidth_m6550 (CharacterClass_t1222 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 1;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern "C" bool CharacterClass_IsComplex_m6551 (CharacterClass_t1222 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
extern "C" double CharacterClass_GetIntervalCost_m6552 (Object_t * __this /* static, unused */, Interval_t1199  ___i, const MethodInfo* method)
{
	{
		bool L_0 = Interval_get_IsDiscontiguous_m6380((&___i), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = Interval_get_Size_m6383((&___i), /*hidden argument*/NULL);
		return (((double)((int32_t)((int32_t)3+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)((int32_t)15)))>>(int32_t)4))))));
	}

IL_001c:
	{
		bool L_2 = Interval_get_IsSingleton_m6381((&___i), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		return (2.0);
	}

IL_0032:
	{
		return (3.0);
	}
}
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AnchorInfo__ctor_m6553 (AnchorInfo_t1224 * __this, Expression_t1206 * ___expr, int32_t ___width, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		Expression_t1206 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		__this->___offset_2 = 0;
		int32_t L_1 = ___width;
		__this->___width_4 = L_1;
		__this->___str_3 = (String_t*)NULL;
		__this->___ignore_5 = 0;
		__this->___pos_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" void AnchorInfo__ctor_m6554 (AnchorInfo_t1224 * __this, Expression_t1206 * ___expr, int32_t ___offset, int32_t ___width, String_t* ___str, bool ___ignore, const MethodInfo* method)
{
	AnchorInfo_t1224 * G_B2_0 = {0};
	AnchorInfo_t1224 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	AnchorInfo_t1224 * G_B3_1 = {0};
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		Expression_t1206 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		int32_t L_1 = ___offset;
		__this->___offset_2 = L_1;
		int32_t L_2 = ___width;
		__this->___width_4 = L_2;
		bool L_3 = ___ignore;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___str;
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m6698(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002f:
	{
		String_t* L_6 = ___str;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___str_3 = G_B3_0;
		bool L_7 = ___ignore;
		__this->___ignore_5 = L_7;
		__this->___pos_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
extern "C" void AnchorInfo__ctor_m6555 (AnchorInfo_t1224 * __this, Expression_t1206 * ___expr, int32_t ___offset, int32_t ___width, uint16_t ___pos, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		Expression_t1206 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		int32_t L_1 = ___offset;
		__this->___offset_2 = L_1;
		int32_t L_2 = ___width;
		__this->___width_4 = L_2;
		uint16_t L_3 = ___pos;
		__this->___pos_1 = L_3;
		__this->___str_3 = (String_t*)NULL;
		__this->___ignore_5 = 0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C" int32_t AnchorInfo_get_Offset_m6556 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___offset_2);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern "C" int32_t AnchorInfo_get_Width_m6557 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___width_4);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern "C" int32_t AnchorInfo_get_Length_m6558 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___str_3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = (__this->___str_3);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m159(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern "C" bool AnchorInfo_get_IsUnknownWidth_m6559 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___width_4);
		return ((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern "C" bool AnchorInfo_get_IsComplete_m6560 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = AnchorInfo_get_Length_m6558(__this, /*hidden argument*/NULL);
		int32_t L_1 = AnchorInfo_get_Width_m6557(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C" String_t* AnchorInfo_get_Substring_m6561 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_3);
		return L_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C" bool AnchorInfo_get_IgnoreCase_m6562 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignore_5);
		return L_0;
	}
}
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C" uint16_t AnchorInfo_get_Position_m6563 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___pos_1);
		return L_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C" bool AnchorInfo_get_IsSubstring_m6564 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_3);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C" bool AnchorInfo_get_IsPosition_m6565 (AnchorInfo_t1224 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___pos_1);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern "C" Interval_t1199  AnchorInfo_GetInterval_m6566 (AnchorInfo_t1224 * __this, int32_t ___start, const MethodInfo* method)
{
	{
		bool L_0 = AnchorInfo_get_IsSubstring_m6564(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Interval_t1199  L_1 = Interval_get_Empty_m6379(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = ___start;
		int32_t L_3 = AnchorInfo_get_Offset_m6556(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___start;
		int32_t L_5 = AnchorInfo_get_Offset_m6556(__this, /*hidden argument*/NULL);
		int32_t L_6 = AnchorInfo_get_Length_m6558(__this, /*hidden argument*/NULL);
		Interval_t1199  L_7 = {0};
		Interval__ctor_m6378(&L_7, ((int32_t)((int32_t)L_2+(int32_t)L_3)), ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)L_6))-(int32_t)1)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
// System.UriParser
#include "System_System_UriParser.h"
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
// System.Void System.DefaultUriParser::.ctor()
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern TypeInfo* UriParser_t1226_il2cpp_TypeInfo_var;
extern "C" void DefaultUriParser__ctor_m6567 (DefaultUriParser_t1225 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(864);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
		UriParser__ctor_m6627(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.DefaultUriParser::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* UriParser_t1226_il2cpp_TypeInfo_var;
extern "C" void DefaultUriParser__ctor_m6568 (DefaultUriParser_t1225 * __this, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(864);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
		UriParser__ctor_m6627(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___scheme;
		((UriParser_t1226 *)__this)->___scheme_name_2 = L_0;
		return;
	}
}
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// System.GenericUriParser
#include "System_System_GenericUriParserMethodDeclarations.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UriScheme__ctor_m6569 (UriScheme_t1228 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		__this->___scheme_0 = L_0;
		String_t* L_1 = ___d;
		__this->___delimiter_1 = L_1;
		int32_t L_2 = ___p;
		__this->___defaultPort_2 = L_2;
		return;
	}
}
// Conversion methods for marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_t1228_marshal(const UriScheme_t1228& unmarshaled, UriScheme_t1228_marshaled& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_string(unmarshaled.___scheme_0);
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_string(unmarshaled.___delimiter_1);
	marshaled.___defaultPort_2 = unmarshaled.___defaultPort_2;
}
extern "C" void UriScheme_t1228_marshal_back(const UriScheme_t1228_marshaled& marshaled, UriScheme_t1228& unmarshaled)
{
	unmarshaled.___scheme_0 = il2cpp_codegen_marshal_string_result(marshaled.___scheme_0);
	unmarshaled.___delimiter_1 = il2cpp_codegen_marshal_string_result(marshaled.___delimiter_1);
	unmarshaled.___defaultPort_2 = marshaled.___defaultPort_2;
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_t1228_marshal_cleanup(UriScheme_t1228_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// System.Uri
#include "System_System_Uri.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriKind
#include "System_System_UriKind.h"
// System.UriFormatException
#include "System_System_UriFormatException.h"
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
#include "System_ArrayTypes.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// System.UriPartial
#include "System_System_UriPartial.h"
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.Net.IPAddress
#include "System_System_Net_IPAddress.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6Address.h"
// System.IO.Path
#include "mscorlib_System_IO_Path.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
// Locale
#include "System_LocaleMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Net.IPAddress
#include "System_System_Net_IPAddressMethodDeclarations.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6AddressMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Void System.Uri::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
extern "C" void Uri__ctor_m3816 (Uri_t711 * __this, String_t* ___uriString, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uriString;
		Uri__ctor_m6571(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral1539;
extern "C" void Uri__ctor_m6570 (Uri_t711 * __this, SerializationInfo_t587 * ___serializationInfo, StreamingContext_t588  ___streamingContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1539 = il2cpp_codegen_string_literal_from_index(1539);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t587 * L_0 = ___serializationInfo;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m3846(L_0, _stringLiteral1539, /*hidden argument*/NULL);
		Uri__ctor_m6571(__this, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.UriKind)
// System.UriKind
#include "System_System_UriKind.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
// Locale
#include "System_LocaleMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t786_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t61_il2cpp_TypeInfo_var;
extern TypeInfo* UriKind_t1231_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1540;
extern Il2CppCodeGenString* _stringLiteral1541;
extern Il2CppCodeGenString* _stringLiteral1542;
extern "C" void Uri__ctor_m3874 (Uri_t711 * __this, String_t* ___uriString, int32_t ___uriKind, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		UriFormatException_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		ObjectU5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		UriKind_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(865);
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		_stringLiteral1540 = il2cpp_codegen_string_literal_from_index(1540);
		_stringLiteral1541 = il2cpp_codegen_string_literal_from_index(1541);
		_stringLiteral1542 = il2cpp_codegen_string_literal_from_index(1542);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_2 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_1;
		__this->___port_4 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_5 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_6 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_7 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_8 = L_5;
		__this->___isAbsoluteUri_11 = 1;
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___uriString;
		__this->___source_1 = L_6;
		int32_t L_7 = ___uriKind;
		Uri_ParseUri_m6602(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___uriKind;
		V_1 = L_8;
		int32_t L_9 = V_1;
		if (L_9 == 0)
		{
			goto IL_00b3;
		}
		if (L_9 == 1)
		{
			goto IL_007d;
		}
		if (L_9 == 2)
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00b8;
	}

IL_007d:
	{
		bool L_10 = Uri_get_IsAbsoluteUri_m3884(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		UriFormatException_t786 * L_11 = (UriFormatException_t786 *)il2cpp_codegen_object_new (UriFormatException_t786_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m6624(L_11, _stringLiteral1540, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0093:
	{
		goto IL_00d9;
	}

IL_0098:
	{
		bool L_12 = Uri_get_IsAbsoluteUri_m3884(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00ae;
		}
	}
	{
		UriFormatException_t786 * L_13 = (UriFormatException_t786 *)il2cpp_codegen_object_new (UriFormatException_t786_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m6624(L_13, _stringLiteral1541, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_00ae:
	{
		goto IL_00d9;
	}

IL_00b3:
	{
		goto IL_00d9;
	}

IL_00b8:
	{
		ObjectU5BU5D_t61* L_14 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 1));
		int32_t L_15 = ___uriKind;
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(UriKind_t1231_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0, sizeof(Object_t *))) = (Object_t *)L_17;
		String_t* L_18 = Locale_GetText_m4942(NULL /*static, unused*/, _stringLiteral1542, L_14, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		ArgumentException_t373 * L_20 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2066(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t786_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1543;
extern "C" void Uri__ctor_m6571 (Uri_t711 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		UriFormatException_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		_stringLiteral1543 = il2cpp_codegen_string_literal_from_index(1543);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_2 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_1;
		__this->___port_4 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_5 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_6 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_7 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_8 = L_5;
		__this->___isAbsoluteUri_11 = 1;
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		bool L_6 = ___dontEscape;
		__this->___userEscaped_12 = L_6;
		String_t* L_7 = ___uriString;
		__this->___source_1 = L_7;
		Uri_ParseUri_m6602(__this, 1, /*hidden argument*/NULL);
		bool L_8 = (__this->___isAbsoluteUri_11);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m145(NULL /*static, unused*/, _stringLiteral1543, L_9, /*hidden argument*/NULL);
		UriFormatException_t786 * L_11 = (UriFormatException_t786 *)il2cpp_codegen_object_new (UriFormatException_t786_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m6624(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0087:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.Uri,System.String)
// System.Uri
#include "System_System_Uri.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Uri__ctor_m3873 (Uri_t711 * __this, Uri_t711 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_2 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_1;
		__this->___port_4 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_5 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_6 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_7 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_8 = L_5;
		__this->___isAbsoluteUri_11 = 1;
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		Uri_t711 * L_6 = ___baseUri;
		String_t* L_7 = ___relativeUri;
		Uri_Merge_m6574(__this, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.cctor()
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* UriSchemeU5BU5D_t1229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral202;
extern Il2CppCodeGenString* _stringLiteral1284;
extern Il2CppCodeGenString* _stringLiteral594;
extern Il2CppCodeGenString* _stringLiteral1394;
extern Il2CppCodeGenString* _stringLiteral1544;
extern Il2CppCodeGenString* _stringLiteral1282;
extern Il2CppCodeGenString* _stringLiteral1074;
extern Il2CppCodeGenString* _stringLiteral1545;
extern Il2CppCodeGenString* _stringLiteral1546;
extern Il2CppCodeGenString* _stringLiteral1547;
extern Il2CppCodeGenString* _stringLiteral1548;
extern Il2CppCodeGenString* _stringLiteral1549;
extern Il2CppCodeGenString* _stringLiteral275;
extern "C" void Uri__cctor_m6572 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		UriSchemeU5BU5D_t1229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(866);
		_stringLiteral202 = il2cpp_codegen_string_literal_from_index(202);
		_stringLiteral1284 = il2cpp_codegen_string_literal_from_index(1284);
		_stringLiteral594 = il2cpp_codegen_string_literal_from_index(594);
		_stringLiteral1394 = il2cpp_codegen_string_literal_from_index(1394);
		_stringLiteral1544 = il2cpp_codegen_string_literal_from_index(1544);
		_stringLiteral1282 = il2cpp_codegen_string_literal_from_index(1282);
		_stringLiteral1074 = il2cpp_codegen_string_literal_from_index(1074);
		_stringLiteral1545 = il2cpp_codegen_string_literal_from_index(1545);
		_stringLiteral1546 = il2cpp_codegen_string_literal_from_index(1546);
		_stringLiteral1547 = il2cpp_codegen_string_literal_from_index(1547);
		_stringLiteral1548 = il2cpp_codegen_string_literal_from_index(1548);
		_stringLiteral1549 = il2cpp_codegen_string_literal_from_index(1549);
		_stringLiteral275 = il2cpp_codegen_string_literal_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_17 = _stringLiteral202;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18 = _stringLiteral1284;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19 = _stringLiteral594;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_20 = _stringLiteral1394;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_21 = _stringLiteral1544;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_22 = _stringLiteral1282;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_23 = _stringLiteral1074;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_24 = _stringLiteral1545;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25 = _stringLiteral1546;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_26 = _stringLiteral1547;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetPipe_27 = _stringLiteral1548;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetTcp_28 = _stringLiteral1549;
		UriSchemeU5BU5D_t1229* L_0 = ((UriSchemeU5BU5D_t1229*)SZArrayNew(UriSchemeU5BU5D_t1229_il2cpp_TypeInfo_var, 8));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		String_t* L_1 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_22;
		String_t* L_2 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18;
		UriScheme_t1228  L_3 = {0};
		UriScheme__ctor_m6569(&L_3, L_1, L_2, ((int32_t)80), /*hidden argument*/NULL);
		*((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_0, 0, sizeof(UriScheme_t1228 ))) = L_3;
		UriSchemeU5BU5D_t1229* L_4 = L_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		String_t* L_5 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_23;
		String_t* L_6 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18;
		UriScheme_t1228  L_7 = {0};
		UriScheme__ctor_m6569(&L_7, L_5, L_6, ((int32_t)443), /*hidden argument*/NULL);
		*((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_4, 1, sizeof(UriScheme_t1228 ))) = L_7;
		UriSchemeU5BU5D_t1229* L_8 = L_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		String_t* L_9 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_20;
		String_t* L_10 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18;
		UriScheme_t1228  L_11 = {0};
		UriScheme__ctor_m6569(&L_11, L_9, L_10, ((int32_t)21), /*hidden argument*/NULL);
		*((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_8, 2, sizeof(UriScheme_t1228 ))) = L_11;
		UriSchemeU5BU5D_t1229* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		String_t* L_13 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		String_t* L_14 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18;
		UriScheme_t1228  L_15 = {0};
		UriScheme__ctor_m6569(&L_15, L_13, L_14, (-1), /*hidden argument*/NULL);
		*((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_12, 3, sizeof(UriScheme_t1228 ))) = L_15;
		UriSchemeU5BU5D_t1229* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		String_t* L_17 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_24;
		UriScheme_t1228  L_18 = {0};
		UriScheme__ctor_m6569(&L_18, L_17, _stringLiteral275, ((int32_t)25), /*hidden argument*/NULL);
		*((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_16, 4, sizeof(UriScheme_t1228 ))) = L_18;
		UriSchemeU5BU5D_t1229* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		String_t* L_20 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25;
		UriScheme_t1228  L_21 = {0};
		UriScheme__ctor_m6569(&L_21, L_20, _stringLiteral275, ((int32_t)119), /*hidden argument*/NULL);
		*((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_19, 5, sizeof(UriScheme_t1228 ))) = L_21;
		UriSchemeU5BU5D_t1229* L_22 = L_19;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 6);
		String_t* L_23 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_26;
		String_t* L_24 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18;
		UriScheme_t1228  L_25 = {0};
		UriScheme__ctor_m6569(&L_25, L_23, L_24, ((int32_t)119), /*hidden argument*/NULL);
		*((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_22, 6, sizeof(UriScheme_t1228 ))) = L_25;
		UriSchemeU5BU5D_t1229* L_26 = L_22;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 7);
		String_t* L_27 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_21;
		String_t* L_28 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18;
		UriScheme_t1228  L_29 = {0};
		UriScheme__ctor_m6569(&L_29, L_27, L_28, ((int32_t)70), /*hidden argument*/NULL);
		*((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_26, 7, sizeof(UriScheme_t1228 ))) = L_29;
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___schemes_29 = L_26;
		return;
	}
}
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppCodeGenString* _stringLiteral1539;
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m6573 (Uri_t711 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1539 = il2cpp_codegen_string_literal_from_index(1539);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t587 * L_0 = ___info;
		String_t* L_1 = Uri_get_AbsoluteUri_m6575(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m3852(L_0, _stringLiteral1539, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::Merge(System.Uri,System.String)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1550;
extern Il2CppCodeGenString* _stringLiteral455;
extern Il2CppCodeGenString* _stringLiteral1551;
extern Il2CppCodeGenString* _stringLiteral1552;
extern Il2CppCodeGenString* _stringLiteral1553;
extern Il2CppCodeGenString* _stringLiteral1554;
extern "C" void Uri_Merge_m6574 (Uri_t711 * __this, Uri_t711 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		_stringLiteral1550 = il2cpp_codegen_string_literal_from_index(1550);
		_stringLiteral455 = il2cpp_codegen_string_literal_from_index(455);
		_stringLiteral1551 = il2cpp_codegen_string_literal_from_index(1551);
		_stringLiteral1552 = il2cpp_codegen_string_literal_from_index(1552);
		_stringLiteral1553 = il2cpp_codegen_string_literal_from_index(1553);
		_stringLiteral1554 = il2cpp_codegen_string_literal_from_index(1554);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Uri_t711 * L_0 = ___baseUri;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m3871(NULL /*static, unused*/, L_0, (Uri_t711 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t617 * L_2 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_2, _stringLiteral1550, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		Uri_t711 * L_3 = ___baseUri;
		NullCheck(L_3);
		bool L_4 = Uri_get_IsAbsoluteUri_m3884(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentOutOfRangeException_t790 * L_5 = (ArgumentOutOfRangeException_t790 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3841(L_5, _stringLiteral1550, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_002d:
	{
		String_t* L_6 = ___relativeUri;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___relativeUri = L_7;
	}

IL_003a:
	{
		String_t* L_8 = ___relativeUri;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m159(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)2)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_10 = ___relativeUri;
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m1913(L_10, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_12 = ___relativeUri;
		NullCheck(L_12);
		uint16_t L_13 = String_get_Chars_m1913(L_12, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = ___relativeUri;
		__this->___source_1 = L_14;
		Uri_ParseUri_m6602(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_0071:
	{
		String_t* L_15 = ___relativeUri;
		NullCheck(L_15);
		int32_t L_16 = String_IndexOf_m1967(L_15, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_0107;
		}
	}
	{
		String_t* L_18 = ___relativeUri;
		CharU5BU5D_t60* L_19 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 3));
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_19, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)47);
		CharU5BU5D_t60* L_20 = L_19;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_20, 1, sizeof(uint16_t))) = (uint16_t)((int32_t)92);
		CharU5BU5D_t60* L_21 = L_20;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_21, 2, sizeof(uint16_t))) = (uint16_t)((int32_t)63);
		NullCheck(L_18);
		int32_t L_22 = String_IndexOfAny_m3882(L_18, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}

IL_00ab:
	{
		Uri_t711 * L_26 = ___baseUri;
		NullCheck(L_26);
		String_t* L_27 = Uri_get_Scheme_m3886(L_26, /*hidden argument*/NULL);
		String_t* L_28 = ___relativeUri;
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_30 = String_CompareOrdinal_m6804(NULL /*static, unused*/, L_27, 0, L_28, 0, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00ed;
		}
	}
	{
		Uri_t711 * L_31 = ___baseUri;
		NullCheck(L_31);
		String_t* L_32 = Uri_get_Scheme_m3886(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_33 = Uri_IsPredefinedScheme_m6616(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		String_t* L_34 = ___relativeUri;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m159(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)((int32_t)L_36+(int32_t)1)))))
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_37 = ___relativeUri;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m1913(L_37, ((int32_t)((int32_t)L_38+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00fc;
		}
	}

IL_00ed:
	{
		String_t* L_40 = ___relativeUri;
		__this->___source_1 = L_40;
		Uri_ParseUri_m6602(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_00fc:
	{
		String_t* L_41 = ___relativeUri;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1941(L_41, ((int32_t)((int32_t)L_42+(int32_t)1)), /*hidden argument*/NULL);
		___relativeUri = L_43;
	}

IL_0107:
	{
		Uri_t711 * L_44 = ___baseUri;
		NullCheck(L_44);
		String_t* L_45 = (L_44->___scheme_2);
		__this->___scheme_2 = L_45;
		Uri_t711 * L_46 = ___baseUri;
		NullCheck(L_46);
		String_t* L_47 = (L_46->___host_3);
		__this->___host_3 = L_47;
		Uri_t711 * L_48 = ___baseUri;
		NullCheck(L_48);
		int32_t L_49 = (L_48->___port_4);
		__this->___port_4 = L_49;
		Uri_t711 * L_50 = ___baseUri;
		NullCheck(L_50);
		String_t* L_51 = (L_50->___userinfo_8);
		__this->___userinfo_8 = L_51;
		Uri_t711 * L_52 = ___baseUri;
		NullCheck(L_52);
		bool L_53 = (L_52->___isUnc_9);
		__this->___isUnc_9 = L_53;
		Uri_t711 * L_54 = ___baseUri;
		NullCheck(L_54);
		bool L_55 = (L_54->___isUnixFilePath_0);
		__this->___isUnixFilePath_0 = L_55;
		Uri_t711 * L_56 = ___baseUri;
		NullCheck(L_56);
		bool L_57 = (L_56->___isOpaquePart_10);
		__this->___isOpaquePart_10 = L_57;
		String_t* L_58 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_60 = String_op_Equality_m67(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0190;
		}
	}
	{
		Uri_t711 * L_61 = ___baseUri;
		NullCheck(L_61);
		String_t* L_62 = (L_61->___path_5);
		__this->___path_5 = L_62;
		Uri_t711 * L_63 = ___baseUri;
		NullCheck(L_63);
		String_t* L_64 = (L_63->___query_6);
		__this->___query_6 = L_64;
		Uri_t711 * L_65 = ___baseUri;
		NullCheck(L_65);
		String_t* L_66 = (L_65->___fragment_7);
		__this->___fragment_7 = L_66;
		return;
	}

IL_0190:
	{
		String_t* L_67 = ___relativeUri;
		NullCheck(L_67);
		int32_t L_68 = String_IndexOf_m1967(L_67, ((int32_t)35), /*hidden argument*/NULL);
		V_0 = L_68;
		int32_t L_69 = V_0;
		if ((((int32_t)L_69) == ((int32_t)(-1))))
		{
			goto IL_01e5;
		}
	}
	{
		bool L_70 = (__this->___userEscaped_12);
		if (!L_70)
		{
			goto IL_01bd;
		}
	}
	{
		String_t* L_71 = ___relativeUri;
		int32_t L_72 = V_0;
		NullCheck(L_71);
		String_t* L_73 = String_Substring_m1941(L_71, L_72, /*hidden argument*/NULL);
		__this->___fragment_7 = L_73;
		goto IL_01db;
	}

IL_01bd:
	{
		String_t* L_74 = ___relativeUri;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		String_t* L_76 = String_Substring_m1941(L_74, ((int32_t)((int32_t)L_75+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_77 = Uri_EscapeString_m6600(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m145(NULL /*static, unused*/, _stringLiteral455, L_77, /*hidden argument*/NULL);
		__this->___fragment_7 = L_78;
	}

IL_01db:
	{
		String_t* L_79 = ___relativeUri;
		int32_t L_80 = V_0;
		NullCheck(L_79);
		String_t* L_81 = String_Substring_m1914(L_79, 0, L_80, /*hidden argument*/NULL);
		___relativeUri = L_81;
	}

IL_01e5:
	{
		String_t* L_82 = ___relativeUri;
		NullCheck(L_82);
		int32_t L_83 = String_IndexOf_m1967(L_82, ((int32_t)63), /*hidden argument*/NULL);
		V_0 = L_83;
		int32_t L_84 = V_0;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_0228;
		}
	}
	{
		String_t* L_85 = ___relativeUri;
		int32_t L_86 = V_0;
		NullCheck(L_85);
		String_t* L_87 = String_Substring_m1941(L_85, L_86, /*hidden argument*/NULL);
		__this->___query_6 = L_87;
		bool L_88 = (__this->___userEscaped_12);
		if (L_88)
		{
			goto IL_021e;
		}
	}
	{
		String_t* L_89 = (__this->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_90 = Uri_EscapeString_m6600(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		__this->___query_6 = L_90;
	}

IL_021e:
	{
		String_t* L_91 = ___relativeUri;
		int32_t L_92 = V_0;
		NullCheck(L_91);
		String_t* L_93 = String_Substring_m1914(L_91, 0, L_92, /*hidden argument*/NULL);
		___relativeUri = L_93;
	}

IL_0228:
	{
		String_t* L_94 = ___relativeUri;
		NullCheck(L_94);
		int32_t L_95 = String_get_Length_m159(L_94, /*hidden argument*/NULL);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_96 = ___relativeUri;
		NullCheck(L_96);
		uint16_t L_97 = String_get_Chars_m1913(L_96, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_98 = ___relativeUri;
		NullCheck(L_98);
		int32_t L_99 = String_get_Length_m159(L_98, /*hidden argument*/NULL);
		if ((((int32_t)L_99) <= ((int32_t)1)))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_100 = ___relativeUri;
		NullCheck(L_100);
		uint16_t L_101 = String_get_Chars_m1913(L_100, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_102 = (__this->___scheme_2);
		uint16_t L_103 = ((int32_t)58);
		Object_t * L_104 = Box(Char_t355_il2cpp_TypeInfo_var, &L_103);
		String_t* L_105 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_106 = String_Concat_m1542(NULL /*static, unused*/, L_102, L_104, L_105, /*hidden argument*/NULL);
		__this->___source_1 = L_106;
		Uri_ParseUri_m6602(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_027d:
	{
		String_t* L_107 = ___relativeUri;
		__this->___path_5 = L_107;
		bool L_108 = (__this->___userEscaped_12);
		if (L_108)
		{
			goto IL_02a0;
		}
	}
	{
		String_t* L_109 = (__this->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_110 = Uri_EscapeString_m6600(NULL /*static, unused*/, L_109, /*hidden argument*/NULL);
		__this->___path_5 = L_110;
	}

IL_02a0:
	{
		return;
	}

IL_02a1:
	{
		Uri_t711 * L_111 = ___baseUri;
		NullCheck(L_111);
		String_t* L_112 = (L_111->___path_5);
		__this->___path_5 = L_112;
		String_t* L_113 = ___relativeUri;
		NullCheck(L_113);
		int32_t L_114 = String_get_Length_m159(L_113, /*hidden argument*/NULL);
		if ((((int32_t)L_114) > ((int32_t)0)))
		{
			goto IL_02ca;
		}
	}
	{
		String_t* L_115 = (__this->___query_6);
		NullCheck(L_115);
		int32_t L_116 = String_get_Length_m159(L_115, /*hidden argument*/NULL);
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}

IL_02ca:
	{
		String_t* L_117 = (__this->___path_5);
		NullCheck(L_117);
		int32_t L_118 = String_LastIndexOf_m6725(L_117, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_118;
		int32_t L_119 = V_0;
		if ((((int32_t)L_119) < ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}
	{
		String_t* L_120 = (__this->___path_5);
		int32_t L_121 = V_0;
		NullCheck(L_120);
		String_t* L_122 = String_Substring_m1914(L_120, 0, ((int32_t)((int32_t)L_121+(int32_t)1)), /*hidden argument*/NULL);
		__this->___path_5 = L_122;
	}

IL_02f4:
	{
		String_t* L_123 = ___relativeUri;
		NullCheck(L_123);
		int32_t L_124 = String_get_Length_m159(L_123, /*hidden argument*/NULL);
		if (L_124)
		{
			goto IL_0300;
		}
	}
	{
		return;
	}

IL_0300:
	{
		String_t* L_125 = (__this->___path_5);
		String_t* L_126 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_127 = String_Concat_m145(NULL /*static, unused*/, L_125, L_126, /*hidden argument*/NULL);
		__this->___path_5 = L_127;
		V_2 = 0;
	}

IL_0314:
	{
		String_t* L_128 = (__this->___path_5);
		int32_t L_129 = V_2;
		NullCheck(L_128);
		int32_t L_130 = String_IndexOf_m3136(L_128, _stringLiteral1551, L_129, /*hidden argument*/NULL);
		V_0 = L_130;
		int32_t L_131 = V_0;
		if ((!(((uint32_t)L_131) == ((uint32_t)(-1)))))
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0386;
	}

IL_0332:
	{
		int32_t L_132 = V_0;
		if (L_132)
		{
			goto IL_0350;
		}
	}
	{
		String_t* L_133 = (__this->___path_5);
		NullCheck(L_133);
		String_t* L_134 = String_Remove_m1937(L_133, 0, 2, /*hidden argument*/NULL);
		__this->___path_5 = L_134;
		goto IL_0381;
	}

IL_0350:
	{
		String_t* L_135 = (__this->___path_5);
		int32_t L_136 = V_0;
		NullCheck(L_135);
		uint16_t L_137 = String_get_Chars_m1913(L_135, ((int32_t)((int32_t)L_136-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_137) == ((int32_t)((int32_t)46))))
		{
			goto IL_037d;
		}
	}
	{
		String_t* L_138 = (__this->___path_5);
		int32_t L_139 = V_0;
		NullCheck(L_138);
		String_t* L_140 = String_Remove_m1937(L_138, L_139, 2, /*hidden argument*/NULL);
		__this->___path_5 = L_140;
		goto IL_0381;
	}

IL_037d:
	{
		int32_t L_141 = V_0;
		V_2 = ((int32_t)((int32_t)L_141+(int32_t)1));
	}

IL_0381:
	{
		goto IL_0314;
	}

IL_0386:
	{
		String_t* L_142 = (__this->___path_5);
		NullCheck(L_142);
		int32_t L_143 = String_get_Length_m159(L_142, /*hidden argument*/NULL);
		if ((((int32_t)L_143) <= ((int32_t)1)))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_144 = (__this->___path_5);
		String_t* L_145 = (__this->___path_5);
		NullCheck(L_145);
		int32_t L_146 = String_get_Length_m159(L_145, /*hidden argument*/NULL);
		NullCheck(L_144);
		uint16_t L_147 = String_get_Chars_m1913(L_144, ((int32_t)((int32_t)L_146-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_147) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_148 = (__this->___path_5);
		String_t* L_149 = (__this->___path_5);
		NullCheck(L_149);
		int32_t L_150 = String_get_Length_m159(L_149, /*hidden argument*/NULL);
		NullCheck(L_148);
		uint16_t L_151 = String_get_Chars_m1913(L_148, ((int32_t)((int32_t)L_150-(int32_t)2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_151) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_152 = (__this->___path_5);
		String_t* L_153 = (__this->___path_5);
		NullCheck(L_153);
		int32_t L_154 = String_get_Length_m159(L_153, /*hidden argument*/NULL);
		NullCheck(L_152);
		String_t* L_155 = String_Remove_m1937(L_152, ((int32_t)((int32_t)L_154-(int32_t)1)), 1, /*hidden argument*/NULL);
		__this->___path_5 = L_155;
	}

IL_03f4:
	{
		V_2 = 0;
	}

IL_03f6:
	{
		String_t* L_156 = (__this->___path_5);
		int32_t L_157 = V_2;
		NullCheck(L_156);
		int32_t L_158 = String_IndexOf_m3136(L_156, _stringLiteral1552, L_157, /*hidden argument*/NULL);
		V_0 = L_158;
		int32_t L_159 = V_0;
		if ((!(((uint32_t)L_159) == ((uint32_t)(-1)))))
		{
			goto IL_0414;
		}
	}
	{
		goto IL_048b;
	}

IL_0414:
	{
		int32_t L_160 = V_0;
		if (L_160)
		{
			goto IL_0421;
		}
	}
	{
		V_2 = 3;
		goto IL_03f6;
	}

IL_0421:
	{
		String_t* L_161 = (__this->___path_5);
		int32_t L_162 = V_0;
		NullCheck(L_161);
		int32_t L_163 = String_LastIndexOf_m6805(L_161, ((int32_t)47), ((int32_t)((int32_t)L_162-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_163;
		int32_t L_164 = V_3;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_0442;
		}
	}
	{
		int32_t L_165 = V_0;
		V_2 = ((int32_t)((int32_t)L_165+(int32_t)1));
		goto IL_0486;
	}

IL_0442:
	{
		String_t* L_166 = (__this->___path_5);
		int32_t L_167 = V_3;
		int32_t L_168 = V_0;
		int32_t L_169 = V_3;
		NullCheck(L_166);
		String_t* L_170 = String_Substring_m1914(L_166, ((int32_t)((int32_t)L_167+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_168-(int32_t)L_169))-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_171 = String_op_Inequality_m172(NULL /*static, unused*/, L_170, _stringLiteral1553, /*hidden argument*/NULL);
		if (!L_171)
		{
			goto IL_0482;
		}
	}
	{
		String_t* L_172 = (__this->___path_5);
		int32_t L_173 = V_3;
		int32_t L_174 = V_0;
		int32_t L_175 = V_3;
		NullCheck(L_172);
		String_t* L_176 = String_Remove_m1937(L_172, ((int32_t)((int32_t)L_173+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_174-(int32_t)L_175))+(int32_t)3)), /*hidden argument*/NULL);
		__this->___path_5 = L_176;
		goto IL_0486;
	}

IL_0482:
	{
		int32_t L_177 = V_0;
		V_2 = ((int32_t)((int32_t)L_177+(int32_t)1));
	}

IL_0486:
	{
		goto IL_03f6;
	}

IL_048b:
	{
		String_t* L_178 = (__this->___path_5);
		NullCheck(L_178);
		int32_t L_179 = String_get_Length_m159(L_178, /*hidden argument*/NULL);
		if ((((int32_t)L_179) <= ((int32_t)3)))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_180 = (__this->___path_5);
		NullCheck(L_180);
		bool L_181 = String_EndsWith_m3135(L_180, _stringLiteral1554, /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_182 = (__this->___path_5);
		String_t* L_183 = (__this->___path_5);
		NullCheck(L_183);
		int32_t L_184 = String_get_Length_m159(L_183, /*hidden argument*/NULL);
		NullCheck(L_182);
		int32_t L_185 = String_LastIndexOf_m6805(L_182, ((int32_t)47), ((int32_t)((int32_t)L_184-(int32_t)4)), /*hidden argument*/NULL);
		V_0 = L_185;
		int32_t L_186 = V_0;
		if ((((int32_t)L_186) == ((int32_t)(-1))))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_187 = (__this->___path_5);
		int32_t L_188 = V_0;
		String_t* L_189 = (__this->___path_5);
		NullCheck(L_189);
		int32_t L_190 = String_get_Length_m159(L_189, /*hidden argument*/NULL);
		int32_t L_191 = V_0;
		NullCheck(L_187);
		String_t* L_192 = String_Substring_m1914(L_187, ((int32_t)((int32_t)L_188+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_190-(int32_t)L_191))-(int32_t)4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_193 = String_op_Inequality_m172(NULL /*static, unused*/, L_192, _stringLiteral1553, /*hidden argument*/NULL);
		if (!L_193)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_194 = (__this->___path_5);
		int32_t L_195 = V_0;
		String_t* L_196 = (__this->___path_5);
		NullCheck(L_196);
		int32_t L_197 = String_get_Length_m159(L_196, /*hidden argument*/NULL);
		int32_t L_198 = V_0;
		NullCheck(L_194);
		String_t* L_199 = String_Remove_m1937(L_194, ((int32_t)((int32_t)L_195+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_197-(int32_t)L_198))-(int32_t)1)), /*hidden argument*/NULL);
		__this->___path_5 = L_199;
	}

IL_0522:
	{
		bool L_200 = (__this->___userEscaped_12);
		if (L_200)
		{
			goto IL_053e;
		}
	}
	{
		String_t* L_201 = (__this->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_202 = Uri_EscapeString_m6600(NULL /*static, unused*/, L_201, /*hidden argument*/NULL);
		__this->___path_5 = L_202;
	}

IL_053e:
	{
		return;
	}
}
// System.String System.Uri::get_AbsolutePath()
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t202_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1931_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1545;
extern Il2CppCodeGenString* _stringLiteral594;
extern Il2CppCodeGenString* _stringLiteral1071;
extern "C" String_t* Uri_get_AbsolutePath_m3887 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Dictionary_2_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Dictionary_2__ctor_m1931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		_stringLiteral1545 = il2cpp_codegen_string_literal_from_index(1545);
		_stringLiteral594 = il2cpp_codegen_string_literal_from_index(594);
		_stringLiteral1071 = il2cpp_codegen_string_literal_from_index(1071);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Dictionary_2_t202 * V_2 = {0};
	int32_t V_3 = 0;
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_2 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map12_31;
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		Dictionary_2_t202 * L_3 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_3, 2, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_2 = L_3;
		Dictionary_2_t202 * L_4 = V_2;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral1545, 0);
		Dictionary_2_t202 * L_5 = V_2;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral594, 0);
		Dictionary_2_t202 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map12_31 = L_6;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_7 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map12_31;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_7, L_8, (&V_3));
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0066;
	}

IL_005f:
	{
		String_t* L_11 = (__this->___path_5);
		return L_11;
	}

IL_0066:
	{
		String_t* L_12 = (__this->___path_5);
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m159(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_14 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_15 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m145(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = (__this->___path_5);
		String_t* L_18 = V_0;
		NullCheck(L_17);
		bool L_19 = String_StartsWith_m3108(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		return _stringLiteral1071;
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_20;
	}

IL_00a4:
	{
		String_t* L_21 = (__this->___path_5);
		return L_21;
	}
}
// System.String System.Uri::get_AbsoluteUri()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_get_AbsoluteUri_m6575 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___cachedAbsoluteUri_13);
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_1 = Uri_GetLeftPart_m6593(__this, 2, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_13 = L_1;
		String_t* L_2 = (__this->___query_6);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m159(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = (__this->___cachedAbsoluteUri_13);
		String_t* L_5 = (__this->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m145(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_13 = L_6;
	}

IL_0046:
	{
		String_t* L_7 = (__this->___fragment_7);
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m159(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_9 = (__this->___cachedAbsoluteUri_13);
		String_t* L_10 = (__this->___fragment_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m145(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_13 = L_11;
	}

IL_006e:
	{
		String_t* L_12 = (__this->___cachedAbsoluteUri_13);
		return L_12;
	}
}
// System.String System.Uri::get_Authority()
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral275;
extern "C" String_t* Uri_get_Authority_m6576 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral275 = il2cpp_codegen_string_literal_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_GetDefaultPort_m6614(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___port_4);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___host_3);
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		String_t* L_4 = (__this->___host_3);
		int32_t L_5 = (__this->___port_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1542(NULL /*static, unused*/, L_4, _stringLiteral275, L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m4904 (Uri_t711 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___host_3);
		return L_0;
	}
}
// System.UriHostNameType System.Uri::get_HostNameType()
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t202_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1931_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1545;
extern "C" int32_t Uri_get_HostNameType_m6577 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Dictionary_2_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		Dictionary_2__ctor_m1931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		_stringLiteral1545 = il2cpp_codegen_string_literal_from_index(1545);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	String_t* V_1 = {0};
	Dictionary_2_t202 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t G_B12_0 = 0;
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Host_m4904(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_CheckHostName_m6585(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001a:
	{
		String_t* L_4 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_6 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map13_32;
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		Dictionary_2_t202 * L_7 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_7, 1, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_2 = L_7;
		Dictionary_2_t202 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral1545, 0);
		Dictionary_2_t202 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map13_32 = L_9;
	}

IL_004a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_10 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map13_32;
		String_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_3));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_13 = V_3;
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		goto IL_0069;
	}

IL_0067:
	{
		return (int32_t)(1);
	}

IL_0069:
	{
		bool L_14 = Uri_get_IsFile_m6579(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		G_B12_0 = 1;
		goto IL_007b;
	}

IL_007a:
	{
		int32_t L_15 = V_0;
		G_B12_0 = ((int32_t)(L_15));
	}

IL_007b:
	{
		return (int32_t)(G_B12_0);
	}
}
// System.Boolean System.Uri::get_IsDefaultPort()
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern "C" bool Uri_get_IsDefaultPort_m6578 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_GetDefaultPort_m6614(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___port_4);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean System.Uri::get_IsFile()
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Uri_get_IsFile_m6579 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m67(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::get_IsLoopback()
// System.Net.IPAddress
#include "System_System_Net_IPAddressMethodDeclarations.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6AddressMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IPAddress_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1108_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1391;
extern Il2CppCodeGenString* _stringLiteral1390;
extern "C" bool Uri_get_IsLoopback_m6580 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IPAddress_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		IPv6Address_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(753);
		_stringLiteral1391 = il2cpp_codegen_string_literal_from_index(1391);
		_stringLiteral1390 = il2cpp_codegen_string_literal_from_index(1390);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1106 * V_0 = {0};
	IPv6Address_t1108 * V_1 = {0};
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Host_m4904(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m159(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = Uri_get_IsFile_m6579(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		String_t* L_3 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m67(NULL /*static, unused*/, L_3, _stringLiteral1391, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m67(NULL /*static, unused*/, L_5, _stringLiteral1390, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		String_t* L_7 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1106_il2cpp_TypeInfo_var);
		bool L_8 = IPAddress_TryParse_m5647(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1106_il2cpp_TypeInfo_var);
		IPAddress_t1106 * L_9 = ((IPAddress_t1106_StaticFields*)IPAddress_t1106_il2cpp_TypeInfo_var->static_fields)->___Loopback_6;
		IPAddress_t1106 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Net.IPAddress::Equals(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		String_t* L_12 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1108_il2cpp_TypeInfo_var);
		bool L_13 = IPv6Address_TryParse_m5684(NULL /*static, unused*/, L_12, (&V_1), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		IPv6Address_t1108 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1108_il2cpp_TypeInfo_var);
		bool L_15 = IPv6Address_IsLoopback_m5688(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		return 1;
	}

IL_008c:
	{
		return 0;
	}
}
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m6581 (Uri_t711 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___isUnc_9);
		return L_0;
	}
}
// System.String System.Uri::get_LocalPath()
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
extern TypeInfo* Path_t792_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1555;
extern "C" String_t* Uri_get_LocalPath_m3888 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral1555 = il2cpp_codegen_string_literal_from_index(1555);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	bool V_2 = false;
	String_t* V_3 = {0};
	uint16_t V_4 = 0x0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___cachedLocalPath_15);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = (__this->___cachedLocalPath_15);
		return L_1;
	}

IL_0018:
	{
		bool L_2 = Uri_get_IsFile_m6579(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_3 = Uri_get_AbsolutePath_m3887(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		String_t* L_4 = (__this->___path_5);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m159(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)3)))
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_6 = (__this->___path_5);
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m1913(L_6, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_8 = (__this->___path_5);
		NullCheck(L_8);
		uint16_t L_9 = String_get_Chars_m1913(L_8, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_10 = (__this->___path_5);
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m1913(L_10, 2, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_11) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B9_0 = 1;
	}

IL_0074:
	{
		G_B11_0 = G_B9_0;
		goto IL_0077;
	}

IL_0076:
	{
		G_B11_0 = 0;
	}

IL_0077:
	{
		V_0 = G_B11_0;
		bool L_12 = Uri_get_IsUnc_m6581(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00b9;
		}
	}
	{
		String_t* L_13 = (__this->___path_5);
		String_t* L_14 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_13);
		V_1 = L_14;
		bool L_15 = V_0;
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m3137(L_17, ((int32_t)47), ((int32_t)92), /*hidden argument*/NULL);
		__this->___cachedLocalPath_15 = L_18;
		goto IL_00b4;
	}

IL_00ad:
	{
		String_t* L_19 = V_1;
		__this->___cachedLocalPath_15 = L_19;
	}

IL_00b4:
	{
		goto IL_018f;
	}

IL_00b9:
	{
		String_t* L_20 = (__this->___path_5);
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m159(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) <= ((int32_t)1)))
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_22 = (__this->___path_5);
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1913(L_22, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_24 = (__this->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t792_il2cpp_TypeInfo_var);
		uint16_t L_25 = ((Path_t792_StaticFields*)Path_t792_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_26 = ((Path_t792_StaticFields*)Path_t792_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_24);
		String_t* L_27 = String_Replace_m3137(L_24, L_25, L_26, /*hidden argument*/NULL);
		String_t* L_28 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_27);
		__this->___cachedLocalPath_15 = L_28;
		goto IL_018f;
	}

IL_0103:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t792_il2cpp_TypeInfo_var);
		uint16_t L_29 = ((Path_t792_StaticFields*)Path_t792_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_30 = (__this->___host_3);
		V_3 = L_30;
		String_t* L_31 = (__this->___path_5);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m159(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		String_t* L_33 = (__this->___path_5);
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m159(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_34) > ((int32_t)1)))
		{
			goto IL_014b;
		}
	}
	{
		String_t* L_35 = (__this->___path_5);
		NullCheck(L_35);
		uint16_t L_36 = String_get_Chars_m1913(L_35, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)47))))
		{
			goto IL_0161;
		}
	}

IL_014b:
	{
		String_t* L_37 = V_3;
		String_t* L_38 = (__this->___path_5);
		NullCheck(L_38);
		String_t* L_39 = String_Replace_m3137(L_38, ((int32_t)47), ((int32_t)92), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Concat_m145(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		V_3 = L_40;
	}

IL_0161:
	{
		String_t* L_41 = V_3;
		String_t* L_42 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_41);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = String_Concat_m145(NULL /*static, unused*/, _stringLiteral1555, L_42, /*hidden argument*/NULL);
		__this->___cachedLocalPath_15 = L_43;
		goto IL_018f;
	}

IL_017d:
	{
		String_t* L_44 = (__this->___path_5);
		String_t* L_45 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_44);
		__this->___cachedLocalPath_15 = L_45;
	}

IL_018f:
	{
		String_t* L_46 = (__this->___cachedLocalPath_15);
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m159(L_46, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_01b3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t792_il2cpp_TypeInfo_var);
		uint16_t L_48 = ((Path_t792_StaticFields*)Path_t792_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		V_4 = L_48;
		String_t* L_49 = Char_ToString_m1938((&V_4), /*hidden argument*/NULL);
		__this->___cachedLocalPath_15 = L_49;
	}

IL_01b3:
	{
		String_t* L_50 = (__this->___cachedLocalPath_15);
		return L_50;
	}
}
// System.String System.Uri::get_PathAndQuery()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_get_PathAndQuery_m6582 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___path_5);
		String_t* L_1 = Uri_get_Query_m6584(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m145(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Uri::get_Port()
extern "C" int32_t Uri_get_Port_m6583 (Uri_t711 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___port_4);
		return L_0;
	}
}
// System.String System.Uri::get_Query()
extern "C" String_t* Uri_get_Query_m6584 (Uri_t711 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___query_6);
		return L_0;
	}
}
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m3886 (Uri_t711 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___scheme_2);
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m3884 (Uri_t711 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isAbsoluteUri_11);
		return L_0;
	}
}
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1108_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_CheckHostName_m6585 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		IPv6Address_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(753);
		s_Il2CppMethodIntialized = true;
	}
	IPv6Address_t1108 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m159(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_4 = Uri_IsIPv4Address_m6586(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_6 = Uri_IsDomainAddress_m6587(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1108_il2cpp_TypeInfo_var);
		bool L_8 = IPv6Address_TryParse_m5684(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Uri::IsIPv4Address(System.String)
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsIPv4Address_m6586 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t49* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		CharU5BU5D_t60* L_1 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)46);
		NullCheck(L_0);
		StringU5BU5D_t49* L_2 = String_Split_m169(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t49* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		StringU5BU5D_t49* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6, sizeof(String_t*))));
		int32_t L_7 = String_get_Length_m159((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6, sizeof(String_t*))), /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		StringU5BU5D_t49* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = UInt32_TryParse_m6806(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11, sizeof(String_t*))), (&V_3), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsDomainAddress_m6587 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		String_t* L_0 = ___name;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m159(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		String_t* L_2 = ___name;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m1913(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t355_il2cpp_TypeInfo_var);
		bool L_7 = Char_IsLetterOrDigit_m6797(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t355_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsLetterOrDigit_m6797(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return 0;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern "C" bool Uri_CheckSchemeName_m6588 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		String_t* L_0 = ___schemeName;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___schemeName;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m159(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		String_t* L_3 = ___schemeName;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m1913(L_3, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_5 = Uri_IsAlpha_m6589(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		String_t* L_6 = ___schemeName;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m159(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		String_t* L_8 = ___schemeName;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m1913(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t355_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsDigit_m6726(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_14 = Uri_IsAlpha_m6589(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return 0;
	}

IL_006c:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsAlpha(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" bool Uri_IsAlpha_m6589 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		uint16_t L_0 = ___c;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return G_B7_0;
	}
}
// System.Boolean System.Uri::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Uri_Equals_m6590 (Uri_t711 * __this, Object_t * ___comparant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t711 * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___comparant;
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
		Object_t * L_1 = ___comparant;
		V_0 = ((Uri_t711 *)IsInstClass(L_1, Uri_t711_il2cpp_TypeInfo_var));
		Uri_t711 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_3 = ___comparant;
		V_1 = ((String_t*)IsInstSealed(L_3, String_t_il2cpp_TypeInfo_var));
		String_t* L_4 = V_1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = V_1;
		Uri_t711 * L_6 = (Uri_t711 *)il2cpp_codegen_object_new (Uri_t711_il2cpp_TypeInfo_var);
		Uri__ctor_m3816(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002b:
	{
		Uri_t711 * L_7 = V_0;
		bool L_8 = Uri_InternalEquals_m6591(__this, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.Uri::InternalEquals(System.Uri)
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern "C" bool Uri_InternalEquals_m6591 (Uri_t711 * __this, Uri_t711 * ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t608 * V_0 = {0};
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (__this->___isAbsoluteUri_11);
		Uri_t711 * L_1 = ___uri;
		NullCheck(L_1);
		bool L_2 = (L_1->___isAbsoluteUri_11);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		bool L_3 = (__this->___isAbsoluteUri_11);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = (__this->___source_1);
		Uri_t711 * L_5 = ___uri;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___source_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m67(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_8 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = (__this->___scheme_2);
		CultureInfo_t608 * L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_ToLower_m3876(L_9, L_10, /*hidden argument*/NULL);
		Uri_t711 * L_12 = ___uri;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___scheme_2);
		CultureInfo_t608 * L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m3876(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m67(NULL /*static, unused*/, L_11, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_17 = (__this->___host_3);
		CultureInfo_t608 * L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_ToLower_m3876(L_17, L_18, /*hidden argument*/NULL);
		Uri_t711 * L_20 = ___uri;
		NullCheck(L_20);
		String_t* L_21 = (L_20->___host_3);
		CultureInfo_t608 * L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = String_ToLower_m3876(L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m67(NULL /*static, unused*/, L_19, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = (__this->___port_4);
		Uri_t711 * L_26 = ___uri;
		NullCheck(L_26);
		int32_t L_27 = (L_26->___port_4);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_28 = (__this->___query_6);
		Uri_t711 * L_29 = ___uri;
		NullCheck(L_29);
		String_t* L_30 = (L_29->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m67(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_32 = (__this->___path_5);
		Uri_t711 * L_33 = ___uri;
		NullCheck(L_33);
		String_t* L_34 = (L_33->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Equality_m67(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return G_B10_0;
	}
}
// System.Int32 System.Uri::GetHashCode()
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetHashCode_m6592 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t608 * V_0 = {0};
	{
		int32_t L_0 = (__this->___cachedHashCode_16);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_1 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = (__this->___isAbsoluteUri_11);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_3 = (__this->___scheme_2);
		CultureInfo_t608 * L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m3876(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_GetHashCode_m3116(L_5, /*hidden argument*/NULL);
		String_t* L_7 = (__this->___host_3);
		CultureInfo_t608 * L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9 = String_ToLower_m3876(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = String_GetHashCode_m3116(L_9, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___port_4);
		String_t* L_12 = (__this->___query_6);
		NullCheck(L_12);
		int32_t L_13 = String_GetHashCode_m3116(L_12, /*hidden argument*/NULL);
		String_t* L_14 = (__this->___path_5);
		NullCheck(L_14);
		int32_t L_15 = String_GetHashCode_m3116(L_14, /*hidden argument*/NULL);
		__this->___cachedHashCode_16 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_10))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15));
		goto IL_007a;
	}

IL_0069:
	{
		String_t* L_16 = (__this->___source_1);
		NullCheck(L_16);
		int32_t L_17 = String_GetHashCode_m3116(L_16, /*hidden argument*/NULL);
		__this->___cachedHashCode_16 = L_17;
	}

IL_007a:
	{
		int32_t L_18 = (__this->___cachedHashCode_16);
		return L_18;
	}
}
// System.String System.Uri::GetLeftPart(System.UriPartial)
// System.UriPartial
#include "System_System_UriPartial.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t202_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1931_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1545;
extern Il2CppCodeGenString* _stringLiteral1546;
extern "C" String_t* Uri_GetLeftPart_m6593 (Uri_t711 * __this, int32_t ___part, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		StringBuilder_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		Dictionary_2_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		Dictionary_2__ctor_m1931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		_stringLiteral1545 = il2cpp_codegen_string_literal_from_index(1545);
		_stringLiteral1546 = il2cpp_codegen_string_literal_from_index(1546);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t320 * V_1 = {0};
	StringBuilder_t320 * V_2 = {0};
	int32_t V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t202 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Uri_EnsureAbsoluteUri_m6622(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___part;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_0031;
		}
		if (L_1 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		String_t* L_2 = (__this->___scheme_2);
		String_t* L_3 = Uri_GetOpaqueWiseSchemeDelimiter_m6615(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m145(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		String_t* L_5 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m67(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_9 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m67(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_11;
	}

IL_0061:
	{
		StringBuilder_t320 * L_12 = (StringBuilder_t320 *)il2cpp_codegen_object_new (StringBuilder_t320_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1551(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		StringBuilder_t320 * L_13 = V_1;
		String_t* L_14 = (__this->___scheme_2);
		NullCheck(L_13);
		StringBuilder_Append_m3134(L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t320 * L_15 = V_1;
		String_t* L_16 = Uri_GetOpaqueWiseSchemeDelimiter_m6615(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m3134(L_15, L_16, /*hidden argument*/NULL);
		String_t* L_17 = (__this->___path_5);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m159(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_19 = (__this->___path_5);
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m1913(L_19, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_21 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		String_t* L_22 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m67(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		StringBuilder_t320 * L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_Append_m3837(L_24, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_00c3:
	{
		String_t* L_25 = (__this->___userinfo_8);
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m159(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t320 * L_27 = V_1;
		String_t* L_28 = (__this->___userinfo_8);
		NullCheck(L_27);
		StringBuilder_t320 * L_29 = StringBuilder_Append_m3134(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m3837(L_29, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_00e8:
	{
		StringBuilder_t320 * L_30 = V_1;
		String_t* L_31 = (__this->___host_3);
		NullCheck(L_30);
		StringBuilder_Append_m3134(L_30, L_31, /*hidden argument*/NULL);
		String_t* L_32 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_GetDefaultPort_m6614(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34 = (__this->___port_4);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_35 = (__this->___port_4);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_012d;
		}
	}
	{
		StringBuilder_t320 * L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t320 * L_38 = StringBuilder_Append_m3837(L_37, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_39 = (__this->___port_4);
		NullCheck(L_38);
		StringBuilder_Append_m6701(L_38, L_39, /*hidden argument*/NULL);
	}

IL_012d:
	{
		StringBuilder_t320 * L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = StringBuilder_ToString_m1554(L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_0134:
	{
		StringBuilder_t320 * L_42 = (StringBuilder_t320 *)il2cpp_codegen_object_new (StringBuilder_t320_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1551(L_42, /*hidden argument*/NULL);
		V_2 = L_42;
		StringBuilder_t320 * L_43 = V_2;
		String_t* L_44 = (__this->___scheme_2);
		NullCheck(L_43);
		StringBuilder_Append_m3134(L_43, L_44, /*hidden argument*/NULL);
		StringBuilder_t320 * L_45 = V_2;
		String_t* L_46 = Uri_GetOpaqueWiseSchemeDelimiter_m6615(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		StringBuilder_Append_m3134(L_45, L_46, /*hidden argument*/NULL);
		String_t* L_47 = (__this->___path_5);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m159(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		String_t* L_49 = (__this->___path_5);
		NullCheck(L_49);
		uint16_t L_50 = String_get_Chars_m1913(L_49, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_51 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		String_t* L_52 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Equality_m67(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0196;
		}
	}
	{
		StringBuilder_t320 * L_54 = V_2;
		NullCheck(L_54);
		StringBuilder_Append_m3837(L_54, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0196:
	{
		String_t* L_55 = (__this->___userinfo_8);
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m159(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		StringBuilder_t320 * L_57 = V_2;
		String_t* L_58 = (__this->___userinfo_8);
		NullCheck(L_57);
		StringBuilder_t320 * L_59 = StringBuilder_Append_m3134(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		StringBuilder_Append_m3837(L_59, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_01bb:
	{
		StringBuilder_t320 * L_60 = V_2;
		String_t* L_61 = (__this->___host_3);
		NullCheck(L_60);
		StringBuilder_Append_m3134(L_60, L_61, /*hidden argument*/NULL);
		String_t* L_62 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_63 = Uri_GetDefaultPort_m6614(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		int32_t L_64 = (__this->___port_4);
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_65 = (__this->___port_4);
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0200;
		}
	}
	{
		StringBuilder_t320 * L_67 = V_2;
		NullCheck(L_67);
		StringBuilder_t320 * L_68 = StringBuilder_Append_m3837(L_67, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_69 = (__this->___port_4);
		NullCheck(L_68);
		StringBuilder_Append_m6701(L_68, L_69, /*hidden argument*/NULL);
	}

IL_0200:
	{
		String_t* L_70 = (__this->___path_5);
		NullCheck(L_70);
		int32_t L_71 = String_get_Length_m159(L_70, /*hidden argument*/NULL);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		String_t* L_72 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		V_4 = L_72;
		String_t* L_73 = V_4;
		if (!L_73)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_74 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_33;
		if (L_74)
		{
			goto IL_0253;
		}
	}
	{
		Dictionary_2_t202 * L_75 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_75, 2, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_5 = L_75;
		Dictionary_2_t202 * L_76 = V_5;
		NullCheck(L_76);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_76, _stringLiteral1545, 0);
		Dictionary_2_t202 * L_77 = V_5;
		NullCheck(L_77);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_77, _stringLiteral1546, 0);
		Dictionary_2_t202 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_33 = L_78;
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_79 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_33;
		String_t* L_80 = V_4;
		NullCheck(L_79);
		bool L_81 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_79, L_80, (&V_6));
		if (!L_81)
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_82 = V_6;
		if (!L_82)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		StringBuilder_t320 * L_83 = V_2;
		String_t* L_84 = (__this->___path_5);
		NullCheck(L_83);
		StringBuilder_Append_m3134(L_83, L_84, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_0284:
	{
		StringBuilder_t320 * L_85 = V_2;
		String_t* L_86 = (__this->___path_5);
		String_t* L_87 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_88 = Uri_CompactEscaped_m6610(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		String_t* L_89 = Uri_Reduce_m6611(NULL /*static, unused*/, L_86, L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		StringBuilder_Append_m3134(L_85, L_89, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_02a6:
	{
		StringBuilder_t320 * L_90 = V_2;
		NullCheck(L_90);
		String_t* L_91 = StringBuilder_ToString_m1554(L_90, /*hidden argument*/NULL);
		return L_91;
	}

IL_02ad:
	{
		return (String_t*)NULL;
	}
}
// System.Int32 System.Uri::FromHex(System.Char)
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1556;
extern "C" int32_t Uri_FromHex_m6594 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		_stringLiteral1556 = il2cpp_codegen_string_literal_from_index(1556);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_2 = ___digit;
		return ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
	}

IL_0015:
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_5 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_002d:
	{
		uint16_t L_6 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_7 = ___digit;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_8 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_8-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0045:
	{
		ArgumentException_t373 * L_9 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2066(L_9, _stringLiteral1556, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}
}
// System.String System.Uri::HexEscape(System.Char)
extern TypeInfo* ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1557;
extern Il2CppCodeGenString* _stringLiteral457;
extern "C" String_t* Uri_HexEscape_m6595 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral1557 = il2cpp_codegen_string_literal_from_index(1557);
		_stringLiteral457 = il2cpp_codegen_string_literal_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___character;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t790 * L_1 = (ArgumentOutOfRangeException_t790 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3841(L_1, _stringLiteral1557, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_17;
		uint16_t L_3 = ___character;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m1913(L_2, ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)240)))>>(int32_t)4)), /*hidden argument*/NULL);
		uint16_t L_5 = L_4;
		Object_t * L_6 = Box(Char_t355_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_17;
		uint16_t L_8 = ___character;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m1913(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		uint16_t L_10 = L_9;
		Object_t * L_11 = Box(Char_t355_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1542(NULL /*static, unused*/, _stringLiteral457, L_6, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m6596 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		uint16_t L_2 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_5 = ___digit;
		G_B7_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return G_B9_0;
	}
}
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsHexEncoding_m6597 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___index;
		String_t* L_1 = ___pattern;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m159(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		String_t* L_3 = ___pattern;
		int32_t L_4 = ___index;
		int32_t L_5 = L_4;
		___index = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		uint16_t L_6 = String_get_Chars_m1913(L_3, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_7 = ___pattern;
		int32_t L_8 = ___index;
		int32_t L_9 = L_8;
		___index = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		uint16_t L_10 = String_get_Chars_m1913(L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_11 = Uri_IsHexDigit_m6596(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___pattern;
		int32_t L_13 = ___index;
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m1913(L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_15 = Uri_IsHexDigit_m6596(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return G_B6_0;
	}
}
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Uri_AppendQueryAndFragment_m6598 (Uri_t711 * __this, String_t** ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B4_0 = {0};
	{
		String_t* L_0 = (__this->___query_6);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m159(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_2 = (__this->___query_6);
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m1913(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_4 = ((int32_t)63);
		Object_t * L_5 = Box(Char_t355_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = (__this->___query_6);
		NullCheck(L_6);
		String_t* L_7 = String_Substring_m1941(L_6, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_8 = Uri_Unescape_m6604(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m76(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		String_t* L_10 = (__this->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_11 = Uri_Unescape_m6604(NULL /*static, unused*/, L_10, 0, /*hidden argument*/NULL);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		String_t** L_12 = ___result;
		String_t** L_13 = ___result;
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m145(NULL /*static, unused*/, (*((String_t**)L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_12)) = (Object_t *)L_15;
	}

IL_005e:
	{
		String_t* L_16 = (__this->___fragment_7);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m159(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t** L_18 = ___result;
		String_t** L_19 = ___result;
		String_t* L_20 = (__this->___fragment_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m145(NULL /*static, unused*/, (*((String_t**)L_19)), L_20, /*hidden argument*/NULL);
		*((Object_t **)(L_18)) = (Object_t *)L_21;
	}

IL_007e:
	{
		return;
	}
}
// System.String System.Uri::ToString()
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_ToString_m6599 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___cachedToString_14);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___cachedToString_14);
		return L_1;
	}

IL_0012:
	{
		bool L_2 = (__this->___isAbsoluteUri_11);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = Uri_GetLeftPart_m6593(__this, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_Unescape_m6604(NULL /*static, unused*/, L_3, 1, /*hidden argument*/NULL);
		__this->___cachedToString_14 = L_4;
		goto IL_0047;
	}

IL_0035:
	{
		String_t* L_5 = (__this->___path_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_5);
		__this->___cachedToString_14 = L_6;
	}

IL_0047:
	{
		String_t** L_7 = &(__this->___cachedToString_14);
		Uri_AppendQueryAndFragment_m6598(__this, L_7, /*hidden argument*/NULL);
		String_t* L_8 = (__this->___cachedToString_14);
		return L_8;
	}
}
// System.String System.Uri::EscapeString(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_EscapeString_m6600 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_EscapeString_m6601(NULL /*static, unused*/, L_0, 0, 1, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t52_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1558;
extern Il2CppCodeGenString* _stringLiteral1559;
extern "C" String_t* Uri_EscapeString_m6601 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringBuilder_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Encoding_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral1558 = il2cpp_codegen_string_literal_from_index(1558);
		_stringLiteral1559 = il2cpp_codegen_string_literal_from_index(1559);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t320 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t444* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	{
		String_t* L_0 = ___str;
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
		StringBuilder_t320 * L_2 = (StringBuilder_t320 *)il2cpp_codegen_object_new (StringBuilder_t320_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1551(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m159(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_7 = Uri_IsHexEncoding_m6597(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t320 * L_8 = V_0;
		String_t* L_9 = ___str;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m1914(L_9, L_10, 3, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_m3134(L_8, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_13 = Encoding_get_UTF8_m3100(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharU5BU5D_t60* L_14 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 1));
		String_t* L_15 = ___str;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m1913(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 0, sizeof(uint16_t))) = (uint16_t)L_17;
		NullCheck(L_13);
		ByteU5BU5D_t444* L_18 = (ByteU5BU5D_t444*)VirtFuncInvoker1< ByteU5BU5D_t444*, CharU5BU5D_t60* >::Invoke(11 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_13, L_14);
		V_3 = L_18;
		ByteU5BU5D_t444* L_19 = V_3;
		NullCheck(L_19);
		V_4 = (((int32_t)(((Array_t *)L_19)->max_length)));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		ByteU5BU5D_t444* L_20 = V_3;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_6 = (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22, sizeof(uint8_t)))));
		uint16_t L_23 = V_6;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_24 = V_6;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_25 = V_6;
		NullCheck(_stringLiteral1558);
		int32_t L_26 = String_IndexOf_m1967(_stringLiteral1558, L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		bool L_27 = ___escapeHex;
		if (!L_27)
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		bool L_29 = ___escapeBrackets;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		uint16_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		bool L_32 = ___escapeReserved;
		if (!L_32)
		{
			goto IL_00e9;
		}
	}
	{
		uint16_t L_33 = V_6;
		NullCheck(_stringLiteral1559);
		int32_t L_34 = String_IndexOf_m1967(_stringLiteral1559, L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		StringBuilder_t320 * L_35 = V_0;
		uint16_t L_36 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_37 = Uri_HexEscape_m6595(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		StringBuilder_Append_m3134(L_35, L_37, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00e9:
	{
		StringBuilder_t320 * L_38 = V_0;
		uint16_t L_39 = V_6;
		NullCheck(L_38);
		StringBuilder_Append_m3837(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00f8:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0105:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t320 * L_46 = V_0;
		NullCheck(L_46);
		String_t* L_47 = StringBuilder_ToString_m1554(L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Void System.Uri::ParseUri(System.UriKind)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseUri_m6602 (Uri_t711 * __this, int32_t ___kind, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___kind;
		String_t* L_1 = (__this->___source_1);
		Uri_Parse_m6608(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___userEscaped_12);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		String_t* L_3 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_EscapeString_m6601(NULL /*static, unused*/, L_3, 0, 1, 0, /*hidden argument*/NULL);
		__this->___host_3 = L_4;
		String_t* L_5 = (__this->___host_3);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m159(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_7 = (__this->___host_3);
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m1913(L_7, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_9 = (__this->___host_3);
		String_t* L_10 = (__this->___host_3);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m159(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint16_t L_12 = String_get_Chars_m1913(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_13 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_14 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m3876(L_13, L_14, /*hidden argument*/NULL);
		__this->___host_3 = L_15;
	}

IL_0086:
	{
		String_t* L_16 = (__this->___path_5);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m159(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_18 = (__this->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_19 = Uri_EscapeString_m6600(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		__this->___path_5 = L_19;
	}

IL_00a8:
	{
		return;
	}
}
// System.String System.Uri::Unescape(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_Unescape_m6603 (Uri_t711 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_Unescape_m6604(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral456;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral1560;
extern "C" String_t* Uri_Unescape_m6604 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringBuilder_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral1560 = il2cpp_codegen_string_literal_from_index(1560);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t320 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	uint16_t V_5 = 0x0;
	{
		String_t* L_0 = ___str;
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
		StringBuilder_t320 * L_2 = (StringBuilder_t320 *)il2cpp_codegen_object_new (StringBuilder_t320_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1551(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m159(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m1913(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_9 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		uint16_t L_10 = Uri_HexUnescapeMultiByte_m6612(NULL /*static, unused*/, L_9, (&V_2), (&V_4), /*hidden argument*/NULL);
		V_5 = L_10;
		bool L_11 = ___excludeSpecial;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t320 * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m3134(L_13, _stringLiteral456, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_005c:
	{
		bool L_14 = ___excludeSpecial;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		uint16_t L_15 = V_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t320 * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m3134(L_16, _stringLiteral458, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_007c:
	{
		bool L_17 = ___excludeSpecial;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t320 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3134(L_19, _stringLiteral1560, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_009c:
	{
		StringBuilder_t320 * L_20 = V_0;
		uint16_t L_21 = V_5;
		NullCheck(L_20);
		StringBuilder_Append_m3837(L_20, L_21, /*hidden argument*/NULL);
		uint16_t L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t320 * L_23 = V_0;
		uint16_t L_24 = V_4;
		NullCheck(L_23);
		StringBuilder_Append_m3837(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25-(int32_t)1));
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t320 * L_26 = V_0;
		uint16_t L_27 = V_3;
		NullCheck(L_26);
		StringBuilder_Append_m3837(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t320 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = StringBuilder_ToString_m1554(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1046;
extern Il2CppCodeGenString* _stringLiteral1071;
extern "C" void Uri_ParseAsWindowsUNC_m6605 (Uri_t711 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral1046 = il2cpp_codegen_string_literal_from_index(1046);
		_stringLiteral1071 = il2cpp_codegen_string_literal_from_index(1071);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		__this->___scheme_2 = L_0;
		__this->___port_4 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_7 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_6 = L_2;
		__this->___isUnc_9 = 1;
		String_t* L_3 = ___uriString;
		CharU5BU5D_t60* L_4 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)92);
		NullCheck(L_3);
		String_t* L_5 = String_TrimStart_m6807(L_3, L_4, /*hidden argument*/NULL);
		___uriString = L_5;
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m1967(L_6, ((int32_t)92), /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_9 = ___uriString;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m1941(L_9, L_10, /*hidden argument*/NULL);
		__this->___path_5 = L_11;
		String_t* L_12 = ___uriString;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m1914(L_12, 0, L_13, /*hidden argument*/NULL);
		__this->___host_3 = L_14;
		goto IL_0084;
	}

IL_0072:
	{
		String_t* L_15 = ___uriString;
		__this->___host_3 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_5 = L_16;
	}

IL_0084:
	{
		String_t* L_17 = (__this->___path_5);
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m130(L_17, _stringLiteral1046, _stringLiteral1071, /*hidden argument*/NULL);
		__this->___path_5 = L_18;
		return;
	}
}
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1561;
extern Il2CppCodeGenString* _stringLiteral1046;
extern Il2CppCodeGenString* _stringLiteral1071;
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m6606 (Uri_t711 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral1561 = il2cpp_codegen_string_literal_from_index(1561);
		_stringLiteral1046 = il2cpp_codegen_string_literal_from_index(1046);
		_stringLiteral1071 = il2cpp_codegen_string_literal_from_index(1071);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m159(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m1913(L_2, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m1913(L_4, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return _stringLiteral1561;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		__this->___scheme_2 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_7;
		__this->___port_4 = (-1);
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m130(L_8, _stringLiteral1046, _stringLiteral1071, /*hidden argument*/NULL);
		__this->___path_5 = L_9;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_7 = L_10;
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_6 = L_11;
		return (String_t*)NULL;
	}
}
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m6607 (Uri_t711 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isUnixFilePath_0 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		__this->___scheme_2 = L_0;
		__this->___port_4 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_7 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_3;
		__this->___path_5 = (String_t*)NULL;
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m159(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m1913(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		uint16_t L_9 = String_get_Chars_m1913(L_8, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_10 = ___uriString;
		CharU5BU5D_t60* L_11 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)47);
		NullCheck(L_10);
		String_t* L_12 = String_TrimStart_m6807(L_10, L_11, /*hidden argument*/NULL);
		___uriString = L_12;
		uint16_t L_13 = ((int32_t)47);
		Object_t * L_14 = Box(Char_t355_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m76(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		__this->___path_5 = L_16;
	}

IL_008f:
	{
		String_t* L_17 = (__this->___path_5);
		if (L_17)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_18 = ___uriString;
		__this->___path_5 = L_18;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t786_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1562;
extern "C" void Uri_Parse_m6608 (Uri_t711 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		UriFormatException_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		_stringLiteral1562 = il2cpp_codegen_string_literal_from_index(1562);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___uriString;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t617 * L_1 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_1, _stringLiteral1562, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___kind;
		String_t* L_3 = ___uriString;
		String_t* L_4 = Uri_ParseNoExceptions_m6609(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = V_0;
		UriFormatException_t786 * L_7 = (UriFormatException_t786 *)il2cpp_codegen_object_new (UriFormatException_t786_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m6624(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0027:
	{
		return;
	}
}
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern TypeInfo* Path_t792_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1108_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1225_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1563;
extern Il2CppCodeGenString* _stringLiteral1540;
extern Il2CppCodeGenString* _stringLiteral1564;
extern Il2CppCodeGenString* _stringLiteral1565;
extern Il2CppCodeGenString* _stringLiteral455;
extern Il2CppCodeGenString* _stringLiteral1566;
extern Il2CppCodeGenString* _stringLiteral1567;
extern Il2CppCodeGenString* _stringLiteral1071;
extern Il2CppCodeGenString* _stringLiteral1568;
extern Il2CppCodeGenString* _stringLiteral1569;
extern Il2CppCodeGenString* _stringLiteral1570;
extern Il2CppCodeGenString* _stringLiteral267;
extern Il2CppCodeGenString* _stringLiteral268;
extern Il2CppCodeGenString* _stringLiteral1571;
extern Il2CppCodeGenString* _stringLiteral274;
extern "C" String_t* Uri_ParseNoExceptions_m6609 (Uri_t711 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		IPv6Address_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(753);
		DefaultUriParser_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(868);
		_stringLiteral1563 = il2cpp_codegen_string_literal_from_index(1563);
		_stringLiteral1540 = il2cpp_codegen_string_literal_from_index(1540);
		_stringLiteral1564 = il2cpp_codegen_string_literal_from_index(1564);
		_stringLiteral1565 = il2cpp_codegen_string_literal_from_index(1565);
		_stringLiteral455 = il2cpp_codegen_string_literal_from_index(455);
		_stringLiteral1566 = il2cpp_codegen_string_literal_from_index(1566);
		_stringLiteral1567 = il2cpp_codegen_string_literal_from_index(1567);
		_stringLiteral1071 = il2cpp_codegen_string_literal_from_index(1071);
		_stringLiteral1568 = il2cpp_codegen_string_literal_from_index(1568);
		_stringLiteral1569 = il2cpp_codegen_string_literal_from_index(1569);
		_stringLiteral1570 = il2cpp_codegen_string_literal_from_index(1570);
		_stringLiteral267 = il2cpp_codegen_string_literal_from_index(267);
		_stringLiteral268 = il2cpp_codegen_string_literal_from_index(268);
		_stringLiteral1571 = il2cpp_codegen_string_literal_from_index(1571);
		_stringLiteral274 = il2cpp_codegen_string_literal_from_index(274);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = {0};
	bool V_11 = false;
	IPv6Address_t1108 * V_12 = {0};
	UriFormatException_t786 * V_13 = {0};
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m3097(L_0, /*hidden argument*/NULL);
		___uriString = L_1;
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m159(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___kind;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___kind;
		if (L_6)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->___isAbsoluteUri_11 = 0;
		return (String_t*)NULL;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = ___kind;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return _stringLiteral1563;
	}

IL_003f:
	{
		V_1 = 0;
		String_t* L_9 = ___uriString;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m1967(L_9, ((int32_t)58), /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		return _stringLiteral1540;
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_13 = ___uriString;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m1913(L_13, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t792_il2cpp_TypeInfo_var);
		uint16_t L_15 = ((Path_t792_StaticFields*)Path_t792_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_16 = ___uriString;
		Uri_ParseAsUnixAbsoluteFilePath_m6607(__this, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___kind;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		__this->___isAbsoluteUri_11 = 0;
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		String_t* L_18 = ___uriString;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m159(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_20 = ___uriString;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m1913(L_20, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_22 = ___uriString;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1913(L_22, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_24 = ___uriString;
		Uri_ParseAsWindowsUNC_m6605(__this, L_24, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->___isAbsoluteUri_11 = 0;
		String_t* L_25 = ___uriString;
		__this->___path_5 = L_25;
	}

IL_00d3:
	{
		return (String_t*)NULL;
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_27 = ___uriString;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m1913(L_27, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_29 = Uri_IsAlpha_m6589(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		return _stringLiteral1564;
	}

IL_00f3:
	{
		String_t* L_30 = ___uriString;
		String_t* L_31 = Uri_ParseAsWindowsAbsoluteFilePath_m6606(__this, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_2;
		if (!L_32)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_33 = V_2;
		return L_33;
	}

IL_0103:
	{
		return (String_t*)NULL;
	}

IL_0105:
	{
		String_t* L_34 = ___uriString;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		String_t* L_36 = String_Substring_m1914(L_34, 0, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_37 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_38 = String_ToLower_m3876(L_36, L_37, /*hidden argument*/NULL);
		__this->___scheme_2 = L_38;
		String_t* L_39 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_40 = Uri_CheckSchemeName_m6588(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_41 = Locale_GetText_m4941(NULL /*static, unused*/, _stringLiteral1565, /*hidden argument*/NULL);
		return L_41;
	}

IL_0138:
	{
		int32_t L_42 = V_1;
		V_3 = ((int32_t)((int32_t)L_42+(int32_t)1));
		String_t* L_43 = ___uriString;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m159(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		String_t* L_45 = ___uriString;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = String_IndexOf_m3096(L_45, ((int32_t)35), L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		bool L_48 = Uri_get_IsUnc_m6581(__this, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_50 = (__this->___userEscaped_12);
		if (!L_50)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_51 = ___uriString;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m1941(L_51, L_52, /*hidden argument*/NULL);
		__this->___fragment_7 = L_53;
		goto IL_019b;
	}

IL_017d:
	{
		String_t* L_54 = ___uriString;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		String_t* L_56 = String_Substring_m1941(L_54, ((int32_t)((int32_t)L_55+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_57 = Uri_EscapeString_m6600(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m145(NULL /*static, unused*/, _stringLiteral455, L_57, /*hidden argument*/NULL);
		__this->___fragment_7 = L_58;
	}

IL_019b:
	{
		int32_t L_59 = V_1;
		V_4 = L_59;
	}

IL_019e:
	{
		String_t* L_60 = ___uriString;
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		NullCheck(L_60);
		int32_t L_64 = String_IndexOf_m6808(L_60, ((int32_t)63), L_61, ((int32_t)((int32_t)L_62-(int32_t)L_63)), /*hidden argument*/NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_66 = ___uriString;
		int32_t L_67 = V_1;
		int32_t L_68 = V_4;
		int32_t L_69 = V_1;
		NullCheck(L_66);
		String_t* L_70 = String_Substring_m1914(L_66, L_67, ((int32_t)((int32_t)L_68-(int32_t)L_69)), /*hidden argument*/NULL);
		__this->___query_6 = L_70;
		int32_t L_71 = V_1;
		V_4 = L_71;
		bool L_72 = (__this->___userEscaped_12);
		if (L_72)
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_73 = (__this->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_74 = Uri_EscapeString_m6600(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		__this->___query_6 = L_74;
	}

IL_01e3:
	{
		String_t* L_75 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_76 = Uri_IsPredefinedScheme_m6616(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_77 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_78 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_79 = String_op_Inequality_m172(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_80 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_81 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Inequality_m172(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_83 = V_4;
		int32_t L_84 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_83-(int32_t)L_84))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_85-(int32_t)L_86))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_87 = ___uriString;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m1913(L_87, L_88, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_90 = ___uriString;
		int32_t L_91 = V_3;
		NullCheck(L_90);
		uint16_t L_92 = String_get_Chars_m1913(L_90, ((int32_t)((int32_t)L_91+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return _stringLiteral1566;
	}

IL_0255:
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_93-(int32_t)L_94))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_95 = ___uriString;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		uint16_t L_97 = String_get_Chars_m1913(L_95, L_96, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_98 = ___uriString;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		uint16_t L_100 = String_get_Chars_m1913(L_98, ((int32_t)((int32_t)L_99+(int32_t)1)), /*hidden argument*/NULL);
		G_B50_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = G_B50_0;
		String_t* L_101 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_102 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_103 = String_op_Equality_m67(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_02b7;
		}
	}
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_105-(int32_t)L_106))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		String_t* L_107 = ___uriString;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		uint16_t L_109 = String_get_Chars_m1913(L_107, ((int32_t)((int32_t)L_108+(int32_t)2)), /*hidden argument*/NULL);
		G_B55_0 = ((((int32_t)L_109) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = G_B57_0;
		V_7 = 0;
		bool L_110 = V_5;
		if (!L_110)
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_111 = ___kind;
		if ((!(((uint32_t)L_111) == ((uint32_t)2))))
		{
			goto IL_02d1;
		}
	}
	{
		return _stringLiteral1567;
	}

IL_02d1:
	{
		String_t* L_112 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_113 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_114 = String_op_Inequality_m172(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_02ff;
		}
	}
	{
		String_t* L_115 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_116 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_117 = String_op_Inequality_m172(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_118 = V_3;
		V_3 = ((int32_t)((int32_t)L_118+(int32_t)2));
	}

IL_02ff:
	{
		String_t* L_119 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_120 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_121 = String_op_Equality_m67(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		int32_t L_122 = V_3;
		V_9 = L_122;
		goto IL_033f;
	}

IL_031f:
	{
		String_t* L_123 = ___uriString;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		uint16_t L_125 = String_get_Chars_m1913(L_123, L_124, /*hidden argument*/NULL);
		if ((((int32_t)L_125) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		int32_t L_126 = V_8;
		V_8 = ((int32_t)((int32_t)L_126+(int32_t)1));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)((int32_t)L_127+(int32_t)1));
	}

IL_033f:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_4;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		int32_t L_130 = V_8;
		if ((((int32_t)L_130) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = 0;
		goto IL_035c;
	}

IL_0358:
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131+(int32_t)1));
	}

IL_035c:
	{
		int32_t L_132 = V_3;
		int32_t L_133 = V_4;
		if ((((int32_t)L_132) >= ((int32_t)L_133)))
		{
			goto IL_0372;
		}
	}
	{
		String_t* L_134 = ___uriString;
		int32_t L_135 = V_3;
		NullCheck(L_134);
		uint16_t L_136 = String_get_Chars_m1913(L_134, L_135, /*hidden argument*/NULL);
		if ((((int32_t)L_136) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		int32_t L_137 = V_8;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_138 = V_3;
		V_3 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0383:
	{
		int32_t L_139 = V_4;
		int32_t L_140 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_139-(int32_t)L_140))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		String_t* L_141 = ___uriString;
		int32_t L_142 = V_3;
		NullCheck(L_141);
		uint16_t L_143 = String_get_Chars_m1913(L_141, ((int32_t)((int32_t)L_142+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = 0;
		V_7 = 1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		String_t* L_144 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_145 = Uri_IsPredefinedScheme_m6616(NULL /*static, unused*/, L_144, /*hidden argument*/NULL);
		if (L_145)
		{
			goto IL_03d2;
		}
	}
	{
		String_t* L_146 = ___uriString;
		int32_t L_147 = V_3;
		int32_t L_148 = V_4;
		int32_t L_149 = V_3;
		NullCheck(L_146);
		String_t* L_150 = String_Substring_m1914(L_146, L_147, ((int32_t)((int32_t)L_148-(int32_t)L_149)), /*hidden argument*/NULL);
		__this->___path_5 = L_150;
		__this->___isOpaquePart_10 = 1;
		return (String_t*)NULL;
	}

IL_03d2:
	{
		bool L_151 = V_6;
		if (!L_151)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		String_t* L_152 = ___uriString;
		int32_t L_153 = V_3;
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		NullCheck(L_152);
		int32_t L_156 = String_IndexOf_m6808(L_152, ((int32_t)47), L_153, ((int32_t)((int32_t)L_154-(int32_t)L_155)), /*hidden argument*/NULL);
		V_1 = L_156;
		int32_t L_157 = V_1;
		if ((!(((uint32_t)L_157) == ((uint32_t)(-1)))))
		{
			goto IL_040a;
		}
	}
	{
		bool L_158 = V_7;
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		String_t* L_159 = ___uriString;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		int32_t L_162 = V_3;
		NullCheck(L_159);
		int32_t L_163 = String_IndexOf_m6808(L_159, ((int32_t)92), L_160, ((int32_t)((int32_t)L_161-(int32_t)L_162)), /*hidden argument*/NULL);
		V_1 = L_163;
	}

IL_040a:
	{
		int32_t L_164 = V_1;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_044b;
		}
	}
	{
		String_t* L_165 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_166 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_167 = String_op_Inequality_m172(NULL /*static, unused*/, L_165, L_166, /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_0446;
		}
	}
	{
		String_t* L_168 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_169 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_170 = String_op_Inequality_m172(NULL /*static, unused*/, L_168, L_169, /*hidden argument*/NULL);
		if (!L_170)
		{
			goto IL_0446;
		}
	}
	{
		__this->___path_5 = _stringLiteral1071;
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		String_t* L_171 = ___uriString;
		int32_t L_172 = V_1;
		int32_t L_173 = V_4;
		int32_t L_174 = V_1;
		NullCheck(L_171);
		String_t* L_175 = String_Substring_m1914(L_171, L_172, ((int32_t)((int32_t)L_173-(int32_t)L_174)), /*hidden argument*/NULL);
		__this->___path_5 = L_175;
		int32_t L_176 = V_1;
		V_4 = L_176;
	}

IL_045f:
	{
		bool L_177 = V_6;
		if (!L_177)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		String_t* L_178 = ___uriString;
		int32_t L_179 = V_3;
		int32_t L_180 = V_4;
		int32_t L_181 = V_3;
		NullCheck(L_178);
		int32_t L_182 = String_IndexOf_m6808(L_178, ((int32_t)64), L_179, ((int32_t)((int32_t)L_180-(int32_t)L_181)), /*hidden argument*/NULL);
		V_1 = L_182;
	}

IL_047b:
	{
		int32_t L_183 = V_1;
		if ((((int32_t)L_183) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		String_t* L_184 = ___uriString;
		int32_t L_185 = V_3;
		int32_t L_186 = V_1;
		int32_t L_187 = V_3;
		NullCheck(L_184);
		String_t* L_188 = String_Substring_m1914(L_184, L_185, ((int32_t)((int32_t)L_186-(int32_t)L_187)), /*hidden argument*/NULL);
		__this->___userinfo_8 = L_188;
		int32_t L_189 = V_1;
		V_3 = ((int32_t)((int32_t)L_189+(int32_t)1));
	}

IL_0496:
	{
		__this->___port_4 = (-1);
		bool L_190 = V_6;
		if (!L_190)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		String_t* L_191 = ___uriString;
		int32_t L_192 = V_4;
		int32_t L_193 = V_4;
		int32_t L_194 = V_3;
		NullCheck(L_191);
		int32_t L_195 = String_LastIndexOf_m6809(L_191, ((int32_t)58), ((int32_t)((int32_t)L_192-(int32_t)1)), ((int32_t)((int32_t)L_193-(int32_t)L_194)), /*hidden argument*/NULL);
		V_1 = L_195;
	}

IL_04bc:
	{
		int32_t L_196 = V_1;
		if ((((int32_t)L_196) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_197 = V_1;
		int32_t L_198 = V_4;
		if ((((int32_t)L_197) == ((int32_t)((int32_t)((int32_t)L_198-(int32_t)1)))))
		{
			goto IL_0566;
		}
	}
	{
		String_t* L_199 = ___uriString;
		int32_t L_200 = V_1;
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		NullCheck(L_199);
		String_t* L_203 = String_Substring_m1914(L_199, ((int32_t)((int32_t)L_200+(int32_t)1)), ((int32_t)((int32_t)L_201-(int32_t)((int32_t)((int32_t)L_202+(int32_t)1)))), /*hidden argument*/NULL);
		V_10 = L_203;
		String_t* L_204 = V_10;
		NullCheck(L_204);
		int32_t L_205 = String_get_Length_m159(L_204, /*hidden argument*/NULL);
		if ((((int32_t)L_205) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_206 = V_10;
		String_t* L_207 = V_10;
		NullCheck(L_207);
		int32_t L_208 = String_get_Length_m159(L_207, /*hidden argument*/NULL);
		NullCheck(L_206);
		uint16_t L_209 = String_get_Chars_m1913(L_206, ((int32_t)((int32_t)L_208-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_209) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_210 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_211 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t* L_212 = &(__this->___port_4);
		bool L_213 = Int32_TryParse_m6750(NULL /*static, unused*/, L_210, 7, L_211, L_212, /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_214 = (__this->___port_4);
		if ((((int32_t)L_214) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_215 = (__this->___port_4);
		if ((((int32_t)L_215) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return _stringLiteral1568;
	}

IL_053c:
	{
		int32_t L_216 = V_1;
		V_4 = L_216;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_217 = (__this->___port_4);
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_0561;
		}
	}
	{
		String_t* L_218 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_219 = Uri_GetDefaultPort_m6614(NULL /*static, unused*/, L_218, /*hidden argument*/NULL);
		__this->___port_4 = L_219;
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_220 = (__this->___port_4);
		if ((!(((uint32_t)L_220) == ((uint32_t)(-1)))))
		{
			goto IL_0583;
		}
	}
	{
		String_t* L_221 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_222 = Uri_GetDefaultPort_m6614(NULL /*static, unused*/, L_221, /*hidden argument*/NULL);
		__this->___port_4 = L_222;
	}

IL_0583:
	{
		String_t* L_223 = ___uriString;
		int32_t L_224 = V_3;
		int32_t L_225 = V_4;
		int32_t L_226 = V_3;
		NullCheck(L_223);
		String_t* L_227 = String_Substring_m1914(L_223, L_224, ((int32_t)((int32_t)L_225-(int32_t)L_226)), /*hidden argument*/NULL);
		___uriString = L_227;
		String_t* L_228 = ___uriString;
		__this->___host_3 = L_228;
		bool L_229 = V_6;
		if (!L_229)
		{
			goto IL_05c7;
		}
	}
	{
		uint16_t L_230 = ((int32_t)47);
		Object_t * L_231 = Box(Char_t355_il2cpp_TypeInfo_var, &L_230);
		String_t* L_232 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_233 = String_Concat_m76(NULL /*static, unused*/, L_231, L_232, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_234 = Uri_Reduce_m6611(NULL /*static, unused*/, L_233, 1, /*hidden argument*/NULL);
		__this->___path_5 = L_234;
		String_t* L_235 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_235;
		goto IL_071c;
	}

IL_05c7:
	{
		String_t* L_236 = (__this->___host_3);
		NullCheck(L_236);
		int32_t L_237 = String_get_Length_m159(L_236, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_237) == ((uint32_t)2))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_238 = (__this->___host_3);
		NullCheck(L_238);
		uint16_t L_239 = String_get_Chars_m1913(L_238, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_239) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_240 = (__this->___host_3);
		String_t* L_241 = (__this->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_242 = String_Concat_m145(NULL /*static, unused*/, L_240, L_241, /*hidden argument*/NULL);
		__this->___path_5 = L_242;
		String_t* L_243 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_243;
		goto IL_071c;
	}

IL_0612:
	{
		bool L_244 = (__this->___isUnixFilePath_0);
		if (!L_244)
		{
			goto IL_063a;
		}
	}
	{
		String_t* L_245 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_246 = String_Concat_m145(NULL /*static, unused*/, _stringLiteral1569, L_245, /*hidden argument*/NULL);
		___uriString = L_246;
		String_t* L_247 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_247;
		goto IL_071c;
	}

IL_063a:
	{
		String_t* L_248 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_249 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_250 = String_op_Equality_m67(NULL /*static, unused*/, L_248, L_249, /*hidden argument*/NULL);
		if (!L_250)
		{
			goto IL_065b;
		}
	}
	{
		__this->___isUnc_9 = 1;
		goto IL_071c;
	}

IL_065b:
	{
		String_t* L_251 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_252 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_253 = String_op_Equality_m67(NULL /*static, unused*/, L_251, L_252, /*hidden argument*/NULL);
		if (!L_253)
		{
			goto IL_069d;
		}
	}
	{
		String_t* L_254 = (__this->___host_3);
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_m159(L_254, /*hidden argument*/NULL);
		if ((((int32_t)L_255) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		String_t* L_256 = (__this->___host_3);
		__this->___path_5 = L_256;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_257 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_3 = L_257;
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		String_t* L_258 = (__this->___host_3);
		NullCheck(L_258);
		int32_t L_259 = String_get_Length_m159(L_258, /*hidden argument*/NULL);
		if (L_259)
		{
			goto IL_071c;
		}
	}
	{
		String_t* L_260 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_261 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_22;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_262 = String_op_Equality_m67(NULL /*static, unused*/, L_260, L_261, /*hidden argument*/NULL);
		if (L_262)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_263 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_264 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_265 = String_op_Equality_m67(NULL /*static, unused*/, L_263, L_264, /*hidden argument*/NULL);
		if (L_265)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_266 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_267 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_268 = String_op_Equality_m67(NULL /*static, unused*/, L_266, L_267, /*hidden argument*/NULL);
		if (L_268)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_269 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_270 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_271 = String_op_Equality_m67(NULL /*static, unused*/, L_269, L_270, /*hidden argument*/NULL);
		if (L_271)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_272 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_273 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_274 = String_op_Equality_m67(NULL /*static, unused*/, L_272, L_273, /*hidden argument*/NULL);
		if (!L_274)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return _stringLiteral1570;
	}

IL_071c:
	{
		String_t* L_275 = (__this->___host_3);
		NullCheck(L_275);
		int32_t L_276 = String_get_Length_m159(L_275, /*hidden argument*/NULL);
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		String_t* L_277 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_278 = Uri_CheckHostName_m6585(NULL /*static, unused*/, L_277, /*hidden argument*/NULL);
		G_B139_0 = ((((int32_t)L_278) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = G_B139_0;
		bool L_279 = V_11;
		if (L_279)
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_280 = (__this->___host_3);
		NullCheck(L_280);
		int32_t L_281 = String_get_Length_m159(L_280, /*hidden argument*/NULL);
		if ((((int32_t)L_281) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_282 = (__this->___host_3);
		NullCheck(L_282);
		uint16_t L_283 = String_get_Chars_m1913(L_282, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_284 = (__this->___host_3);
		String_t* L_285 = (__this->___host_3);
		NullCheck(L_285);
		int32_t L_286 = String_get_Length_m159(L_285, /*hidden argument*/NULL);
		NullCheck(L_284);
		uint16_t L_287 = String_get_Chars_m1913(L_284, ((int32_t)((int32_t)L_286-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_288 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1108_il2cpp_TypeInfo_var);
		bool L_289 = IPv6Address_TryParse_m5684(NULL /*static, unused*/, L_288, (&V_12), /*hidden argument*/NULL);
		if (!L_289)
		{
			goto IL_07be;
		}
	}
	{
		IPv6Address_t1108 * L_290 = V_12;
		NullCheck(L_290);
		String_t* L_291 = IPv6Address_ToString_m5694(L_290, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_292 = String_Concat_m154(NULL /*static, unused*/, _stringLiteral267, L_291, _stringLiteral268, /*hidden argument*/NULL);
		__this->___host_3 = L_292;
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = 1;
	}

IL_07c1:
	{
		bool L_293 = V_11;
		if (!L_293)
		{
			goto IL_07fe;
		}
	}
	{
		UriParser_t1226 * L_294 = Uri_get_Parser_m6617(__this, /*hidden argument*/NULL);
		if (((DefaultUriParser_t1225 *)IsInstClass(L_294, DefaultUriParser_t1225_il2cpp_TypeInfo_var)))
		{
			goto IL_07e3;
		}
	}
	{
		UriParser_t1226 * L_295 = Uri_get_Parser_m6617(__this, /*hidden argument*/NULL);
		if (L_295)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		String_t* L_296 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_297 = String_Concat_m154(NULL /*static, unused*/, _stringLiteral1571, L_296, _stringLiteral274, /*hidden argument*/NULL);
		String_t* L_298 = Locale_GetText_m4941(NULL /*static, unused*/, L_297, /*hidden argument*/NULL);
		return L_298;
	}

IL_07fe:
	{
		V_13 = (UriFormatException_t786 *)NULL;
		UriParser_t1226 * L_299 = Uri_get_Parser_m6617(__this, /*hidden argument*/NULL);
		if (!L_299)
		{
			goto IL_081a;
		}
	}
	{
		UriParser_t1226 * L_300 = Uri_get_Parser_m6617(__this, /*hidden argument*/NULL);
		NullCheck(L_300);
		VirtActionInvoker2< Uri_t711 *, UriFormatException_t786 ** >::Invoke(4 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, L_300, __this, (&V_13));
	}

IL_081a:
	{
		UriFormatException_t786 * L_301 = V_13;
		if (!L_301)
		{
			goto IL_0829;
		}
	}
	{
		UriFormatException_t786 * L_302 = V_13;
		NullCheck(L_302);
		String_t* L_303 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_302);
		return L_303;
	}

IL_0829:
	{
		String_t* L_304 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_305 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_306 = String_op_Inequality_m172(NULL /*static, unused*/, L_304, L_305, /*hidden argument*/NULL);
		if (!L_306)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_307 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_308 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_309 = String_op_Inequality_m172(NULL /*static, unused*/, L_307, L_308, /*hidden argument*/NULL);
		if (!L_309)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_310 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_311 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_312 = String_op_Inequality_m172(NULL /*static, unused*/, L_310, L_311, /*hidden argument*/NULL);
		if (!L_312)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_313 = (__this->___path_5);
		String_t* L_314 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_315 = Uri_CompactEscaped_m6610(NULL /*static, unused*/, L_314, /*hidden argument*/NULL);
		String_t* L_316 = Uri_Reduce_m6611(NULL /*static, unused*/, L_313, L_315, /*hidden argument*/NULL);
		__this->___path_5 = L_316;
	}

IL_0884:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Uri::CompactEscaped(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t202_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1931_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral594;
extern Il2CppCodeGenString* _stringLiteral1282;
extern Il2CppCodeGenString* _stringLiteral1074;
extern Il2CppCodeGenString* _stringLiteral1548;
extern Il2CppCodeGenString* _stringLiteral1549;
extern "C" bool Uri_CompactEscaped_m6610 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Dictionary_2_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		Dictionary_2__ctor_m1931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		_stringLiteral594 = il2cpp_codegen_string_literal_from_index(594);
		_stringLiteral1282 = il2cpp_codegen_string_literal_from_index(1282);
		_stringLiteral1074 = il2cpp_codegen_string_literal_from_index(1074);
		_stringLiteral1548 = il2cpp_codegen_string_literal_from_index(1548);
		_stringLiteral1549 = il2cpp_codegen_string_literal_from_index(1549);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t202 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_2 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_34;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t202 * L_3 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t202 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral594, 0);
		Dictionary_2_t202 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral1282, 0);
		Dictionary_2_t202 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral1074, 0);
		Dictionary_2_t202 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral1548, 0);
		Dictionary_2_t202 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral1549, 0);
		Dictionary_2_t202 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_34 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_10 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_34;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return 1;
	}

IL_007a:
	{
		return 0;
	}
}
// System.String System.Uri::Reduce(System.String,System.Boolean)
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t29_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t38_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1071;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral1553;
extern "C" String_t* Uri_Reduce_m6611 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringBuilder_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		ArrayList_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		IEnumerator_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		IDisposable_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral1071 = il2cpp_codegen_string_literal_from_index(1071);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral1553 = il2cpp_codegen_string_literal_from_index(1553);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t320 * V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	ArrayList_t695 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = {0};
	int32_t V_9 = 0;
	bool V_10 = false;
	String_t* V_11 = {0};
	Object_t * V_12 = {0};
	uint16_t V_13 = 0x0;
	Object_t * V_14 = {0};
	Exception_t33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m67(NULL /*static, unused*/, L_0, _stringLiteral1071, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_0012:
	{
		StringBuilder_t320 * L_3 = (StringBuilder_t320 *)il2cpp_codegen_object_new (StringBuilder_t320_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1551(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = ___compact_escaped;
		if (!L_4)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		String_t* L_5 = ___path;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m1913(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		uint16_t L_8 = V_2;
		V_13 = L_8;
		uint16_t L_9 = V_13;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		uint16_t L_10 = V_13;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		StringBuilder_t320 * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m3837(L_11, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___path;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m159(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)((int32_t)L_14-(int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_15 = ___path;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m1913(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_17;
		String_t* L_18 = ___path;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m1913(L_18, ((int32_t)((int32_t)L_19+(int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t355_il2cpp_TypeInfo_var);
		uint16_t L_21 = Char_ToUpper_m1964(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		uint16_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_008e;
		}
	}
	{
		uint16_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		uint16_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint16_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		StringBuilder_t320 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m3837(L_26, ((int32_t)47), /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)2));
		goto IL_00b9;
	}

IL_00b1:
	{
		StringBuilder_t320 * L_28 = V_0;
		uint16_t L_29 = V_2;
		NullCheck(L_28);
		StringBuilder_Append_m3837(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t320 * L_30 = V_0;
		uint16_t L_31 = V_2;
		NullCheck(L_30);
		StringBuilder_Append_m3837(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		StringBuilder_t320 * L_32 = V_0;
		uint16_t L_33 = V_2;
		NullCheck(L_32);
		StringBuilder_Append_m3837(L_32, L_33, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_1;
		String_t* L_36 = ___path;
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m159(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t320 * L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = StringBuilder_ToString_m1554(L_38, /*hidden argument*/NULL);
		___path = L_39;
		goto IL_0101;
	}

IL_00f5:
	{
		String_t* L_40 = ___path;
		NullCheck(L_40);
		String_t* L_41 = String_Replace_m3137(L_40, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		___path = L_41;
	}

IL_0101:
	{
		ArrayList_t695 * L_42 = (ArrayList_t695 *)il2cpp_codegen_object_new (ArrayList_t695_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3815(L_42, /*hidden argument*/NULL);
		V_5 = L_42;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		String_t* L_43 = ___path;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = String_IndexOf_m3096(L_43, ((int32_t)47), L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_47 = ___path;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m159(L_47, /*hidden argument*/NULL);
		V_7 = L_48;
	}

IL_012c:
	{
		String_t* L_49 = ___path;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		NullCheck(L_49);
		String_t* L_53 = String_Substring_m1914(L_49, L_50, ((int32_t)((int32_t)L_51-(int32_t)L_52)), /*hidden argument*/NULL);
		V_8 = L_53;
		int32_t L_54 = V_7;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)1));
		String_t* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m159(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_015e;
		}
	}
	{
		String_t* L_57 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m67(NULL /*static, unused*/, L_57, _stringLiteral129, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		String_t* L_59 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_60 = String_op_Equality_m67(NULL /*static, unused*/, L_59, _stringLiteral1553, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0199;
		}
	}
	{
		ArrayList_t695 * L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_61);
		V_9 = L_62;
		int32_t L_63 = V_9;
		if (L_63)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		ArrayList_t695 * L_64 = V_5;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		VirtActionInvoker1< int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_64, ((int32_t)((int32_t)L_65-(int32_t)1)));
		goto IL_01a3;
	}

IL_0199:
	{
		ArrayList_t695 * L_66 = V_5;
		String_t* L_67 = V_8;
		NullCheck(L_66);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_66, L_67);
	}

IL_01a3:
	{
		int32_t L_68 = V_6;
		String_t* L_69 = ___path;
		NullCheck(L_69);
		int32_t L_70 = String_get_Length_m159(L_69, /*hidden argument*/NULL);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t695 * L_71 = V_5;
		NullCheck(L_71);
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_71);
		if (L_72)
		{
			goto IL_01c2;
		}
	}
	{
		return _stringLiteral1071;
	}

IL_01c2:
	{
		StringBuilder_t320 * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_set_Length_m3838(L_73, 0, /*hidden argument*/NULL);
		String_t* L_74 = ___path;
		NullCheck(L_74);
		uint16_t L_75 = String_get_Chars_m1913(L_74, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01e0;
		}
	}
	{
		StringBuilder_t320 * L_76 = V_0;
		NullCheck(L_76);
		StringBuilder_Append_m3837(L_76, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_01e0:
	{
		V_10 = 1;
		ArrayList_t695 * L_77 = V_5;
		NullCheck(L_77);
		Object_t * L_78 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_77);
		V_12 = L_78;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			Object_t * L_79 = V_12;
			NullCheck(L_79);
			Object_t * L_80 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_79);
			V_11 = ((String_t*)CastclassSealed(L_80, String_t_il2cpp_TypeInfo_var));
			bool L_81 = V_10;
			if (!L_81)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = 0;
			goto IL_0217;
		}

IL_020e:
		{
			StringBuilder_t320 * L_82 = V_0;
			NullCheck(L_82);
			StringBuilder_Append_m3837(L_82, ((int32_t)47), /*hidden argument*/NULL);
		}

IL_0217:
		{
			StringBuilder_t320 * L_83 = V_0;
			String_t* L_84 = V_11;
			NullCheck(L_83);
			StringBuilder_Append_m3134(L_83, L_84, /*hidden argument*/NULL);
		}

IL_0220:
		{
			Object_t * L_85 = V_12;
			NullCheck(L_85);
			bool L_86 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_85);
			if (L_86)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t33 *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			Object_t * L_87 = V_12;
			V_14 = ((Object_t *)IsInst(L_87, IDisposable_t38_il2cpp_TypeInfo_var));
			Object_t * L_88 = V_14;
			if (L_88)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			Object_t * L_89 = V_14;
			NullCheck(L_89);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t38_il2cpp_TypeInfo_var, L_89);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t33 *)
	}

IL_0247:
	{
		String_t* L_90 = ___path;
		NullCheck(L_90);
		bool L_91 = String_EndsWith_m3135(L_90, _stringLiteral1071, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_0260;
		}
	}
	{
		StringBuilder_t320 * L_92 = V_0;
		NullCheck(L_92);
		StringBuilder_Append_m3837(L_92, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0260:
	{
		StringBuilder_t320 * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = StringBuilder_ToString_m1554(L_93, /*hidden argument*/NULL);
		return L_94;
	}
}
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t444_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1497;
extern Il2CppCodeGenString* _stringLiteral428;
extern "C" uint16_t Uri_HexUnescapeMultiByte_m6612 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		ByteU5BU5D_t444_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		_stringLiteral1497 = il2cpp_codegen_string_literal_from_index(1497);
		_stringLiteral428 = il2cpp_codegen_string_literal_from_index(428);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t444* V_5 = {0};
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		uint16_t* L_0 = ___surrogate;
		*((int16_t*)(L_0)) = (int16_t)0;
		String_t* L_1 = ___pattern;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t373 * L_2 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2066(L_2, _stringLiteral1497, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0014:
	{
		int32_t* L_3 = ___index;
		if ((((int32_t)(*((int32_t*)L_3))) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = ___index;
		String_t* L_5 = ___pattern;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m159(L_5, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_4))) < ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentOutOfRangeException_t790 * L_7 = (ArgumentOutOfRangeException_t790 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3841(L_7, _stringLiteral428, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0034:
	{
		String_t* L_8 = ___pattern;
		int32_t* L_9 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_10 = Uri_IsHexEncoding_m6597(NULL /*static, unused*/, L_8, (*((int32_t*)L_9)), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_11 = ___pattern;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_13;
		NullCheck(L_11);
		uint16_t L_16 = String_get_Chars_m1913(L_11, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0053:
	{
		int32_t* L_17 = ___index;
		int32_t* L_18 = ___index;
		int32_t L_19 = (*((int32_t*)L_18));
		V_13 = L_19;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_13;
		V_0 = L_20;
		String_t* L_21 = ___pattern;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_13 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_13;
		NullCheck(L_21);
		uint16_t L_26 = String_get_Chars_m1913(L_21, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_27 = Uri_FromHex_m6594(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		String_t* L_28 = ___pattern;
		int32_t* L_29 = ___index;
		int32_t* L_30 = ___index;
		int32_t L_31 = (*((int32_t*)L_30));
		V_13 = L_31;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_13;
		NullCheck(L_28);
		uint16_t L_33 = String_get_Chars_m1913(L_28, L_32, /*hidden argument*/NULL);
		int32_t L_34 = Uri_FromHex_m6594(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = V_1;
		V_3 = L_35;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37<<(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_38 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40<<(int32_t)4))|(int32_t)L_41))));
	}

IL_00b9:
	{
		int32_t L_42 = V_4;
		V_5 = ((ByteU5BU5D_t444*)SZArrayNew(ByteU5BU5D_t444_il2cpp_TypeInfo_var, L_42));
		V_6 = 0;
		ByteU5BU5D_t444* L_43 = V_5;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 0, sizeof(uint8_t))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44<<(int32_t)4))|(int32_t)L_45))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		String_t* L_46 = ___pattern;
		int32_t* L_47 = ___index;
		int32_t* L_48 = ___index;
		int32_t L_49 = (*((int32_t*)L_48));
		V_13 = L_49;
		*((int32_t*)(L_47)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		int32_t L_50 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_51 = Uri_IsHexEncoding_m6597(NULL /*static, unused*/, L_46, L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_00f5:
	{
		String_t* L_52 = ___pattern;
		int32_t* L_53 = ___index;
		int32_t* L_54 = ___index;
		int32_t L_55 = (*((int32_t*)L_54));
		V_13 = L_55;
		*((int32_t*)(L_53)) = (int32_t)((int32_t)((int32_t)L_55+(int32_t)1));
		int32_t L_56 = V_13;
		NullCheck(L_52);
		uint16_t L_57 = String_get_Chars_m1913(L_52, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_58 = Uri_FromHex_m6594(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		V_8 = L_58;
		int32_t L_59 = V_8;
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_0120:
	{
		String_t* L_60 = ___pattern;
		int32_t* L_61 = ___index;
		int32_t* L_62 = ___index;
		int32_t L_63 = (*((int32_t*)L_62));
		V_13 = L_63;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)((int32_t)L_63+(int32_t)1));
		int32_t L_64 = V_13;
		NullCheck(L_60);
		uint16_t L_65 = String_get_Chars_m1913(L_60, L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_66 = Uri_FromHex_m6594(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		V_9 = L_66;
		ByteU5BU5D_t444* L_67 = V_5;
		int32_t L_68 = V_7;
		int32_t L_69 = V_8;
		int32_t L_70 = V_9;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_68, sizeof(uint8_t))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)4))|(int32_t)L_70))));
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = V_4;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_0166;
		}
	}
	{
		int32_t* L_75 = ___index;
		int32_t L_76 = V_0;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_76+(int32_t)3));
		ByteU5BU5D_t444* L_77 = V_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 0);
		int32_t L_78 = 0;
		return (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_78, sizeof(uint8_t)))));
	}

IL_0166:
	{
		V_10 = ((int32_t)255);
		uint8_t L_79 = V_10;
		int32_t L_80 = V_4;
		V_10 = (((uint8_t)((int32_t)((int32_t)L_79>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80+(int32_t)1))&(int32_t)((int32_t)31)))))));
		ByteU5BU5D_t444* L_81 = V_5;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 0);
		int32_t L_82 = 0;
		uint8_t L_83 = V_10;
		V_11 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_82, sizeof(uint8_t)))&(int32_t)L_83));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		int32_t L_84 = V_11;
		V_11 = ((int32_t)((int32_t)L_84<<(int32_t)6));
		int32_t L_85 = V_11;
		ByteU5BU5D_t444* L_86 = V_5;
		int32_t L_87 = V_12;
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, L_87);
		int32_t L_88 = L_87;
		V_11 = ((int32_t)((int32_t)L_85|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_86, L_88, sizeof(uint8_t)))&(int32_t)((int32_t)63)))));
		int32_t L_89 = V_12;
		V_12 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_01a4:
	{
		int32_t L_90 = V_12;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_92 = V_11;
		if ((((int32_t)L_92) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_93 = V_11;
		return (((uint16_t)L_93));
	}

IL_01bd:
	{
		int32_t L_94 = V_11;
		V_11 = ((int32_t)((int32_t)L_94-(int32_t)((int32_t)65536)));
		uint16_t* L_95 = ___surrogate;
		int32_t L_96 = V_11;
		*((int16_t*)(L_95)) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_96&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320)))));
		int32_t L_97 = V_11;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_97>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296)))));
	}
}
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_GetSchemeDelimiter_m6613 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1229* L_0 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___schemes_29;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		String_t* L_2 = (((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_0, L_1, sizeof(UriScheme_t1228 )))->___scheme_0);
		String_t* L_3 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m67(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1229* L_5 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___schemes_29;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		String_t* L_7 = (((UriScheme_t1228 *)(UriScheme_t1228 *)SZArrayLdElema(L_5, L_6, sizeof(UriScheme_t1228 )))->___delimiter_1);
		return L_7;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1229* L_10 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___schemes_29;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_18;
		return L_11;
	}
}
// System.Int32 System.Uri::GetDefaultPort(System.String)
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern TypeInfo* UriParser_t1226_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetDefaultPort_m6614 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(864);
		s_Il2CppMethodIntialized = true;
	}
	UriParser_t1226 * V_0 = {0};
	{
		String_t* L_0 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
		UriParser_t1226 * L_1 = UriParser_GetParser_m6636(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UriParser_t1226 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		UriParser_t1226 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = UriParser_get_DefaultPort_m6632(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral275;
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m6615 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		_stringLiteral275 = il2cpp_codegen_string_literal_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isOpaquePart_10);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteral275;
	}

IL_0011:
	{
		String_t* L_1 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_2 = Uri_GetSchemeDelimiter_m6613(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t202_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1931_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1282;
extern Il2CppCodeGenString* _stringLiteral1074;
extern Il2CppCodeGenString* _stringLiteral594;
extern Il2CppCodeGenString* _stringLiteral1394;
extern Il2CppCodeGenString* _stringLiteral1547;
extern Il2CppCodeGenString* _stringLiteral1544;
extern Il2CppCodeGenString* _stringLiteral1545;
extern Il2CppCodeGenString* _stringLiteral1546;
extern Il2CppCodeGenString* _stringLiteral1548;
extern Il2CppCodeGenString* _stringLiteral1549;
extern "C" bool Uri_IsPredefinedScheme_m6616 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Dictionary_2_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		Dictionary_2__ctor_m1931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		_stringLiteral1282 = il2cpp_codegen_string_literal_from_index(1282);
		_stringLiteral1074 = il2cpp_codegen_string_literal_from_index(1074);
		_stringLiteral594 = il2cpp_codegen_string_literal_from_index(594);
		_stringLiteral1394 = il2cpp_codegen_string_literal_from_index(1394);
		_stringLiteral1547 = il2cpp_codegen_string_literal_from_index(1547);
		_stringLiteral1544 = il2cpp_codegen_string_literal_from_index(1544);
		_stringLiteral1545 = il2cpp_codegen_string_literal_from_index(1545);
		_stringLiteral1546 = il2cpp_codegen_string_literal_from_index(1546);
		_stringLiteral1548 = il2cpp_codegen_string_literal_from_index(1548);
		_stringLiteral1549 = il2cpp_codegen_string_literal_from_index(1549);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t202 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_2 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_35;
		if (L_2)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_t202 * L_3 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_3, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t202 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral1282, 0);
		Dictionary_2_t202 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral1074, 0);
		Dictionary_2_t202 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral594, 0);
		Dictionary_2_t202 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral1394, 0);
		Dictionary_2_t202 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral1547, 0);
		Dictionary_2_t202 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, _stringLiteral1544, 0);
		Dictionary_2_t202 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, _stringLiteral1545, 0);
		Dictionary_2_t202 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, _stringLiteral1546, 0);
		Dictionary_2_t202 * L_12 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, _stringLiteral1548, 0);
		Dictionary_2_t202 * L_13 = V_1;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, _stringLiteral1549, 0);
		Dictionary_2_t202 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_35 = L_14;
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_15 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_35;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return 1;
	}

IL_00b7:
	{
		return 0;
	}
}
// System.UriParser System.Uri::get_Parser()
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
extern TypeInfo* UriParser_t1226_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1225_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1572;
extern "C" UriParser_t1226 * Uri_get_Parser_m6617 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(864);
		DefaultUriParser_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(868);
		_stringLiteral1572 = il2cpp_codegen_string_literal_from_index(1572);
		s_Il2CppMethodIntialized = true;
	}
	{
		UriParser_t1226 * L_0 = (__this->___parser_30);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_1 = Uri_get_Scheme_m3886(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
		UriParser_t1226 * L_2 = UriParser_GetParser_m6636(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___parser_30 = L_2;
		UriParser_t1226 * L_3 = (__this->___parser_30);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		DefaultUriParser_t1225 * L_4 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6568(L_4, _stringLiteral1572, /*hidden argument*/NULL);
		__this->___parser_30 = L_4;
	}

IL_0037:
	{
		UriParser_t1226 * L_5 = (__this->___parser_30);
		return L_5;
	}
}
// System.String System.Uri::UnescapeDataString(System.String)
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t320_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t603_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t52_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1573;
extern "C" String_t* Uri_UnescapeDataString_m6618 (Object_t * __this /* static, unused */, String_t* ___stringToUnescape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		StringBuilder_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		MemoryStream_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		Encoding_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		_stringLiteral1573 = il2cpp_codegen_string_literal_from_index(1573);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t320 * V_0 = {0};
	int64_t V_1 = 0;
	MemoryStream_t603 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___stringToUnescape;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t617 * L_1 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_1, _stringLiteral1573, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___stringToUnescape;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m1967(L_2, ((int32_t)37), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___stringToUnescape;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m1967(L_4, ((int32_t)43), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = ___stringToUnescape;
		return L_6;
	}

IL_002f:
	{
		StringBuilder_t320 * L_7 = (StringBuilder_t320 *)il2cpp_codegen_object_new (StringBuilder_t320_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1551(L_7, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = ___stringToUnescape;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m159(L_8, /*hidden argument*/NULL);
		V_1 = (((int64_t)L_9));
		MemoryStream_t603 * L_10 = (MemoryStream_t603 *)il2cpp_codegen_object_new (MemoryStream_t603_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3839(L_10, /*hidden argument*/NULL);
		V_2 = L_10;
		V_4 = 0;
		goto IL_015e;
	}

IL_004b:
	{
		String_t* L_11 = ___stringToUnescape;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		uint16_t L_13 = String_get_Chars_m1913(L_11, L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_14 = V_4;
		int64_t L_15 = V_1;
		if ((((int64_t)(((int64_t)((int32_t)((int32_t)L_14+(int32_t)2))))) >= ((int64_t)L_15)))
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_16 = ___stringToUnescape;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		uint16_t L_18 = String_get_Chars_m1913(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)37))))
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_19 = ___stringToUnescape;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint16_t L_21 = String_get_Chars_m1913(L_19, ((int32_t)((int32_t)L_20+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_22 = V_4;
		int64_t L_23 = V_1;
		if ((((int64_t)(((int64_t)((int32_t)((int32_t)L_22+(int32_t)5))))) >= ((int64_t)L_23)))
		{
			goto IL_00ee;
		}
	}
	{
		MemoryStream_t603 * L_24 = V_2;
		NullCheck(L_24);
		int64_t L_25 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_24);
		if ((((int64_t)L_25) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_00b9;
		}
	}
	{
		StringBuilder_t320 * L_26 = V_0;
		MemoryStream_t603 * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_28 = Encoding_get_UTF8_m3100(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		CharU5BU5D_t60* L_29 = Uri_GetChars_m6621(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m6810(L_26, L_29, /*hidden argument*/NULL);
		MemoryStream_t603 * L_30 = V_2;
		NullCheck(L_30);
		VirtActionInvoker1< int64_t >::Invoke(19 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_30, (((int64_t)0)));
	}

IL_00b9:
	{
		String_t* L_31 = ___stringToUnescape;
		int32_t L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_GetChar_m6620(NULL /*static, unused*/, L_31, ((int32_t)((int32_t)L_32+(int32_t)2)), 4, /*hidden argument*/NULL);
		V_3 = L_33;
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e0;
		}
	}
	{
		StringBuilder_t320 * L_35 = V_0;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		StringBuilder_Append_m3837(L_35, (((uint16_t)L_36)), /*hidden argument*/NULL);
		int32_t L_37 = V_4;
		V_4 = ((int32_t)((int32_t)L_37+(int32_t)5));
		goto IL_00e9;
	}

IL_00e0:
	{
		StringBuilder_t320 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m3837(L_38, ((int32_t)37), /*hidden argument*/NULL);
	}

IL_00e9:
	{
		goto IL_011d;
	}

IL_00ee:
	{
		String_t* L_39 = ___stringToUnescape;
		int32_t L_40 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_41 = Uri_GetChar_m6620(NULL /*static, unused*/, L_39, ((int32_t)((int32_t)L_40+(int32_t)1)), 2, /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		V_3 = L_42;
		if ((((int32_t)L_42) == ((int32_t)(-1))))
		{
			goto IL_0114;
		}
	}
	{
		MemoryStream_t603 * L_43 = V_2;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_43, (((uint8_t)L_44)));
		int32_t L_45 = V_4;
		V_4 = ((int32_t)((int32_t)L_45+(int32_t)2));
		goto IL_011d;
	}

IL_0114:
	{
		StringBuilder_t320 * L_46 = V_0;
		NullCheck(L_46);
		StringBuilder_Append_m3837(L_46, ((int32_t)37), /*hidden argument*/NULL);
	}

IL_011d:
	{
		goto IL_0158;
	}

IL_0122:
	{
		MemoryStream_t603 * L_47 = V_2;
		NullCheck(L_47);
		int64_t L_48 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_47);
		if ((((int64_t)L_48) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0149;
		}
	}
	{
		StringBuilder_t320 * L_49 = V_0;
		MemoryStream_t603 * L_50 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_51 = Encoding_get_UTF8_m3100(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		CharU5BU5D_t60* L_52 = Uri_GetChars_m6621(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_49);
		StringBuilder_Append_m6810(L_49, L_52, /*hidden argument*/NULL);
		MemoryStream_t603 * L_53 = V_2;
		NullCheck(L_53);
		VirtActionInvoker1< int64_t >::Invoke(19 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_53, (((int64_t)0)));
	}

IL_0149:
	{
		StringBuilder_t320 * L_54 = V_0;
		String_t* L_55 = ___stringToUnescape;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		uint16_t L_57 = String_get_Chars_m1913(L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		StringBuilder_Append_m3837(L_54, L_57, /*hidden argument*/NULL);
	}

IL_0158:
	{
		int32_t L_58 = V_4;
		V_4 = ((int32_t)((int32_t)L_58+(int32_t)1));
	}

IL_015e:
	{
		int32_t L_59 = V_4;
		int64_t L_60 = V_1;
		if ((((int64_t)(((int64_t)L_59))) < ((int64_t)L_60)))
		{
			goto IL_004b;
		}
	}
	{
		MemoryStream_t603 * L_61 = V_2;
		NullCheck(L_61);
		int64_t L_62 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_61);
		if ((((int64_t)L_62) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0186;
		}
	}
	{
		StringBuilder_t320 * L_63 = V_0;
		MemoryStream_t603 * L_64 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_65 = Encoding_get_UTF8_m3100(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		CharU5BU5D_t60* L_66 = Uri_GetChars_m6621(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		StringBuilder_Append_m6810(L_63, L_66, /*hidden argument*/NULL);
	}

IL_0186:
	{
		V_2 = (MemoryStream_t603 *)NULL;
		StringBuilder_t320 * L_67 = V_0;
		NullCheck(L_67);
		String_t* L_68 = StringBuilder_ToString_m1554(L_67, /*hidden argument*/NULL);
		return L_68;
	}
}
// System.Int32 System.Uri::GetInt(System.Byte)
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" int32_t Uri_GetInt_m6619 (Object_t * __this /* static, unused */, uint8_t ___b, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		uint8_t L_0 = ___b;
		V_0 = (((uint16_t)L_0));
		uint16_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)48))))
		{
			goto IL_0018;
		}
	}
	{
		uint16_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)57))))
		{
			goto IL_0018;
		}
	}
	{
		uint16_t L_3 = V_0;
		return ((int32_t)((int32_t)L_3-(int32_t)((int32_t)48)));
	}

IL_0018:
	{
		uint16_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)102))))
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_0030:
	{
		uint16_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)65))))
		{
			goto IL_0048;
		}
	}
	{
		uint16_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)70))))
		{
			goto IL_0048;
		}
	}
	{
		uint16_t L_9 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_9-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0048:
	{
		return (-1);
	}
}
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetChar_m6620 (Object_t * __this /* static, unused */, String_t* ___str, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___length;
		int32_t L_1 = ___offset;
		V_1 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___offset;
		V_2 = L_2;
		goto IL_003d;
	}

IL_000d:
	{
		String_t* L_3 = ___str;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m1913(L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		uint16_t L_6 = V_3;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)127))))
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}

IL_001f:
	{
		uint16_t L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		int32_t L_8 = Uri_GetInt_m6619(NULL /*static, unused*/, (((uint8_t)L_7)), /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = V_4;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_4;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_10<<(int32_t)4))+(int32_t)L_11));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern "C" CharU5BU5D_t60* Uri_GetChars_m6621 (Object_t * __this /* static, unused */, MemoryStream_t603 * ___b, Encoding_t52 * ___e, const MethodInfo* method)
{
	{
		Encoding_t52 * L_0 = ___e;
		MemoryStream_t603 * L_1 = ___b;
		NullCheck(L_1);
		ByteU5BU5D_t444* L_2 = (ByteU5BU5D_t444*)VirtFuncInvoker0< ByteU5BU5D_t444* >::Invoke(27 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_1);
		MemoryStream_t603 * L_3 = ___b;
		NullCheck(L_3);
		int64_t L_4 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_3);
		NullCheck(L_0);
		CharU5BU5D_t60* L_5 = (CharU5BU5D_t60*)VirtFuncInvoker3< CharU5BU5D_t60*, ByteU5BU5D_t444*, int32_t, int32_t >::Invoke(14 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32) */, L_0, L_2, 0, (((int32_t)L_4)));
		return L_5;
	}
}
// System.Void System.Uri::EnsureAbsoluteUri()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t785_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1574;
extern "C" void Uri_EnsureAbsoluteUri_m6622 (Uri_t711 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		_stringLiteral1574 = il2cpp_codegen_string_literal_from_index(1574);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Uri_get_IsAbsoluteUri_m3884(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t785 * L_1 = (InvalidOperationException_t785 *)il2cpp_codegen_object_new (InvalidOperationException_t785_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3826(L_1, _stringLiteral1574, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" bool Uri_op_Equality_m3871 (Object_t * __this /* static, unused */, Uri_t711 * ___u1, Uri_t711 * ___u2, const MethodInfo* method)
{
	{
		Uri_t711 * L_0 = ___u1;
		Uri_t711 * L_1 = ___u2;
		bool L_2 = Object_Equals_m6811(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern "C" bool Uri_op_Inequality_m3828 (Object_t * __this /* static, unused */, Uri_t711 * ___u1, Uri_t711 * ___u2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t711 * L_0 = ___u1;
		Uri_t711 * L_1 = ___u2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_2 = Uri_op_Equality_m3871(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Void System.UriFormatException::.ctor()
// Locale
#include "System_LocaleMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral1575;
extern "C" void UriFormatException__ctor_m6623 (UriFormatException_t786 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1575 = il2cpp_codegen_string_literal_from_index(1575);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m4941(NULL /*static, unused*/, _stringLiteral1575, /*hidden argument*/NULL);
		FormatException__ctor_m4836(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void UriFormatException__ctor_m6624 (UriFormatException_t786 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		FormatException__ctor_m4836(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void UriFormatException__ctor_m6625 (UriFormatException_t786 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t587 * L_0 = ___info;
		StreamingContext_t588  L_1 = ___context;
		FormatException__ctor_m6709(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern "C" void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m6626 (UriFormatException_t786 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t587 * L_0 = ___info;
		StreamingContext_t588  L_1 = ___context;
		Exception_GetObjectData_m3850(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Void System.UriParser::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void UriParser__ctor_m6627 (UriParser_t1226 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriParser_t1226_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t616_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1576;
extern Il2CppCodeGenString* _stringLiteral1577;
extern "C" void UriParser__cctor_m6628 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		UriParser_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(864);
		Regex_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(376);
		_stringLiteral1576 = il2cpp_codegen_string_literal_from_index(1576);
		_stringLiteral1577 = il2cpp_codegen_string_literal_from_index(1577);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m142(L_0, /*hidden argument*/NULL);
		((UriParser_t1226_StaticFields*)UriParser_t1226_il2cpp_TypeInfo_var->static_fields)->___lock_object_0 = L_0;
		Regex_t616 * L_1 = (Regex_t616 *)il2cpp_codegen_object_new (Regex_t616_il2cpp_TypeInfo_var);
		Regex__ctor_m4934(L_1, _stringLiteral1576, /*hidden argument*/NULL);
		((UriParser_t1226_StaticFields*)UriParser_t1226_il2cpp_TypeInfo_var->static_fields)->___uri_regex_4 = L_1;
		Regex_t616 * L_2 = (Regex_t616 *)il2cpp_codegen_object_new (Regex_t616_il2cpp_TypeInfo_var);
		Regex__ctor_m4934(L_2, _stringLiteral1577, /*hidden argument*/NULL);
		((UriParser_t1226_StaticFields*)UriParser_t1226_il2cpp_TypeInfo_var->static_fields)->___auth_regex_5 = L_2;
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
// System.Uri
#include "System_System_Uri.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t786_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1572;
extern Il2CppCodeGenString* _stringLiteral1578;
extern "C" void UriParser_InitializeAndValidate_m6629 (UriParser_t1226 * __this, Uri_t711 * ___uri, UriFormatException_t786 ** ___parsingError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		UriFormatException_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		_stringLiteral1572 = il2cpp_codegen_string_literal_from_index(1572);
		_stringLiteral1578 = il2cpp_codegen_string_literal_from_index(1578);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t711 * L_0 = ___uri;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m3886(L_0, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m172(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m172(NULL /*static, unused*/, L_4, _stringLiteral1572, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t786 ** L_6 = ___parsingError;
		UriFormatException_t786 * L_7 = (UriFormatException_t786 *)il2cpp_codegen_object_new (UriFormatException_t786_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m6624(L_7, _stringLiteral1578, /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_7;
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t786 ** L_8 = ___parsingError;
		*((Object_t **)(L_8)) = (Object_t *)NULL;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UriParser_OnRegister_m6630 (UriParser_t1226 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" void UriParser_set_SchemeName_m6631 (UriParser_t1226 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___scheme_name_2 = L_0;
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" int32_t UriParser_get_DefaultPort_m6632 (UriParser_t1226 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___default_port_3);
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" void UriParser_set_DefaultPort_m6633 (UriParser_t1226 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___default_port_3 = L_0;
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern TypeInfo* UriParser_t1226_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t53_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1225_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1579;
extern "C" void UriParser_CreateDefaults_m6634 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(864);
		Hashtable_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		DefaultUriParser_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(868);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		_stringLiteral1579 = il2cpp_codegen_string_literal_from_index(1579);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t53 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
		Hashtable_t53 * L_0 = ((UriParser_t1226_StaticFields*)UriParser_t1226_il2cpp_TypeInfo_var->static_fields)->___table_1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_t53 * L_1 = (Hashtable_t53 *)il2cpp_codegen_object_new (Hashtable_t53_il2cpp_TypeInfo_var);
		Hashtable__ctor_m157(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t53 * L_2 = V_0;
		DefaultUriParser_t1225 * L_3 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_19;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_t53 * L_5 = V_0;
		DefaultUriParser_t1225 * L_6 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_20;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_t53 * L_8 = V_0;
		DefaultUriParser_t1225 * L_9 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_21;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_t53 * L_11 = V_0;
		DefaultUriParser_t1225 * L_12 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_22;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_t53 * L_14 = V_0;
		DefaultUriParser_t1225 * L_15 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_23;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_t53 * L_17 = V_0;
		DefaultUriParser_t1225 * L_18 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_24;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_t53 * L_20 = V_0;
		DefaultUriParser_t1225 * L_21 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetPipe_27;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_t53 * L_23 = V_0;
		DefaultUriParser_t1225 * L_24 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetTcp_28;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_t53 * L_26 = V_0;
		DefaultUriParser_t1225 * L_27 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_25;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t53 * L_29 = V_0;
		DefaultUriParser_t1225 * L_30 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_t711_StaticFields*)Uri_t711_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_26;
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t53 * L_32 = V_0;
		DefaultUriParser_t1225 * L_33 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m6635(NULL /*static, unused*/, L_32, L_33, _stringLiteral1579, ((int32_t)389), /*hidden argument*/NULL);
		Object_t * L_34 = ((UriParser_t1226_StaticFields*)UriParser_t1226_il2cpp_TypeInfo_var->static_fields)->___lock_object_0;
		V_1 = L_34;
		Object_t * L_35 = V_1;
		Monitor_Enter_m4899(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
			Hashtable_t53 * L_36 = ((UriParser_t1226_StaticFields*)UriParser_t1226_il2cpp_TypeInfo_var->static_fields)->___table_1;
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t53 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
			((UriParser_t1226_StaticFields*)UriParser_t1226_il2cpp_TypeInfo_var->static_fields)->___table_1 = L_37;
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t53 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t33 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Object_t * L_38 = V_1;
		Monitor_Exit_m4901(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t33 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.UriParser
#include "System_System_UriParser.h"
extern TypeInfo* GenericUriParser_t1227_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1225_il2cpp_TypeInfo_var;
extern "C" void UriParser_InternalRegister_m6635 (Object_t * __this /* static, unused */, Hashtable_t53 * ___table, UriParser_t1226 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericUriParser_t1227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(869);
		DefaultUriParser_t1225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	DefaultUriParser_t1225 * V_0 = {0};
	{
		UriParser_t1226 * L_0 = ___uriParser;
		String_t* L_1 = ___schemeName;
		NullCheck(L_0);
		UriParser_set_SchemeName_m6631(L_0, L_1, /*hidden argument*/NULL);
		UriParser_t1226 * L_2 = ___uriParser;
		int32_t L_3 = ___defaultPort;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m6633(L_2, L_3, /*hidden argument*/NULL);
		UriParser_t1226 * L_4 = ___uriParser;
		if (!((GenericUriParser_t1227 *)IsInstClass(L_4, GenericUriParser_t1227_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t53 * L_5 = ___table;
		String_t* L_6 = ___schemeName;
		UriParser_t1226 * L_7 = ___uriParser;
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t1225 * L_8 = (DefaultUriParser_t1225 *)il2cpp_codegen_object_new (DefaultUriParser_t1225_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m6567(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t1225 * L_9 = V_0;
		String_t* L_10 = ___schemeName;
		NullCheck(L_9);
		UriParser_set_SchemeName_m6631(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t1225 * L_11 = V_0;
		int32_t L_12 = ___defaultPort;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m6633(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t53 * L_13 = ___table;
		String_t* L_14 = ___schemeName;
		DefaultUriParser_t1225 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t1226 * L_16 = ___uriParser;
		String_t* L_17 = ___schemeName;
		int32_t L_18 = ___defaultPort;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern TypeInfo* UriParser_t1226_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern "C" UriParser_t1226 * UriParser_GetParser_m6636 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(864);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___schemeName;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t1226 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1226_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m6634(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___schemeName;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_2 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m3876(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t53 * L_4 = ((UriParser_t1226_StaticFields*)UriParser_t1226_il2cpp_TypeInfo_var->static_fields)->___table_1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_t1226 *)CastclassClass(L_6, UriParser_t1226_il2cpp_TypeInfo_var));
	}
}
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"
// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"
// System.Net.Security.LocalCertificateSelectionCallback
#include "System_System_Net_Security_LocalCertificateSelectionCallback.h"
// System.Net.Security.LocalCertificateSelectionCallback
#include "System_System_Net_Security_LocalCertificateSelectionCallbackMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void LocalCertificateSelectionCallback__ctor_m6637 (LocalCertificateSelectionCallback_t1028 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
// System.String
#include "mscorlib_System_String.h"
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
#include "mscorlib_ArrayTypes.h"
extern "C" X509Certificate_t929 * LocalCertificateSelectionCallback_Invoke_m6638 (LocalCertificateSelectionCallback_t1028 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t928 * ___localCertificates, X509Certificate_t929 * ___remoteCertificate, StringU5BU5D_t49* ___acceptableIssuers, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LocalCertificateSelectionCallback_Invoke_m6638((LocalCertificateSelectionCallback_t1028 *)__this->___prev_9,___sender, ___targetHost, ___localCertificates, ___remoteCertificate, ___acceptableIssuers, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t929 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t928 * ___localCertificates, X509Certificate_t929 * ___remoteCertificate, StringU5BU5D_t49* ___acceptableIssuers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___targetHost, ___localCertificates, ___remoteCertificate, ___acceptableIssuers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t929 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t928 * ___localCertificates, X509Certificate_t929 * ___remoteCertificate, StringU5BU5D_t49* ___acceptableIssuers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___targetHost, ___localCertificates, ___remoteCertificate, ___acceptableIssuers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t929 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, X509CertificateCollection_t928 * ___localCertificates, X509Certificate_t929 * ___remoteCertificate, StringU5BU5D_t49* ___acceptableIssuers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___targetHost, ___localCertificates, ___remoteCertificate, ___acceptableIssuers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t929 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t1028(Il2CppObject* delegate, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t928 * ___localCertificates, X509Certificate_t929 * ___remoteCertificate, StringU5BU5D_t49* ___acceptableIssuers)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * LocalCertificateSelectionCallback_BeginInvoke_m6639 (LocalCertificateSelectionCallback_t1028 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t928 * ___localCertificates, X509Certificate_t929 * ___remoteCertificate, StringU5BU5D_t49* ___acceptableIssuers, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[6] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___targetHost;
	__d_args[2] = ___localCertificates;
	__d_args[3] = ___remoteCertificate;
	__d_args[4] = ___acceptableIssuers;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t929 * LocalCertificateSelectionCallback_EndInvoke_m6640 (LocalCertificateSelectionCallback_t1028 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t929 *)__result;
}
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Chain
#include "System_System_Security_Cryptography_X509Certificates_X509Cha.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void RemoteCertificateValidationCallback__ctor_m6641 (RemoteCertificateValidationCallback_t982 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// System.Security.Cryptography.X509Certificates.X509Chain
#include "System_System_Security_Cryptography_X509Certificates_X509Cha.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"
extern "C" bool RemoteCertificateValidationCallback_Invoke_m4912 (RemoteCertificateValidationCallback_t982 * __this, Object_t * ___sender, X509Certificate_t929 * ___certificate, X509Chain_t984 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RemoteCertificateValidationCallback_Invoke_m4912((RemoteCertificateValidationCallback_t982 *)__this->___prev_9,___sender, ___certificate, ___chain, ___sslPolicyErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, X509Certificate_t929 * ___certificate, X509Chain_t984 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, X509Certificate_t929 * ___certificate, X509Chain_t984 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t929 * ___certificate, X509Chain_t984 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t982(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t929 * ___certificate, X509Chain_t984 * ___chain, int32_t ___sslPolicyErrors)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* SslPolicyErrors_t1025_il2cpp_TypeInfo_var;
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m6642 (RemoteCertificateValidationCallback_t982 * __this, Object_t * ___sender, X509Certificate_t929 * ___certificate, X509Chain_t984 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslPolicyErrors_t1025_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(741);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___certificate;
	__d_args[2] = ___chain;
	__d_args[3] = Box(SslPolicyErrors_t1025_il2cpp_TypeInfo_var, &___sslPolicyErrors);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m6643 (RemoteCertificateValidationCallback_t982 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Net.BindIPEndPoint
#include "System_System_Net_BindIPEndPoint.h"
// System.Net.BindIPEndPoint
#include "System_System_Net_BindIPEndPointMethodDeclarations.h"
// System.Net.IPEndPoint
#include "System_System_Net_IPEndPoint.h"
// System.Net.ServicePoint
#include "System_System_Net_ServicePoint.h"
// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void BindIPEndPoint__ctor_m6644 (BindIPEndPoint_t1111 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
// System.Net.ServicePoint
#include "System_System_Net_ServicePoint.h"
// System.Net.IPEndPoint
#include "System_System_Net_IPEndPoint.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" IPEndPoint_t1093 * BindIPEndPoint_Invoke_m6645 (BindIPEndPoint_t1111 * __this, ServicePoint_t981 * ___servicePoint, IPEndPoint_t1093 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BindIPEndPoint_Invoke_m6645((BindIPEndPoint_t1111 *)__this->___prev_9,___servicePoint, ___remoteEndPoint, ___retryCount, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef IPEndPoint_t1093 * (*FunctionPointerType) (Object_t *, Object_t * __this, ServicePoint_t981 * ___servicePoint, IPEndPoint_t1093 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___servicePoint, ___remoteEndPoint, ___retryCount,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef IPEndPoint_t1093 * (*FunctionPointerType) (Object_t * __this, ServicePoint_t981 * ___servicePoint, IPEndPoint_t1093 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___servicePoint, ___remoteEndPoint, ___retryCount,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef IPEndPoint_t1093 * (*FunctionPointerType) (Object_t * __this, IPEndPoint_t1093 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___servicePoint, ___remoteEndPoint, ___retryCount,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" IPEndPoint_t1093 * pinvoke_delegate_wrapper_BindIPEndPoint_t1111(Il2CppObject* delegate, ServicePoint_t981 * ___servicePoint, IPEndPoint_t1093 * ___remoteEndPoint, int32_t ___retryCount)
{
	// Marshaling of parameter '___servicePoint' to native representation
	ServicePoint_t981 * ____servicePoint_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Net.ServicePoint'."));
}
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern "C" Object_t * BindIPEndPoint_BeginInvoke_m6646 (BindIPEndPoint_t1111 * __this, ServicePoint_t981 * ___servicePoint, IPEndPoint_t1093 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___servicePoint;
	__d_args[1] = ___remoteEndPoint;
	__d_args[2] = Box(Int32_t37_il2cpp_TypeInfo_var, &___retryCount);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C" IPEndPoint_t1093 * BindIPEndPoint_EndInvoke_m6647 (BindIPEndPoint_t1111 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (IPEndPoint_t1093 *)__result;
}
// System.Net.HttpContinueDelegate
#include "System_System_Net_HttpContinueDelegate.h"
// System.Net.HttpContinueDelegate
#include "System_System_Net_HttpContinueDelegateMethodDeclarations.h"
// System.Net.WebHeaderCollection
#include "System_System_Net_WebHeaderCollection.h"
// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void HttpContinueDelegate__ctor_m6648 (HttpContinueDelegate_t1099 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Net.WebHeaderCollection
#include "System_System_Net_WebHeaderCollection.h"
extern "C" void HttpContinueDelegate_Invoke_m6649 (HttpContinueDelegate_t1099 * __this, int32_t ___StatusCode, WebHeaderCollection_t1060 * ___httpHeaders, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HttpContinueDelegate_Invoke_m6649((HttpContinueDelegate_t1099 *)__this->___prev_9,___StatusCode, ___httpHeaders, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___StatusCode, WebHeaderCollection_t1060 * ___httpHeaders, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___StatusCode, ___httpHeaders,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___StatusCode, WebHeaderCollection_t1060 * ___httpHeaders, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___StatusCode, ___httpHeaders,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_HttpContinueDelegate_t1099(Il2CppObject* delegate, int32_t ___StatusCode, WebHeaderCollection_t1060 * ___httpHeaders)
{
	// Marshaling of parameter '___httpHeaders' to native representation
	WebHeaderCollection_t1060 * ____httpHeaders_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Net.WebHeaderCollection'."));
}
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern "C" Object_t * HttpContinueDelegate_BeginInvoke_m6650 (HttpContinueDelegate_t1099 * __this, int32_t ___StatusCode, WebHeaderCollection_t1060 * ___httpHeaders, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t37_il2cpp_TypeInfo_var, &___StatusCode);
	__d_args[1] = ___httpHeaders;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HttpContinueDelegate_EndInvoke_m6651 (HttpContinueDelegate_t1099 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void MatchEvaluator__ctor_m6652 (MatchEvaluator_t1234 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
extern "C" String_t* MatchEvaluator_Invoke_m6653 (MatchEvaluator_t1234 * __this, Match_t992 * ___match, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MatchEvaluator_Invoke_m6653((MatchEvaluator_t1234 *)__this->___prev_9,___match, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t *, Object_t * __this, Match_t992 * ___match, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, Match_t992 * ___match, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.String
#include "mscorlib_System_String.h"
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t1234(Il2CppObject* delegate, Match_t992 * ___match)
{
	// Marshaling of parameter '___match' to native representation
	Match_t992 * ____match_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Text.RegularExpressions.Match'."));
}
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * MatchEvaluator_BeginInvoke_m6654 (MatchEvaluator_t1234 * __this, Match_t992 * ___match, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___match;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C" String_t* MatchEvaluator_EndInvoke_m6655 (MatchEvaluator_t1234 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (String_t*)__result;
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2416.h"
// <PrivateImplementationDetails>/$ArrayType$16
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2416MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void U24ArrayTypeU2416_t1235_marshal(const U24ArrayTypeU2416_t1235& unmarshaled, U24ArrayTypeU2416_t1235_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2416_t1235_marshal_back(const U24ArrayTypeU2416_t1235_marshaled& marshaled, U24ArrayTypeU2416_t1235& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void U24ArrayTypeU2416_t1235_marshal_cleanup(U24ArrayTypeU2416_t1235_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128.h"
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1236_marshal(const U24ArrayTypeU24128_t1236& unmarshaled, U24ArrayTypeU24128_t1236_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24128_t1236_marshal_back(const U24ArrayTypeU24128_t1236_marshaled& marshaled, U24ArrayTypeU24128_t1236& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1236_marshal_cleanup(U24ArrayTypeU24128_t1236_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412.h"
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1237_marshal(const U24ArrayTypeU2412_t1237& unmarshaled, U24ArrayTypeU2412_t1237_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2412_t1237_marshal_back(const U24ArrayTypeU2412_t1237_marshaled& marshaled, U24ArrayTypeU2412_t1237& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1237_marshal_cleanup(U24ArrayTypeU2412_t1237_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
#ifdef __clang__
#pragma clang diagnostic pop
#endif
