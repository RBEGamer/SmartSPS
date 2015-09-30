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

// System.Xml.XmlNamespaceManager/NsScope
#include "System_Xml_System_Xml_XmlNamespaceManager_NsScope.h"
// System.Xml.XmlNamespaceManager/NsScope
#include "System_Xml_System_Xml_XmlNamespaceManager_NsScopeMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: System.Xml.XmlNamespaceManager/NsScope
extern "C" void NsScope_t740_marshal(const NsScope_t740& unmarshaled, NsScope_t740_marshaled& marshaled)
{
	marshaled.___DeclCount_0 = unmarshaled.___DeclCount_0;
	marshaled.___DefaultNamespace_1 = il2cpp_codegen_marshal_string(unmarshaled.___DefaultNamespace_1);
}
extern "C" void NsScope_t740_marshal_back(const NsScope_t740_marshaled& marshaled, NsScope_t740& unmarshaled)
{
	unmarshaled.___DeclCount_0 = marshaled.___DeclCount_0;
	unmarshaled.___DefaultNamespace_1 = il2cpp_codegen_marshal_string_result(marshaled.___DefaultNamespace_1);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNamespaceManager/NsScope
extern "C" void NsScope_t740_marshal_cleanup(NsScope_t740_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___DefaultNamespace_1);
	marshaled.___DefaultNamespace_1 = NULL;
}
// System.Xml.XmlNamespaceManager
#include "System_Xml_System_Xml_XmlNamespaceManager.h"
// System.Xml.XmlNamespaceManager
#include "System_Xml_System_Xml_XmlNamespaceManagerMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
#include "System.Xml_ArrayTypes.h"
// System.Xml.XmlNamespaceManager/NsDecl
#include "System_Xml_System_Xml_XmlNamespaceManager_NsDecl.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTableMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Xml.XmlNamespaceManager
#include "System_Xml_System_Xml_XmlNamespaceManagerMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral435;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral437;
extern Il2CppCodeGenString* _stringLiteral438;
extern "C" void XmlNamespaceManager__ctor_m3499 (XmlNamespaceManager_t741 * __this, XmlNameTable_t697 * ___nameTable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral435 = il2cpp_codegen_string_literal_from_index(435);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___declPos_1 = (-1);
		__this->___scopePos_3 = (-1);
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		XmlNameTable_t697 * L_0 = ___nameTable;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t617 * L_1 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_1, _stringLiteral435, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0025:
	{
		XmlNameTable_t697 * L_2 = ___nameTable;
		__this->___nameTable_6 = L_2;
		XmlNameTable_t697 * L_3 = ___nameTable;
		NullCheck(L_3);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_3, _stringLiteral436);
		XmlNameTable_t697 * L_4 = ___nameTable;
		NullCheck(L_4);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_4, _stringLiteral387);
		XmlNameTable_t697 * L_5 = ___nameTable;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_5);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_5, L_6);
		XmlNameTable_t697 * L_7 = ___nameTable;
		NullCheck(L_7);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_7, _stringLiteral437);
		XmlNameTable_t697 * L_8 = ___nameTable;
		NullCheck(L_8);
		VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_8, _stringLiteral438);
		XmlNamespaceManager_InitData_m3500(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern TypeInfo* NsDeclU5BU5D_t742_il2cpp_TypeInfo_var;
extern TypeInfo* NsScopeU5BU5D_t743_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager_InitData_m3500 (XmlNamespaceManager_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NsDeclU5BU5D_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		NsScopeU5BU5D_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___decls_0 = ((NsDeclU5BU5D_t742*)SZArrayNew(NsDeclU5BU5D_t742_il2cpp_TypeInfo_var, ((int32_t)10)));
		__this->___scopes_2 = ((NsScopeU5BU5D_t743*)SZArrayNew(NsScopeU5BU5D_t743_il2cpp_TypeInfo_var, ((int32_t)40)));
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern TypeInfo* NsDeclU5BU5D_t742_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager_GrowDecls_m3501 (XmlNamespaceManager_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NsDeclU5BU5D_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	NsDeclU5BU5D_t742* V_0 = {0};
	{
		NsDeclU5BU5D_t742* L_0 = (__this->___decls_0);
		V_0 = L_0;
		int32_t L_1 = (__this->___declPos_1);
		__this->___decls_0 = ((NsDeclU5BU5D_t742*)SZArrayNew(NsDeclU5BU5D_t742_il2cpp_TypeInfo_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)2))+(int32_t)1))));
		int32_t L_2 = (__this->___declPos_1);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		NsDeclU5BU5D_t742* L_3 = V_0;
		NsDeclU5BU5D_t742* L_4 = (__this->___decls_0);
		int32_t L_5 = (__this->___declPos_1);
		Array_Copy_m3858(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 0, L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern TypeInfo* NsScopeU5BU5D_t743_il2cpp_TypeInfo_var;
extern "C" void XmlNamespaceManager_GrowScopes_m3502 (XmlNamespaceManager_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NsScopeU5BU5D_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	NsScopeU5BU5D_t743* V_0 = {0};
	{
		NsScopeU5BU5D_t743* L_0 = (__this->___scopes_2);
		V_0 = L_0;
		int32_t L_1 = (__this->___scopePos_3);
		__this->___scopes_2 = ((NsScopeU5BU5D_t743*)SZArrayNew(NsScopeU5BU5D_t743_il2cpp_TypeInfo_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)2))+(int32_t)1))));
		int32_t L_2 = (__this->___scopePos_3);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		NsScopeU5BU5D_t743* L_3 = V_0;
		NsScopeU5BU5D_t743* L_4 = (__this->___scopes_2);
		int32_t L_5 = (__this->___scopePos_3);
		Array_Copy_m3858(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 0, L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlNamespaceManager_get_DefaultNamespace_m3503 (XmlNamespaceManager_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = (__this->___defaultNamespace_4);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_1;
		goto IL_001b;
	}

IL_0015:
	{
		String_t* L_2 = (__this->___defaultNamespace_4);
		G_B3_0 = L_2;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C" XmlNameTable_t697 * XmlNamespaceManager_get_NameTable_m3504 (XmlNamespaceManager_t741 * __this, const MethodInfo* method)
{
	{
		XmlNameTable_t697 * L_0 = (__this->___nameTable_6);
		return L_0;
	}
}
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void XmlNamespaceManager_AddNamespace_m3505 (XmlNamespaceManager_t741 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method)
{
	{
		String_t* L_0 = ___prefix;
		String_t* L_1 = ___uri;
		XmlNamespaceManager_AddNamespace_m3506(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral439;
extern Il2CppCodeGenString* _stringLiteral440;
extern Il2CppCodeGenString* _stringLiteral441;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral438;
extern "C" void XmlNamespaceManager_AddNamespace_m3506 (XmlNamespaceManager_t741 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral439 = il2cpp_codegen_string_literal_from_index(439);
		_stringLiteral440 = il2cpp_codegen_string_literal_from_index(440);
		_stringLiteral441 = il2cpp_codegen_string_literal_from_index(441);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___prefix;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t617 * L_1 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3868(L_1, _stringLiteral439, _stringLiteral440, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		String_t* L_2 = ___uri;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentNullException_t617 * L_3 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3868(L_3, _stringLiteral441, _stringLiteral440, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002c:
	{
		bool L_4 = ___atomizedNames;
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		XmlNameTable_t697 * L_5 = (__this->___nameTable_6);
		String_t* L_6 = ___prefix;
		NullCheck(L_5);
		String_t* L_7 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_5, L_6);
		___prefix = L_7;
		XmlNameTable_t697 * L_8 = (__this->___nameTable_6);
		String_t* L_9 = ___uri;
		NullCheck(L_8);
		String_t* L_10 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_8, L_9);
		___uri = L_10;
	}

IL_004e:
	{
		String_t* L_11 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m67(NULL /*static, unused*/, L_11, _stringLiteral387, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_13 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m67(NULL /*static, unused*/, L_13, _stringLiteral438, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		return;
	}

IL_006f:
	{
		String_t* L_15 = ___prefix;
		String_t* L_16 = ___uri;
		XmlNamespaceManager_IsValidDeclaration_m3507(NULL /*static, unused*/, L_15, L_16, 1, /*hidden argument*/NULL);
		String_t* L_17 = ___prefix;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m159(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_19 = ___uri;
		__this->___defaultNamespace_4 = L_19;
	}

IL_008a:
	{
		int32_t L_20 = (__this->___declPos_1);
		V_0 = L_20;
		goto IL_00c9;
	}

IL_0096:
	{
		NsDeclU5BU5D_t742* L_21 = (__this->___decls_0);
		int32_t L_22 = V_0;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		String_t* L_23 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_21, L_22, sizeof(NsDecl_t739 )))->___Prefix_0);
		String_t* L_24 = ___prefix;
		bool L_25 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		NsDeclU5BU5D_t742* L_26 = (__this->___decls_0);
		int32_t L_27 = V_0;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		String_t* L_28 = ___uri;
		((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_26, L_27, sizeof(NsDecl_t739 )))->___Uri_1 = L_28;
		return;
	}

IL_00c5:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29-(int32_t)1));
	}

IL_00c9:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = (__this->___declPos_1);
		int32_t L_32 = (__this->___count_5);
		if ((((int32_t)L_30) > ((int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_33 = (__this->___declPos_1);
		__this->___declPos_1 = ((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = (__this->___count_5);
		__this->___count_5 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = (__this->___declPos_1);
		NsDeclU5BU5D_t742* L_36 = (__this->___decls_0);
		NullCheck(L_36);
		if ((!(((uint32_t)L_35) == ((uint32_t)(((int32_t)(((Array_t *)L_36)->max_length)))))))
		{
			goto IL_0111;
		}
	}
	{
		XmlNamespaceManager_GrowDecls_m3501(__this, /*hidden argument*/NULL);
	}

IL_0111:
	{
		NsDeclU5BU5D_t742* L_37 = (__this->___decls_0);
		int32_t L_38 = (__this->___declPos_1);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		String_t* L_39 = ___prefix;
		((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_37, L_38, sizeof(NsDecl_t739 )))->___Prefix_0 = L_39;
		NsDeclU5BU5D_t742* L_40 = (__this->___decls_0);
		int32_t L_41 = (__this->___declPos_1);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		String_t* L_42 = ___uri;
		((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_40, L_41, sizeof(NsDecl_t739 )))->___Uri_1 = L_42;
		return;
	}
}
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral438;
extern Il2CppCodeGenString* _stringLiteral442;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral443;
extern Il2CppCodeGenString* _stringLiteral437;
extern Il2CppCodeGenString* _stringLiteral444;
extern "C" String_t* XmlNamespaceManager_IsValidDeclaration_m3507 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___uri, bool ___throwException, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		_stringLiteral442 = il2cpp_codegen_string_literal_from_index(442);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral443 = il2cpp_codegen_string_literal_from_index(443);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		_stringLiteral444 = il2cpp_codegen_string_literal_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*)NULL;
		String_t* L_0 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m67(NULL /*static, unused*/, L_0, _stringLiteral387, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_2 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m172(NULL /*static, unused*/, L_2, _stringLiteral438, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_4 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m3827(NULL /*static, unused*/, _stringLiteral442, _stringLiteral438, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_007f;
	}

IL_0038:
	{
		String_t* L_6 = V_0;
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m67(NULL /*static, unused*/, L_7, _stringLiteral436, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		V_0 = _stringLiteral443;
		goto IL_007f;
	}

IL_0059:
	{
		String_t* L_9 = V_0;
		if (L_9)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_10 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m67(NULL /*static, unused*/, L_10, _stringLiteral437, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral444, _stringLiteral437, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_007f:
	{
		String_t* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		bool L_14 = ___throwException;
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		String_t* L_15 = V_0;
		ArgumentException_t373 * L_16 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2066(L_16, L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_16);
	}

IL_0092:
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t53_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t784_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral438;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern "C" Object_t * XmlNamespaceManager_GetEnumerator_m3508 (XmlNamespaceManager_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IEnumerable_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t53 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Hashtable_t53 * L_0 = (Hashtable_t53 *)il2cpp_codegen_object_new (Hashtable_t53_il2cpp_TypeInfo_var);
		Hashtable__ctor_m157(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_006f;
	}

IL_000d:
	{
		NsDeclU5BU5D_t742* L_1 = (__this->___decls_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		String_t* L_3 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_1, L_2, sizeof(NsDecl_t739 )))->___Prefix_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_5 = String_op_Inequality_m172(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	{
		NsDeclU5BU5D_t742* L_6 = (__this->___decls_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		String_t* L_8 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_6, L_7, sizeof(NsDecl_t739 )))->___Uri_1);
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		Hashtable_t53 * L_9 = V_0;
		NsDeclU5BU5D_t742* L_10 = (__this->___decls_0);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		String_t* L_12 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_10, L_11, sizeof(NsDecl_t739 )))->___Prefix_0);
		NsDeclU5BU5D_t742* L_13 = (__this->___decls_0);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		String_t* L_15 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_13, L_14, sizeof(NsDecl_t739 )))->___Uri_1);
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_9, L_12, L_15);
	}

IL_006b:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = (__this->___declPos_1);
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_000d;
		}
	}
	{
		Hashtable_t53 * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, __this);
		NullCheck(L_19);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_19, L_20, L_21);
		Hashtable_t53 * L_22 = V_0;
		NullCheck(L_22);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_22, _stringLiteral387, _stringLiteral438);
		Hashtable_t53 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_23, _stringLiteral436, _stringLiteral437);
		Hashtable_t53 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(20 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_24);
		NullCheck(L_25);
		Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t784_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}
}
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
extern TypeInfo* XmlNamespaceManager_t741_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t202_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1931_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral437;
extern Il2CppCodeGenString* _stringLiteral438;
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m3509 (XmlNamespaceManager_t741 * __this, String_t* ___prefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNamespaceManager_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		Dictionary_2_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Dictionary_2__ctor_m1931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	Dictionary_2_t202 * V_2 = {0};
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___prefix;
		V_1 = L_0;
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		Dictionary_2_t202 * L_2 = ((XmlNamespaceManager_t741_StaticFields*)XmlNamespaceManager_t741_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_8;
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		Dictionary_2_t202 * L_3 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_3, 3, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_2 = L_3;
		Dictionary_2_t202 * L_4 = V_2;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral436, 0);
		Dictionary_2_t202 * L_5 = V_2;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral387, 1);
		Dictionary_2_t202 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, L_7, 2);
		Dictionary_2_t202 * L_8 = V_2;
		((XmlNamespaceManager_t741_StaticFields*)XmlNamespaceManager_t741_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_8 = L_8;
	}

IL_0043:
	{
		Dictionary_2_t202 * L_9 = ((XmlNamespaceManager_t741_StaticFields*)XmlNamespaceManager_t741_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_8;
		String_t* L_10 = V_1;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_9, L_10, (&V_3));
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_12 = V_3;
		if (L_12 == 0)
		{
			goto IL_006c;
		}
		if (L_12 == 1)
		{
			goto IL_007d;
		}
		if (L_12 == 2)
		{
			goto IL_008e;
		}
	}
	{
		goto IL_0097;
	}

IL_006c:
	{
		XmlNameTable_t697 * L_13 = (__this->___nameTable_6);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_13, _stringLiteral437);
		return L_14;
	}

IL_007d:
	{
		XmlNameTable_t697 * L_15 = (__this->___nameTable_6);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_15, _stringLiteral438);
		return L_16;
	}

IL_008e:
	{
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, __this);
		return L_17;
	}

IL_0095:
	{
		return (String_t*)NULL;
	}

IL_0097:
	{
		int32_t L_18 = (__this->___declPos_1);
		V_0 = L_18;
		goto IL_00f2;
	}

IL_00a3:
	{
		NsDeclU5BU5D_t742* L_19 = (__this->___decls_0);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		String_t* L_21 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_19, L_20, sizeof(NsDecl_t739 )))->___Prefix_0);
		String_t* L_22 = ___prefix;
		bool L_23 = (__this->___internalAtomizedNames_7);
		bool L_24 = XmlNamespaceManager_CompareString_m3511(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00ee;
		}
	}
	{
		NsDeclU5BU5D_t742* L_25 = (__this->___decls_0);
		int32_t L_26 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		String_t* L_27 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_25, L_26, sizeof(NsDecl_t739 )))->___Uri_1);
		if (!L_27)
		{
			goto IL_00ee;
		}
	}
	{
		NsDeclU5BU5D_t742* L_28 = (__this->___decls_0);
		int32_t L_29 = V_0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		String_t* L_30 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_28, L_29, sizeof(NsDecl_t739 )))->___Uri_1);
		return L_30;
	}

IL_00ee:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)((int32_t)L_31-(int32_t)1));
	}

IL_00f2:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupNamespace_m3510 (XmlNamespaceManager_t741 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		bool L_0 = ___atomizedNames;
		__this->___internalAtomizedNames_7 = L_0;
		String_t* L_1 = ___prefix;
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, __this, L_1);
		V_0 = L_2;
		__this->___internalAtomizedNames_7 = 0;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool XmlNamespaceManager_CompareString_m3511 (XmlNamespaceManager_t741 * __this, String_t* ___s1, String_t* ___s2, bool ___atomizedNames, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___atomizedNames;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___s1;
		String_t* L_2 = ___s2;
		bool L_3 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000e:
	{
		String_t* L_4 = ___s1;
		String_t* L_5 = ___s2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m67(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C" String_t* XmlNamespaceManager_LookupPrefixExclusive_m3512 (XmlNamespaceManager_t741 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uri;
		bool L_1 = ___atomizedName;
		String_t* L_2 = XmlNamespaceManager_LookupPrefixCore_m3513(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral438;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral437;
extern Il2CppCodeGenString* _stringLiteral436;
extern "C" String_t* XmlNamespaceManager_LookupPrefixCore_m3513 (XmlNamespaceManager_t741 * __this, String_t* ___uri, bool ___atomizedName, bool ___excludeOverriden, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___uri;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___uri;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, __this);
		bool L_3 = ___atomizedName;
		bool L_4 = XmlNamespaceManager_CompareString_m3511(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_5;
	}

IL_0021:
	{
		String_t* L_6 = ___uri;
		bool L_7 = ___atomizedName;
		bool L_8 = XmlNamespaceManager_CompareString_m3511(__this, L_6, _stringLiteral438, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		return _stringLiteral387;
	}

IL_0039:
	{
		String_t* L_9 = ___uri;
		bool L_10 = ___atomizedName;
		bool L_11 = XmlNamespaceManager_CompareString_m3511(__this, L_9, _stringLiteral437, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		return _stringLiteral436;
	}

IL_0051:
	{
		int32_t L_12 = (__this->___declPos_1);
		V_0 = L_12;
		goto IL_00bf;
	}

IL_005d:
	{
		NsDeclU5BU5D_t742* L_13 = (__this->___decls_0);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		String_t* L_15 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_13, L_14, sizeof(NsDecl_t739 )))->___Uri_1);
		String_t* L_16 = ___uri;
		bool L_17 = ___atomizedName;
		bool L_18 = XmlNamespaceManager_CompareString_m3511(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		NsDeclU5BU5D_t742* L_19 = (__this->___decls_0);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		String_t* L_21 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_19, L_20, sizeof(NsDecl_t739 )))->___Prefix_0);
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m159(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		bool L_23 = ___excludeOverriden;
		if (!L_23)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_24 = V_0;
		bool L_25 = XmlNamespaceManager_IsOverriden_m3514(__this, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00bb;
		}
	}

IL_00a9:
	{
		NsDeclU5BU5D_t742* L_26 = (__this->___decls_0);
		int32_t L_27 = V_0;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		String_t* L_28 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_26, L_27, sizeof(NsDecl_t739 )))->___Prefix_0);
		return L_28;
	}

IL_00bb:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29-(int32_t)1));
	}

IL_00bf:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool XmlNamespaceManager_IsOverriden_m3514 (XmlNamespaceManager_t741 * __this, int32_t ___idx, const MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___idx;
		int32_t L_1 = (__this->___declPos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		NsDeclU5BU5D_t742* L_2 = (__this->___decls_0);
		int32_t L_3 = ___idx;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3+(int32_t)1)));
		String_t* L_4 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_2, ((int32_t)((int32_t)L_3+(int32_t)1)), sizeof(NsDecl_t739 )))->___Prefix_0);
		V_0 = L_4;
		int32_t L_5 = ___idx;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		goto IL_0048;
	}

IL_002b:
	{
		NsDeclU5BU5D_t742* L_6 = (__this->___decls_0);
		int32_t L_7 = ___idx;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		String_t* L_8 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_6, L_7, sizeof(NsDecl_t739 )))->___Prefix_0);
		String_t* L_9 = V_0;
		if ((!(((Object_t*)(String_t*)L_8) == ((Object_t*)(String_t*)L_9))))
		{
			goto IL_0044;
		}
	}
	{
		return 1;
	}

IL_0044:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = (__this->___declPos_1);
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C" bool XmlNamespaceManager_PopScope_m3515 (XmlNamespaceManager_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___scopePos_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_1 = (__this->___declPos_1);
		int32_t L_2 = (__this->___count_5);
		__this->___declPos_1 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		NsScopeU5BU5D_t743* L_3 = (__this->___scopes_2);
		int32_t L_4 = (__this->___scopePos_3);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		String_t* L_5 = (((NsScope_t740 *)(NsScope_t740 *)SZArrayLdElema(L_3, L_4, sizeof(NsScope_t740 )))->___DefaultNamespace_1);
		__this->___defaultNamespace_4 = L_5;
		NsScopeU5BU5D_t743* L_6 = (__this->___scopes_2);
		int32_t L_7 = (__this->___scopePos_3);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = (((NsScope_t740 *)(NsScope_t740 *)SZArrayLdElema(L_6, L_7, sizeof(NsScope_t740 )))->___DeclCount_0);
		__this->___count_5 = L_8;
		int32_t L_9 = (__this->___scopePos_3);
		__this->___scopePos_3 = ((int32_t)((int32_t)L_9-(int32_t)1));
		return 1;
	}
}
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C" void XmlNamespaceManager_PushScope_m3516 (XmlNamespaceManager_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___scopePos_3);
		__this->___scopePos_3 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = (__this->___scopePos_3);
		NsScopeU5BU5D_t743* L_2 = (__this->___scopes_2);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		XmlNamespaceManager_GrowScopes_m3502(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		NsScopeU5BU5D_t743* L_3 = (__this->___scopes_2);
		int32_t L_4 = (__this->___scopePos_3);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		String_t* L_5 = (__this->___defaultNamespace_4);
		((NsScope_t740 *)(NsScope_t740 *)SZArrayLdElema(L_3, L_4, sizeof(NsScope_t740 )))->___DefaultNamespace_1 = L_5;
		NsScopeU5BU5D_t743* L_6 = (__this->___scopes_2);
		int32_t L_7 = (__this->___scopePos_3);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = (__this->___count_5);
		((NsScope_t740 *)(NsScope_t740 *)SZArrayLdElema(L_6, L_7, sizeof(NsScope_t740 )))->___DeclCount_0 = L_8;
		__this->___count_5 = 0;
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C" void XmlNamespaceManager_RemoveNamespace_m3517 (XmlNamespaceManager_t741 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method)
{
	{
		String_t* L_0 = ___prefix;
		String_t* L_1 = ___uri;
		XmlNamespaceManager_RemoveNamespace_m3518(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral439;
extern Il2CppCodeGenString* _stringLiteral441;
extern "C" void XmlNamespaceManager_RemoveNamespace_m3518 (XmlNamespaceManager_t741 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		_stringLiteral439 = il2cpp_codegen_string_literal_from_index(439);
		_stringLiteral441 = il2cpp_codegen_string_literal_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___prefix;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t617 * L_1 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_1, _stringLiteral439, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___uri;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t617 * L_3 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_3, _stringLiteral441, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0022:
	{
		int32_t L_4 = (__this->___count_5);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		int32_t L_5 = (__this->___declPos_1);
		V_0 = L_5;
		goto IL_008c;
	}

IL_003a:
	{
		NsDeclU5BU5D_t742* L_6 = (__this->___decls_0);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		String_t* L_8 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_6, L_7, sizeof(NsDecl_t739 )))->___Prefix_0);
		String_t* L_9 = ___prefix;
		bool L_10 = ___atomizedNames;
		bool L_11 = XmlNamespaceManager_CompareString_m3511(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		NsDeclU5BU5D_t742* L_12 = (__this->___decls_0);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		String_t* L_14 = (((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_12, L_13, sizeof(NsDecl_t739 )))->___Uri_1);
		String_t* L_15 = ___uri;
		bool L_16 = ___atomizedNames;
		bool L_17 = XmlNamespaceManager_CompareString_m3511(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		NsDeclU5BU5D_t742* L_18 = (__this->___decls_0);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		((NsDecl_t739 *)(NsDecl_t739 *)SZArrayLdElema(L_18, L_19, sizeof(NsDecl_t739 )))->___Uri_1 = (String_t*)NULL;
	}

IL_0088:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20-(int32_t)1));
	}

IL_008c:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = (__this->___declPos_1);
		int32_t L_23 = (__this->___count_5);
		if ((((int32_t)L_21) > ((int32_t)((int32_t)((int32_t)L_22-(int32_t)L_23)))))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}
}
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeTypeMethodDeclarations.h"
// System.Xml.XmlParserContext/ContextItem
#include "System_Xml_System_Xml_XmlParserContext_ContextItem.h"
// System.Xml.XmlParserContext/ContextItem
#include "System_Xml_System_Xml_XmlParserContext_ContextItemMethodDeclarations.h"
// System.Void System.Xml.XmlParserContext/ContextItem::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ContextItem__ctor_m3519 (ContextItem_t745 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContext.h"
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContextMethodDeclarations.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReader.h"
// Mono.Xml.DTDObjectModel
#include "System_Xml_Mono_Xml_DTDObjectModel.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlException.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReaderMethodDeclarations.h"
// Mono.Xml.DTDObjectModel
#include "System_Xml_Mono_Xml_DTDObjectModelMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlExceptionMethodDeclarations.h"
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Xml.XmlNamespaceManager
#include "System_Xml_System_Xml_XmlNamespaceManager.h"
// System.String
#include "mscorlib_System_String.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContextMethodDeclarations.h"
extern "C" void XmlParserContext__ctor_m3520 (XmlParserContext_t746 * __this, XmlNameTable_t697 * ___nt, XmlNamespaceManager_t741 * ___nsMgr, String_t* ___xmlLang, int32_t ___xmlSpace, const MethodInfo* method)
{
	{
		XmlNameTable_t697 * L_0 = ___nt;
		XmlNamespaceManager_t741 * L_1 = ___nsMgr;
		String_t* L_2 = ___xmlLang;
		int32_t L_3 = ___xmlSpace;
		XmlParserContext__ctor_m3521(__this, L_0, L_1, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, L_2, L_3, (Encoding_t52 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReaderMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextReader_t736_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextReader_t754_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext__ctor_m3521 (XmlParserContext_t746 * __this, XmlNameTable_t697 * ___nt, XmlNamespaceManager_t741 * ___nsMgr, String_t* ___docTypeName, String_t* ___pubId, String_t* ___sysId, String_t* ___internalSubset, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t52 * ___enc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TextReader_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		XmlTextReader_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	XmlNamespaceManager_t741 * G_B3_0 = {0};
	XmlNameTable_t697 * G_B3_1 = {0};
	XmlParserContext_t746 * G_B3_2 = {0};
	XmlNamespaceManager_t741 * G_B1_0 = {0};
	XmlNameTable_t697 * G_B1_1 = {0};
	XmlParserContext_t746 * G_B1_2 = {0};
	XmlNamespaceManager_t741 * G_B2_0 = {0};
	XmlNameTable_t697 * G_B2_1 = {0};
	XmlParserContext_t746 * G_B2_2 = {0};
	DTDObjectModel_t689 * G_B4_0 = {0};
	XmlNamespaceManager_t741 * G_B4_1 = {0};
	XmlNameTable_t697 * G_B4_2 = {0};
	XmlParserContext_t746 * G_B4_3 = {0};
	{
		XmlNameTable_t697 * L_0 = ___nt;
		XmlNamespaceManager_t741 * L_1 = ___nsMgr;
		String_t* L_2 = ___docTypeName;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (!L_2)
		{
			G_B3_0 = L_1;
			G_B3_1 = L_0;
			G_B3_2 = __this;
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = ___docTypeName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_5 = String_op_Inequality_m172(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		if (!L_5)
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t736_il2cpp_TypeInfo_var);
		TextReader_t736 * L_6 = ((TextReader_t736_StaticFields*)TextReader_t736_il2cpp_TypeInfo_var->static_fields)->___Null_0;
		XmlNameTable_t697 * L_7 = ___nt;
		XmlTextReader_t754 * L_8 = (XmlTextReader_t754 *)il2cpp_codegen_object_new (XmlTextReader_t754_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m3602(L_8, L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___docTypeName;
		String_t* L_10 = ___pubId;
		String_t* L_11 = ___sysId;
		String_t* L_12 = ___internalSubset;
		NullCheck(L_8);
		DTDObjectModel_t689 * L_13 = XmlTextReader_GenerateDTDObjectModel_m3694(L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		goto IL_0036;
	}

IL_0035:
	{
		G_B4_0 = ((DTDObjectModel_t689 *)(NULL));
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
	}

IL_0036:
	{
		String_t* L_14 = ___baseURI;
		String_t* L_15 = ___xmlLang;
		int32_t L_16 = ___xmlSpace;
		Encoding_t52 * L_17 = ___enc;
		NullCheck(G_B4_3);
		XmlParserContext__ctor_m3522(G_B4_3, G_B4_2, G_B4_1, G_B4_0, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
// Mono.Xml.DTDObjectModel
#include "System_Xml_Mono_Xml_DTDObjectModel.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Mono.Xml.DTDObjectModel
#include "System_Xml_Mono_Xml_DTDObjectModelMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t695_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext__ctor_m3522 (XmlParserContext_t746 * __this, XmlNameTable_t697 * ___nt, XmlNamespaceManager_t741 * ___nsMgr, DTDObjectModel_t689 * ___dtd, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t52 * ___enc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArrayList_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t746 * G_B2_0 = {0};
	XmlParserContext_t746 * G_B1_0 = {0};
	XmlNameTable_t697 * G_B5_0 = {0};
	XmlParserContext_t746 * G_B5_1 = {0};
	XmlParserContext_t746 * G_B4_0 = {0};
	XmlParserContext_t746 * G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___baseURI_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___docTypeName_1 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___internalSubset_3 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___publicID_6 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___systemID_7 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___xmlLang_8 = L_5;
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		XmlNamespaceManager_t741 * L_6 = ___nsMgr;
		__this->___namespaceManager_4 = L_6;
		XmlNameTable_t697 * L_7 = ___nt;
		G_B1_0 = __this;
		if (!L_7)
		{
			G_B2_0 = __this;
			goto IL_005c;
		}
	}
	{
		XmlNameTable_t697 * L_8 = ___nt;
		G_B5_0 = L_8;
		G_B5_1 = G_B1_0;
		goto IL_006e;
	}

IL_005c:
	{
		XmlNamespaceManager_t741 * L_9 = ___nsMgr;
		G_B3_0 = G_B2_0;
		if (!L_9)
		{
			G_B4_0 = G_B2_0;
			goto IL_006d;
		}
	}
	{
		XmlNamespaceManager_t741 * L_10 = ___nsMgr;
		NullCheck(L_10);
		XmlNameTable_t697 * L_11 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(6 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_10);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = ((XmlNameTable_t697 *)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_006e:
	{
		NullCheck(G_B5_1);
		G_B5_1->___nameTable_5 = G_B5_0;
		DTDObjectModel_t689 * L_12 = ___dtd;
		if (!L_12)
		{
			goto IL_00b0;
		}
	}
	{
		DTDObjectModel_t689 * L_13 = ___dtd;
		NullCheck(L_13);
		String_t* L_14 = DTDObjectModel_get_Name_m3256(L_13, /*hidden argument*/NULL);
		XmlParserContext_set_DocTypeName_m3525(__this, L_14, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_15 = ___dtd;
		NullCheck(L_15);
		String_t* L_16 = DTDObjectModel_get_PublicId_m3259(L_15, /*hidden argument*/NULL);
		XmlParserContext_set_PublicId_m3533(__this, L_16, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_17 = ___dtd;
		NullCheck(L_17);
		String_t* L_18 = DTDObjectModel_get_SystemId_m3261(L_17, /*hidden argument*/NULL);
		XmlParserContext_set_SystemId_m3534(__this, L_18, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_19 = ___dtd;
		NullCheck(L_19);
		String_t* L_20 = DTDObjectModel_get_InternalSubset_m3263(L_19, /*hidden argument*/NULL);
		XmlParserContext_set_InternalSubset_m3530(__this, L_20, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_21 = ___dtd;
		__this->___dtd_12 = L_21;
	}

IL_00b0:
	{
		Encoding_t52 * L_22 = ___enc;
		__this->___encoding_2 = L_22;
		String_t* L_23 = ___baseURI;
		XmlParserContext_set_BaseURI_m3524(__this, L_23, /*hidden argument*/NULL);
		String_t* L_24 = ___xmlLang;
		XmlParserContext_set_XmlLang_m3536(__this, L_24, /*hidden argument*/NULL);
		int32_t L_25 = ___xmlSpace;
		__this->___xmlSpace_9 = L_25;
		ArrayList_t695 * L_26 = (ArrayList_t695 *)il2cpp_codegen_object_new (ArrayList_t695_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3815(L_26, /*hidden argument*/NULL);
		__this->___contextItems_10 = L_26;
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C" String_t* XmlParserContext_get_BaseURI_m3523 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___baseURI_0);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_BaseURI_m3524 (XmlParserContext_t746 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t746 * G_B2_0 = {0};
	XmlParserContext_t746 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t746 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___baseURI_0 = G_B3_0;
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_DocTypeName_m3525 (XmlParserContext_t746 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t746 * G_B2_0 = {0};
	XmlParserContext_t746 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t746 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___docTypeName_1 = G_B3_0;
		return;
	}
}
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C" DTDObjectModel_t689 * XmlParserContext_get_Dtd_m3526 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	{
		DTDObjectModel_t689 * L_0 = (__this->___dtd_12);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C" void XmlParserContext_set_Dtd_m3527 (XmlParserContext_t746 * __this, DTDObjectModel_t689 * ___value, const MethodInfo* method)
{
	{
		DTDObjectModel_t689 * L_0 = ___value;
		__this->___dtd_12 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C" void XmlParserContext_set_Encoding_m3528 (XmlParserContext_t746 * __this, Encoding_t52 * ___value, const MethodInfo* method)
{
	{
		Encoding_t52 * L_0 = ___value;
		__this->___encoding_2 = L_0;
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C" String_t* XmlParserContext_get_InternalSubset_m3529 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->___internalSubset_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = (__this->___internalSubset_3);
		G_B5_0 = L_1;
		goto IL_0032;
	}

IL_0016:
	{
		DTDObjectModel_t689 * L_2 = (__this->___dtd_12);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		DTDObjectModel_t689 * L_3 = (__this->___dtd_12);
		NullCheck(L_3);
		String_t* L_4 = DTDObjectModel_get_InternalSubset_m3263(L_3, /*hidden argument*/NULL);
		G_B5_0 = L_4;
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_0032:
	{
		return G_B5_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_InternalSubset_m3530 (XmlParserContext_t746 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t746 * G_B2_0 = {0};
	XmlParserContext_t746 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t746 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___internalSubset_3 = G_B3_0;
		return;
	}
}
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C" XmlNamespaceManager_t741 * XmlParserContext_get_NamespaceManager_m3531 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	{
		XmlNamespaceManager_t741 * L_0 = (__this->___namespaceManager_4);
		return L_0;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C" XmlNameTable_t697 * XmlParserContext_get_NameTable_m3532 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	{
		XmlNameTable_t697 * L_0 = (__this->___nameTable_5);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_PublicId_m3533 (XmlParserContext_t746 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t746 * G_B2_0 = {0};
	XmlParserContext_t746 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t746 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___publicID_6 = G_B3_0;
		return;
	}
}
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_SystemId_m3534 (XmlParserContext_t746 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t746 * G_B2_0 = {0};
	XmlParserContext_t746 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t746 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___systemID_7 = G_B3_0;
		return;
	}
}
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C" String_t* XmlParserContext_get_XmlLang_m3535 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___xmlLang_8);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_set_XmlLang_m3536 (XmlParserContext_t746 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	XmlParserContext_t746 * G_B2_0 = {0};
	XmlParserContext_t746 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlParserContext_t746 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___value;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___xmlLang_8 = G_B3_0;
		return;
	}
}
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C" int32_t XmlParserContext_get_XmlSpace_m3537 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___xmlSpace_9);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C" void XmlParserContext_set_XmlSpace_m3538 (XmlParserContext_t746 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___xmlSpace_9 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlParserContext::PushScope()
// System.Xml.XmlParserContext/ContextItem
#include "System_Xml_System_Xml_XmlParserContext_ContextItemMethodDeclarations.h"
extern TypeInfo* ContextItem_t745_il2cpp_TypeInfo_var;
extern "C" void XmlParserContext_PushScope_m3539 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextItem_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	ContextItem_t745 * V_0 = {0};
	{
		V_0 = (ContextItem_t745 *)NULL;
		ArrayList_t695 * L_0 = (__this->___contextItems_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		int32_t L_2 = (__this->___contextItemCount_11);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0030;
		}
	}
	{
		ContextItem_t745 * L_3 = (ContextItem_t745 *)il2cpp_codegen_object_new (ContextItem_t745_il2cpp_TypeInfo_var);
		ContextItem__ctor_m3519(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ArrayList_t695 * L_4 = (__this->___contextItems_10);
		ContextItem_t745 * L_5 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		goto IL_0047;
	}

IL_0030:
	{
		ArrayList_t695 * L_6 = (__this->___contextItems_10);
		int32_t L_7 = (__this->___contextItemCount_11);
		NullCheck(L_6);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_6, L_7);
		V_0 = ((ContextItem_t745 *)CastclassClass(L_8, ContextItem_t745_il2cpp_TypeInfo_var));
	}

IL_0047:
	{
		ContextItem_t745 * L_9 = V_0;
		String_t* L_10 = XmlParserContext_get_BaseURI_m3523(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->___BaseURI_0 = L_10;
		ContextItem_t745 * L_11 = V_0;
		String_t* L_12 = XmlParserContext_get_XmlLang_m3535(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->___XmlLang_1 = L_12;
		ContextItem_t745 * L_13 = V_0;
		int32_t L_14 = XmlParserContext_get_XmlSpace_m3537(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___XmlSpace_2 = L_14;
		int32_t L_15 = (__this->___contextItemCount_11);
		__this->___contextItemCount_11 = ((int32_t)((int32_t)L_15+(int32_t)1));
		return;
	}
}
// System.Void System.Xml.XmlParserContext::PopScope()
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlExceptionMethodDeclarations.h"
extern TypeInfo* XmlException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* ContextItem_t745_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral445;
extern "C" void XmlParserContext_PopScope_m3540 (XmlParserContext_t746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		ContextItem_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		_stringLiteral445 = il2cpp_codegen_string_literal_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	ContextItem_t745 * V_0 = {0};
	{
		int32_t L_0 = (__this->___contextItemCount_11);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlException_t731 * L_1 = (XmlException_t731 *)il2cpp_codegen_object_new (XmlException_t731_il2cpp_TypeInfo_var);
		XmlException__ctor_m3453(L_1, _stringLiteral445, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		int32_t L_2 = (__this->___contextItemCount_11);
		__this->___contextItemCount_11 = ((int32_t)((int32_t)L_2-(int32_t)1));
		ArrayList_t695 * L_3 = (__this->___contextItems_10);
		int32_t L_4 = (__this->___contextItemCount_11);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_0 = ((ContextItem_t745 *)CastclassClass(L_5, ContextItem_t745_il2cpp_TypeInfo_var));
		ContextItem_t745 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___BaseURI_0);
		__this->___baseURI_0 = L_7;
		ContextItem_t745 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = (L_8->___XmlLang_1);
		__this->___xmlLang_8 = L_9;
		ContextItem_t745 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___XmlSpace_2);
		__this->___xmlSpace_9 = L_11;
		return;
	}
}
// System.Xml.XmlParserInput/XmlParserInputSource
#include "System_Xml_System_Xml_XmlParserInput_XmlParserInputSource.h"
// System.Xml.XmlParserInput/XmlParserInputSource
#include "System_Xml_System_Xml_XmlParserInput_XmlParserInputSourceMethodDeclarations.h"
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void XmlParserInputSource__ctor_m3541 (XmlParserInputSource_t747 * __this, TextReader_t736 * ___reader, String_t* ___baseUri, bool ___pe, int32_t ___line, int32_t ___column, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___baseUri;
		__this->___BaseURI_0 = L_0;
		TextReader_t736 * L_1 = ___reader;
		__this->___reader_1 = L_1;
		bool L_2 = ___pe;
		__this->___isPE_3 = L_2;
		int32_t L_3 = ___line;
		__this->___line_4 = L_3;
		int32_t L_4 = ___column;
		__this->___column_5 = L_4;
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C" int32_t XmlParserInputSource_get_LineNumber_m3542 (XmlParserInputSource_t747 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___line_4);
		return L_0;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C" int32_t XmlParserInputSource_get_LinePosition_m3543 (XmlParserInputSource_t747 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___column_5);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C" void XmlParserInputSource_Close_m3544 (XmlParserInputSource_t747 * __this, const MethodInfo* method)
{
	{
		TextReader_t736 * L_0 = (__this->___reader_1);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C" int32_t XmlParserInputSource_Read_m3545 (XmlParserInputSource_t747 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___state_2);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}

IL_000e:
	{
		bool L_1 = (__this->___isPE_3);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = (__this->___state_2);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		__this->___state_2 = 1;
		return ((int32_t)32);
	}

IL_002e:
	{
		TextReader_t736 * L_3 = (__this->___reader_1);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = (__this->___line_4);
		__this->___line_4 = ((int32_t)((int32_t)L_6+(int32_t)1));
		__this->___column_5 = 1;
		goto IL_0071;
	}

IL_005c:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_8 = (__this->___column_5);
		__this->___column_5 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0071:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_10 = (__this->___state_2);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_008e;
		}
	}
	{
		__this->___state_2 = 2;
		return ((int32_t)32);
	}

IL_008e:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Xml.XmlParserInput
#include "System_Xml_System_Xml_XmlParserInput.h"
// System.Xml.XmlParserInput
#include "System_Xml_System_Xml_XmlParserInputMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// Mono.Xml.DTDParameterEntityDeclaration
#include "System_Xml_Mono_Xml_DTDParameterEntityDeclaration.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// Mono.Xml.DTDEntityBase
#include "System_Xml_Mono_Xml_DTDEntityBaseMethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.String
#include "mscorlib_System_String.h"
// System.Xml.XmlParserInput
#include "System_Xml_System_Xml_XmlParserInputMethodDeclarations.h"
extern "C" void XmlParserInput__ctor_m3546 (XmlParserInput_t718 * __this, TextReader_t736 * ___reader, String_t* ___baseURI, const MethodInfo* method)
{
	{
		TextReader_t736 * L_0 = ___reader;
		String_t* L_1 = ___baseURI;
		XmlParserInput__ctor_m3547(__this, L_0, L_1, 1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Xml.XmlParserInput/XmlParserInputSource
#include "System_Xml_System_Xml_XmlParserInput_XmlParserInputSourceMethodDeclarations.h"
extern TypeInfo* Stack_t719_il2cpp_TypeInfo_var;
extern TypeInfo* XmlParserInputSource_t747_il2cpp_TypeInfo_var;
extern "C" void XmlParserInput__ctor_m3547 (XmlParserInput_t718 * __this, TextReader_t736 * ___reader, String_t* ___baseURI, int32_t ___line, int32_t ___column, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		XmlParserInputSource_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t719 * L_0 = (Stack_t719 *)il2cpp_codegen_object_new (Stack_t719_il2cpp_TypeInfo_var);
		Stack__ctor_m3829(L_0, /*hidden argument*/NULL);
		__this->___sourceStack_0 = L_0;
		__this->___allowTextDecl_4 = 1;
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		TextReader_t736 * L_1 = ___reader;
		String_t* L_2 = ___baseURI;
		int32_t L_3 = ___line;
		int32_t L_4 = ___column;
		XmlParserInputSource_t747 * L_5 = (XmlParserInputSource_t747 *)il2cpp_codegen_object_new (XmlParserInputSource_t747_il2cpp_TypeInfo_var);
		XmlParserInputSource__ctor_m3541(L_5, L_1, L_2, 0, L_3, L_4, /*hidden argument*/NULL);
		__this->___source_1 = L_5;
		return;
	}
}
// System.Void System.Xml.XmlParserInput::Close()
extern TypeInfo* XmlParserInputSource_t747_il2cpp_TypeInfo_var;
extern "C" void XmlParserInput_Close_m3548 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlParserInputSource_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		goto IL_001a;
	}

IL_0005:
	{
		Stack_t719 * L_0 = (__this->___sourceStack_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Stack::Pop() */, L_0);
		NullCheck(((XmlParserInputSource_t747 *)CastclassClass(L_1, XmlParserInputSource_t747_il2cpp_TypeInfo_var)));
		XmlParserInputSource_Close_m3544(((XmlParserInputSource_t747 *)CastclassClass(L_1, XmlParserInputSource_t747_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_001a:
	{
		Stack_t719 * L_2 = (__this->___sourceStack_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_2);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		XmlParserInputSource_t747 * L_4 = (__this->___source_1);
		NullCheck(L_4);
		XmlParserInputSource_Close_m3544(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
// Mono.Xml.DTDParameterEntityDeclaration
#include "System_Xml_Mono_Xml_DTDParameterEntityDeclaration.h"
// Mono.Xml.DTDEntityBase
#include "System_Xml_Mono_Xml_DTDEntityBaseMethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
extern TypeInfo* StringReader_t602_il2cpp_TypeInfo_var;
extern TypeInfo* XmlParserInputSource_t747_il2cpp_TypeInfo_var;
extern "C" void XmlParserInput_PushPEBuffer_m3549 (XmlParserInput_t718 * __this, DTDParameterEntityDeclaration_t714 * ___pe, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		XmlParserInputSource_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t719 * L_0 = (__this->___sourceStack_0);
		XmlParserInputSource_t747 * L_1 = (__this->___source_1);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_0, L_1);
		DTDParameterEntityDeclaration_t714 * L_2 = ___pe;
		NullCheck(L_2);
		String_t* L_3 = DTDEntityBase_get_ReplacementText_m3354(L_2, /*hidden argument*/NULL);
		StringReader_t602 * L_4 = (StringReader_t602 *)il2cpp_codegen_object_new (StringReader_t602_il2cpp_TypeInfo_var);
		StringReader__ctor_m3107(L_4, L_3, /*hidden argument*/NULL);
		DTDParameterEntityDeclaration_t714 * L_5 = ___pe;
		NullCheck(L_5);
		String_t* L_6 = DTDEntityBase_get_ActualUri_m3357(L_5, /*hidden argument*/NULL);
		XmlParserInputSource_t747 * L_7 = (XmlParserInputSource_t747 *)il2cpp_codegen_object_new (XmlParserInputSource_t747_il2cpp_TypeInfo_var);
		XmlParserInputSource__ctor_m3541(L_7, L_4, L_6, 1, 1, 0, /*hidden argument*/NULL);
		__this->___source_1 = L_7;
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern TypeInfo* XmlParserInputSource_t747_il2cpp_TypeInfo_var;
extern "C" int32_t XmlParserInput_ReadSourceChar_m3550 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlParserInputSource_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlParserInputSource_t747 * L_0 = (__this->___source_1);
		NullCheck(L_0);
		int32_t L_1 = XmlParserInputSource_Read_m3545(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0033;
	}

IL_0011:
	{
		Stack_t719 * L_2 = (__this->___sourceStack_0);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Stack::Pop() */, L_2);
		__this->___source_1 = ((XmlParserInputSource_t747 *)IsInstClass(L_3, XmlParserInputSource_t747_il2cpp_TypeInfo_var));
		XmlParserInputSource_t747 * L_4 = (__this->___source_1);
		NullCheck(L_4);
		int32_t L_5 = XmlParserInputSource_Read_m3545(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		Stack_t719 * L_7 = (__this->___sourceStack_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_7);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}

IL_004b:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C" int32_t XmlParserInput_PeekChar_m3551 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___has_peek_2);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = (__this->___peek_char_3);
		return L_1;
	}

IL_0012:
	{
		int32_t L_2 = XmlParserInput_ReadSourceChar_m3550(__this, /*hidden argument*/NULL);
		__this->___peek_char_3 = L_2;
		int32_t L_3 = (__this->___peek_char_3);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)55296))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_4 = (__this->___peek_char_3);
		if ((((int32_t)L_4) > ((int32_t)((int32_t)56319))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_5 = (__this->___peek_char_3);
		__this->___peek_char_3 = ((int32_t)((int32_t)((int32_t)65536)+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)55296)))<<(int32_t)((int32_t)10)))));
		int32_t L_6 = XmlParserInput_ReadSourceChar_m3550(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)56320))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57343))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_9 = (__this->___peek_char_3);
		int32_t L_10 = V_0;
		__this->___peek_char_3 = ((int32_t)((int32_t)L_9+(int32_t)((int32_t)((int32_t)L_10-(int32_t)((int32_t)56320)))));
	}

IL_008a:
	{
		__this->___has_peek_2 = 1;
		int32_t L_11 = (__this->___peek_char_3);
		return L_11;
	}
}
// System.Int32 System.Xml.XmlParserInput::ReadChar()
extern "C" int32_t XmlParserInput_ReadChar_m3552 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = XmlParserInput_PeekChar_m3551(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		__this->___has_peek_2 = 0;
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String System.Xml.XmlParserInput::get_BaseURI()
extern "C" String_t* XmlParserInput_get_BaseURI_m3553 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	{
		XmlParserInputSource_t747 * L_0 = (__this->___source_1);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___BaseURI_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
extern "C" bool XmlParserInput_get_HasPEBuffer_m3554 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	{
		Stack_t719 * L_0 = (__this->___sourceStack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_0);
		return ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
extern "C" int32_t XmlParserInput_get_LineNumber_m3555 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	{
		XmlParserInputSource_t747 * L_0 = (__this->___source_1);
		NullCheck(L_0);
		int32_t L_1 = XmlParserInputSource_get_LineNumber_m3542(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
extern "C" int32_t XmlParserInput_get_LinePosition_m3556 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	{
		XmlParserInputSource_t747 * L_0 = (__this->___source_1);
		NullCheck(L_0);
		int32_t L_1 = XmlParserInputSource_get_LinePosition_m3543(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
extern "C" bool XmlParserInput_get_AllowTextDecl_m3557 (XmlParserInput_t718 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___allowTextDecl_4);
		return L_0;
	}
}
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void XmlParserInput_set_AllowTextDecl_m3558 (XmlParserInput_t718 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___allowTextDecl_4 = L_0;
		return;
	}
}
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReaderMethodDeclarations.h"
// System.Xml.XmlReaderBinarySupport
#include "System_Xml_System_Xml_XmlReaderBinarySupport.h"
// System.Xml.XmlReaderSettings
#include "System_Xml_System_Xml_XmlReaderSettings.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriter.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriter.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriter.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriterMethodDeclarations.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriterMethodDeclarations.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriterMethodDeclarations.h"
// System.Void System.Xml.XmlReader::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void XmlReader__ctor_m3559 (XmlReader_t57 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C" void XmlReader_System_IDisposable_Dispose_m3560 (XmlReader_t57 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(24 /* System.Void System.Xml.XmlReader::Dispose(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C" XmlReaderBinarySupport_t748 * XmlReader_get_Binary_m3561 (XmlReader_t57 * __this, const MethodInfo* method)
{
	{
		XmlReaderBinarySupport_t748 * L_0 = (__this->___binary_0);
		return L_0;
	}
}
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C" bool XmlReader_get_HasAttributes_m3562 (XmlReader_t57 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		return ((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C" bool XmlReader_get_IsDefault_m3563 (XmlReader_t57 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String System.Xml.XmlReader::get_Item(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" String_t* XmlReader_get_Item_m3564 (XmlReader_t57 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, __this, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlReader::get_Name()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral275;
extern "C" String_t* XmlReader_get_Name_m3565 (XmlReader_t57 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral275 = il2cpp_codegen_string_literal_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Prefix() */, __this);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m159(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Prefix() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m154(NULL /*static, unused*/, L_2, _stringLiteral275, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0032;
	}

IL_002c:
	{
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		G_B3_0 = L_5;
	}

IL_0032:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" XmlReaderSettings_t749 * XmlReader_get_Settings_m3566 (XmlReader_t57 * __this, const MethodInfo* method)
{
	{
		XmlReaderSettings_t749 * L_0 = (__this->___settings_1);
		return L_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C" int32_t XmlReader_get_XmlSpace_m3567 (XmlReader_t57 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void XmlReader_Dispose_m3568 (XmlReader_t57 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(23 /* System.Void System.Xml.XmlReader::Close() */, __this);
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlReader::IsStartElement()
extern "C" bool XmlReader_IsStartElement_m3569 (XmlReader_t57 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean System.Xml.XmlReader::IsStartElement(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool XmlReader_IsStartElement_m3570 (XmlReader_t57 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::IsStartElement() */, __this);
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
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Name() */, __this);
		String_t* L_2 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m67(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var;
extern "C" void XmlReader_MoveToAttribute_m3571 (XmlReader_t57 * __this, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___i;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t790 * L_2 = (ArgumentOutOfRangeException_t790 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3869(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, __this);
		V_0 = 0;
		goto IL_002b;
	}

IL_0020:
	{
		VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, __this);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_002b:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___i;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
extern "C" bool XmlReader_IsContent_m3572 (XmlReader_t57 * __this, int32_t ___nodeType, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___nodeType;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0037;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_001e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_003b;
		}
	}

IL_001e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)15))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_003f;
	}

IL_0033:
	{
		return 1;
	}

IL_0035:
	{
		return 1;
	}

IL_0037:
	{
		return 1;
	}

IL_0039:
	{
		return 1;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReaderMethodDeclarations.h"
extern "C" int32_t XmlReader_MoveToContent_m3573 (XmlReader_t57 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_001e;
	}

IL_0019:
	{
		goto IL_0025;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		return L_3;
	}

IL_0025:
	{
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0038;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
	}

IL_0038:
	{
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		bool L_6 = XmlReader_IsContent_m3572(__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		return L_7;
	}

IL_0050:
	{
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Xml.XmlReader::get_EOF() */, __this);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (int32_t)(0);
	}
}
// System.String System.Xml.XmlReader::ReadOuterXml()
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriterMethodDeclarations.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriterMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringWriter_t770_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t767_il2cpp_TypeInfo_var;
extern "C" String_t* XmlReader_ReadOuterXml_m3574 (XmlReader_t57 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringWriter_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		XmlTextWriter_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	StringWriter_t770 * V_0 = {0};
	XmlTextWriter_t767 * V_1 = {0};
	int32_t V_2 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001f;
		}
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_2;
	}

IL_001f:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0055;
	}

IL_0039:
	{
		StringWriter_t770 * L_6 = (StringWriter_t770 *)il2cpp_codegen_object_new (StringWriter_t770_il2cpp_TypeInfo_var);
		StringWriter__ctor_m3870(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		StringWriter_t770 * L_7 = V_0;
		XmlTextWriter_t767 * L_8 = (XmlTextWriter_t767 *)il2cpp_codegen_object_new (XmlTextWriter_t767_il2cpp_TypeInfo_var);
		XmlTextWriter__ctor_m3762(L_8, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		XmlTextWriter_t767 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< XmlReader_t57 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, L_9, __this, 0);
		StringWriter_t770 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_10);
		return L_11;
	}

IL_0055:
	{
		VirtActionInvoker0::Invoke(37 /* System.Void System.Xml.XmlReader::Skip() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_12;
	}
}
// System.Void System.Xml.XmlReader::Skip()
extern "C" void XmlReader_Skip_m3575 (XmlReader_t57 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (!L_2)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}

IL_0033:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		V_0 = L_3;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_003f;
		}
	}

IL_0056:
	{
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_006a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
	}

IL_006a:
	{
		return;
	}
}
// System.Xml.XmlReaderBinarySupport/CommandState
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CommandState.h"
// System.Xml.XmlReaderBinarySupport/CommandState
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CommandStateMethodDeclarations.h"
// System.Xml.XmlReaderBinarySupport/CharGetter
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CharGetter.h"
// System.Xml.XmlReaderBinarySupport/CharGetter
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CharGetterMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Xml.XmlReaderBinarySupport/CharGetter::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void CharGetter__ctor_m3576 (CharGetter_t751 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t CharGetter_Invoke_m3577 (CharGetter_t751 * __this, CharU5BU5D_t60* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CharGetter_Invoke_m3577((CharGetter_t751 *)__this->___prev_9,___buffer, ___offset, ___length, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, CharU5BU5D_t60* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___buffer, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, CharU5BU5D_t60* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___buffer, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___buffer, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.Char
#include "mscorlib_System_Char.h"
extern "C" int32_t pinvoke_delegate_wrapper_CharGetter_t751(Il2CppObject* delegate, CharU5BU5D_t60* ___buffer, int32_t ___offset, int32_t ___length)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(char*, int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___buffer' to native representation
	char* ____buffer_marshaled = { 0 };
	____buffer_marshaled = il2cpp_codegen_marshal_char_array(___buffer);

	// Marshaling of parameter '___offset' to native representation

	// Marshaling of parameter '___length' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____buffer_marshaled, ___offset, ___length);

	// Marshaling cleanup of parameter '___buffer' native representation
	il2cpp_codegen_marshal_free(____buffer_marshaled);
	____buffer_marshaled = NULL;

	// Marshaling cleanup of parameter '___offset' native representation

	// Marshaling cleanup of parameter '___length' native representation

	return _return_value;
}
// System.IAsyncResult System.Xml.XmlReaderBinarySupport/CharGetter::BeginInvoke(System.Char[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern "C" Object_t * CharGetter_BeginInvoke_m3578 (CharGetter_t751 * __this, CharU5BU5D_t60* ___buffer, int32_t ___offset, int32_t ___length, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer;
	__d_args[1] = Box(Int32_t37_il2cpp_TypeInfo_var, &___offset);
	__d_args[2] = Box(Int32_t37_il2cpp_TypeInfo_var, &___length);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::EndInvoke(System.IAsyncResult)
extern "C" int32_t CharGetter_EndInvoke_m3579 (CharGetter_t751 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Xml.XmlReaderBinarySupport
#include "System_Xml_System_Xml_XmlReaderBinarySupportMethodDeclarations.h"
// System.Void System.Xml.XmlReaderBinarySupport::Reset()
extern "C" void XmlReaderBinarySupport_Reset_m3580 (XmlReaderBinarySupport_t748 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		bool L_0 = (__this->___dontReset_4);
		if (L_0)
		{
			goto IL_00aa;
		}
	}
	{
		__this->___dontReset_4 = 1;
		bool L_1 = (__this->___hasCache_3);
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		XmlReader_t57 * L_2 = (__this->___reader_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)13))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)14))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_005d;
	}

IL_004c:
	{
		XmlReader_t57 * L_8 = (__this->___reader_0);
		NullCheck(L_8);
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, L_8);
		goto IL_005d;
	}

IL_005d:
	{
		int32_t L_9 = (__this->___state_2);
		V_1 = L_9;
		int32_t L_10 = V_1;
		if (((int32_t)((int32_t)L_10-(int32_t)1)) == 0)
		{
			goto IL_007d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)1)) == 1)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)1)) == 2)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_008e;
	}

IL_007d:
	{
		XmlReader_t57 * L_11 = (__this->___reader_0);
		NullCheck(L_11);
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, L_11);
		goto IL_008e;
	}

IL_008e:
	{
		__this->___base64CacheStartsAt_1 = (-1);
		__this->___state_2 = 0;
		__this->___hasCache_3 = 0;
		__this->___dontReset_4 = 0;
	}

IL_00aa:
	{
		return;
	}
}
// System.Xml.XmlReaderSettings
#include "System_Xml_System_Xml_XmlReaderSettingsMethodDeclarations.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Boolean System.Xml.XmlReaderSettings::get_CheckCharacters()
extern "C" bool XmlReaderSettings_get_CheckCharacters_m3581 (XmlReaderSettings_t749 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___checkCharacters_0);
		return L_0;
	}
}
// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::get_ConformanceLevel()
extern "C" int32_t XmlReaderSettings_get_ConformanceLevel_m3582 (XmlReaderSettings_t749 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___conformance_1);
		return L_0;
	}
}
// System.Xml.XmlResolver
#include "System_Xml_System_Xml_XmlResolver.h"
// System.Xml.XmlResolver
#include "System_Xml_System_Xml_XmlResolverMethodDeclarations.h"
// System.Uri
#include "System_System_Uri.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.Void System.Xml.XmlResolver::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void XmlResolver__ctor_m3583 (XmlResolver_t696 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
// System.Uri
#include "System_System_Uri.h"
// System.String
#include "mscorlib_System_String.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.Xml.XmlResolver
#include "System_Xml_System_Xml_XmlResolverMethodDeclarations.h"
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t792_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral446;
extern Il2CppCodeGenString* _stringLiteral447;
extern Il2CppCodeGenString* _stringLiteral448;
extern Il2CppCodeGenString* _stringLiteral449;
extern Il2CppCodeGenString* _stringLiteral450;
extern "C" Uri_t711 * XmlResolver_ResolveUri_m3584 (XmlResolver_t696 * __this, Uri_t711 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		Path_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		_stringLiteral446 = il2cpp_codegen_string_literal_from_index(446);
		_stringLiteral447 = il2cpp_codegen_string_literal_from_index(447);
		_stringLiteral448 = il2cpp_codegen_string_literal_from_index(448);
		_stringLiteral449 = il2cpp_codegen_string_literal_from_index(449);
		_stringLiteral450 = il2cpp_codegen_string_literal_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t711 * L_0 = ___baseUri;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m3871(NULL /*static, unused*/, L_0, (Uri_t711 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_2 = ___relativeUri;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t617 * L_3 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_3, _stringLiteral446, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001d:
	{
		String_t* L_4 = ___relativeUri;
		NullCheck(L_4);
		bool L_5 = String_StartsWith_m3108(L_4, _stringLiteral447, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_6 = ___relativeUri;
		NullCheck(L_6);
		bool L_7 = String_StartsWith_m3108(L_6, _stringLiteral448, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___relativeUri;
		NullCheck(L_8);
		bool L_9 = String_StartsWith_m3108(L_8, _stringLiteral449, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = ___relativeUri;
		NullCheck(L_10);
		bool L_11 = String_StartsWith_m3108(L_10, _stringLiteral450, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}

IL_005d:
	{
		String_t* L_12 = ___relativeUri;
		Uri_t711 * L_13 = (Uri_t711 *)il2cpp_codegen_object_new (Uri_t711_il2cpp_TypeInfo_var);
		Uri__ctor_m3816(L_13, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0064:
	{
		String_t* L_14 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t792_il2cpp_TypeInfo_var);
		String_t* L_15 = Path_GetFullPath_m3872(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Uri_t711 * L_16 = (Uri_t711 *)il2cpp_codegen_object_new (Uri_t711_il2cpp_TypeInfo_var);
		Uri__ctor_m3816(L_16, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0070:
	{
		String_t* L_17 = ___relativeUri;
		if (L_17)
		{
			goto IL_0078;
		}
	}
	{
		Uri_t711 * L_18 = ___baseUri;
		return L_18;
	}

IL_0078:
	{
		Uri_t711 * L_19 = ___baseUri;
		String_t* L_20 = ___relativeUri;
		String_t* L_21 = XmlResolver_EscapeRelativeUriBody_m3585(__this, L_20, /*hidden argument*/NULL);
		Uri_t711 * L_22 = (Uri_t711 *)il2cpp_codegen_object_new (Uri_t711_il2cpp_TypeInfo_var);
		Uri__ctor_m3873(L_22, L_19, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern Il2CppCodeGenString* _stringLiteral451;
extern Il2CppCodeGenString* _stringLiteral452;
extern Il2CppCodeGenString* _stringLiteral453;
extern Il2CppCodeGenString* _stringLiteral454;
extern Il2CppCodeGenString* _stringLiteral455;
extern Il2CppCodeGenString* _stringLiteral456;
extern Il2CppCodeGenString* _stringLiteral457;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral189;
extern Il2CppCodeGenString* _stringLiteral459;
extern "C" String_t* XmlResolver_EscapeRelativeUriBody_m3585 (XmlResolver_t696 * __this, String_t* ___src, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		_stringLiteral452 = il2cpp_codegen_string_literal_from_index(452);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		_stringLiteral454 = il2cpp_codegen_string_literal_from_index(454);
		_stringLiteral455 = il2cpp_codegen_string_literal_from_index(455);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		_stringLiteral457 = il2cpp_codegen_string_literal_from_index(457);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		_stringLiteral459 = il2cpp_codegen_string_literal_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___src;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m130(L_0, _stringLiteral451, _stringLiteral452, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m130(L_1, _stringLiteral453, _stringLiteral454, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m130(L_2, _stringLiteral455, _stringLiteral456, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m130(L_3, _stringLiteral457, _stringLiteral458, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m130(L_4, _stringLiteral189, _stringLiteral459, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpaceMethodDeclarations.h"
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfo.h"
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfoMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::.ctor(Mono.Xml2.XmlTextReader)
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReader.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void XmlTokenInfo__ctor_m3586 (XmlTokenInfo_t753 * __this, XmlTextReader_t754 * ___xtr, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		XmlTextReader_t754 * L_0 = ___xtr;
		__this->___Reader_1 = L_0;
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, __this);
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value()
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReaderMethodDeclarations.h"
extern "C" String_t* XmlTokenInfo_get_Value_m3587 (XmlTokenInfo_t753 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		String_t* L_0 = (__this->___valueCache_0);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___valueCache_0);
		return L_1;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___ValueBufferStart_10);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		XmlTextReader_t754 * L_3 = (__this->___Reader_1);
		NullCheck(L_3);
		StringBuilder_t320 * L_4 = (L_3->___valueBuffer_26);
		int32_t L_5 = (__this->___ValueBufferStart_10);
		int32_t L_6 = (__this->___ValueBufferEnd_11);
		int32_t L_7 = (__this->___ValueBufferStart_10);
		NullCheck(L_4);
		String_t* L_8 = StringBuilder_ToString_m3861(L_4, L_5, ((int32_t)((int32_t)L_6-(int32_t)L_7)), /*hidden argument*/NULL);
		__this->___valueCache_0 = L_8;
		String_t* L_9 = (__this->___valueCache_0);
		return L_9;
	}

IL_004e:
	{
		int32_t L_10 = (__this->___NodeType_12);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 1)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 2)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 3)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 4)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 5)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 6)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 7)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 8)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 9)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 10)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 11)
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00aa;
	}

IL_0092:
	{
		XmlTextReader_t754 * L_12 = (__this->___Reader_1);
		NullCheck(L_12);
		String_t* L_13 = XmlTextReader_CreateValueString_m3673(L_12, /*hidden argument*/NULL);
		__this->___valueCache_0 = L_13;
		String_t* L_14 = (__this->___valueCache_0);
		return L_14;
	}

IL_00aa:
	{
		return (String_t*)NULL;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::set_Value(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void XmlTokenInfo_set_Value_m3588 (XmlTokenInfo_t753 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___valueCache_0 = L_0;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTokenInfo_Clear_m3589 (XmlTokenInfo_t753 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		__this->___ValueBufferStart_10 = (-1);
		__this->___valueCache_0 = (String_t*)NULL;
		__this->___NodeType_12 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_1 = L_0;
		V_0 = L_1;
		__this->___NamespaceURI_5 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3 = L_2;
		V_0 = L_3;
		__this->___Prefix_4 = L_3;
		String_t* L_4 = V_0;
		String_t* L_5 = L_4;
		V_0 = L_5;
		__this->___LocalName_3 = L_5;
		String_t* L_6 = V_0;
		__this->___Name_2 = L_6;
		__this->___IsEmptyElement_6 = 0;
		__this->___QuoteChar_7 = ((int32_t)34);
		int32_t L_7 = 0;
		V_1 = L_7;
		__this->___LinePosition_9 = L_7;
		int32_t L_8 = V_1;
		__this->___LineNumber_8 = L_8;
		return;
	}
}
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlAttributeTokenInfo.h"
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlAttributeTokenInfoMethodDeclarations.h"
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::.ctor(Mono.Xml2.XmlTextReader)
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReader.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfoMethodDeclarations.h"
extern TypeInfo* StringBuilder_t320_il2cpp_TypeInfo_var;
extern "C" void XmlAttributeTokenInfo__ctor_m3590 (XmlAttributeTokenInfo_t755 * __this, XmlTextReader_t754 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringBuilder_t320 * L_0 = (StringBuilder_t320 *)il2cpp_codegen_object_new (StringBuilder_t320_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1551(L_0, /*hidden argument*/NULL);
		__this->___tmpBuilder_16 = L_0;
		XmlTextReader_t754 * L_1 = ___reader;
		XmlTokenInfo__ctor_m3586(__this, L_1, /*hidden argument*/NULL);
		((XmlTokenInfo_t753 *)__this)->___NodeType_12 = 2;
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral200;
extern Il2CppCodeGenString* _stringLiteral460;
extern "C" String_t* XmlAttributeTokenInfo_get_Value_m3591 (XmlAttributeTokenInfo_t755 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral200 = il2cpp_codegen_string_literal_from_index(200);
		_stringLiteral460 = il2cpp_codegen_string_literal_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	XmlTokenInfo_t753 * V_0 = {0};
	int32_t V_1 = 0;
	XmlTokenInfo_t753 * V_2 = {0};
	{
		String_t* L_0 = (__this->___valueCache_15);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___valueCache_15);
		return L_1;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___ValueTokenStartIndex_13);
		int32_t L_3 = (__this->___ValueTokenEndIndex_14);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0075;
		}
	}
	{
		XmlTextReader_t754 * L_4 = (((XmlTokenInfo_t753 *)__this)->___Reader_1);
		NullCheck(L_4);
		XmlTokenInfoU5BU5D_t760* L_5 = (L_4->___attributeValueTokens_7);
		int32_t L_6 = (__this->___ValueTokenStartIndex_13);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(XmlTokenInfo_t753 **)(XmlTokenInfo_t753 **)SZArrayLdElema(L_5, L_7, sizeof(XmlTokenInfo_t753 *)));
		XmlTokenInfo_t753 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (L_8->___NodeType_12);
		if ((!(((uint32_t)L_9) == ((uint32_t)5))))
		{
			goto IL_0062;
		}
	}
	{
		XmlTokenInfo_t753 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (L_10->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m154(NULL /*static, unused*/, _stringLiteral200, L_11, _stringLiteral460, /*hidden argument*/NULL);
		__this->___valueCache_15 = L_12;
		goto IL_006e;
	}

IL_0062:
	{
		XmlTokenInfo_t753 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value() */, L_13);
		__this->___valueCache_15 = L_14;
	}

IL_006e:
	{
		String_t* L_15 = (__this->___valueCache_15);
		return L_15;
	}

IL_0075:
	{
		StringBuilder_t320 * L_16 = (__this->___tmpBuilder_16);
		NullCheck(L_16);
		StringBuilder_set_Length_m3838(L_16, 0, /*hidden argument*/NULL);
		int32_t L_17 = (__this->___ValueTokenStartIndex_13);
		V_1 = L_17;
		goto IL_00f0;
	}

IL_008d:
	{
		XmlTextReader_t754 * L_18 = (((XmlTokenInfo_t753 *)__this)->___Reader_1);
		NullCheck(L_18);
		XmlTokenInfoU5BU5D_t760* L_19 = (L_18->___attributeValueTokens_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		V_2 = (*(XmlTokenInfo_t753 **)(XmlTokenInfo_t753 **)SZArrayLdElema(L_19, L_21, sizeof(XmlTokenInfo_t753 *)));
		XmlTokenInfo_t753 * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___NodeType_12);
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_00be;
		}
	}
	{
		StringBuilder_t320 * L_24 = (__this->___tmpBuilder_16);
		XmlTokenInfo_t753 * L_25 = V_2;
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value() */, L_25);
		NullCheck(L_24);
		StringBuilder_Append_m3134(L_24, L_26, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_00be:
	{
		StringBuilder_t320 * L_27 = (__this->___tmpBuilder_16);
		NullCheck(L_27);
		StringBuilder_Append_m3837(L_27, ((int32_t)38), /*hidden argument*/NULL);
		StringBuilder_t320 * L_28 = (__this->___tmpBuilder_16);
		XmlTokenInfo_t753 * L_29 = V_2;
		NullCheck(L_29);
		String_t* L_30 = (L_29->___Name_2);
		NullCheck(L_28);
		StringBuilder_Append_m3134(L_28, L_30, /*hidden argument*/NULL);
		StringBuilder_t320 * L_31 = (__this->___tmpBuilder_16);
		NullCheck(L_31);
		StringBuilder_Append_m3837(L_31, ((int32_t)59), /*hidden argument*/NULL);
	}

IL_00ec:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00f0:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = (__this->___ValueTokenEndIndex_14);
		if ((((int32_t)L_33) <= ((int32_t)L_34)))
		{
			goto IL_008d;
		}
	}
	{
		StringBuilder_t320 * L_35 = (__this->___tmpBuilder_16);
		StringBuilder_t320 * L_36 = (__this->___tmpBuilder_16);
		NullCheck(L_36);
		int32_t L_37 = StringBuilder_get_Length_m3860(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_38 = StringBuilder_ToString_m3861(L_35, 0, L_37, /*hidden argument*/NULL);
		__this->___valueCache_15 = L_38;
		String_t* L_39 = (__this->___valueCache_15);
		return L_39;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::set_Value(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void XmlAttributeTokenInfo_set_Value_m3592 (XmlAttributeTokenInfo_t755 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___valueCache_15 = L_0;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::Clear()
extern "C" void XmlAttributeTokenInfo_Clear_m3593 (XmlAttributeTokenInfo_t755 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		XmlTokenInfo_Clear_m3589(__this, /*hidden argument*/NULL);
		__this->___valueCache_15 = (String_t*)NULL;
		((XmlTokenInfo_t753 *)__this)->___NodeType_12 = 2;
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->___ValueTokenEndIndex_14 = L_0;
		int32_t L_1 = V_0;
		__this->___ValueTokenStartIndex_13 = L_1;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::FillXmlns()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral436;
extern "C" void XmlAttributeTokenInfo_FillXmlns_m3594 (XmlAttributeTokenInfo_t755 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (((XmlTokenInfo_t753 *)__this)->___Prefix_4);
		bool L_1 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_0, _stringLiteral436, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t754 * L_2 = (((XmlTokenInfo_t753 *)__this)->___Reader_1);
		NullCheck(L_2);
		XmlNamespaceManager_t741 * L_3 = (L_2->___nsmgr_13);
		String_t* L_4 = (((XmlTokenInfo_t753 *)__this)->___LocalName_3);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, __this);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_3, L_4, L_5);
		goto IL_0066;
	}

IL_0036:
	{
		String_t* L_6 = (((XmlTokenInfo_t753 *)__this)->___Name_2);
		bool L_7 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_6, _stringLiteral436, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		XmlTextReader_t754 * L_8 = (((XmlTokenInfo_t753 *)__this)->___Reader_1);
		NullCheck(L_8);
		XmlNamespaceManager_t741 * L_9 = (L_8->___nsmgr_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, __this);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_9, L_10, L_11);
	}

IL_0066:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::FillNamespace()
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReaderMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern "C" void XmlAttributeTokenInfo_FillNamespace_m3595 (XmlAttributeTokenInfo_t755 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (((XmlTokenInfo_t753 *)__this)->___Prefix_4);
		bool L_1 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_0, _stringLiteral436, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = (((XmlTokenInfo_t753 *)__this)->___Name_2);
		bool L_3 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_2, _stringLiteral436, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}

IL_002a:
	{
		((XmlTokenInfo_t753 *)__this)->___NamespaceURI_5 = _stringLiteral437;
		goto IL_0072;
	}

IL_003a:
	{
		String_t* L_4 = (((XmlTokenInfo_t753 *)__this)->___Prefix_4);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m159(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((XmlTokenInfo_t753 *)__this)->___NamespaceURI_5 = L_6;
		goto IL_0072;
	}

IL_005a:
	{
		XmlTextReader_t754 * L_7 = (((XmlTokenInfo_t753 *)__this)->___Reader_1);
		String_t* L_8 = (((XmlTokenInfo_t753 *)__this)->___Prefix_4);
		NullCheck(L_7);
		String_t* L_9 = XmlTextReader_LookupNamespace_m3639(L_7, L_8, 1, /*hidden argument*/NULL);
		((XmlTokenInfo_t753 *)__this)->___NamespaceURI_5 = L_9;
	}

IL_0072:
	{
		return;
	}
}
// Mono.Xml2.XmlTextReader/TagName
#include "System_Xml_Mono_Xml2_XmlTextReader_TagName.h"
// Mono.Xml2.XmlTextReader/TagName
#include "System_Xml_Mono_Xml2_XmlTextReader_TagNameMethodDeclarations.h"
// System.Void Mono.Xml2.XmlTextReader/TagName::.ctor(System.String,System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void TagName__ctor_m3596 (TagName_t756 * __this, String_t* ___n, String_t* ___l, String_t* ___p, const MethodInfo* method)
{
	{
		String_t* L_0 = ___n;
		__this->___Name_0 = L_0;
		String_t* L_1 = ___l;
		__this->___LocalName_1 = L_1;
		String_t* L_2 = ___p;
		__this->___Prefix_2 = L_2;
		return;
	}
}
// Conversion methods for marshalling of: Mono.Xml2.XmlTextReader/TagName
extern "C" void TagName_t756_marshal(const TagName_t756& unmarshaled, TagName_t756_marshaled& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___Name_0);
	marshaled.___LocalName_1 = il2cpp_codegen_marshal_string(unmarshaled.___LocalName_1);
	marshaled.___Prefix_2 = il2cpp_codegen_marshal_string(unmarshaled.___Prefix_2);
}
extern "C" void TagName_t756_marshal_back(const TagName_t756_marshaled& marshaled, TagName_t756& unmarshaled)
{
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___Name_0);
	unmarshaled.___LocalName_1 = il2cpp_codegen_marshal_string_result(marshaled.___LocalName_1);
	unmarshaled.___Prefix_2 = il2cpp_codegen_marshal_string_result(marshaled.___Prefix_2);
}
// Conversion method for clean up from marshalling of: Mono.Xml2.XmlTextReader/TagName
extern "C" void TagName_t756_marshal_cleanup(TagName_t756_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___LocalName_1);
	marshaled.___LocalName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Prefix_2);
	marshaled.___Prefix_2 = NULL;
}
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState.h"
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputStateMethodDeclarations.h"
// Mono.Xml2.XmlTextReader/DtdInputStateStack
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputStateStack.h"
// Mono.Xml2.XmlTextReader/DtdInputStateStack
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputStateStackMethodDeclarations.h"
// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::.ctor()
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Mono.Xml2.XmlTextReader/DtdInputStateStack
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputStateStackMethodDeclarations.h"
extern TypeInfo* Stack_t719_il2cpp_TypeInfo_var;
extern "C" void DtdInputStateStack__ctor_m3597 (DtdInputStateStack_t758 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t719 * L_0 = (Stack_t719 *)il2cpp_codegen_object_new (Stack_t719_il2cpp_TypeInfo_var);
		Stack__ctor_m3829(L_0, /*hidden argument*/NULL);
		__this->___intern_0 = L_0;
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		DtdInputStateStack_Push_m3600(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Peek()
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern "C" int32_t DtdInputStateStack_Peek_m3598 (DtdInputStateStack_t758 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t719 * L_0 = (__this->___intern_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Object System.Collections.Stack::Peek() */, L_0);
		return (int32_t)(((*(int32_t*)((int32_t*)UnBox (L_1, Int32_t37_il2cpp_TypeInfo_var)))));
	}
}
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Pop()
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern "C" int32_t DtdInputStateStack_Pop_m3599 (DtdInputStateStack_t758 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t719 * L_0 = (__this->___intern_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Stack::Pop() */, L_0);
		return (int32_t)(((*(int32_t*)((int32_t*)UnBox (L_1, Int32_t37_il2cpp_TypeInfo_var)))));
	}
}
// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::Push(Mono.Xml2.XmlTextReader/DtdInputState)
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState.h"
extern TypeInfo* DtdInputState_t757_il2cpp_TypeInfo_var;
extern "C" void DtdInputStateStack_Push_m3600 (DtdInputStateStack_t758 * __this, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DtdInputState_t757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_t719 * L_0 = (__this->___intern_0);
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(DtdInputState_t757_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_0, L_3);
		return;
	}
}
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlUrlResolver
#include "System_Xml_System_Xml_XmlUrlResolver.h"
// System.Xml.XmlStreamReader
#include "System_Xml_System_Xml_XmlStreamReader.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Xml.NameTable
#include "System_Xml_System_Xml_NameTable.h"
// System.UriKind
#include "System_System_UriKind.h"
// Mono.Xml.DTDEntityDeclaration
#include "System_Xml_Mono_Xml_DTDEntityDeclaration.h"
// Mono.Xml.DTDEntityDeclarationCollection
#include "System_Xml_Mono_Xml_DTDEntityDeclarationCollection.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Xml.DTDReader
#include "System_Xml_System_Xml_DTDReader.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"
// System.Xml.XmlUrlResolver
#include "System_Xml_System_Xml_XmlUrlResolverMethodDeclarations.h"
// System.Xml.XmlStreamReader
#include "System_Xml_System_Xml_XmlStreamReaderMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Xml.NameTable
#include "System_Xml_System_Xml_NameTableMethodDeclarations.h"
// Mono.Xml.DTDEntityDeclarationCollection
#include "System_Xml_Mono_Xml_DTDEntityDeclarationCollectionMethodDeclarations.h"
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNodeMethodDeclarations.h"
// Mono.Xml.DTDEntityDeclaration
#include "System_Xml_Mono_Xml_DTDEntityDeclarationMethodDeclarations.h"
// System.Xml.XmlChar
#include "System_Xml_System_Xml_XmlCharMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReaderMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Xml.DTDReader
#include "System_Xml_System_Xml_DTDReaderMethodDeclarations.h"
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNameTable)
// System.String
#include "mscorlib_System_String.h"
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Xml.XmlUrlResolver
#include "System_Xml_System_Xml_XmlUrlResolverMethodDeclarations.h"
// Mono.Xml2.XmlTextReader/DtdInputStateStack
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputStateStackMethodDeclarations.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReaderMethodDeclarations.h"
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReaderMethodDeclarations.h"
// System.Xml.XmlNamespaceManager
#include "System_Xml_System_Xml_XmlNamespaceManagerMethodDeclarations.h"
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContextMethodDeclarations.h"
// System.Xml.XmlStreamReader
#include "System_Xml_System_Xml_XmlStreamReaderMethodDeclarations.h"
extern TypeInfo* XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var;
extern TypeInfo* XmlUrlResolver_t773_il2cpp_TypeInfo_var;
extern TypeInfo* DtdInputStateStack_t758_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNamespaceManager_t741_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlParserContext_t746_il2cpp_TypeInfo_var;
extern TypeInfo* XmlStreamReader_t733_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m3601 (XmlTextReader_t754 * __this, String_t* ___url, XmlNameTable_t697 * ___nt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		XmlUrlResolver_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		DtdInputStateStack_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		XmlNamespaceManager_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlParserContext_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		XmlStreamReader_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Stream_t738 * V_1 = {0};
	XmlParserContext_t746 * V_2 = {0};
	{
		__this->___attributeTokens_6 = ((XmlAttributeTokenInfoU5BU5D_t759*)SZArrayNew(XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var, ((int32_t)10)));
		__this->___attributeValueTokens_7 = ((XmlTokenInfoU5BU5D_t760*)SZArrayNew(XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var, ((int32_t)10)));
		__this->___namespaces_43 = 1;
		XmlUrlResolver_t773 * L_0 = (XmlUrlResolver_t773 *)il2cpp_codegen_object_new (XmlUrlResolver_t773_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m3802(L_0, /*hidden argument*/NULL);
		__this->___resolver_45 = L_0;
		__this->___closeInput_49 = 1;
		DtdInputStateStack_t758 * L_1 = (DtdInputStateStack_t758 *)il2cpp_codegen_object_new (DtdInputStateStack_t758_il2cpp_TypeInfo_var);
		DtdInputStateStack__ctor_m3597(L_1, /*hidden argument*/NULL);
		__this->___stateStack_53 = L_1;
		XmlReader__ctor_m3559(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___url;
		Stream_t738 * L_3 = XmlTextReader_GetStreamFromUrl_m3609(__this, L_2, (&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		XmlNameTable_t697 * L_4 = ___nt;
		XmlNameTable_t697 * L_5 = ___nt;
		XmlNamespaceManager_t741 * L_6 = (XmlNamespaceManager_t741 *)il2cpp_codegen_object_new (XmlNamespaceManager_t741_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m3499(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlParserContext_t746 * L_8 = (XmlParserContext_t746 *)il2cpp_codegen_object_new (XmlParserContext_t746_il2cpp_TypeInfo_var);
		XmlParserContext__ctor_m3520(L_8, L_4, L_6, L_7, 0, /*hidden argument*/NULL);
		V_2 = L_8;
		String_t* L_9 = V_0;
		XmlParserContext_t746 * L_10 = V_2;
		Stream_t738 * L_11 = V_1;
		XmlStreamReader_t733 * L_12 = (XmlStreamReader_t733 *)il2cpp_codegen_object_new (XmlStreamReader_t733_il2cpp_TypeInfo_var);
		XmlStreamReader__ctor_m3462(L_12, L_11, /*hidden argument*/NULL);
		XmlTextReader_InitializeContext_m3654(__this, L_9, L_10, L_12, ((int32_t)9), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m3602 (XmlTextReader_t754 * __this, TextReader_t736 * ___input, XmlNameTable_t697 * ___nt, const MethodInfo* method)
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
		TextReader_t736 * L_1 = ___input;
		XmlNameTable_t697 * L_2 = ___nt;
		XmlTextReader__ctor_m3605(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContext.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlStreamReader_t733_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m3603 (XmlTextReader_t754 * __this, Stream_t738 * ___xmlFragment, int32_t ___fragType, XmlParserContext_t746 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlStreamReader_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	XmlTextReader_t754 * G_B2_0 = {0};
	XmlTextReader_t754 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlTextReader_t754 * G_B3_1 = {0};
	{
		XmlParserContext_t746 * L_0 = ___context;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		XmlParserContext_t746 * L_1 = ___context;
		NullCheck(L_1);
		String_t* L_2 = XmlParserContext_get_BaseURI_m3523(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Stream_t738 * L_4 = ___xmlFragment;
		XmlStreamReader_t733 * L_5 = (XmlStreamReader_t733 *)il2cpp_codegen_object_new (XmlStreamReader_t733_il2cpp_TypeInfo_var);
		XmlStreamReader__ctor_m3462(L_5, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___fragType;
		XmlParserContext_t746 * L_7 = ___context;
		NullCheck(G_B3_1);
		XmlTextReader__ctor_m3607(G_B3_1, G_B3_0, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->___disallowReset_15 = 1;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern TypeInfo* XmlStreamReader_t733_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m3604 (XmlTextReader_t754 * __this, String_t* ___url, Stream_t738 * ___input, XmlNameTable_t697 * ___nt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlStreamReader_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		Stream_t738 * L_1 = ___input;
		XmlStreamReader_t733 * L_2 = (XmlStreamReader_t733 *)il2cpp_codegen_object_new (XmlStreamReader_t733_il2cpp_TypeInfo_var);
		XmlStreamReader__ctor_m3462(L_2, L_1, /*hidden argument*/NULL);
		XmlNameTable_t697 * L_3 = ___nt;
		XmlTextReader__ctor_m3605(__this, L_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m3605 (XmlTextReader_t754 * __this, String_t* ___url, TextReader_t736 * ___input, XmlNameTable_t697 * ___nt, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		TextReader_t736 * L_1 = ___input;
		XmlTextReader__ctor_m3607(__this, L_0, L_1, ((int32_t)9), (XmlParserContext_t746 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t602_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m3606 (XmlTextReader_t754 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t746 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringReader_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		s_Il2CppMethodIntialized = true;
	}
	XmlTextReader_t754 * G_B2_0 = {0};
	XmlTextReader_t754 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	XmlTextReader_t754 * G_B3_1 = {0};
	{
		XmlParserContext_t746 * L_0 = ___context;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		XmlParserContext_t746 * L_1 = ___context;
		NullCheck(L_1);
		String_t* L_2 = XmlParserContext_get_BaseURI_m3523(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		String_t* L_4 = ___xmlFragment;
		StringReader_t602 * L_5 = (StringReader_t602 *)il2cpp_codegen_object_new (StringReader_t602_il2cpp_TypeInfo_var);
		StringReader__ctor_m3107(L_5, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___fragType;
		XmlParserContext_t746 * L_7 = ___context;
		NullCheck(G_B3_1);
		XmlTextReader__ctor_m3607(G_B3_1, G_B3_0, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->___disallowReset_15 = 1;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern TypeInfo* XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var;
extern TypeInfo* XmlUrlResolver_t773_il2cpp_TypeInfo_var;
extern TypeInfo* DtdInputStateStack_t758_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m3607 (XmlTextReader_t754 * __this, String_t* ___url, TextReader_t736 * ___fragment, int32_t ___fragType, XmlParserContext_t746 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		XmlUrlResolver_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		DtdInputStateStack_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___attributeTokens_6 = ((XmlAttributeTokenInfoU5BU5D_t759*)SZArrayNew(XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var, ((int32_t)10)));
		__this->___attributeValueTokens_7 = ((XmlTokenInfoU5BU5D_t760*)SZArrayNew(XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var, ((int32_t)10)));
		__this->___namespaces_43 = 1;
		XmlUrlResolver_t773 * L_0 = (XmlUrlResolver_t773 *)il2cpp_codegen_object_new (XmlUrlResolver_t773_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m3802(L_0, /*hidden argument*/NULL);
		__this->___resolver_45 = L_0;
		__this->___closeInput_49 = 1;
		DtdInputStateStack_t758 * L_1 = (DtdInputStateStack_t758 *)il2cpp_codegen_object_new (DtdInputStateStack_t758_il2cpp_TypeInfo_var);
		DtdInputStateStack__ctor_m3597(L_1, /*hidden argument*/NULL);
		__this->___stateStack_53 = L_1;
		XmlReader__ctor_m3559(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___url;
		XmlParserContext_t746 * L_3 = ___context;
		TextReader_t736 * L_4 = ___fragment;
		int32_t L_5 = ___fragType;
		XmlTextReader_InitializeContext_m3654(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t746 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m3608 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t746 * L_0 = (__this->___parserContext_11);
		return L_0;
	}
}
// System.IO.Stream Mono.Xml2.XmlTextReader::GetStreamFromUrl(System.String,System.String&)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* Stream_t738_0_0_0_var;
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Stream_t738_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral461;
extern "C" Stream_t738 * XmlTextReader_GetStreamFromUrl_m3609 (XmlTextReader_t754 * __this, String_t* ___url, String_t** ___absoluteUriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t738_0_0_0_var = il2cpp_codegen_type_from_index(456);
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		Stream_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		_stringLiteral461 = il2cpp_codegen_string_literal_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t711 * V_0 = {0};
	String_t** G_B6_0 = {0};
	String_t** G_B5_0 = {0};
	String_t* G_B7_0 = {0};
	String_t** G_B7_1 = {0};
	{
		String_t* L_0 = ___url;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t617 * L_1 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_1, _stringLiteral461, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___url;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m159(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t373 * L_4 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2066(L_4, _stringLiteral461, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0027:
	{
		XmlResolver_t696 * L_5 = (__this->___resolver_45);
		String_t* L_6 = ___url;
		NullCheck(L_5);
		Uri_t711 * L_7 = (Uri_t711 *)VirtFuncInvoker2< Uri_t711 *, Uri_t711 *, String_t* >::Invoke(5 /* System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String) */, L_5, (Uri_t711 *)NULL, L_6);
		V_0 = L_7;
		String_t** L_8 = ___absoluteUriString;
		Uri_t711 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_10 = Uri_op_Inequality_m3828(NULL /*static, unused*/, L_9, (Uri_t711 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = L_8;
		if (!L_10)
		{
			G_B6_0 = L_8;
			goto IL_004d;
		}
	}
	{
		Uri_t711 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_11);
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		goto IL_0052;
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B7_0 = L_13;
		G_B7_1 = G_B6_0;
	}

IL_0052:
	{
		*((Object_t **)(G_B7_1)) = (Object_t *)G_B7_0;
		XmlResolver_t696 * L_14 = (__this->___resolver_45);
		Uri_t711 * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1796(NULL /*static, unused*/, LoadTypeToken(Stream_t738_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker3< Object_t *, Uri_t711 *, String_t*, Type_t * >::Invoke(4 /* System.Object System.Xml.XmlResolver::GetEntity(System.Uri,System.String,System.Type) */, L_14, L_15, (String_t*)NULL, L_16);
		return ((Stream_t738 *)IsInstClass(L_17, Stream_t738_il2cpp_TypeInfo_var));
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m3610 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attributeCount_10);
		return L_0;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m3611 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t746 * L_0 = (__this->___parserContext_11);
		NullCheck(L_0);
		String_t* L_1 = XmlParserContext_get_BaseURI_m3523(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m3612 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___checkCharacters_47);
		return L_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void XmlTextReader_set_CharacterChecking_m3613 (XmlTextReader_t754 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___checkCharacters_47 = L_0;
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m3614 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___closeInput_49);
		return L_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m3615 (XmlTextReader_t754 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___closeInput_49 = L_0;
		return;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m3616 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		XmlTokenInfo_t753 * L_0 = (__this->___currentToken_3);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___NodeType_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = (-1);
	}

IL_0018:
	{
		V_0 = G_B3_0;
		int32_t L_2 = (__this->___currentAttributeValue_9);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (__this->___elementDepth_17);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))+(int32_t)2));
	}

IL_0030:
	{
		int32_t L_5 = (__this->___currentAttribute_8);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___elementDepth_17);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_8 = (__this->___elementDepth_17);
		return L_8;
	}
}
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m3617 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___entityHandling_50);
		return L_0;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m3618 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___readState_14);
		return ((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m3619 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m3620 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = (__this->___cursorToken_2);
		NullCheck(L_0);
		bool L_1 = (L_0->___IsEmptyElement_6);
		return L_1;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m3621 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useProceedingLineInfo_37);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = (__this->___line_33);
		return L_1;
	}

IL_0012:
	{
		XmlTokenInfo_t753 * L_2 = (__this->___cursorToken_2);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___LineNumber_8);
		return L_3;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m3622 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useProceedingLineInfo_37);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = (__this->___column_34);
		return L_1;
	}

IL_0012:
	{
		XmlTokenInfo_t753 * L_2 = (__this->___cursorToken_2);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___LinePosition_9);
		return L_3;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m3623 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = (__this->___cursorToken_2);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___LocalName_3);
		return L_1;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m3624 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = (__this->___cursorToken_2);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___Name_2);
		return L_1;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m3625 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = (__this->___cursorToken_2);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___NamespaceURI_5);
		return L_1;
	}
}
// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t697 * XmlTextReader_get_NameTable_m3626 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlNameTable_t697 * L_0 = (__this->___nameTable_12);
		return L_0;
	}
}
// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m3627 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = (__this->___cursorToken_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___NodeType_12);
		return L_1;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
extern "C" bool XmlTextReader_get_Normalization_m3628 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___normalization_46);
		return L_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m3629 (XmlTextReader_t754 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___normalization_46 = L_0;
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m3630 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = (__this->___cursorToken_2);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___Prefix_4);
		return L_1;
	}
}
// System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m3631 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___readState_14);
		return L_0;
	}
}
// System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t749 * XmlTextReader_get_Settings_m3632 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlReaderSettings_t749 * L_0 = XmlReader_get_Settings_m3566(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Mono.Xml2.XmlTextReader::get_Value()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_get_Value_m3633 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		XmlTokenInfo_t753 * L_0 = (__this->___cursorToken_2);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value() */, L_0);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		XmlTokenInfo_t753 * L_2 = (__this->___cursorToken_2);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::get_Value() */, L_2);
		G_B3_0 = L_3;
		goto IL_0025;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_4;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
// System.Xml.XmlResolver
#include "System_Xml_System_Xml_XmlResolver.h"
extern "C" void XmlTextReader_set_XmlResolver_m3634 (XmlTextReader_t754 * __this, XmlResolver_t696 * ___value, const MethodInfo* method)
{
	{
		XmlResolver_t696 * L_0 = ___value;
		__this->___resolver_45 = L_0;
		return;
	}
}
// System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m3635 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t746 * L_0 = (__this->___parserContext_11);
		NullCheck(L_0);
		int32_t L_1 = XmlParserContext_get_XmlSpace_m3537(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m3636 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		__this->___readState_14 = 4;
		XmlTokenInfo_t753 * L_0 = (__this->___cursorToken_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, L_0);
		XmlTokenInfo_t753 * L_1 = (__this->___currentToken_3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, L_1);
		__this->___attributeCount_10 = 0;
		bool L_2 = (__this->___closeInput_49);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		TextReader_t736 * L_3 = (__this->___reader_27);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		TextReader_t736 * L_4 = (__this->___reader_27);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_4);
	}

IL_0045:
	{
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_GetAttribute_m3637 (XmlTextReader_t754 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_0 = (__this->___attributeTokens_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_0, L_2, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_3 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_0, L_2, sizeof(XmlAttributeTokenInfo_t755 *))))->___Name_2);
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m67(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_6 = (__this->___attributeTokens_6);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_6, L_8, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_6, L_8, sizeof(XmlAttributeTokenInfo_t755 *))));
		return L_9;
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = (__this->___attributeCount_10);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t602_il2cpp_TypeInfo_var;
extern "C" TextReader_t736 * XmlTextReader_GetRemainder_m3638 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringReader_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___peekCharsLength_30);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		TextReader_t736 * L_1 = (__this->___reader_27);
		return L_1;
	}

IL_0013:
	{
		CharU5BU5D_t60* L_2 = (__this->___peekChars_28);
		int32_t L_3 = (__this->___peekCharsIndex_29);
		int32_t L_4 = (__this->___peekCharsLength_30);
		int32_t L_5 = (__this->___peekCharsIndex_29);
		String_t* L_6 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_6 = String_CreateString_m3840(L_6, L_2, L_3, ((int32_t)((int32_t)L_4-(int32_t)L_5)), /*hidden argument*/NULL);
		TextReader_t736 * L_7 = (__this->___reader_27);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m145(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		StringReader_t602 * L_10 = (StringReader_t602 *)il2cpp_codegen_object_new (StringReader_t602_il2cpp_TypeInfo_var);
		StringReader__ctor_m3107(L_10, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_LookupNamespace_m3639 (XmlTextReader_t754 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		XmlNamespaceManager_t741 * L_0 = (__this->___nsmgr_13);
		String_t* L_1 = ___prefix;
		bool L_2 = ___atomizedNames;
		NullCheck(L_0);
		String_t* L_3 = XmlNamespaceManager_LookupNamespace_m3510(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m67(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0025;
	}

IL_0024:
	{
		String_t* L_7 = V_0;
		G_B3_0 = L_7;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral462;
extern "C" void XmlTextReader_MoveToAttribute_m3640 (XmlTextReader_t754 * __this, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		_stringLiteral462 = il2cpp_codegen_string_literal_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___i;
		int32_t L_1 = (__this->___attributeCount_10);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t790 * L_2 = (ArgumentOutOfRangeException_t790 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3841(L_2, _stringLiteral462, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___i;
		__this->___currentAttribute_8 = L_3;
		__this->___currentAttributeValue_9 = (-1);
		XmlAttributeTokenInfoU5BU5D_t759* L_4 = (__this->___attributeTokens_6);
		int32_t L_5 = ___i;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		__this->___cursorToken_2 = (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_4, L_6, sizeof(XmlAttributeTokenInfo_t755 *)));
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m3641 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = (__this->___currentToken_3);
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
		XmlTokenInfo_t753 * L_1 = (__this->___cursorToken_2);
		XmlTokenInfo_t753 * L_2 = (__this->___currentToken_3);
		if ((!(((Object_t*)(XmlTokenInfo_t753 *)L_1) == ((Object_t*)(XmlTokenInfo_t753 *)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		int32_t L_3 = (__this->___currentAttribute_8);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		__this->___currentAttribute_8 = (-1);
		__this->___currentAttributeValue_9 = (-1);
		XmlTokenInfo_t753 * L_4 = (__this->___currentToken_3);
		__this->___cursorToken_2 = L_4;
		return 1;
	}

IL_0048:
	{
		return 0;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m3642 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attributeCount_10);
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
		VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToElement() */, __this);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute() */, __this);
		return L_1;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m3643 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___currentAttribute_8);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = (__this->___attributeCount_10);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		int32_t L_2 = (__this->___currentAttribute_8);
		int32_t L_3 = (__this->___attributeCount_10);
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)1))) >= ((int32_t)L_3)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = (__this->___currentAttribute_8);
		__this->___currentAttribute_8 = ((int32_t)((int32_t)L_4+(int32_t)1));
		__this->___currentAttributeValue_9 = (-1);
		XmlAttributeTokenInfoU5BU5D_t759* L_5 = (__this->___attributeTokens_6);
		int32_t L_6 = (__this->___currentAttribute_8);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___cursorToken_2 = (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_5, L_7, sizeof(XmlAttributeTokenInfo_t755 *)));
		return 1;
	}

IL_0055:
	{
		return 0;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::Read()
// System.Xml.XmlReaderBinarySupport
#include "System_Xml_System_Xml_XmlReaderBinarySupportMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral463;
extern "C" bool XmlTextReader_Read_m3644 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___readState_14);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_1 = (__this->___peekCharsIndex_29);
		__this->___curNodePeekIndex_31 = L_1;
		__this->___preserveCurrentTag_32 = 1;
		__this->___nestLevel_40 = 0;
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___startNodeType_38);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_3 = (__this->___currentAttribute_8);
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		return 0;
	}

IL_0047:
	{
		XmlTextReader_SkipTextDeclaration_m3689(__this, /*hidden argument*/NULL);
		XmlTextReader_ClearAttributes_m3659(__this, /*hidden argument*/NULL);
		XmlTextReader_IncrementAttributeToken_m3681(__this, /*hidden argument*/NULL);
		XmlTextReader_ReadAttributeValueTokens_m3683(__this, ((int32_t)34), /*hidden argument*/NULL);
		XmlAttributeTokenInfoU5BU5D_t759* L_4 = (__this->___attributeTokens_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		__this->___cursorToken_2 = (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_4, L_5, sizeof(XmlAttributeTokenInfo_t755 *)));
		__this->___currentAttributeValue_9 = (-1);
		__this->___readState_14 = 1;
		return 1;
	}

IL_007f:
	{
		int32_t L_6 = (__this->___readState_14);
		if (L_6)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_7 = (__this->___currentState_39);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}
	{
		XmlTextReader_SkipTextDeclaration_m3689(__this, /*hidden argument*/NULL);
	}

IL_009c:
	{
		XmlReaderBinarySupport_t748 * L_8 = XmlReader_get_Binary_m3561(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b2;
		}
	}
	{
		XmlReaderBinarySupport_t748 * L_9 = XmlReader_get_Binary_m3561(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		XmlReaderBinarySupport_Reset_m3580(L_9, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		V_0 = 0;
		__this->___readState_14 = 1;
		int32_t L_10 = (__this->___line_33);
		__this->___currentLinkedNodeLineNumber_35 = L_10;
		int32_t L_11 = (__this->___column_34);
		__this->___currentLinkedNodeLinePosition_36 = L_11;
		__this->___useProceedingLineInfo_37 = 1;
		XmlTokenInfo_t753 * L_12 = (__this->___currentToken_3);
		__this->___cursorToken_2 = L_12;
		__this->___attributeCount_10 = 0;
		int32_t L_13 = (-1);
		V_1 = L_13;
		__this->___currentAttributeValue_9 = L_13;
		int32_t L_14 = V_1;
		__this->___currentAttribute_8 = L_14;
		XmlTokenInfo_t753 * L_15 = (__this->___currentToken_3);
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, L_15);
		bool L_16 = (__this->___depthUp_18);
		if (!L_16)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_17 = (__this->___depth_16);
		__this->___depth_16 = ((int32_t)((int32_t)L_17+(int32_t)1));
		__this->___depthUp_18 = 0;
	}

IL_0128:
	{
		bool L_18 = (__this->___readCharsInProgress_41);
		if (!L_18)
		{
			goto IL_0141;
		}
	}
	{
		__this->___readCharsInProgress_41 = 0;
		bool L_19 = XmlTextReader_ReadUntilEndTag_m3710(__this, /*hidden argument*/NULL);
		return L_19;
	}

IL_0141:
	{
		bool L_20 = XmlTextReader_ReadContent_m3665(__this, /*hidden argument*/NULL);
		V_0 = L_20;
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_22 = (__this->___startNodeType_38);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___currentState_39);
		if ((((int32_t)L_23) == ((int32_t)((int32_t)15))))
		{
			goto IL_0174;
		}
	}
	{
		XmlException_t731 * L_24 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral463, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_24);
	}

IL_0174:
	{
		__this->___useProceedingLineInfo_37 = 0;
		bool L_25 = V_0;
		return L_25;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m3645 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	XmlAttributeTokenInfo_t755 * V_0 = {0};
	{
		int32_t L_0 = (__this->___readState_14);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___startNodeType_38);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, __this);
	}

IL_001e:
	{
		int32_t L_2 = (__this->___currentAttribute_8);
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		return 0;
	}

IL_002c:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_3 = (__this->___attributeTokens_6);
		int32_t L_4 = (__this->___currentAttribute_8);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_3, L_5, sizeof(XmlAttributeTokenInfo_t755 *)));
		int32_t L_6 = (__this->___currentAttributeValue_9);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		XmlAttributeTokenInfo_t755 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___ValueTokenStartIndex_13);
		__this->___currentAttributeValue_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
	}

IL_0054:
	{
		int32_t L_9 = (__this->___currentAttributeValue_9);
		XmlAttributeTokenInfo_t755 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___ValueTokenEndIndex_14);
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_12 = (__this->___currentAttributeValue_9);
		__this->___currentAttributeValue_9 = ((int32_t)((int32_t)L_12+(int32_t)1));
		XmlTokenInfoU5BU5D_t760* L_13 = (__this->___attributeValueTokens_7);
		int32_t L_14 = (__this->___currentAttributeValue_9);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___cursorToken_2 = (*(XmlTokenInfo_t753 **)(XmlTokenInfo_t753 **)SZArrayLdElema(L_13, L_15, sizeof(XmlTokenInfo_t753 *)));
		return 1;
	}

IL_0088:
	{
		return 0;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadChars(System.Char[],System.Int32,System.Int32)
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral464;
extern Il2CppCodeGenString* _stringLiteral465;
extern Il2CppCodeGenString* _stringLiteral466;
extern "C" int32_t XmlTextReader_ReadChars_m3646 (XmlTextReader_t754 * __this, CharU5BU5D_t60* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		_stringLiteral465 = il2cpp_codegen_string_literal_from_index(465);
		_stringLiteral466 = il2cpp_codegen_string_literal_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___offset;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t790 * L_1 = (ArgumentOutOfRangeException_t790 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3841(L_1, _stringLiteral464, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		int32_t L_2 = ___length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t790 * L_3 = (ArgumentOutOfRangeException_t790 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3841(L_3, _stringLiteral465, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0024:
	{
		CharU5BU5D_t60* L_4 = ___buffer;
		NullCheck(L_4);
		int32_t L_5 = ___offset;
		int32_t L_6 = ___length;
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) >= ((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6)))))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_t790 * L_7 = (ArgumentOutOfRangeException_t790 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t790_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3841(L_7, _stringLiteral466, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement() */, __this);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, __this);
		return 0;
	}

IL_004e:
	{
		bool L_9 = (__this->___readCharsInProgress_41);
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, __this);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		return 0;
	}

IL_0067:
	{
		__this->___preserveCurrentTag_32 = 0;
		__this->___readCharsInProgress_41 = 1;
		__this->___useProceedingLineInfo_37 = 1;
		CharU5BU5D_t60* L_11 = ___buffer;
		int32_t L_12 = ___offset;
		int32_t L_13 = ___length;
		int32_t L_14 = XmlTextReader_ReadCharsInternal_m3709(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ResolveEntity()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t785_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral467;
extern "C" void XmlTextReader_ResolveEntity_m3647 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		_stringLiteral467 = il2cpp_codegen_string_literal_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t785 * L_0 = (InvalidOperationException_t785 *)il2cpp_codegen_object_new (InvalidOperationException_t785_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3826(L_0, _stringLiteral467, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void Mono.Xml2.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m3648 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlReader_Skip_m3575(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::get_DTD()
extern "C" DTDObjectModel_t689 * XmlTextReader_get_DTD_m3649 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t746 * L_0 = (__this->___parserContext_11);
		NullCheck(L_0);
		DTDObjectModel_t689 * L_1 = XmlParserContext_get_Dtd_m3526(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t696 * XmlTextReader_get_Resolver_m3650 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		XmlResolver_t696 * L_0 = (__this->___resolver_45);
		return L_0;
	}
}
// System.Xml.XmlException Mono.Xml2.XmlTextReader::NotWFError(System.String)
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlExceptionMethodDeclarations.h"
extern TypeInfo* XmlException_t731_il2cpp_TypeInfo_var;
extern "C" XmlException_t731 * XmlTextReader_NotWFError_m3651 (XmlTextReader_t754 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Mono.Xml2.XmlTextReader::get_BaseURI() */, __this);
		String_t* L_1 = ___message;
		XmlException_t731 * L_2 = (XmlException_t731 *)il2cpp_codegen_object_new (XmlException_t731_il2cpp_TypeInfo_var);
		XmlException__ctor_m3454(L_2, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Init()
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Xml.XmlReaderBinarySupport/CharGetter
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CharGetterMethodDeclarations.h"
// System.Xml.XmlReaderSettings
#include "System_Xml_System_Xml_XmlReaderSettingsMethodDeclarations.h"
extern TypeInfo* TagNameU5BU5D_t761_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t320_il2cpp_TypeInfo_var;
extern TypeInfo* CharGetter_t751_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern const MethodInfo* XmlTextReader_ReadChars_m3646_MethodInfo_var;
extern "C" void XmlTextReader_Init_m3652 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TagNameU5BU5D_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(512);
		StringBuilder_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		CharGetter_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		XmlTextReader_ReadChars_m3646_MethodInfo_var = il2cpp_codegen_method_info_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___allowMultipleRoot_22 = 0;
		__this->___elementNames_20 = ((TagNameU5BU5D_t761*)SZArrayNew(TagNameU5BU5D_t761_il2cpp_TypeInfo_var, ((int32_t)10)));
		StringBuilder_t320 * L_0 = (StringBuilder_t320 *)il2cpp_codegen_object_new (StringBuilder_t320_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1551(L_0, /*hidden argument*/NULL);
		__this->___valueBuffer_26 = L_0;
		IntPtr_t L_1 = { (void*)XmlTextReader_ReadChars_m3646_MethodInfo_var };
		CharGetter_t751 * L_2 = (CharGetter_t751 *)il2cpp_codegen_object_new (CharGetter_t751_il2cpp_TypeInfo_var);
		CharGetter__ctor_m3576(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___binaryCharGetter_42 = L_2;
		__this->___checkCharacters_47 = 1;
		XmlReaderSettings_t749 * L_3 = (XmlReaderSettings_t749 *)VirtFuncInvoker0< XmlReaderSettings_t749 * >::Invoke(20 /* System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings() */, __this);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		XmlReaderSettings_t749 * L_4 = (XmlReaderSettings_t749 *)VirtFuncInvoker0< XmlReaderSettings_t749 * >::Invoke(20 /* System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings() */, __this);
		NullCheck(L_4);
		bool L_5 = XmlReaderSettings_get_CheckCharacters_m3581(L_4, /*hidden argument*/NULL);
		__this->___checkCharacters_47 = L_5;
	}

IL_0054:
	{
		__this->___prohibitDtd_48 = 0;
		__this->___closeInput_49 = 1;
		__this->___entityHandling_50 = 2;
		__this->___peekCharsIndex_29 = 0;
		CharU5BU5D_t60* L_6 = (__this->___peekChars_28);
		if (L_6)
		{
			goto IL_008b;
		}
	}
	{
		__this->___peekChars_28 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, ((int32_t)1024)));
	}

IL_008b:
	{
		__this->___peekCharsLength_30 = (-1);
		__this->___curNodePeekIndex_31 = (-1);
		__this->___line_33 = 1;
		__this->___column_34 = 1;
		int32_t L_7 = 0;
		V_0 = L_7;
		__this->___currentLinkedNodeLinePosition_36 = L_7;
		int32_t L_8 = V_0;
		__this->___currentLinkedNodeLineNumber_35 = L_8;
		XmlTextReader_Clear_m3653(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Clear()
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfoMethodDeclarations.h"
extern TypeInfo* XmlTokenInfo_t753_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_Clear_m3653 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTokenInfo_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		XmlTokenInfo_t753 * L_0 = (XmlTokenInfo_t753 *)il2cpp_codegen_object_new (XmlTokenInfo_t753_il2cpp_TypeInfo_var);
		XmlTokenInfo__ctor_m3586(L_0, __this, /*hidden argument*/NULL);
		__this->___currentToken_3 = L_0;
		XmlTokenInfo_t753 * L_1 = (__this->___currentToken_3);
		__this->___cursorToken_2 = L_1;
		__this->___currentAttribute_8 = (-1);
		__this->___currentAttributeValue_9 = (-1);
		__this->___attributeCount_10 = 0;
		__this->___readState_14 = 0;
		__this->___depth_16 = 0;
		__this->___elementDepth_17 = 0;
		__this->___depthUp_18 = 0;
		int32_t L_2 = 0;
		V_0 = L_2;
		__this->___allowMultipleRoot_22 = L_2;
		bool L_3 = V_0;
		__this->___popScope_19 = L_3;
		__this->___elementNameStackPos_21 = 0;
		__this->___isStandalone_23 = 0;
		__this->___returnEntityReference_24 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___entityReferenceName_25 = L_4;
		__this->___useProceedingLineInfo_37 = 0;
		__this->___currentState_39 = 0;
		__this->___readCharsInProgress_41 = 0;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::InitializeContext(System.String,System.Xml.XmlParserContext,System.IO.TextReader,System.Xml.XmlNodeType)
// System.Xml.NameTable
#include "System_Xml_System_Xml_NameTableMethodDeclarations.h"
extern TypeInfo* NameTable_t722_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNamespaceManager_t741_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlParserContext_t746_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t602_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeType_t744_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t731_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral189;
extern Il2CppCodeGenString* _stringLiteral468;
extern Il2CppCodeGenString* _stringLiteral469;
extern "C" void XmlTextReader_InitializeContext_m3654 (XmlTextReader_t754 * __this, String_t* ___url, XmlParserContext_t746 * ___context, TextReader_t736 * ___fragment, int32_t ___fragType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NameTable_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		XmlNamespaceManager_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlParserContext_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		StringReader_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		XmlNodeType_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		XmlException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		_stringLiteral468 = il2cpp_codegen_string_literal_from_index(468);
		_stringLiteral469 = il2cpp_codegen_string_literal_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	XmlNameTable_t697 * V_0 = {0};
	Uri_t711 * V_1 = {0};
	int32_t V_2 = {0};
	XmlTextReader_t754 * G_B4_0 = {0};
	XmlTextReader_t754 * G_B3_0 = {0};
	XmlNameTable_t697 * G_B5_0 = {0};
	XmlTextReader_t754 * G_B5_1 = {0};
	XmlTextReader_t754 * G_B7_0 = {0};
	XmlTextReader_t754 * G_B6_0 = {0};
	XmlNamespaceManager_t741 * G_B8_0 = {0};
	XmlTextReader_t754 * G_B8_1 = {0};
	{
		int32_t L_0 = ___fragType;
		__this->___startNodeType_38 = L_0;
		XmlParserContext_t746 * L_1 = ___context;
		__this->___parserContext_11 = L_1;
		XmlParserContext_t746 * L_2 = ___context;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		NameTable_t722 * L_3 = (NameTable_t722 *)il2cpp_codegen_object_new (NameTable_t722_il2cpp_TypeInfo_var);
		NameTable__ctor_m3432(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlNameTable_t697 * L_4 = V_0;
		XmlNameTable_t697 * L_5 = V_0;
		XmlNamespaceManager_t741 * L_6 = (XmlNamespaceManager_t741 *)il2cpp_codegen_object_new (XmlNamespaceManager_t741_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m3499(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlParserContext_t746 * L_8 = (XmlParserContext_t746 *)il2cpp_codegen_object_new (XmlParserContext_t746_il2cpp_TypeInfo_var);
		XmlParserContext__ctor_m3520(L_8, L_4, L_6, L_7, 0, /*hidden argument*/NULL);
		__this->___parserContext_11 = L_8;
	}

IL_0033:
	{
		XmlParserContext_t746 * L_9 = (__this->___parserContext_11);
		NullCheck(L_9);
		XmlNameTable_t697 * L_10 = XmlParserContext_get_NameTable_m3532(L_9, /*hidden argument*/NULL);
		__this->___nameTable_12 = L_10;
		XmlNameTable_t697 * L_11 = (__this->___nameTable_12);
		G_B3_0 = __this;
		if (!L_11)
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
	}
	{
		XmlNameTable_t697 * L_12 = (__this->___nameTable_12);
		G_B5_0 = L_12;
		G_B5_1 = G_B3_0;
		goto IL_0060;
	}

IL_005b:
	{
		NameTable_t722 * L_13 = (NameTable_t722 *)il2cpp_codegen_object_new (NameTable_t722_il2cpp_TypeInfo_var);
		NameTable__ctor_m3432(L_13, /*hidden argument*/NULL);
		G_B5_0 = ((XmlNameTable_t697 *)(L_13));
		G_B5_1 = G_B4_0;
	}

IL_0060:
	{
		NullCheck(G_B5_1);
		G_B5_1->___nameTable_12 = G_B5_0;
		XmlParserContext_t746 * L_14 = (__this->___parserContext_11);
		NullCheck(L_14);
		XmlNamespaceManager_t741 * L_15 = XmlParserContext_get_NamespaceManager_m3531(L_14, /*hidden argument*/NULL);
		__this->___nsmgr_13 = L_15;
		XmlNamespaceManager_t741 * L_16 = (__this->___nsmgr_13);
		G_B6_0 = __this;
		if (!L_16)
		{
			G_B7_0 = __this;
			goto IL_008d;
		}
	}
	{
		XmlNamespaceManager_t741 * L_17 = (__this->___nsmgr_13);
		G_B8_0 = L_17;
		G_B8_1 = G_B6_0;
		goto IL_0098;
	}

IL_008d:
	{
		XmlNameTable_t697 * L_18 = (__this->___nameTable_12);
		XmlNamespaceManager_t741 * L_19 = (XmlNamespaceManager_t741 *)il2cpp_codegen_object_new (XmlNamespaceManager_t741_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m3499(L_19, L_18, /*hidden argument*/NULL);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_0;
	}

IL_0098:
	{
		NullCheck(G_B8_1);
		G_B8_1->___nsmgr_13 = G_B8_0;
		String_t* L_20 = ___url;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		String_t* L_21 = ___url;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m159(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		String_t* L_23 = ___url;
		Uri_t711 * L_24 = (Uri_t711 *)il2cpp_codegen_object_new (Uri_t711_il2cpp_TypeInfo_var);
		Uri__ctor_m3874(L_24, L_23, 0, /*hidden argument*/NULL);
		V_1 = L_24;
		XmlParserContext_t746 * L_25 = (__this->___parserContext_11);
		Uri_t711 * L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_26);
		NullCheck(L_25);
		XmlParserContext_set_BaseURI_m3524(L_25, L_27, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		XmlTextReader_Init_m3652(__this, /*hidden argument*/NULL);
		TextReader_t736 * L_28 = ___fragment;
		__this->___reader_27 = L_28;
		int32_t L_29 = ___fragType;
		V_2 = L_29;
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) == ((int32_t)2)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)9))))
		{
			goto IL_012b;
		}
	}
	{
		goto IL_0130;
	}

IL_00f3:
	{
		TextReader_t736 * L_33 = ___fragment;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_33);
		NullCheck(L_34);
		String_t* L_35 = String_Replace_m130(L_34, _stringLiteral189, _stringLiteral468, /*hidden argument*/NULL);
		StringReader_t602 * L_36 = (StringReader_t602 *)il2cpp_codegen_object_new (StringReader_t602_il2cpp_TypeInfo_var);
		StringReader__ctor_m3107(L_36, L_35, /*hidden argument*/NULL);
		__this->___reader_27 = L_36;
		goto IL_0147;
	}

IL_0118:
	{
		__this->___currentState_39 = 1;
		__this->___allowMultipleRoot_22 = 1;
		goto IL_0147;
	}

IL_012b:
	{
		goto IL_0147;
	}

IL_0130:
	{
		int32_t L_37 = ___fragType;
		int32_t L_38 = L_37;
		Object_t * L_39 = Box(XmlNodeType_t744_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral469, L_39, /*hidden argument*/NULL);
		XmlException_t731 * L_41 = (XmlException_t731 *)il2cpp_codegen_object_new (XmlException_t731_il2cpp_TypeInfo_var);
		XmlException__ctor_m3453(L_41, L_40, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_41);
	}

IL_0147:
	{
		return;
	}
}
// System.Xml.ConformanceLevel Mono.Xml2.XmlTextReader::get_Conformance()
extern "C" int32_t XmlTextReader_get_Conformance_m3655 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->___allowMultipleRoot_22);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 2;
	}

IL_0012:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
extern "C" void XmlTextReader_set_Conformance_m3656 (XmlTextReader_t754 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		__this->___currentState_39 = 1;
		__this->___allowMultipleRoot_22 = 1;
	}

IL_0015:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::SetProperties(System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C" void XmlTextReader_SetProperties_m3657 (XmlTextReader_t754 * __this, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = (__this->___currentToken_3);
		int32_t L_1 = ___nodeType;
		String_t* L_2 = ___name;
		String_t* L_3 = ___prefix;
		String_t* L_4 = ___localName;
		bool L_5 = ___isEmptyElement;
		String_t* L_6 = ___value;
		bool L_7 = ___clearAttributes;
		XmlTextReader_SetTokenProperties_m3658(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		XmlTokenInfo_t753 * L_8 = (__this->___currentToken_3);
		int32_t L_9 = (__this->___currentLinkedNodeLineNumber_35);
		NullCheck(L_8);
		L_8->___LineNumber_8 = L_9;
		XmlTokenInfo_t753 * L_10 = (__this->___currentToken_3);
		int32_t L_11 = (__this->___currentLinkedNodeLinePosition_36);
		NullCheck(L_10);
		L_10->___LinePosition_9 = L_11;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::SetTokenProperties(Mono.Xml2.XmlTextReader/XmlTokenInfo,System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfo.h"
extern "C" void XmlTextReader_SetTokenProperties_m3658 (XmlTextReader_t754 * __this, XmlTokenInfo_t753 * ___token, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method)
{
	{
		XmlTokenInfo_t753 * L_0 = ___token;
		int32_t L_1 = ___nodeType;
		NullCheck(L_0);
		L_0->___NodeType_12 = L_1;
		XmlTokenInfo_t753 * L_2 = ___token;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		L_2->___Name_2 = L_3;
		XmlTokenInfo_t753 * L_4 = ___token;
		String_t* L_5 = ___prefix;
		NullCheck(L_4);
		L_4->___Prefix_4 = L_5;
		XmlTokenInfo_t753 * L_6 = ___token;
		String_t* L_7 = ___localName;
		NullCheck(L_6);
		L_6->___LocalName_3 = L_7;
		XmlTokenInfo_t753 * L_8 = ___token;
		bool L_9 = ___isEmptyElement;
		NullCheck(L_8);
		L_8->___IsEmptyElement_6 = L_9;
		XmlTokenInfo_t753 * L_10 = ___token;
		String_t* L_11 = ___value;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::set_Value(System.String) */, L_10, L_11);
		int32_t L_12 = (__this->___depth_16);
		__this->___elementDepth_17 = L_12;
		bool L_13 = ___clearAttributes;
		if (!L_13)
		{
			goto IL_0047;
		}
	}
	{
		XmlTextReader_ClearAttributes_m3659(__this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ClearAttributes()
extern "C" void XmlTextReader_ClearAttributes_m3659 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		__this->___attributeCount_10 = 0;
		__this->___currentAttribute_8 = (-1);
		__this->___currentAttributeValue_9 = (-1);
		return;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::PeekSurrogate(System.Int32)
extern "C" int32_t XmlTextReader_PeekSurrogate_m3660 (XmlTextReader_t754 * __this, int32_t ___c, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___peekCharsLength_30);
		int32_t L_1 = (__this->___peekCharsIndex_29);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)((int32_t)L_1+(int32_t)1)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___c;
		bool L_3 = XmlTextReader_ReadTextReader_m3664(__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = ___c;
		return L_4;
	}

IL_0021:
	{
		CharU5BU5D_t60* L_5 = (__this->___peekChars_28);
		int32_t L_6 = (__this->___peekCharsIndex_29);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7, sizeof(uint16_t)));
		CharU5BU5D_t60* L_8 = (__this->___peekChars_28);
		int32_t L_9 = (__this->___peekCharsIndex_29);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10, sizeof(uint16_t)));
		int32_t L_11 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)64512)))) == ((uint32_t)((int32_t)55296)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)64512)))) == ((int32_t)((int32_t)56320))))
		{
			goto IL_0063;
		}
	}

IL_0061:
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0063:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)65536)+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14-(int32_t)((int32_t)55296)))*(int32_t)((int32_t)1024)))))+(int32_t)((int32_t)((int32_t)L_15-(int32_t)((int32_t)56320)))));
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::PeekChar()
extern "C" int32_t XmlTextReader_PeekChar_m3661 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___peekCharsIndex_29);
		int32_t L_1 = (__this->___peekCharsLength_30);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0047;
		}
	}
	{
		CharU5BU5D_t60* L_2 = (__this->___peekChars_28);
		int32_t L_3 = (__this->___peekCharsIndex_29);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_2, L_4, sizeof(uint16_t)));
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)55296))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)57343))))
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = XmlTextReader_PeekSurrogate_m3660(__this, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0047:
	{
		bool L_11 = XmlTextReader_ReadTextReader_m3664(__this, (-1), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		return (-1);
	}

IL_0055:
	{
		int32_t L_12 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadChar()
extern "C" int32_t XmlTextReader_ReadChar_m3662 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->___peekCharsIndex_29);
		__this->___peekCharsIndex_29 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65536))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = (__this->___peekCharsIndex_29);
		__this->___peekCharsIndex_29 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_5 = (__this->___line_33);
		__this->___line_33 = ((int32_t)((int32_t)L_5+(int32_t)1));
		__this->___column_34 = 1;
		goto IL_0065;
	}

IL_0050:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = (__this->___column_34);
		__this->___column_34 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0065:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Advance(System.Int32)
extern "C" void XmlTextReader_Advance_m3663 (XmlTextReader_t754 * __this, int32_t ___ch, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___peekCharsIndex_29);
		__this->___peekCharsIndex_29 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = ___ch;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65536))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = (__this->___peekCharsIndex_29);
		__this->___peekCharsIndex_29 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_3 = ___ch;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_4 = (__this->___line_33);
		__this->___line_33 = ((int32_t)((int32_t)L_4+(int32_t)1));
		__this->___column_34 = 1;
		goto IL_005e;
	}

IL_0049:
	{
		int32_t L_5 = ___ch;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = (__this->___column_34);
		__this->___column_34 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadTextReader(System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern "C" bool XmlTextReader_ReadTextReader_m3664 (XmlTextReader_t754 * __this, int32_t ___remained, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t60* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___peekCharsLength_30);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		TextReader_t736 * L_1 = (__this->___reader_27);
		CharU5BU5D_t60* L_2 = (__this->___peekChars_28);
		CharU5BU5D_t60* L_3 = (__this->___peekChars_28);
		NullCheck(L_3);
		NullCheck(L_1);
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t60*, int32_t, int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32) */, L_1, L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))));
		__this->___peekCharsLength_30 = L_4;
		int32_t L_5 = (__this->___peekCharsLength_30);
		return ((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
	}

IL_0036:
	{
		int32_t L_6 = ___remained;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		V_0 = G_B5_0;
		int32_t L_7 = (__this->___peekCharsLength_30);
		int32_t L_8 = (__this->___curNodePeekIndex_31);
		V_1 = ((int32_t)((int32_t)L_7-(int32_t)L_8));
		bool L_9 = (__this->___preserveCurrentTag_32);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		__this->___curNodePeekIndex_31 = 0;
		__this->___peekCharsIndex_29 = 0;
		goto IL_0101;
	}

IL_0071:
	{
		int32_t L_10 = (__this->___peekCharsLength_30);
		CharU5BU5D_t60* L_11 = (__this->___peekChars_28);
		NullCheck(L_11);
		if ((((int32_t)L_10) >= ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_0101;
	}

IL_0089:
	{
		int32_t L_12 = (__this->___curNodePeekIndex_31);
		int32_t L_13 = (__this->___peekCharsLength_30);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)((int32_t)L_13>>(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		CharU5BU5D_t60* L_14 = (__this->___peekChars_28);
		NullCheck(L_14);
		V_2 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_14)->max_length)))*(int32_t)2))));
		CharU5BU5D_t60* L_15 = (__this->___peekChars_28);
		int32_t L_16 = (__this->___curNodePeekIndex_31);
		CharU5BU5D_t60* L_17 = V_2;
		int32_t L_18 = V_1;
		Array_Copy_m3858(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, (Array_t *)(Array_t *)L_17, 0, L_18, /*hidden argument*/NULL);
		CharU5BU5D_t60* L_19 = V_2;
		__this->___peekChars_28 = L_19;
		__this->___curNodePeekIndex_31 = 0;
		int32_t L_20 = V_1;
		__this->___peekCharsIndex_29 = L_20;
		goto IL_0101;
	}

IL_00da:
	{
		CharU5BU5D_t60* L_21 = (__this->___peekChars_28);
		int32_t L_22 = (__this->___curNodePeekIndex_31);
		CharU5BU5D_t60* L_23 = (__this->___peekChars_28);
		int32_t L_24 = V_1;
		Array_Copy_m3858(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, 0, L_24, /*hidden argument*/NULL);
		__this->___curNodePeekIndex_31 = 0;
		int32_t L_25 = V_1;
		__this->___peekCharsIndex_29 = L_25;
	}

IL_0101:
	{
		int32_t L_26 = ___remained;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0117;
		}
	}
	{
		CharU5BU5D_t60* L_27 = (__this->___peekChars_28);
		int32_t L_28 = (__this->___peekCharsIndex_29);
		int32_t L_29 = ___remained;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_28, sizeof(uint16_t))) = (uint16_t)(((uint16_t)L_29));
	}

IL_0117:
	{
		CharU5BU5D_t60* L_30 = (__this->___peekChars_28);
		NullCheck(L_30);
		int32_t L_31 = (__this->___peekCharsIndex_29);
		int32_t L_32 = V_0;
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))-(int32_t)L_31))-(int32_t)L_32));
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_013a;
		}
	}
	{
		V_3 = ((int32_t)1024);
	}

IL_013a:
	{
		TextReader_t736 * L_34 = (__this->___reader_27);
		CharU5BU5D_t60* L_35 = (__this->___peekChars_28);
		int32_t L_36 = (__this->___peekCharsIndex_29);
		int32_t L_37 = V_0;
		int32_t L_38 = V_3;
		NullCheck(L_34);
		int32_t L_39 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t60*, int32_t, int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32) */, L_34, L_35, ((int32_t)((int32_t)L_36+(int32_t)L_37)), L_38);
		V_4 = L_39;
		int32_t L_40 = V_0;
		int32_t L_41 = V_4;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)L_41));
		int32_t L_42 = (__this->___peekCharsIndex_29);
		int32_t L_43 = V_5;
		__this->___peekCharsLength_30 = ((int32_t)((int32_t)L_42+(int32_t)L_43));
		int32_t L_44 = V_5;
		return ((((int32_t)((((int32_t)L_44) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadContent()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral470;
extern "C" bool XmlTextReader_ReadContent_m3665 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->___popScope_19);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		XmlNamespaceManager_t741 * L_1 = (__this->___nsmgr_13);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_1);
		XmlParserContext_t746 * L_2 = (__this->___parserContext_11);
		NullCheck(L_2);
		XmlParserContext_PopScope_m3540(L_2, /*hidden argument*/NULL);
		__this->___popScope_19 = 0;
	}

IL_0029:
	{
		bool L_3 = (__this->___returnEntityReference_24);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		XmlTextReader_SetEntityReferenceProperties_m3666(__this, /*hidden argument*/NULL);
		goto IL_0168;
	}

IL_003f:
	{
		int32_t L_4 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_009d;
		}
	}
	{
		__this->___readState_14 = 3;
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m3657(__this, 0, L_6, L_7, L_8, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		int32_t L_9 = (__this->___depth_16);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_10 = (__this->___depth_16);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m76(NULL /*static, unused*/, _stringLiteral470, L_12, /*hidden argument*/NULL);
		XmlException_t731 * L_14 = XmlTextReader_NotWFError_m3651(__this, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_009b:
	{
		return 0;
	}

IL_009d:
	{
		int32_t L_15 = V_0;
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0145;
		}
	}

IL_00bc:
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)32))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)60))))
		{
			goto IL_00d1;
		}
	}
	{
		goto IL_015c;
	}

IL_00d1:
	{
		int32_t L_19 = V_0;
		XmlTextReader_Advance_m3663(__this, L_19, /*hidden argument*/NULL);
		int32_t L_20 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_2 = L_20;
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)33))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)47))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)63))))
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0135;
	}

IL_00fc:
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)47), /*hidden argument*/NULL);
		XmlTextReader_ReadEndTag_m3669(__this, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_010f:
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)63), /*hidden argument*/NULL);
		XmlTextReader_ReadProcessingInstruction_m3685(__this, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_0122:
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)33), /*hidden argument*/NULL);
		XmlTextReader_ReadDeclaration_m3690(__this, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_0135:
	{
		XmlTextReader_ReadStartTag_m3667(__this, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_0140:
	{
		goto IL_0168;
	}

IL_0145:
	{
		bool L_24 = XmlTextReader_ReadWhitespace_m3708(__this, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0157;
		}
	}
	{
		bool L_25 = XmlTextReader_ReadContent_m3665(__this, /*hidden argument*/NULL);
		return L_25;
	}

IL_0157:
	{
		goto IL_0168;
	}

IL_015c:
	{
		XmlTextReader_ReadText_m3675(__this, 1, /*hidden argument*/NULL);
		goto IL_0168;
	}

IL_0168:
	{
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState() */, __this);
		return ((((int32_t)((((int32_t)L_26) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Xml2.XmlTextReader::SetEntityReferenceProperties()
// Mono.Xml.DTDObjectModel
#include "System_Xml_Mono_Xml_DTDObjectModelMethodDeclarations.h"
// Mono.Xml.DTDEntityDeclarationCollection
#include "System_Xml_Mono_Xml_DTDEntityDeclarationCollectionMethodDeclarations.h"
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNodeMethodDeclarations.h"
// Mono.Xml.DTDEntityDeclaration
#include "System_Xml_Mono_Xml_DTDEntityDeclarationMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral472;
extern "C" void XmlTextReader_SetEntityReferenceProperties_m3666 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	DTDEntityDeclaration_t712 * V_0 = {0};
	DTDEntityDeclaration_t712 * G_B3_0 = {0};
	{
		DTDObjectModel_t689 * L_0 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		DTDObjectModel_t689 * L_1 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DTDEntityDeclarationCollection_t693 * L_2 = DTDObjectModel_get_EntityDecls_m3274(L_1, /*hidden argument*/NULL);
		String_t* L_3 = (__this->___entityReferenceName_25);
		NullCheck(L_2);
		DTDEntityDeclaration_t712 * L_4 = DTDEntityDeclarationCollection_get_Item_m3300(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = ((DTDEntityDeclaration_t712 *)(NULL));
	}

IL_0027:
	{
		V_0 = G_B3_0;
		bool L_5 = (__this->___isStandalone_23);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		DTDObjectModel_t689 * L_6 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		DTDEntityDeclaration_t712 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		DTDEntityDeclaration_t712 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = DTDNode_get_IsInternalSubset_m3318(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005b;
		}
	}

IL_004f:
	{
		XmlException_t731 * L_10 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral471, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_10);
	}

IL_005b:
	{
		DTDEntityDeclaration_t712 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		DTDEntityDeclaration_t712 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = DTDEntityDeclaration_get_NotationName_m3360(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		XmlException_t731 * L_14 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral472, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_0078:
	{
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		String_t* L_15 = (__this->___entityReferenceName_25);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_17 = (__this->___entityReferenceName_25);
		XmlTextReader_SetProperties_m3657(__this, 5, L_15, L_16, L_17, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		__this->___returnEntityReference_24 = 0;
		String_t* L_18 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___entityReferenceName_25 = L_18;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadStartTag()
// System.Xml.XmlChar
#include "System_Xml_System_Xml_XmlCharMethodDeclarations.h"
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlAttributeTokenInfoMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextReader_t754_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t202_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t711_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1931_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral473;
extern Il2CppCodeGenString* _stringLiteral474;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral475;
extern Il2CppCodeGenString* _stringLiteral476;
extern Il2CppCodeGenString* _stringLiteral477;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral478;
extern Il2CppCodeGenString* _stringLiteral479;
extern Il2CppCodeGenString* _stringLiteral480;
extern Il2CppCodeGenString* _stringLiteral481;
extern Il2CppCodeGenString* _stringLiteral482;
extern Il2CppCodeGenString* _stringLiteral483;
extern "C" void XmlTextReader_ReadStartTag_m3667 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlTextReader_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Dictionary_2_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		Uri_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Dictionary_2__ctor_m1931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		_stringLiteral473 = il2cpp_codegen_string_literal_from_index(473);
		_stringLiteral474 = il2cpp_codegen_string_literal_from_index(474);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral475 = il2cpp_codegen_string_literal_from_index(475);
		_stringLiteral476 = il2cpp_codegen_string_literal_from_index(476);
		_stringLiteral477 = il2cpp_codegen_string_literal_from_index(477);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral478 = il2cpp_codegen_string_literal_from_index(478);
		_stringLiteral479 = il2cpp_codegen_string_literal_from_index(479);
		_stringLiteral480 = il2cpp_codegen_string_literal_from_index(480);
		_stringLiteral481 = il2cpp_codegen_string_literal_from_index(481);
		_stringLiteral482 = il2cpp_codegen_string_literal_from_index(482);
		_stringLiteral483 = il2cpp_codegen_string_literal_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	String_t* V_11 = {0};
	String_t* V_12 = {0};
	Uri_t711 * V_13 = {0};
	Uri_t711 * V_14 = {0};
	String_t* V_15 = {0};
	Dictionary_2_t202 * V_16 = {0};
	int32_t V_17 = 0;
	String_t* V_18 = {0};
	int32_t V_19 = 0;
	Exception_t33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Uri_t711 * G_B59_0 = {0};
	XmlParserContext_t746 * G_B61_0 = {0};
	XmlParserContext_t746 * G_B60_0 = {0};
	String_t* G_B62_0 = {0};
	XmlParserContext_t746 * G_B62_1 = {0};
	{
		int32_t L_0 = (__this->___currentState_39);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0019;
		}
	}
	{
		XmlException_t731 * L_1 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral473, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0019:
	{
		__this->___currentState_39 = 1;
		XmlNamespaceManager_t741 * L_2 = (__this->___nsmgr_13);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_2);
		int32_t L_3 = (__this->___line_33);
		__this->___currentLinkedNodeLineNumber_35 = L_3;
		int32_t L_4 = (__this->___column_34);
		__this->___currentLinkedNodeLinePosition_36 = L_4;
		String_t* L_5 = XmlTextReader_ReadName_m3703(__this, (&V_0), (&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = (__this->___currentState_39);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0067;
		}
	}
	{
		XmlException_t731 * L_7 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral474, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0067:
	{
		V_3 = 0;
		XmlTextReader_ClearAttributes_m3659(__this, /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		int32_t L_8 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_9 = XmlChar_IsFirstNameChar_m3441(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_008d;
		}
	}
	{
		XmlTextReader_ReadAttributes_m3679(__this, 0, /*hidden argument*/NULL);
	}

IL_008d:
	{
		XmlTokenInfo_t753 * L_10 = (__this->___currentToken_3);
		__this->___cursorToken_2 = L_10;
		V_4 = 0;
		goto IL_00b5;
	}

IL_00a1:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_11 = (__this->___attributeTokens_6);
		int32_t L_12 = V_4;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_11, L_13, sizeof(XmlAttributeTokenInfo_t755 *))));
		XmlAttributeTokenInfo_FillXmlns_m3594((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_11, L_13, sizeof(XmlAttributeTokenInfo_t755 *))), /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_00b5:
	{
		int32_t L_15 = V_4;
		int32_t L_16 = (__this->___attributeCount_10);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_00a1;
		}
	}
	{
		V_5 = 0;
		goto IL_00de;
	}

IL_00ca:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_17 = (__this->___attributeTokens_6);
		int32_t L_18 = V_5;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_17, L_19, sizeof(XmlAttributeTokenInfo_t755 *))));
		XmlAttributeTokenInfo_FillNamespace_m3595((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_17, L_19, sizeof(XmlAttributeTokenInfo_t755 *))), /*hidden argument*/NULL);
		int32_t L_20 = V_5;
		V_5 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00de:
	{
		int32_t L_21 = V_5;
		int32_t L_22 = (__this->___attributeCount_10);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_23 = (__this->___namespaces_43);
		if (!L_23)
		{
			goto IL_0157;
		}
	}
	{
		V_6 = 0;
		goto IL_014a;
	}

IL_00fe:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_24 = (__this->___attributeTokens_6);
		int32_t L_25 = V_6;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = L_25;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_24, L_26, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_27 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_24, L_26, sizeof(XmlAttributeTokenInfo_t755 *))))->___Prefix_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_op_Equality_m67(NULL /*static, unused*/, L_27, _stringLiteral436, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0144;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_29 = (__this->___attributeTokens_6);
		int32_t L_30 = V_6;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_29, L_31, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_29, L_31, sizeof(XmlAttributeTokenInfo_t755 *))));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_34 = String_op_Equality_m67(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0144;
		}
	}
	{
		XmlException_t731 * L_35 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral475, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_35);
	}

IL_0144:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_014a:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = (__this->___attributeCount_10);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00fe;
		}
	}

IL_0157:
	{
		V_7 = 0;
		goto IL_0201;
	}

IL_015f:
	{
		int32_t L_39 = V_7;
		V_8 = ((int32_t)((int32_t)L_39+(int32_t)1));
		goto IL_01ee;
	}

IL_016a:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_40 = (__this->___attributeTokens_6);
		int32_t L_41 = V_7;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = L_41;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_40, L_42, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_43 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_40, L_42, sizeof(XmlAttributeTokenInfo_t755 *))))->___Name_2);
		XmlAttributeTokenInfoU5BU5D_t759* L_44 = (__this->___attributeTokens_6);
		int32_t L_45 = V_8;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_44, L_46, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_47 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_44, L_46, sizeof(XmlAttributeTokenInfo_t755 *))))->___Name_2);
		bool L_48 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_43, L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01dc;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_49 = (__this->___attributeTokens_6);
		int32_t L_50 = V_7;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_49, L_51, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_52 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_49, L_51, sizeof(XmlAttributeTokenInfo_t755 *))))->___LocalName_3);
		XmlAttributeTokenInfoU5BU5D_t759* L_53 = (__this->___attributeTokens_6);
		int32_t L_54 = V_8;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		int32_t L_55 = L_54;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_53, L_55, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_56 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_53, L_55, sizeof(XmlAttributeTokenInfo_t755 *))))->___LocalName_3);
		bool L_57 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_52, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_01e8;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_58 = (__this->___attributeTokens_6);
		int32_t L_59 = V_7;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = L_59;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_58, L_60, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_61 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_58, L_60, sizeof(XmlAttributeTokenInfo_t755 *))))->___NamespaceURI_5);
		XmlAttributeTokenInfoU5BU5D_t759* L_62 = (__this->___attributeTokens_6);
		int32_t L_63 = V_8;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		int32_t L_64 = L_63;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_62, L_64, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_65 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_62, L_64, sizeof(XmlAttributeTokenInfo_t755 *))))->___NamespaceURI_5);
		bool L_66 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_61, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01e8;
		}
	}

IL_01dc:
	{
		XmlException_t731 * L_67 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral476, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_67);
	}

IL_01e8:
	{
		int32_t L_68 = V_8;
		V_8 = ((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01ee:
	{
		int32_t L_69 = V_8;
		int32_t L_70 = (__this->___attributeCount_10);
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_0201:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = (__this->___attributeCount_10);
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_74 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0231;
		}
	}
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)47), /*hidden argument*/NULL);
		V_3 = 1;
		__this->___popScope_19 = 1;
		goto IL_0241;
	}

IL_0231:
	{
		__this->___depthUp_18 = 1;
		String_t* L_75 = V_2;
		String_t* L_76 = V_1;
		String_t* L_77 = V_0;
		XmlTextReader_PushElementName_m3668(__this, L_75, L_76, L_77, /*hidden argument*/NULL);
	}

IL_0241:
	{
		XmlParserContext_t746 * L_78 = (__this->___parserContext_11);
		NullCheck(L_78);
		XmlParserContext_PushScope_m3539(L_78, /*hidden argument*/NULL);
		XmlTextReader_Expect_m3704(__this, ((int32_t)62), /*hidden argument*/NULL);
		String_t* L_79 = V_2;
		String_t* L_80 = V_0;
		String_t* L_81 = V_1;
		bool L_82 = V_3;
		XmlTextReader_SetProperties_m3657(__this, 1, L_79, L_80, L_81, L_82, (String_t*)NULL, 0, /*hidden argument*/NULL);
		String_t* L_83 = V_0;
		NullCheck(L_83);
		int32_t L_84 = String_get_Length_m159(L_83, /*hidden argument*/NULL);
		if ((((int32_t)L_84) <= ((int32_t)0)))
		{
			goto IL_0285;
		}
	}
	{
		XmlTokenInfo_t753 * L_85 = (__this->___currentToken_3);
		String_t* L_86 = V_0;
		String_t* L_87 = XmlTextReader_LookupNamespace_m3639(__this, L_86, 1, /*hidden argument*/NULL);
		NullCheck(L_85);
		L_85->___NamespaceURI_5 = L_87;
		goto IL_02a6;
	}

IL_0285:
	{
		bool L_88 = (__this->___namespaces_43);
		if (!L_88)
		{
			goto IL_02a6;
		}
	}
	{
		XmlTokenInfo_t753 * L_89 = (__this->___currentToken_3);
		XmlNamespaceManager_t741 * L_90 = (__this->___nsmgr_13);
		NullCheck(L_90);
		String_t* L_91 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_90);
		NullCheck(L_89);
		L_89->___NamespaceURI_5 = L_91;
	}

IL_02a6:
	{
		bool L_92 = (__this->___namespaces_43);
		if (!L_92)
		{
			goto IL_0325;
		}
	}
	{
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Mono.Xml2.XmlTextReader::get_NamespaceURI() */, __this);
		if (L_93)
		{
			goto IL_02d3;
		}
	}
	{
		String_t* L_94 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String Mono.Xml2.XmlTextReader::get_Prefix() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_95 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral477, L_94, /*hidden argument*/NULL);
		XmlException_t731 * L_96 = XmlTextReader_NotWFError_m3651(__this, L_95, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_96);
	}

IL_02d3:
	try
	{ // begin try (depth: 1)
		{
			V_9 = 0;
			goto IL_030b;
		}

IL_02db:
		{
			int32_t L_97 = V_9;
			VirtActionInvoker1< int32_t >::Invoke(28 /* System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32) */, __this, L_97);
			String_t* L_98 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Mono.Xml2.XmlTextReader::get_NamespaceURI() */, __this);
			if (L_98)
			{
				goto IL_0305;
			}
		}

IL_02ee:
		{
			String_t* L_99 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String Mono.Xml2.XmlTextReader::get_Prefix() */, __this);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_100 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral477, L_99, /*hidden argument*/NULL);
			XmlException_t731 * L_101 = XmlTextReader_NotWFError_m3651(__this, L_100, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_101);
		}

IL_0305:
		{
			int32_t L_102 = V_9;
			V_9 = ((int32_t)((int32_t)L_102+(int32_t)1));
		}

IL_030b:
		{
			int32_t L_103 = V_9;
			int32_t L_104 = (__this->___attributeCount_10);
			if ((((int32_t)L_103) < ((int32_t)L_104)))
			{
				goto IL_02db;
			}
		}

IL_0318:
		{
			IL2CPP_LEAVE(0x325, FINALLY_031d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t33 *)e.ex;
		goto FINALLY_031d;
	}

FINALLY_031d:
	{ // begin finally (depth: 1)
		VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToElement() */, __this);
		IL2CPP_END_FINALLY(797)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(797)
	{
		IL2CPP_JUMP_TBL(0x325, IL_0325)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t33 *)
	}

IL_0325:
	{
		V_10 = 0;
		goto IL_0520;
	}

IL_032d:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_105 = (__this->___attributeTokens_6);
		int32_t L_106 = V_10;
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, L_106);
		int32_t L_107 = L_106;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_105, L_107, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_108 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_105, L_107, sizeof(XmlAttributeTokenInfo_t755 *))))->___Prefix_4);
		bool L_109 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_108, _stringLiteral387, /*hidden argument*/NULL);
		if (L_109)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_051a;
	}

IL_034f:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_110 = (__this->___attributeTokens_6);
		int32_t L_111 = V_10;
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, L_111);
		int32_t L_112 = L_111;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_110, L_112, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_113 = (((XmlTokenInfo_t753 *)(*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_110, L_112, sizeof(XmlAttributeTokenInfo_t755 *))))->___LocalName_3);
		V_11 = L_113;
		XmlAttributeTokenInfoU5BU5D_t759* L_114 = (__this->___attributeTokens_6);
		int32_t L_115 = V_10;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, L_115);
		int32_t L_116 = L_115;
		NullCheck((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_114, L_116, sizeof(XmlAttributeTokenInfo_t755 *))));
		String_t* L_117 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_114, L_116, sizeof(XmlAttributeTokenInfo_t755 *))));
		V_12 = L_117;
		String_t* L_118 = V_11;
		V_15 = L_118;
		String_t* L_119 = V_15;
		if (!L_119)
		{
			goto IL_051a;
		}
	}
	{
		Dictionary_2_t202 * L_120 = ((XmlTextReader_t754_StaticFields*)XmlTextReader_t754_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map52_55;
		if (L_120)
		{
			goto IL_03ba;
		}
	}
	{
		Dictionary_2_t202 * L_121 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_121, 3, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_16 = L_121;
		Dictionary_2_t202 * L_122 = V_16;
		NullCheck(L_122);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_122, _stringLiteral478, 0);
		Dictionary_2_t202 * L_123 = V_16;
		NullCheck(L_123);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_123, _stringLiteral479, 1);
		Dictionary_2_t202 * L_124 = V_16;
		NullCheck(L_124);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_124, _stringLiteral480, 2);
		Dictionary_2_t202 * L_125 = V_16;
		((XmlTextReader_t754_StaticFields*)XmlTextReader_t754_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map52_55 = L_125;
	}

IL_03ba:
	{
		Dictionary_2_t202 * L_126 = ((XmlTextReader_t754_StaticFields*)XmlTextReader_t754_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map52_55;
		String_t* L_127 = V_15;
		NullCheck(L_126);
		bool L_128 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_126, L_127, (&V_17));
		if (!L_128)
		{
			goto IL_051a;
		}
	}
	{
		int32_t L_129 = V_17;
		if (L_129 == 0)
		{
			goto IL_03e5;
		}
		if (L_129 == 1)
		{
			goto IL_0469;
		}
		if (L_129 == 2)
		{
			goto IL_047b;
		}
	}
	{
		goto IL_051a;
	}

IL_03e5:
	{
		XmlResolver_t696 * L_130 = (__this->___resolver_45);
		if (!L_130)
		{
			goto IL_0457;
		}
	}
	{
		String_t* L_131 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Mono.Xml2.XmlTextReader::get_BaseURI() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_132 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_133 = String_op_Inequality_m172(NULL /*static, unused*/, L_131, L_132, /*hidden argument*/NULL);
		if (!L_133)
		{
			goto IL_0415;
		}
	}
	{
		String_t* L_134 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Mono.Xml2.XmlTextReader::get_BaseURI() */, __this);
		Uri_t711 * L_135 = (Uri_t711 *)il2cpp_codegen_object_new (Uri_t711_il2cpp_TypeInfo_var);
		Uri__ctor_m3816(L_135, L_134, /*hidden argument*/NULL);
		G_B59_0 = L_135;
		goto IL_0416;
	}

IL_0415:
	{
		G_B59_0 = ((Uri_t711 *)(NULL));
	}

IL_0416:
	{
		V_13 = G_B59_0;
		XmlResolver_t696 * L_136 = (__this->___resolver_45);
		Uri_t711 * L_137 = V_13;
		String_t* L_138 = V_12;
		NullCheck(L_136);
		Uri_t711 * L_139 = (Uri_t711 *)VirtFuncInvoker2< Uri_t711 *, Uri_t711 *, String_t* >::Invoke(5 /* System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String) */, L_136, L_137, L_138);
		V_14 = L_139;
		XmlParserContext_t746 * L_140 = (__this->___parserContext_11);
		Uri_t711 * L_141 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t711_il2cpp_TypeInfo_var);
		bool L_142 = Uri_op_Inequality_m3828(NULL /*static, unused*/, L_141, (Uri_t711 *)NULL, /*hidden argument*/NULL);
		G_B60_0 = L_140;
		if (!L_142)
		{
			G_B61_0 = L_140;
			goto IL_0448;
		}
	}
	{
		Uri_t711 * L_143 = V_14;
		NullCheck(L_143);
		String_t* L_144 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_143);
		G_B62_0 = L_144;
		G_B62_1 = G_B60_0;
		goto IL_044d;
	}

IL_0448:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_145 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B62_0 = L_145;
		G_B62_1 = G_B61_0;
	}

IL_044d:
	{
		NullCheck(G_B62_1);
		XmlParserContext_set_BaseURI_m3524(G_B62_1, G_B62_0, /*hidden argument*/NULL);
		goto IL_0464;
	}

IL_0457:
	{
		XmlParserContext_t746 * L_146 = (__this->___parserContext_11);
		String_t* L_147 = V_12;
		NullCheck(L_146);
		XmlParserContext_set_BaseURI_m3524(L_146, L_147, /*hidden argument*/NULL);
	}

IL_0464:
	{
		goto IL_051a;
	}

IL_0469:
	{
		XmlParserContext_t746 * L_148 = (__this->___parserContext_11);
		String_t* L_149 = V_12;
		NullCheck(L_148);
		XmlParserContext_set_XmlLang_m3536(L_148, L_149, /*hidden argument*/NULL);
		goto IL_051a;
	}

IL_047b:
	{
		String_t* L_150 = V_12;
		V_18 = L_150;
		String_t* L_151 = V_18;
		if (!L_151)
		{
			goto IL_0502;
		}
	}
	{
		Dictionary_2_t202 * L_152 = ((XmlTextReader_t754_StaticFields*)XmlTextReader_t754_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map51_54;
		if (L_152)
		{
			goto IL_04b9;
		}
	}
	{
		Dictionary_2_t202 * L_153 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_153, 2, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_16 = L_153;
		Dictionary_2_t202 * L_154 = V_16;
		NullCheck(L_154);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_154, _stringLiteral481, 0);
		Dictionary_2_t202 * L_155 = V_16;
		NullCheck(L_155);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_155, _stringLiteral482, 1);
		Dictionary_2_t202 * L_156 = V_16;
		((XmlTextReader_t754_StaticFields*)XmlTextReader_t754_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map51_54 = L_156;
	}

IL_04b9:
	{
		Dictionary_2_t202 * L_157 = ((XmlTextReader_t754_StaticFields*)XmlTextReader_t754_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map51_54;
		String_t* L_158 = V_18;
		NullCheck(L_157);
		bool L_159 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_157, L_158, (&V_19));
		if (!L_159)
		{
			goto IL_0502;
		}
	}
	{
		int32_t L_160 = V_19;
		if (!L_160)
		{
			goto IL_04e0;
		}
	}
	{
		int32_t L_161 = V_19;
		if ((((int32_t)L_161) == ((int32_t)1)))
		{
			goto IL_04f1;
		}
	}
	{
		goto IL_0502;
	}

IL_04e0:
	{
		XmlParserContext_t746 * L_162 = (__this->___parserContext_11);
		NullCheck(L_162);
		XmlParserContext_set_XmlSpace_m3538(L_162, 2, /*hidden argument*/NULL);
		goto IL_0515;
	}

IL_04f1:
	{
		XmlParserContext_t746 * L_163 = (__this->___parserContext_11);
		NullCheck(L_163);
		XmlParserContext_set_XmlSpace_m3538(L_163, 1, /*hidden argument*/NULL);
		goto IL_0515;
	}

IL_0502:
	{
		String_t* L_164 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_165 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral483, L_164, /*hidden argument*/NULL);
		XmlException_t731 * L_166 = XmlTextReader_NotWFError_m3651(__this, L_165, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_166);
	}

IL_0515:
	{
		goto IL_051a;
	}

IL_051a:
	{
		int32_t L_167 = V_10;
		V_10 = ((int32_t)((int32_t)L_167+(int32_t)1));
	}

IL_0520:
	{
		int32_t L_168 = V_10;
		int32_t L_169 = (__this->___attributeCount_10);
		if ((((int32_t)L_168) < ((int32_t)L_169)))
		{
			goto IL_032d;
		}
	}
	{
		bool L_170 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement() */, __this);
		if (!L_170)
		{
			goto IL_053e;
		}
	}
	{
		XmlTextReader_CheckCurrentStateUpdate_m3670(__this, /*hidden argument*/NULL);
	}

IL_053e:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::PushElementName(System.String,System.String,System.String)
// Mono.Xml2.XmlTextReader/TagName
#include "System_Xml_Mono_Xml2_XmlTextReader_TagNameMethodDeclarations.h"
extern TypeInfo* TagNameU5BU5D_t761_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_PushElementName_m3668 (XmlTextReader_t754 * __this, String_t* ___name, String_t* ___local, String_t* ___prefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TagNameU5BU5D_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(512);
		s_Il2CppMethodIntialized = true;
	}
	TagNameU5BU5D_t761* V_0 = {0};
	int32_t V_1 = 0;
	{
		TagNameU5BU5D_t761* L_0 = (__this->___elementNames_20);
		NullCheck(L_0);
		int32_t L_1 = (__this->___elementNameStackPos_21);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((uint32_t)L_1))))
		{
			goto IL_003e;
		}
	}
	{
		TagNameU5BU5D_t761* L_2 = (__this->___elementNames_20);
		NullCheck(L_2);
		V_0 = ((TagNameU5BU5D_t761*)SZArrayNew(TagNameU5BU5D_t761_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))*(int32_t)2))));
		TagNameU5BU5D_t761* L_3 = (__this->___elementNames_20);
		TagNameU5BU5D_t761* L_4 = V_0;
		int32_t L_5 = (__this->___elementNameStackPos_21);
		Array_Copy_m3858(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 0, L_5, /*hidden argument*/NULL);
		TagNameU5BU5D_t761* L_6 = V_0;
		__this->___elementNames_20 = L_6;
	}

IL_003e:
	{
		TagNameU5BU5D_t761* L_7 = (__this->___elementNames_20);
		int32_t L_8 = (__this->___elementNameStackPos_21);
		int32_t L_9 = L_8;
		V_1 = L_9;
		__this->___elementNameStackPos_21 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_10);
		String_t* L_11 = ___name;
		String_t* L_12 = ___local;
		String_t* L_13 = ___prefix;
		TagName_t756  L_14 = {0};
		TagName__ctor_m3596(&L_14, L_11, L_12, L_13, /*hidden argument*/NULL);
		*((TagName_t756 *)(TagName_t756 *)SZArrayLdElema(L_7, L_10, sizeof(TagName_t756 ))) = L_14;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadEndTag()
extern Il2CppCodeGenString* _stringLiteral484;
extern Il2CppCodeGenString* _stringLiteral485;
extern "C" void XmlTextReader_ReadEndTag_m3669 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral484 = il2cpp_codegen_string_literal_from_index(484);
		_stringLiteral485 = il2cpp_codegen_string_literal_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	TagName_t756  V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___currentState_39);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		XmlException_t731 * L_1 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral484, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___line_33);
		__this->___currentLinkedNodeLineNumber_35 = L_2;
		int32_t L_3 = (__this->___column_34);
		__this->___currentLinkedNodeLinePosition_36 = L_3;
		int32_t L_4 = (__this->___elementNameStackPos_21);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		XmlException_t731 * L_5 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral485, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0047:
	{
		TagNameU5BU5D_t761* L_6 = (__this->___elementNames_20);
		int32_t L_7 = (__this->___elementNameStackPos_21);
		int32_t L_8 = ((int32_t)((int32_t)L_7-(int32_t)1));
		V_1 = L_8;
		__this->___elementNameStackPos_21 = L_8;
		int32_t L_9 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_9);
		V_0 = (*(TagName_t756 *)((TagName_t756 *)(TagName_t756 *)SZArrayLdElema(L_6, L_9, sizeof(TagName_t756 ))));
		String_t* L_10 = ((&V_0)->___Name_0);
		XmlTextReader_Expect_m3705(__this, L_10, /*hidden argument*/NULL);
		XmlTextReader_ExpectAfterWhitespace_m3706(__this, ((int32_t)62), /*hidden argument*/NULL);
		int32_t L_11 = (__this->___depth_16);
		__this->___depth_16 = ((int32_t)((int32_t)L_11-(int32_t)1));
		String_t* L_12 = ((&V_0)->___Name_0);
		String_t* L_13 = ((&V_0)->___Prefix_2);
		String_t* L_14 = ((&V_0)->___LocalName_1);
		XmlTextReader_SetProperties_m3657(__this, ((int32_t)15), L_12, L_13, L_14, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		String_t* L_15 = ((&V_0)->___Prefix_2);
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m159(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		XmlTokenInfo_t753 * L_17 = (__this->___currentToken_3);
		String_t* L_18 = ((&V_0)->___Prefix_2);
		String_t* L_19 = XmlTextReader_LookupNamespace_m3639(__this, L_18, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->___NamespaceURI_5 = L_19;
		goto IL_00fd;
	}

IL_00dc:
	{
		bool L_20 = (__this->___namespaces_43);
		if (!L_20)
		{
			goto IL_00fd;
		}
	}
	{
		XmlTokenInfo_t753 * L_21 = (__this->___currentToken_3);
		XmlNamespaceManager_t741 * L_22 = (__this->___nsmgr_13);
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_22);
		NullCheck(L_21);
		L_21->___NamespaceURI_5 = L_23;
	}

IL_00fd:
	{
		__this->___popScope_19 = 1;
		XmlTextReader_CheckCurrentStateUpdate_m3670(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::CheckCurrentStateUpdate()
extern "C" void XmlTextReader_CheckCurrentStateUpdate_m3670 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___depth_16);
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		bool L_1 = (__this->___allowMultipleRoot_22);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement() */, __this);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0036;
		}
	}

IL_002e:
	{
		__this->___currentState_39 = ((int32_t)15);
	}

IL_0036:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::AppendValueChar(System.Int32)
extern "C" void XmlTextReader_AppendValueChar_m3671 (XmlTextReader_t754 * __this, int32_t ___ch, const MethodInfo* method)
{
	{
		int32_t L_0 = ___ch;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t320 * L_1 = (__this->___valueBuffer_26);
		int32_t L_2 = ___ch;
		NullCheck(L_1);
		StringBuilder_Append_m3837(L_1, (((uint16_t)L_2)), /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_001e:
	{
		int32_t L_3 = ___ch;
		XmlTextReader_AppendSurrogatePairValueChar_m3672(__this, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::AppendSurrogatePairValueChar(System.Int32)
extern "C" void XmlTextReader_AppendSurrogatePairValueChar_m3672 (XmlTextReader_t754 * __this, int32_t ___ch, const MethodInfo* method)
{
	{
		StringBuilder_t320 * L_0 = (__this->___valueBuffer_26);
		int32_t L_1 = ___ch;
		NullCheck(L_0);
		StringBuilder_Append_m3837(L_0, (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1-(int32_t)((int32_t)65536)))/(int32_t)((int32_t)1024)))+(int32_t)((int32_t)55296))))), /*hidden argument*/NULL);
		StringBuilder_t320 * L_2 = (__this->___valueBuffer_26);
		int32_t L_3 = ___ch;
		NullCheck(L_2);
		StringBuilder_Append_m3837(L_2, (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3-(int32_t)((int32_t)65536)))%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320))))), /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader::CreateValueString()
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern TypeInfo* NameTable_t722_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextReader_CreateValueString_m3673 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		NameTable_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	String_t* G_B16_0 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, __this);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)13))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)14))))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_00ad;
	}

IL_001c:
	{
		StringBuilder_t320 * L_3 = (__this->___valueBuffer_26);
		NullCheck(L_3);
		int32_t L_4 = StringBuilder_get_Length_m3860(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		CharU5BU5D_t60* L_5 = (__this->___whitespaceCache_52);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		__this->___whitespaceCache_52 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, ((int32_t)32)));
	}

IL_0040:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t60* L_7 = (__this->___whitespaceCache_52);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_00ad;
	}

IL_0053:
	{
		NameTable_t722 * L_8 = (__this->___whitespacePool_51);
		if (L_8)
		{
			goto IL_0069;
		}
	}
	{
		NameTable_t722 * L_9 = (NameTable_t722 *)il2cpp_codegen_object_new (NameTable_t722_il2cpp_TypeInfo_var);
		NameTable__ctor_m3432(L_9, /*hidden argument*/NULL);
		__this->___whitespacePool_51 = L_9;
	}

IL_0069:
	{
		V_1 = 0;
		goto IL_0088;
	}

IL_0070:
	{
		CharU5BU5D_t60* L_10 = (__this->___whitespaceCache_52);
		int32_t L_11 = V_1;
		StringBuilder_t320 * L_12 = (__this->___valueBuffer_26);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		uint16_t L_14 = StringBuilder_get_Chars_m3875(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_11, sizeof(uint16_t))) = (uint16_t)L_14;
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0088:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0070;
		}
	}
	{
		NameTable_t722 * L_18 = (__this->___whitespacePool_51);
		CharU5BU5D_t60* L_19 = (__this->___whitespaceCache_52);
		StringBuilder_t320 * L_20 = (__this->___valueBuffer_26);
		NullCheck(L_20);
		int32_t L_21 = StringBuilder_get_Length_m3860(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_22 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t60*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32) */, L_18, L_19, 0, L_21);
		return L_22;
	}

IL_00ad:
	{
		StringBuilder_t320 * L_23 = (__this->___valueBuffer_26);
		NullCheck(L_23);
		int32_t L_24 = StringBuilder_get_Capacity_m3859(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)100))))
		{
			goto IL_00db;
		}
	}
	{
		StringBuilder_t320 * L_25 = (__this->___valueBuffer_26);
		StringBuilder_t320 * L_26 = (__this->___valueBuffer_26);
		NullCheck(L_26);
		int32_t L_27 = StringBuilder_get_Length_m3860(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		String_t* L_28 = StringBuilder_ToString_m3861(L_25, 0, L_27, /*hidden argument*/NULL);
		G_B16_0 = L_28;
		goto IL_00e6;
	}

IL_00db:
	{
		StringBuilder_t320 * L_29 = (__this->___valueBuffer_26);
		NullCheck(L_29);
		String_t* L_30 = StringBuilder_ToString_m1554(L_29, /*hidden argument*/NULL);
		G_B16_0 = L_30;
	}

IL_00e6:
	{
		return G_B16_0;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ClearValueBuffer()
extern "C" void XmlTextReader_ClearValueBuffer_m3674 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		StringBuilder_t320 * L_0 = (__this->___valueBuffer_26);
		NullCheck(L_0);
		StringBuilder_set_Length_m3838(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadText(System.Boolean)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral486;
extern Il2CppCodeGenString* _stringLiteral386;
extern Il2CppCodeGenString* _stringLiteral487;
extern "C" void XmlTextReader_ReadText_m3675 (XmlTextReader_t754 * __this, bool ___notWhitespace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral486 = il2cpp_codegen_string_literal_from_index(486);
		_stringLiteral386 = il2cpp_codegen_string_literal_from_index(386);
		_stringLiteral487 = il2cpp_codegen_string_literal_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = {0};
	int32_t G_B39_0 = 0;
	{
		int32_t L_0 = (__this->___currentState_39);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		XmlException_t731 * L_1 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral486, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		__this->___preserveCurrentTag_32 = 0;
		bool L_2 = ___notWhitespace;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		int32_t L_3 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0129;
	}

IL_0039:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0065;
		}
	}
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		int32_t L_5 = XmlTextReader_ReadReference_m3676(__this, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = (__this->___returnEntityReference_24);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		goto IL_0138;
	}

IL_0060:
	{
		goto IL_00c4;
	}

IL_0065:
	{
		bool L_7 = (__this->___normalization_46);
		if (!L_7)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_009b;
		}
	}
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		int32_t L_9 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)10))))
		{
			goto IL_0096;
		}
	}
	{
		XmlTextReader_AppendValueChar_m3671(__this, ((int32_t)10), /*hidden argument*/NULL);
	}

IL_0096:
	{
		goto IL_0129;
	}

IL_009b:
	{
		bool L_11 = XmlTextReader_get_CharacterChecking_m3612(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_13 = XmlChar_IsInvalid_m3442(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00bd;
		}
	}
	{
		XmlException_t731 * L_14 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral386, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_00bd:
	{
		int32_t L_15 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_00c4:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_00e2;
		}
	}
	{
		StringBuilder_t320 * L_17 = (__this->___valueBuffer_26);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3837(L_17, (((uint16_t)L_18)), /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00e2:
	{
		int32_t L_19 = V_0;
		XmlTextReader_AppendSurrogatePairValueChar_m3672(__this, L_19, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0117;
		}
	}
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_22 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0110;
		}
	}
	{
		XmlException_t731 * L_23 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral487, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_0110:
	{
		V_1 = 1;
		goto IL_011f;
	}

IL_0117:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		V_1 = 0;
	}

IL_011f:
	{
		int32_t L_25 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_0 = L_25;
		___notWhitespace = 1;
	}

IL_0129:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)60))))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0039;
		}
	}

IL_0138:
	{
		bool L_28 = (__this->___returnEntityReference_24);
		if (!L_28)
		{
			goto IL_015e;
		}
	}
	{
		StringBuilder_t320 * L_29 = (__this->___valueBuffer_26);
		NullCheck(L_29);
		int32_t L_30 = StringBuilder_get_Length_m3860(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_015e;
		}
	}
	{
		XmlTextReader_SetEntityReferenceProperties_m3666(__this, /*hidden argument*/NULL);
		goto IL_0199;
	}

IL_015e:
	{
		bool L_31 = ___notWhitespace;
		if (!L_31)
		{
			goto IL_016a;
		}
	}
	{
		G_B39_0 = 3;
		goto IL_017f;
	}

IL_016a:
	{
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace() */, __this);
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_017d;
		}
	}
	{
		G_B39_0 = ((int32_t)14);
		goto IL_017f;
	}

IL_017d:
	{
		G_B39_0 = ((int32_t)13);
	}

IL_017f:
	{
		V_2 = G_B39_0;
		int32_t L_33 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_35 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_36 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m3657(__this, L_33, L_34, L_35, L_36, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
	}

IL_0199:
	{
		return;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadReference(System.Boolean)
extern "C" int32_t XmlTextReader_ReadReference_m3676 (XmlTextReader_t754 * __this, bool ___ignoreEntityReferences, const MethodInfo* method)
{
	{
		int32_t L_0 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)35), /*hidden argument*/NULL);
		int32_t L_1 = XmlTextReader_ReadCharacterReference_m3677(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_001c:
	{
		bool L_2 = ___ignoreEntityReferences;
		int32_t L_3 = XmlTextReader_ReadEntityReference_m3678(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharacterReference()
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t61_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t325_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral488;
extern Il2CppCodeGenString* _stringLiteral489;
extern Il2CppCodeGenString* _stringLiteral490;
extern Il2CppCodeGenString* _stringLiteral491;
extern "C" int32_t XmlTextReader_ReadCharacterReference_m3677 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		ObjectU5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		Boolean_t325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		_stringLiteral488 = il2cpp_codegen_string_literal_from_index(488);
		_stringLiteral489 = il2cpp_codegen_string_literal_from_index(489);
		_stringLiteral490 = il2cpp_codegen_string_literal_from_index(490);
		_stringLiteral491 = il2cpp_codegen_string_literal_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_00cd;
		}
	}
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)120), /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_001c:
	{
		int32_t L_1 = V_1;
		XmlTextReader_Advance_m3663(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)57))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)4))+(int32_t)L_5))-(int32_t)((int32_t)48)));
		goto IL_00b2;
	}

IL_0041:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)65))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8<<(int32_t)4))+(int32_t)L_9))-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
		goto IL_00b2;
	}

IL_0062:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)97))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)102))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12<<(int32_t)4))+(int32_t)L_13))-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
		goto IL_00b2;
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_14 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t61* L_15 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 2));
		int32_t L_16 = V_1;
		uint16_t L_17 = (((uint16_t)L_16));
		Object_t * L_18 = Box(Char_t355_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0, sizeof(Object_t *))) = (Object_t *)L_18;
		ObjectU5BU5D_t61* L_19 = L_15;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 1);
		ArrayElementTypeCheck (L_19, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 1, sizeof(Object_t *))) = (Object_t *)L_22;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Format_m3834(NULL /*static, unused*/, L_14, _stringLiteral488, L_19, /*hidden argument*/NULL);
		XmlException_t731 * L_24 = XmlTextReader_NotWFError_m3651(__this, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_24);
	}

IL_00b2:
	{
		int32_t L_25 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		V_1 = L_26;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)59))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_001c;
		}
	}

IL_00c8:
	{
		goto IL_013d;
	}

IL_00cd:
	{
		goto IL_0127;
	}

IL_00d2:
	{
		int32_t L_28 = V_1;
		XmlTextReader_Advance_m3663(__this, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)48))))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)57))))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31*(int32_t)((int32_t)10)))+(int32_t)L_32))-(int32_t)((int32_t)48)));
		goto IL_0127;
	}

IL_00f8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_33 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t61* L_34 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 2));
		int32_t L_35 = V_1;
		uint16_t L_36 = (((uint16_t)L_35));
		Object_t * L_37 = Box(Char_t355_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 0);
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 0, sizeof(Object_t *))) = (Object_t *)L_37;
		ObjectU5BU5D_t61* L_38 = L_34;
		int32_t L_39 = V_1;
		int32_t L_40 = L_39;
		Object_t * L_41 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 1);
		ArrayElementTypeCheck (L_38, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 1, sizeof(Object_t *))) = (Object_t *)L_41;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Format_m3834(NULL /*static, unused*/, L_33, _stringLiteral489, L_38, /*hidden argument*/NULL);
		XmlException_t731 * L_43 = XmlTextReader_NotWFError_m3651(__this, L_42, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_43);
	}

IL_0127:
	{
		int32_t L_44 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		int32_t L_45 = L_44;
		V_1 = L_45;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)59))))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_46 = V_1;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_00d2;
		}
	}

IL_013d:
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		bool L_47 = XmlTextReader_get_CharacterChecking_m3612(__this, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01a3;
		}
	}
	{
		bool L_48 = XmlTextReader_get_Normalization_m3628(__this, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_49 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_50 = XmlChar_IsInvalid_m3442(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01a3;
		}
	}
	{
		ObjectU5BU5D_t61* L_51 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 4));
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 0);
		ArrayElementTypeCheck (L_51, _stringLiteral490);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral490;
		ObjectU5BU5D_t61* L_52 = L_51;
		bool L_53 = (__this->___normalization_46);
		bool L_54 = L_53;
		Object_t * L_55 = Box(Boolean_t325_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 1, sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t61* L_56 = L_52;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
		ArrayElementTypeCheck (L_56, _stringLiteral491);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral491;
		ObjectU5BU5D_t61* L_57 = L_56;
		bool L_58 = (__this->___checkCharacters_47);
		bool L_59 = L_58;
		Object_t * L_60 = Box(Boolean_t325_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
		ArrayElementTypeCheck (L_57, L_60);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_57, 3, sizeof(Object_t *))) = (Object_t *)L_60;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m174(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		XmlException_t731 * L_62 = XmlTextReader_NotWFError_m3651(__this, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_62);
	}

IL_01a3:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadEntityReference(System.Boolean)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern "C" int32_t XmlTextReader_ReadEntityReference_m3678 (XmlTextReader_t754 * __this, bool ___ignoreEntityReferences, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = XmlTextReader_ReadName_m3702(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlTextReader_Expect_m3704(__this, ((int32_t)59), /*hidden argument*/NULL);
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlChar_GetPredefinedEntity_m3449(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_1;
		return L_4;
	}

IL_001f:
	{
		bool L_5 = ___ignoreEntityReferences;
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		XmlTextReader_AppendValueChar_m3671(__this, ((int32_t)38), /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0045;
	}

IL_0034:
	{
		String_t* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m1913(L_6, L_7, /*hidden argument*/NULL);
		XmlTextReader_AppendValueChar_m3671(__this, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_10 = V_2;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m159(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		XmlTextReader_AppendValueChar_m3671(__this, ((int32_t)59), /*hidden argument*/NULL);
		goto IL_006c;
	}

IL_005e:
	{
		__this->___returnEntityReference_24 = 1;
		String_t* L_13 = V_0;
		__this->___entityReferenceName_25 = L_13;
	}

IL_006c:
	{
		return (-1);
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadAttributes(System.Boolean)
extern Il2CppCodeGenString* _stringLiteral492;
extern "C" void XmlTextReader_ReadAttributes_m3679 (XmlTextReader_t754 * __this, bool ___isXmlDecl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral492 = il2cpp_codegen_string_literal_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	{
		V_0 = (-1);
		V_1 = 0;
		__this->___currentAttribute_8 = (-1);
		__this->___currentAttributeValue_9 = (-1);
	}

IL_0012:
	{
		bool L_0 = XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		XmlException_t731 * L_2 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral492, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002f:
	{
		XmlTextReader_IncrementAttributeToken_m3681(__this, /*hidden argument*/NULL);
		XmlAttributeTokenInfo_t755 * L_3 = (__this->___currentAttributeToken_4);
		int32_t L_4 = (__this->___line_33);
		NullCheck(L_3);
		((XmlTokenInfo_t753 *)L_3)->___LineNumber_8 = L_4;
		XmlAttributeTokenInfo_t755 * L_5 = (__this->___currentAttributeToken_4);
		int32_t L_6 = (__this->___column_34);
		NullCheck(L_5);
		((XmlTokenInfo_t753 *)L_5)->___LinePosition_9 = L_6;
		XmlAttributeTokenInfo_t755 * L_7 = (__this->___currentAttributeToken_4);
		String_t* L_8 = XmlTextReader_ReadName_m3703(__this, (&V_2), (&V_3), /*hidden argument*/NULL);
		NullCheck(L_7);
		((XmlTokenInfo_t753 *)L_7)->___Name_2 = L_8;
		XmlAttributeTokenInfo_t755 * L_9 = (__this->___currentAttributeToken_4);
		String_t* L_10 = V_2;
		NullCheck(L_9);
		((XmlTokenInfo_t753 *)L_9)->___Prefix_4 = L_10;
		XmlAttributeTokenInfo_t755 * L_11 = (__this->___currentAttributeToken_4);
		String_t* L_12 = V_3;
		NullCheck(L_11);
		((XmlTokenInfo_t753 *)L_11)->___LocalName_3 = L_12;
		XmlTextReader_ExpectAfterWhitespace_m3706(__this, ((int32_t)61), /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		XmlTextReader_ReadAttributeValueTokens_m3683(__this, (-1), /*hidden argument*/NULL);
		bool L_13 = ___isXmlDecl;
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		XmlAttributeTokenInfo_t755 * L_14 = (__this->___currentAttributeToken_4);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::get_Value() */, L_14);
		V_4 = L_15;
	}

IL_00ad:
	{
		int32_t L_16 = (__this->___attributeCount_10);
		__this->___attributeCount_10 = ((int32_t)((int32_t)L_16+(int32_t)1));
		bool L_17 = XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00c8;
		}
	}
	{
		V_1 = 1;
	}

IL_00c8:
	{
		int32_t L_18 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_0 = L_18;
		bool L_19 = ___isXmlDecl;
		if (!L_19)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0103;
	}

IL_00e2:
	{
		goto IL_00fc;
	}

IL_00e7:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)47))))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_00fc;
		}
	}

IL_00f7:
	{
		goto IL_0103;
	}

IL_00fc:
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0012;
		}
	}

IL_0103:
	{
		__this->___currentAttribute_8 = (-1);
		__this->___currentAttributeValue_9 = (-1);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::AddAttributeWithValue(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_AddAttributeWithValue_m3680 (XmlTextReader_t754 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	XmlAttributeTokenInfo_t755 * V_0 = {0};
	XmlTokenInfo_t753 * V_1 = {0};
	{
		XmlTextReader_IncrementAttributeToken_m3681(__this, /*hidden argument*/NULL);
		XmlAttributeTokenInfoU5BU5D_t759* L_0 = (__this->___attributeTokens_6);
		int32_t L_1 = (__this->___currentAttribute_8);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_0, L_2, sizeof(XmlAttributeTokenInfo_t755 *)));
		XmlAttributeTokenInfo_t755 * L_3 = V_0;
		XmlNameTable_t697 * L_4 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(16 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_4, L_5);
		NullCheck(L_3);
		((XmlTokenInfo_t753 *)L_3)->___Name_2 = L_6;
		XmlAttributeTokenInfo_t755 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_7);
		((XmlTokenInfo_t753 *)L_7)->___Prefix_4 = L_8;
		XmlAttributeTokenInfo_t755 * L_9 = V_0;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_9);
		((XmlTokenInfo_t753 *)L_9)->___NamespaceURI_5 = L_10;
		XmlTextReader_IncrementAttributeValueToken_m3682(__this, /*hidden argument*/NULL);
		XmlTokenInfoU5BU5D_t760* L_11 = (__this->___attributeValueTokens_7);
		int32_t L_12 = (__this->___currentAttributeValue_9);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		V_1 = (*(XmlTokenInfo_t753 **)(XmlTokenInfo_t753 **)SZArrayLdElema(L_11, L_13, sizeof(XmlTokenInfo_t753 *)));
		XmlTokenInfo_t753 * L_14 = V_1;
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_18 = ___value;
		XmlTextReader_SetTokenProperties_m3658(__this, L_14, 3, L_15, L_16, L_17, 0, L_18, 0, /*hidden argument*/NULL);
		XmlAttributeTokenInfo_t755 * L_19 = V_0;
		String_t* L_20 = ___value;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::set_Value(System.String) */, L_19, L_20);
		int32_t L_21 = (__this->___attributeCount_10);
		__this->___attributeCount_10 = ((int32_t)((int32_t)L_21+(int32_t)1));
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeToken()
extern TypeInfo* XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var;
extern TypeInfo* XmlAttributeTokenInfo_t755_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_IncrementAttributeToken_m3681 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		XmlAttributeTokenInfo_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	XmlAttributeTokenInfoU5BU5D_t759* V_0 = {0};
	{
		int32_t L_0 = (__this->___currentAttribute_8);
		__this->___currentAttribute_8 = ((int32_t)((int32_t)L_0+(int32_t)1));
		XmlAttributeTokenInfoU5BU5D_t759* L_1 = (__this->___attributeTokens_6);
		NullCheck(L_1);
		int32_t L_2 = (__this->___currentAttribute_8);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_3 = (__this->___attributeTokens_6);
		NullCheck(L_3);
		V_0 = ((XmlAttributeTokenInfoU5BU5D_t759*)SZArrayNew(XmlAttributeTokenInfoU5BU5D_t759_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))*(int32_t)2))));
		XmlAttributeTokenInfoU5BU5D_t759* L_4 = (__this->___attributeTokens_6);
		XmlAttributeTokenInfoU5BU5D_t759* L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_4, (Array_t *)(Array_t *)L_5, 0);
		XmlAttributeTokenInfoU5BU5D_t759* L_6 = V_0;
		__this->___attributeTokens_6 = L_6;
	}

IL_0045:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_7 = (__this->___attributeTokens_6);
		int32_t L_8 = (__this->___currentAttribute_8);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		if ((*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_7, L_9, sizeof(XmlAttributeTokenInfo_t755 *))))
		{
			goto IL_006a;
		}
	}
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_10 = (__this->___attributeTokens_6);
		int32_t L_11 = (__this->___currentAttribute_8);
		XmlAttributeTokenInfo_t755 * L_12 = (XmlAttributeTokenInfo_t755 *)il2cpp_codegen_object_new (XmlAttributeTokenInfo_t755_il2cpp_TypeInfo_var);
		XmlAttributeTokenInfo__ctor_m3590(L_12, __this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_10, L_11, sizeof(XmlAttributeTokenInfo_t755 *))) = (XmlAttributeTokenInfo_t755 *)L_12;
	}

IL_006a:
	{
		XmlAttributeTokenInfoU5BU5D_t759* L_13 = (__this->___attributeTokens_6);
		int32_t L_14 = (__this->___currentAttribute_8);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___currentAttributeToken_4 = (*(XmlAttributeTokenInfo_t755 **)(XmlAttributeTokenInfo_t755 **)SZArrayLdElema(L_13, L_15, sizeof(XmlAttributeTokenInfo_t755 *)));
		XmlAttributeTokenInfo_t755 * L_16 = (__this->___currentAttributeToken_4);
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::Clear() */, L_16);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeValueToken()
extern TypeInfo* XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTokenInfo_t753_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader_IncrementAttributeValueToken_m3682 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		XmlTokenInfo_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	XmlTokenInfoU5BU5D_t760* V_0 = {0};
	{
		int32_t L_0 = (__this->___currentAttributeValue_9);
		__this->___currentAttributeValue_9 = ((int32_t)((int32_t)L_0+(int32_t)1));
		XmlTokenInfoU5BU5D_t760* L_1 = (__this->___attributeValueTokens_7);
		NullCheck(L_1);
		int32_t L_2 = (__this->___currentAttributeValue_9);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		XmlTokenInfoU5BU5D_t760* L_3 = (__this->___attributeValueTokens_7);
		NullCheck(L_3);
		V_0 = ((XmlTokenInfoU5BU5D_t760*)SZArrayNew(XmlTokenInfoU5BU5D_t760_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))*(int32_t)2))));
		XmlTokenInfoU5BU5D_t760* L_4 = (__this->___attributeValueTokens_7);
		XmlTokenInfoU5BU5D_t760* L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_4, (Array_t *)(Array_t *)L_5, 0);
		XmlTokenInfoU5BU5D_t760* L_6 = V_0;
		__this->___attributeValueTokens_7 = L_6;
	}

IL_0045:
	{
		XmlTokenInfoU5BU5D_t760* L_7 = (__this->___attributeValueTokens_7);
		int32_t L_8 = (__this->___currentAttributeValue_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		if ((*(XmlTokenInfo_t753 **)(XmlTokenInfo_t753 **)SZArrayLdElema(L_7, L_9, sizeof(XmlTokenInfo_t753 *))))
		{
			goto IL_006a;
		}
	}
	{
		XmlTokenInfoU5BU5D_t760* L_10 = (__this->___attributeValueTokens_7);
		int32_t L_11 = (__this->___currentAttributeValue_9);
		XmlTokenInfo_t753 * L_12 = (XmlTokenInfo_t753 *)il2cpp_codegen_object_new (XmlTokenInfo_t753_il2cpp_TypeInfo_var);
		XmlTokenInfo__ctor_m3586(L_12, __this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((XmlTokenInfo_t753 **)(XmlTokenInfo_t753 **)SZArrayLdElema(L_10, L_11, sizeof(XmlTokenInfo_t753 *))) = (XmlTokenInfo_t753 *)L_12;
	}

IL_006a:
	{
		XmlTokenInfoU5BU5D_t760* L_13 = (__this->___attributeValueTokens_7);
		int32_t L_14 = (__this->___currentAttributeValue_9);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___currentAttributeValueToken_5 = (*(XmlTokenInfo_t753 **)(XmlTokenInfo_t753 **)SZArrayLdElema(L_13, L_15, sizeof(XmlTokenInfo_t753 *)));
		XmlTokenInfo_t753 * L_16 = (__this->___currentAttributeValueToken_5);
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(6 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::Clear() */, L_16);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadAttributeValueTokens(System.Int32)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t793_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t794_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t29_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t38_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral493;
extern Il2CppCodeGenString* _stringLiteral494;
extern Il2CppCodeGenString* _stringLiteral495;
extern Il2CppCodeGenString* _stringLiteral496;
extern "C" void XmlTextReader_ReadAttributeValueTokens_m3683 (XmlTextReader_t754 * __this, int32_t ___dummyQuoteChar, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		IEnumerable_1_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		IEnumerator_1_t794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(518);
		IEnumerator_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		IDisposable_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral493 = il2cpp_codegen_string_literal_from_index(493);
		_stringLiteral494 = il2cpp_codegen_string_literal_from_index(494);
		_stringLiteral495 = il2cpp_codegen_string_literal_from_index(495);
		_stringLiteral496 = il2cpp_codegen_string_literal_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	uint16_t V_8 = 0x0;
	Object_t* V_9 = {0};
	int32_t V_10 = 0;
	Exception_t33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___dummyQuoteChar;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_2 = ___dummyQuoteChar;
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0030;
		}
	}
	{
		XmlException_t731 * L_5 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral493, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0030:
	{
		XmlAttributeTokenInfo_t755 * L_6 = (__this->___currentAttributeToken_4);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		((XmlTokenInfo_t753 *)L_6)->___QuoteChar_7 = (((uint16_t)L_7));
		XmlTextReader_IncrementAttributeValueToken_m3682(__this, /*hidden argument*/NULL);
		XmlAttributeTokenInfo_t755 * L_8 = (__this->___currentAttributeToken_4);
		int32_t L_9 = (__this->___currentAttributeValue_9);
		NullCheck(L_8);
		L_8->___ValueTokenStartIndex_13 = L_9;
		XmlTokenInfo_t753 * L_10 = (__this->___currentAttributeValueToken_5);
		int32_t L_11 = (__this->___line_33);
		NullCheck(L_10);
		L_10->___LineNumber_8 = L_11;
		XmlTokenInfo_t753 * L_12 = (__this->___currentAttributeValueToken_5);
		int32_t L_13 = (__this->___column_34);
		NullCheck(L_12);
		L_12->___LinePosition_9 = L_13;
		V_1 = 0;
		V_2 = 1;
		V_3 = 1;
		V_4 = 0;
		XmlTokenInfo_t753 * L_14 = (__this->___currentAttributeValueToken_5);
		StringBuilder_t320 * L_15 = (__this->___valueBuffer_26);
		NullCheck(L_15);
		int32_t L_16 = StringBuilder_get_Length_m3860(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->___ValueBufferStart_10 = L_16;
		goto IL_031f;
	}

IL_009a:
	{
		int32_t L_17 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_00af;
		}
	}
	{
		goto IL_0325;
	}

IL_00af:
	{
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_00f7;
		}
	}
	{
		XmlTextReader_IncrementAttributeValueToken_m3682(__this, /*hidden argument*/NULL);
		XmlTokenInfo_t753 * L_21 = (__this->___currentAttributeValueToken_5);
		StringBuilder_t320 * L_22 = (__this->___valueBuffer_26);
		NullCheck(L_22);
		int32_t L_23 = StringBuilder_get_Length_m3860(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___ValueBufferStart_10 = L_23;
		XmlTokenInfo_t753 * L_24 = (__this->___currentAttributeValueToken_5);
		int32_t L_25 = (__this->___line_33);
		NullCheck(L_24);
		L_24->___LineNumber_8 = L_25;
		XmlTokenInfo_t753 * L_26 = (__this->___currentAttributeValueToken_5);
		int32_t L_27 = (__this->___column_34);
		NullCheck(L_26);
		L_26->___LinePosition_9 = L_27;
		V_1 = 0;
		V_2 = 1;
	}

IL_00f7:
	{
		int32_t L_28 = V_4;
		V_10 = L_28;
		int32_t L_29 = V_10;
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0199;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0199;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0119;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0119;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_015e;
		}
	}

IL_0119:
	{
		int32_t L_30 = V_10;
		if ((((int32_t)L_30) == ((int32_t)(-1))))
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_31 = V_10;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)38))))
		{
			goto IL_01b2;
		}
	}
	{
		int32_t L_32 = V_10;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)60))))
		{
			goto IL_0138;
		}
	}
	{
		goto IL_02cd;
	}

IL_0138:
	{
		XmlException_t731 * L_33 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral494, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_33);
	}

IL_0144:
	{
		int32_t L_34 = ___dummyQuoteChar;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_0157;
		}
	}
	{
		XmlException_t731 * L_35 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral495, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_35);
	}

IL_0157:
	{
		V_3 = 0;
		goto IL_031d;
	}

IL_015e:
	{
		bool L_36 = (__this->___normalization_46);
		if (L_36)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_02cd;
	}

IL_016e:
	{
		int32_t L_37 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0180;
		}
	}
	{
		goto IL_031f;
	}

IL_0180:
	{
		bool L_38 = (__this->___normalization_46);
		if (L_38)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_02cd;
	}

IL_0190:
	{
		V_4 = ((int32_t)32);
		goto IL_02cd;
	}

IL_0199:
	{
		bool L_39 = (__this->___normalization_46);
		if (L_39)
		{
			goto IL_01a9;
		}
	}
	{
		goto IL_02cd;
	}

IL_01a9:
	{
		V_4 = ((int32_t)32);
		goto IL_02cd;
	}

IL_01b2:
	{
		int32_t L_40 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_01dc;
		}
	}
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)35), /*hidden argument*/NULL);
		int32_t L_41 = XmlTextReader_ReadCharacterReference_m3677(__this, /*hidden argument*/NULL);
		V_4 = L_41;
		int32_t L_42 = V_4;
		XmlTextReader_AppendValueChar_m3671(__this, L_42, /*hidden argument*/NULL);
		goto IL_031d;
	}

IL_01dc:
	{
		String_t* L_43 = XmlTextReader_ReadName_m3702(__this, /*hidden argument*/NULL);
		V_5 = L_43;
		XmlTextReader_Expect_m3704(__this, ((int32_t)59), /*hidden argument*/NULL);
		String_t* L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		int32_t L_45 = XmlChar_GetPredefinedEntity_m3449(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_6 = L_45;
		int32_t L_46 = V_6;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_02c0;
		}
	}
	{
		String_t* L_47 = V_5;
		XmlTextReader_CheckAttributeEntityReferenceWFC_m3684(__this, L_47, /*hidden argument*/NULL);
		int32_t L_48 = (__this->___entityHandling_50);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0262;
		}
	}
	{
		DTDObjectModel_t689 * L_49 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		String_t* L_50 = V_5;
		NullCheck(L_49);
		String_t* L_51 = DTDObjectModel_GenerateEntityAttributeText_m3278(L_49, L_50, /*hidden argument*/NULL);
		V_7 = L_51;
		String_t* L_52 = V_7;
		NullCheck(L_52);
		Object_t* L_53 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, IEnumerable_1_t793_il2cpp_TypeInfo_var, L_52);
		V_9 = L_53;
	}

IL_0229:
	try
	{ // begin try (depth: 1)
		{
			goto IL_023f;
		}

IL_022e:
		{
			Object_t* L_54 = V_9;
			NullCheck(L_54);
			uint16_t L_55 = (uint16_t)InterfaceFuncInvoker0< uint16_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, IEnumerator_1_t794_il2cpp_TypeInfo_var, L_54);
			V_8 = L_55;
			uint16_t L_56 = V_8;
			XmlTextReader_AppendValueChar_m3671(__this, L_56, /*hidden argument*/NULL);
		}

IL_023f:
		{
			Object_t* L_57 = V_9;
			NullCheck(L_57);
			bool L_58 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t29_il2cpp_TypeInfo_var, L_57);
			if (L_58)
			{
				goto IL_022e;
			}
		}

IL_024b:
		{
			IL2CPP_LEAVE(0x25D, FINALLY_0250);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t33 *)e.ex;
		goto FINALLY_0250;
	}

FINALLY_0250:
	{ // begin finally (depth: 1)
		{
			Object_t* L_59 = V_9;
			if (L_59)
			{
				goto IL_0255;
			}
		}

IL_0254:
		{
			IL2CPP_END_FINALLY(592)
		}

IL_0255:
		{
			Object_t* L_60 = V_9;
			NullCheck(L_60);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t38_il2cpp_TypeInfo_var, L_60);
			IL2CPP_END_FINALLY(592)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(592)
	{
		IL2CPP_JUMP_TBL(0x25D, IL_025d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t33 *)
	}

IL_025d:
	{
		goto IL_02bb;
	}

IL_0262:
	{
		XmlTokenInfo_t753 * L_61 = (__this->___currentAttributeValueToken_5);
		StringBuilder_t320 * L_62 = (__this->___valueBuffer_26);
		NullCheck(L_62);
		int32_t L_63 = StringBuilder_get_Length_m3860(L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		L_61->___ValueBufferEnd_11 = L_63;
		XmlTokenInfo_t753 * L_64 = (__this->___currentAttributeValueToken_5);
		NullCheck(L_64);
		L_64->___NodeType_12 = 3;
		bool L_65 = V_2;
		if (L_65)
		{
			goto IL_0290;
		}
	}
	{
		XmlTextReader_IncrementAttributeValueToken_m3682(__this, /*hidden argument*/NULL);
	}

IL_0290:
	{
		XmlTokenInfo_t753 * L_66 = (__this->___currentAttributeValueToken_5);
		String_t* L_67 = V_5;
		NullCheck(L_66);
		L_66->___Name_2 = L_67;
		XmlTokenInfo_t753 * L_68 = (__this->___currentAttributeValueToken_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_69 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_68);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void Mono.Xml2.XmlTextReader/XmlTokenInfo::set_Value(System.String) */, L_68, L_69);
		XmlTokenInfo_t753 * L_70 = (__this->___currentAttributeValueToken_5);
		NullCheck(L_70);
		L_70->___NodeType_12 = 5;
		V_1 = 1;
	}

IL_02bb:
	{
		goto IL_02c8;
	}

IL_02c0:
	{
		int32_t L_71 = V_6;
		XmlTextReader_AppendValueChar_m3671(__this, L_71, /*hidden argument*/NULL);
	}

IL_02c8:
	{
		goto IL_031d;
	}

IL_02cd:
	{
		bool L_72 = XmlTextReader_get_CharacterChecking_m3612(__this, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_02f0;
		}
	}
	{
		int32_t L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_74 = XmlChar_IsInvalid_m3442(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_02f0;
		}
	}
	{
		XmlException_t731 * L_75 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral496, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_75);
	}

IL_02f0:
	{
		int32_t L_76 = V_4;
		if ((((int32_t)L_76) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_0310;
		}
	}
	{
		StringBuilder_t320 * L_77 = (__this->___valueBuffer_26);
		int32_t L_78 = V_4;
		NullCheck(L_77);
		StringBuilder_Append_m3837(L_77, (((uint16_t)L_78)), /*hidden argument*/NULL);
		goto IL_0318;
	}

IL_0310:
	{
		int32_t L_79 = V_4;
		XmlTextReader_AppendSurrogatePairValueChar_m3672(__this, L_79, /*hidden argument*/NULL);
	}

IL_0318:
	{
		goto IL_031d;
	}

IL_031d:
	{
		V_2 = 0;
	}

IL_031f:
	{
		bool L_80 = V_3;
		if (L_80)
		{
			goto IL_009a;
		}
	}

IL_0325:
	{
		bool L_81 = V_1;
		if (L_81)
		{
			goto IL_034d;
		}
	}
	{
		XmlTokenInfo_t753 * L_82 = (__this->___currentAttributeValueToken_5);
		StringBuilder_t320 * L_83 = (__this->___valueBuffer_26);
		NullCheck(L_83);
		int32_t L_84 = StringBuilder_get_Length_m3860(L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		L_82->___ValueBufferEnd_11 = L_84;
		XmlTokenInfo_t753 * L_85 = (__this->___currentAttributeValueToken_5);
		NullCheck(L_85);
		L_85->___NodeType_12 = 3;
	}

IL_034d:
	{
		XmlAttributeTokenInfo_t755 * L_86 = (__this->___currentAttributeToken_4);
		int32_t L_87 = (__this->___currentAttributeValue_9);
		NullCheck(L_86);
		L_86->___ValueTokenEndIndex_14 = L_87;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::CheckAttributeEntityReferenceWFC(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral497;
extern Il2CppCodeGenString* _stringLiteral498;
extern Il2CppCodeGenString* _stringLiteral499;
extern Il2CppCodeGenString* _stringLiteral500;
extern "C" void XmlTextReader_CheckAttributeEntityReferenceWFC_m3684 (XmlTextReader_t754 * __this, String_t* ___entName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral497 = il2cpp_codegen_string_literal_from_index(497);
		_stringLiteral498 = il2cpp_codegen_string_literal_from_index(498);
		_stringLiteral499 = il2cpp_codegen_string_literal_from_index(499);
		_stringLiteral500 = il2cpp_codegen_string_literal_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	DTDEntityDeclaration_t712 * V_0 = {0};
	DTDEntityDeclaration_t712 * G_B3_0 = {0};
	{
		DTDObjectModel_t689 * L_0 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((DTDEntityDeclaration_t712 *)(NULL));
		goto IL_0022;
	}

IL_0011:
	{
		DTDObjectModel_t689 * L_1 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DTDEntityDeclarationCollection_t693 * L_2 = DTDObjectModel_get_EntityDecls_m3274(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___entName;
		NullCheck(L_2);
		DTDEntityDeclaration_t712 * L_4 = DTDEntityDeclarationCollection_get_Item_m3300(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		DTDEntityDeclaration_t712 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_6 = (__this->___entityHandling_50);
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		DTDObjectModel_t689 * L_7 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		XmlResolver_t696 * L_8 = (__this->___resolver_45);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		DTDEntityDeclaration_t712 * L_9 = V_0;
		if (L_9)
		{
			goto IL_0063;
		}
	}

IL_0051:
	{
		String_t* L_10 = ___entName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral497, L_10, /*hidden argument*/NULL);
		XmlException_t731 * L_12 = XmlTextReader_NotWFError_m3651(__this, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0063:
	{
		return;
	}

IL_0064:
	{
		DTDEntityDeclaration_t712 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = DTDEntityDeclaration_get_HasExternalReference_m3362(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		XmlException_t731 * L_15 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral498, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_15);
	}

IL_007b:
	{
		bool L_16 = (__this->___isStandalone_23);
		if (!L_16)
		{
			goto IL_009d;
		}
	}
	{
		DTDEntityDeclaration_t712 * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = DTDNode_get_IsInternalSubset_m3318(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_009d;
		}
	}
	{
		XmlException_t731 * L_19 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral499, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_19);
	}

IL_009d:
	{
		DTDEntityDeclaration_t712 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = DTDEntityDeclaration_get_EntityValue_m3363(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = String_IndexOf_m1967(L_21, ((int32_t)60), /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		XmlException_t731 * L_23 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral500, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_00bc:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadProcessingInstruction()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral388;
extern Il2CppCodeGenString* _stringLiteral389;
extern Il2CppCodeGenString* _stringLiteral496;
extern "C" void XmlTextReader_ReadProcessingInstruction_m3685 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral388 = il2cpp_codegen_string_literal_from_index(388);
		_stringLiteral389 = il2cpp_codegen_string_literal_from_index(389);
		_stringLiteral496 = il2cpp_codegen_string_literal_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		String_t* L_0 = XmlTextReader_ReadName_m3702(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m172(NULL /*static, unused*/, L_1, _stringLiteral387, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_4 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m3876(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m67(NULL /*static, unused*/, L_5, _stringLiteral387, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		XmlException_t731 * L_7 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral388, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003d:
	{
		bool L_8 = XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)63))))
		{
			goto IL_0061;
		}
	}
	{
		XmlException_t731 * L_10 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral389, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_10);
	}

IL_0061:
	{
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		goto IL_00be;
	}

IL_006c:
	{
		int32_t L_11 = V_1;
		XmlTextReader_Advance_m3663(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_13 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0095;
		}
	}
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)62), /*hidden argument*/NULL);
		goto IL_00cc;
	}

IL_0095:
	{
		bool L_14 = XmlTextReader_get_CharacterChecking_m3612(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_16 = XmlChar_IsInvalid_m3442(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b7;
		}
	}
	{
		XmlException_t731 * L_17 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral496, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_00b7:
	{
		int32_t L_18 = V_1;
		XmlTextReader_AppendValueChar_m3671(__this, L_18, /*hidden argument*/NULL);
	}

IL_00be:
	{
		int32_t L_19 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		V_1 = L_20;
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}

IL_00cc:
	{
		String_t* L_21 = V_0;
		bool L_22 = Object_ReferenceEquals_m3122(NULL /*static, unused*/, L_21, _stringLiteral387, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e7;
		}
	}
	{
		XmlTextReader_VerifyXmlDeclaration_m3686(__this, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00e7:
	{
		int32_t L_23 = (__this->___currentState_39);
		if (L_23)
		{
			goto IL_00fa;
		}
	}
	{
		__this->___currentState_39 = ((int32_t)17);
	}

IL_00fa:
	{
		String_t* L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_26 = V_0;
		XmlTextReader_SetProperties_m3657(__this, 7, L_24, L_25, L_26, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
	}

IL_010b:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::VerifyXmlDeclaration()
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReaderMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* XmlStreamReader_t733_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t52_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral501;
extern Il2CppCodeGenString* _stringLiteral391;
extern Il2CppCodeGenString* _stringLiteral394;
extern Il2CppCodeGenString* _stringLiteral502;
extern Il2CppCodeGenString* _stringLiteral395;
extern Il2CppCodeGenString* _stringLiteral503;
extern Il2CppCodeGenString* _stringLiteral504;
extern Il2CppCodeGenString* _stringLiteral313;
extern Il2CppCodeGenString* _stringLiteral505;
extern Il2CppCodeGenString* _stringLiteral506;
extern Il2CppCodeGenString* _stringLiteral507;
extern Il2CppCodeGenString* _stringLiteral508;
extern Il2CppCodeGenString* _stringLiteral387;
extern "C" void XmlTextReader_VerifyXmlDeclaration_m3686 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		XmlStreamReader_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		Encoding_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		_stringLiteral501 = il2cpp_codegen_string_literal_from_index(501);
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		_stringLiteral502 = il2cpp_codegen_string_literal_from_index(502);
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		_stringLiteral503 = il2cpp_codegen_string_literal_from_index(503);
		_stringLiteral504 = il2cpp_codegen_string_literal_from_index(504);
		_stringLiteral313 = il2cpp_codegen_string_literal_from_index(313);
		_stringLiteral505 = il2cpp_codegen_string_literal_from_index(505);
		_stringLiteral506 = il2cpp_codegen_string_literal_from_index(506);
		_stringLiteral507 = il2cpp_codegen_string_literal_from_index(507);
		_stringLiteral508 = il2cpp_codegen_string_literal_from_index(508);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	{
		bool L_0 = (__this->___allowMultipleRoot_22);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = (__this->___currentState_39);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlException_t731 * L_2 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral501, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0022:
	{
		__this->___currentState_39 = ((int32_t)17);
		String_t* L_3 = XmlTextReader_CreateValueString_m3673(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlTextReader_ClearAttributes_m3659(__this, /*hidden argument*/NULL);
		V_1 = 0;
		V_2 = (String_t*)NULL;
		V_3 = (String_t*)NULL;
		String_t* L_4 = V_0;
		XmlTextReader_ParseAttributeFromString_m3688(__this, L_4, (&V_1), (&V_4), (&V_5), /*hidden argument*/NULL);
		String_t* L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m172(NULL /*static, unused*/, L_5, _stringLiteral391, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_7 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Inequality_m172(NULL /*static, unused*/, L_7, _stringLiteral394, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0078;
		}
	}

IL_006c:
	{
		XmlException_t731 * L_9 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral502, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_10;
		String_t* L_11 = V_0;
		bool L_12 = XmlTextReader_SkipWhitespaceInString_m3687(__this, L_11, (&V_1), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_13 = V_1;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m159(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_16 = V_0;
		XmlTextReader_ParseAttributeFromString_m3688(__this, L_16, (&V_1), (&V_4), (&V_5), /*hidden argument*/NULL);
	}

IL_00a6:
	{
		String_t* L_17 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_op_Equality_m67(NULL /*static, unused*/, L_17, _stringLiteral395, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0140;
		}
	}
	{
		String_t* L_19 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_20 = XmlChar_IsValidIANAEncoding_m3448(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00cf;
		}
	}
	{
		XmlException_t731 * L_21 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral503, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}

IL_00cf:
	{
		TextReader_t736 * L_22 = (__this->___reader_27);
		if (!((XmlStreamReader_t733 *)IsInstClass(L_22, XmlStreamReader_t733_il2cpp_TypeInfo_var)))
		{
			goto IL_00ff;
		}
	}
	{
		XmlParserContext_t746 * L_23 = (__this->___parserContext_11);
		TextReader_t736 * L_24 = (__this->___reader_27);
		NullCheck(((XmlStreamReader_t733 *)CastclassClass(L_24, XmlStreamReader_t733_il2cpp_TypeInfo_var)));
		Encoding_t52 * L_25 = NonBlockingStreamReader_get_Encoding_m3468(((XmlStreamReader_t733 *)CastclassClass(L_24, XmlStreamReader_t733_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_23);
		XmlParserContext_set_Encoding_m3528(L_23, L_25, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_00ff:
	{
		XmlParserContext_t746 * L_26 = (__this->___parserContext_11);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t52_il2cpp_TypeInfo_var);
		Encoding_t52 * L_27 = Encoding_get_Unicode_m3865(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		XmlParserContext_set_Encoding_m3528(L_26, L_27, /*hidden argument*/NULL);
	}

IL_010f:
	{
		String_t* L_28 = V_5;
		V_2 = L_28;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_29;
		String_t* L_30 = V_0;
		bool L_31 = XmlTextReader_SkipWhitespaceInString_m3687(__this, L_30, (&V_1), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_32 = V_1;
		String_t* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m159(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_32) >= ((int32_t)L_34)))
		{
			goto IL_0140;
		}
	}
	{
		String_t* L_35 = V_0;
		XmlTextReader_ParseAttributeFromString_m3688(__this, L_35, (&V_1), (&V_4), (&V_5), /*hidden argument*/NULL);
	}

IL_0140:
	{
		String_t* L_36 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m67(NULL /*static, unused*/, L_36, _stringLiteral504, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_01a3;
		}
	}
	{
		String_t* L_38 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_39 = String_op_Equality_m67(NULL /*static, unused*/, L_38, _stringLiteral313, /*hidden argument*/NULL);
		__this->___isStandalone_23 = L_39;
		String_t* L_40 = V_5;
		bool L_41 = String_op_Inequality_m172(NULL /*static, unused*/, L_40, _stringLiteral313, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_42 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Inequality_m172(NULL /*static, unused*/, L_42, _stringLiteral505, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0191;
		}
	}
	{
		XmlException_t731 * L_44 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral506, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_44);
	}

IL_0191:
	{
		String_t* L_45 = V_5;
		V_3 = L_45;
		String_t* L_46 = V_0;
		XmlTextReader_SkipWhitespaceInString_m3687(__this, L_46, (&V_1), /*hidden argument*/NULL);
		goto IL_01c2;
	}

IL_01a3:
	{
		String_t* L_47 = V_4;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m159(L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01c2;
		}
	}
	{
		String_t* L_49 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral507, L_49, /*hidden argument*/NULL);
		XmlException_t731 * L_51 = XmlTextReader_NotWFError_m3651(__this, L_50, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_51);
	}

IL_01c2:
	{
		int32_t L_52 = V_1;
		String_t* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = String_get_Length_m159(L_53, /*hidden argument*/NULL);
		if ((((int32_t)L_52) >= ((int32_t)L_54)))
		{
			goto IL_01da;
		}
	}
	{
		XmlException_t731 * L_55 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral508, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_55);
	}

IL_01da:
	{
		XmlTextReader_AddAttributeWithValue_m3680(__this, _stringLiteral391, _stringLiteral394, /*hidden argument*/NULL);
		String_t* L_56 = V_2;
		if (!L_56)
		{
			goto IL_01fc;
		}
	}
	{
		String_t* L_57 = V_2;
		XmlTextReader_AddAttributeWithValue_m3680(__this, _stringLiteral395, L_57, /*hidden argument*/NULL);
	}

IL_01fc:
	{
		String_t* L_58 = V_3;
		if (!L_58)
		{
			goto IL_020e;
		}
	}
	{
		String_t* L_59 = V_3;
		XmlTextReader_AddAttributeWithValue_m3680(__this, _stringLiteral504, L_59, /*hidden argument*/NULL);
	}

IL_020e:
	{
		int32_t L_60 = (-1);
		V_6 = L_60;
		__this->___currentAttributeValue_9 = L_60;
		int32_t L_61 = V_6;
		__this->___currentAttribute_8 = L_61;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_63 = V_0;
		XmlTextReader_SetProperties_m3657(__this, ((int32_t)17), _stringLiteral387, L_62, _stringLiteral387, 0, L_63, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespaceInString(System.String,System.Int32&)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern "C" bool XmlTextReader_SkipWhitespaceInString_m3687 (XmlTextReader_t754 * __this, String_t* ___text, int32_t* ___idx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___idx;
		V_0 = (*((int32_t*)L_0));
		goto IL_000e;
	}

IL_0008:
	{
		int32_t* L_1 = ___idx;
		int32_t* L_2 = ___idx;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_2))+(int32_t)1));
	}

IL_000e:
	{
		int32_t* L_3 = ___idx;
		String_t* L_4 = ___text;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m159(L_4, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_3))) >= ((int32_t)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_6 = ___text;
		int32_t* L_7 = ___idx;
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m1913(L_6, (*((int32_t*)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_9 = XmlChar_IsWhitespace_m3439(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0008;
		}
	}

IL_002d:
	{
		int32_t* L_10 = ___idx;
		int32_t L_11 = V_0;
		return ((((int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))-(int32_t)L_11))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Xml2.XmlTextReader::ParseAttributeFromString(System.String,System.Int32&,System.String&,System.String&)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral509;
extern Il2CppCodeGenString* _stringLiteral510;
extern "C" void XmlTextReader_ParseAttributeFromString_m3688 (XmlTextReader_t754 * __this, String_t* ___src, int32_t* ___idx, String_t** ___name, String_t** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral509 = il2cpp_codegen_string_literal_from_index(509);
		_stringLiteral510 = il2cpp_codegen_string_literal_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	{
		goto IL_000b;
	}

IL_0005:
	{
		int32_t* L_0 = ___idx;
		int32_t* L_1 = ___idx;
		*((int32_t*)(L_0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_1))+(int32_t)1));
	}

IL_000b:
	{
		int32_t* L_2 = ___idx;
		String_t* L_3 = ___src;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m159(L_3, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_2))) >= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = ___src;
		int32_t* L_6 = ___idx;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m1913(L_5, (*((int32_t*)L_6)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_8 = XmlChar_IsWhitespace_m3439(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0005;
		}
	}

IL_002a:
	{
		int32_t* L_9 = ___idx;
		V_0 = (*((int32_t*)L_9));
		goto IL_0038;
	}

IL_0032:
	{
		int32_t* L_10 = ___idx;
		int32_t* L_11 = ___idx;
		*((int32_t*)(L_10)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_11))+(int32_t)1));
	}

IL_0038:
	{
		int32_t* L_12 = ___idx;
		String_t* L_13 = ___src;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m159(L_13, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_12))) >= ((int32_t)L_14)))
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_15 = ___src;
		int32_t* L_16 = ___idx;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m1913(L_15, (*((int32_t*)L_16)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_18 = XmlChar_IsNameChar_m3445(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0032;
		}
	}

IL_0057:
	{
		String_t** L_19 = ___name;
		String_t* L_20 = ___src;
		int32_t L_21 = V_0;
		int32_t* L_22 = ___idx;
		int32_t L_23 = V_0;
		NullCheck(L_20);
		String_t* L_24 = String_Substring_m1914(L_20, L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))-(int32_t)L_23)), /*hidden argument*/NULL);
		*((Object_t **)(L_19)) = (Object_t *)L_24;
		goto IL_006f;
	}

IL_0069:
	{
		int32_t* L_25 = ___idx;
		int32_t* L_26 = ___idx;
		*((int32_t*)(L_25)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_26))+(int32_t)1));
	}

IL_006f:
	{
		int32_t* L_27 = ___idx;
		String_t* L_28 = ___src;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m159(L_28, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_27))) >= ((int32_t)L_29)))
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_30 = ___src;
		int32_t* L_31 = ___idx;
		NullCheck(L_30);
		uint16_t L_32 = String_get_Chars_m1913(L_30, (*((int32_t*)L_31)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_33 = XmlChar_IsWhitespace_m3439(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0069;
		}
	}

IL_008e:
	{
		int32_t* L_34 = ___idx;
		String_t* L_35 = ___src;
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_m159(L_35, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_34))) == ((int32_t)L_36)))
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_37 = ___src;
		int32_t* L_38 = ___idx;
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m1913(L_37, (*((int32_t*)L_38)), /*hidden argument*/NULL);
		if ((((int32_t)L_39) == ((int32_t)((int32_t)61))))
		{
			goto IL_00bd;
		}
	}

IL_00aa:
	{
		String_t** L_40 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral509, (*((String_t**)L_40)), /*hidden argument*/NULL);
		XmlException_t731 * L_42 = XmlTextReader_NotWFError_m3651(__this, L_41, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_42);
	}

IL_00bd:
	{
		int32_t* L_43 = ___idx;
		int32_t* L_44 = ___idx;
		*((int32_t*)(L_43)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_44))+(int32_t)1));
		goto IL_00ce;
	}

IL_00c8:
	{
		int32_t* L_45 = ___idx;
		int32_t* L_46 = ___idx;
		*((int32_t*)(L_45)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)1));
	}

IL_00ce:
	{
		int32_t* L_47 = ___idx;
		String_t* L_48 = ___src;
		NullCheck(L_48);
		int32_t L_49 = String_get_Length_m159(L_48, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_47))) >= ((int32_t)L_49)))
		{
			goto IL_00ed;
		}
	}
	{
		String_t* L_50 = ___src;
		int32_t* L_51 = ___idx;
		NullCheck(L_50);
		uint16_t L_52 = String_get_Chars_m1913(L_50, (*((int32_t*)L_51)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_53 = XmlChar_IsWhitespace_m3439(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_00c8;
		}
	}

IL_00ed:
	{
		int32_t* L_54 = ___idx;
		String_t* L_55 = ___src;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m159(L_55, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_54))) == ((int32_t)L_56)))
		{
			goto IL_0118;
		}
	}
	{
		String_t* L_57 = ___src;
		int32_t* L_58 = ___idx;
		NullCheck(L_57);
		uint16_t L_59 = String_get_Chars_m1913(L_57, (*((int32_t*)L_58)), /*hidden argument*/NULL);
		if ((((int32_t)L_59) == ((int32_t)((int32_t)34))))
		{
			goto IL_0124;
		}
	}
	{
		String_t* L_60 = ___src;
		int32_t* L_61 = ___idx;
		NullCheck(L_60);
		uint16_t L_62 = String_get_Chars_m1913(L_60, (*((int32_t*)L_61)), /*hidden argument*/NULL);
		if ((((int32_t)L_62) == ((int32_t)((int32_t)39))))
		{
			goto IL_0124;
		}
	}

IL_0118:
	{
		XmlException_t731 * L_63 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral510, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_63);
	}

IL_0124:
	{
		String_t* L_64 = ___src;
		int32_t* L_65 = ___idx;
		NullCheck(L_64);
		uint16_t L_66 = String_get_Chars_m1913(L_64, (*((int32_t*)L_65)), /*hidden argument*/NULL);
		V_1 = L_66;
		int32_t* L_67 = ___idx;
		int32_t* L_68 = ___idx;
		*((int32_t*)(L_67)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)1));
		int32_t* L_69 = ___idx;
		V_0 = (*((int32_t*)L_69));
		goto IL_0141;
	}

IL_013b:
	{
		int32_t* L_70 = ___idx;
		int32_t* L_71 = ___idx;
		*((int32_t*)(L_70)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_71))+(int32_t)1));
	}

IL_0141:
	{
		int32_t* L_72 = ___idx;
		String_t* L_73 = ___src;
		NullCheck(L_73);
		int32_t L_74 = String_get_Length_m159(L_73, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_72))) >= ((int32_t)L_74)))
		{
			goto IL_015c;
		}
	}
	{
		String_t* L_75 = ___src;
		int32_t* L_76 = ___idx;
		NullCheck(L_75);
		uint16_t L_77 = String_get_Chars_m1913(L_75, (*((int32_t*)L_76)), /*hidden argument*/NULL);
		uint16_t L_78 = V_1;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_013b;
		}
	}

IL_015c:
	{
		int32_t* L_79 = ___idx;
		int32_t* L_80 = ___idx;
		*((int32_t*)(L_79)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_80))+(int32_t)1));
		String_t** L_81 = ___value;
		String_t* L_82 = ___src;
		int32_t L_83 = V_0;
		int32_t* L_84 = ___idx;
		int32_t L_85 = V_0;
		NullCheck(L_82);
		String_t* L_86 = String_Substring_m1914(L_82, L_83, ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)L_84))-(int32_t)L_85))-(int32_t)1)), /*hidden argument*/NULL);
		*((Object_t **)(L_81)) = (Object_t *)L_86;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral511;
extern Il2CppCodeGenString* _stringLiteral512;
extern Il2CppCodeGenString* _stringLiteral391;
extern Il2CppCodeGenString* _stringLiteral392;
extern Il2CppCodeGenString* _stringLiteral393;
extern Il2CppCodeGenString* _stringLiteral394;
extern Il2CppCodeGenString* _stringLiteral395;
extern Il2CppCodeGenString* _stringLiteral396;
extern Il2CppCodeGenString* _stringLiteral397;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void XmlTextReader_SkipTextDeclaration_m3689 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral511 = il2cpp_codegen_string_literal_from_index(511);
		_stringLiteral512 = il2cpp_codegen_string_literal_from_index(512);
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		_stringLiteral393 = il2cpp_codegen_string_literal_from_index(393);
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t60* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)60))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		int32_t L_1 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)63))))
		{
			goto IL_002a;
		}
	}
	{
		__this->___peekCharsIndex_29 = 0;
		return;
	}

IL_002a:
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0036:
	{
		int32_t L_2 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_005a;
	}

IL_0047:
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_3 = (__this->___peekCharsIndex_29);
		if ((((int32_t)L_3) < ((int32_t)6)))
		{
			goto IL_0036;
		}
	}

IL_005a:
	{
		CharU5BU5D_t60* L_4 = (__this->___peekChars_28);
		String_t* L_5 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_5 = String_CreateString_m3840(L_5, L_4, 2, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m172(NULL /*static, unused*/, L_5, _stringLiteral511, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00b0;
		}
	}
	{
		CharU5BU5D_t60* L_7 = (__this->___peekChars_28);
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_8 = String_CreateString_m3840(L_8, L_7, 2, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_9 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_10 = String_ToLower_m3876(L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m67(NULL /*static, unused*/, L_10, _stringLiteral511, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		XmlException_t731 * L_12 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral512, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_00a8:
	{
		__this->___peekCharsIndex_29 = 0;
		return;
	}

IL_00b0:
	{
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		int32_t L_13 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)118)))))
		{
			goto IL_0199;
		}
	}
	{
		XmlTextReader_Expect_m3705(__this, _stringLiteral391, /*hidden argument*/NULL);
		XmlTextReader_ExpectAfterWhitespace_m3706(__this, ((int32_t)61), /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		int32_t L_14 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_0 = L_14;
		V_1 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 3));
		V_2 = 0;
		int32_t L_15 = V_0;
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)34))))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)39))))
		{
			goto IL_0108;
		}
	}
	{
		goto IL_018d;
	}

IL_0108:
	{
		goto IL_016e;
	}

IL_010d:
	{
		int32_t L_18 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0125;
		}
	}
	{
		XmlException_t731 * L_19 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral392, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_19);
	}

IL_0125:
	{
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)3))))
		{
			goto IL_0138;
		}
	}
	{
		XmlException_t731 * L_21 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral393, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}

IL_0138:
	{
		CharU5BU5D_t60* L_22 = V_1;
		int32_t L_23 = V_2;
		int32_t L_24 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_22, L_23, sizeof(uint16_t))) = (uint16_t)(((uint16_t)L_24));
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_016e;
		}
	}
	{
		CharU5BU5D_t60* L_27 = V_1;
		String_t* L_28 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_28 = String_CreateString_m3835(L_28, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Inequality_m172(NULL /*static, unused*/, L_28, _stringLiteral394, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_016e;
		}
	}
	{
		XmlException_t731 * L_30 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral393, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_30);
	}

IL_016e:
	{
		int32_t L_31 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_010d;
		}
	}
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		goto IL_0199;
	}

IL_018d:
	{
		XmlException_t731 * L_33 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral392, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_33);
	}

IL_0199:
	{
		int32_t L_34 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_022e;
		}
	}
	{
		XmlTextReader_Expect_m3705(__this, _stringLiteral395, /*hidden argument*/NULL);
		XmlTextReader_ExpectAfterWhitespace_m3706(__this, ((int32_t)61), /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		int32_t L_35 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_3 = L_35;
		int32_t L_36 = V_3;
		V_4 = L_36;
		int32_t L_37 = V_4;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)34))))
		{
			goto IL_01e1;
		}
	}
	{
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)39))))
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_021d;
	}

IL_01e1:
	{
		goto IL_01fe;
	}

IL_01e6:
	{
		int32_t L_39 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)(-1)))))
		{
			goto IL_01fe;
		}
	}
	{
		XmlException_t731 * L_40 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral396, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_40);
	}

IL_01fe:
	{
		int32_t L_41 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		int32_t L_42 = V_3;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_01e6;
		}
	}
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		goto IL_0229;
	}

IL_021d:
	{
		XmlException_t731 * L_43 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral396, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_43);
	}

IL_0229:
	{
		goto IL_0245;
	}

IL_022e:
	{
		int32_t L_44 = XmlTextReader_get_Conformance_m3655(__this, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0245;
		}
	}
	{
		XmlException_t731 * L_45 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral397, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_45);
	}

IL_0245:
	{
		XmlTextReader_Expect_m3705(__this, _stringLiteral398, /*hidden argument*/NULL);
		int32_t L_46 = (__this->___peekCharsIndex_29);
		__this->___curNodePeekIndex_31 = L_46;
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadDeclaration()
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral513;
extern Il2CppCodeGenString* _stringLiteral514;
extern Il2CppCodeGenString* _stringLiteral515;
extern "C" void XmlTextReader_ReadDeclaration_m3690 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral513 = il2cpp_codegen_string_literal_from_index(513);
		_stringLiteral514 = il2cpp_codegen_string_literal_from_index(514);
		_stringLiteral515 = il2cpp_codegen_string_literal_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)45))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)91))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_006f;
	}

IL_0026:
	{
		XmlTextReader_Expect_m3705(__this, _stringLiteral192, /*hidden argument*/NULL);
		XmlTextReader_ReadComment_m3691(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_003c:
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		XmlTextReader_Expect_m3705(__this, _stringLiteral513, /*hidden argument*/NULL);
		XmlTextReader_ReadCDATA_m3692(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_0059:
	{
		XmlTextReader_Expect_m3705(__this, _stringLiteral514, /*hidden argument*/NULL);
		XmlTextReader_ReadDoctypeDecl_m3693(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_006f:
	{
		XmlException_t731 * L_5 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral515, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_007b:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadComment()
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral385;
extern Il2CppCodeGenString* _stringLiteral386;
extern "C" void XmlTextReader_ReadComment_m3691 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral385 = il2cpp_codegen_string_literal_from_index(385);
		_stringLiteral386 = il2cpp_codegen_string_literal_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___currentState_39);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->___currentState_39 = ((int32_t)17);
	}

IL_0013:
	{
		__this->___preserveCurrentTag_32 = 0;
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		goto IL_008d;
	}

IL_0025:
	{
		int32_t L_1 = V_0;
		XmlTextReader_Advance_m3663(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_3 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_006f;
		}
	}
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)45), /*hidden argument*/NULL);
		int32_t L_4 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)62))))
		{
			goto IL_0062;
		}
	}
	{
		XmlException_t731 * L_5 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral385, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0062:
	{
		XmlTextReader_Advance_m3663(__this, ((int32_t)62), /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_006f:
	{
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_7 = XmlChar_IsInvalid_m3442(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		XmlException_t731 * L_8 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral386, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0086:
	{
		int32_t L_9 = V_0;
		XmlTextReader_AppendValueChar_m3671(__this, L_9, /*hidden argument*/NULL);
	}

IL_008d:
	{
		int32_t L_10 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		V_0 = L_11;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0025;
		}
	}

IL_009b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m3657(__this, 8, L_12, L_13, L_14, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadCDATA()
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral516;
extern Il2CppCodeGenString* _stringLiteral496;
extern "C" void XmlTextReader_ReadCDATA_m3692 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral516 = il2cpp_codegen_string_literal_from_index(516);
		_stringLiteral496 = il2cpp_codegen_string_literal_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___currentState_39);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		XmlException_t731 * L_1 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral516, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		__this->___preserveCurrentTag_32 = 0;
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		V_0 = 0;
		V_1 = 0;
		goto IL_00ea;
	}

IL_002e:
	{
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_3 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_003b:
	{
		V_0 = 0;
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_5 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_6 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0072;
		}
	}
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_0072:
	{
		V_0 = 1;
	}

IL_0074:
	{
		bool L_8 = (__this->___normalization_46);
		if (!L_8)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_10 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)10))))
		{
			goto IL_009e;
		}
	}
	{
		XmlTextReader_AppendValueChar_m3671(__this, ((int32_t)10), /*hidden argument*/NULL);
	}

IL_009e:
	{
		goto IL_00ea;
	}

IL_00a3:
	{
		bool L_12 = XmlTextReader_get_CharacterChecking_m3612(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_14 = XmlChar_IsInvalid_m3442(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c5;
		}
	}
	{
		XmlException_t731 * L_15 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral496, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_15);
	}

IL_00c5:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_00e3;
		}
	}
	{
		StringBuilder_t320 * L_17 = (__this->___valueBuffer_26);
		int32_t L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m3837(L_17, (((uint16_t)L_18)), /*hidden argument*/NULL);
		goto IL_00ea;
	}

IL_00e3:
	{
		int32_t L_19 = V_1;
		XmlTextReader_AppendSurrogatePairValueChar_m3672(__this, L_19, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		int32_t L_20 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}

IL_00f6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_22 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m3657(__this, 4, L_21, L_22, L_23, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadDoctypeDecl()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral517;
extern Il2CppCodeGenString* _stringLiteral518;
extern Il2CppCodeGenString* _stringLiteral374;
extern Il2CppCodeGenString* _stringLiteral378;
extern Il2CppCodeGenString* _stringLiteral375;
extern "C" void XmlTextReader_ReadDoctypeDecl_m3693 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral517 = il2cpp_codegen_string_literal_from_index(517);
		_stringLiteral518 = il2cpp_codegen_string_literal_from_index(518);
		_stringLiteral374 = il2cpp_codegen_string_literal_from_index(374);
		_stringLiteral378 = il2cpp_codegen_string_literal_from_index(378);
		_stringLiteral375 = il2cpp_codegen_string_literal_from_index(375);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = {0};
	int32_t V_6 = 0;
	{
		bool L_0 = (__this->___prohibitDtd_48);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlException_t731 * L_1 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral517, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		int32_t L_2 = (__this->___currentState_39);
		V_5 = L_2;
		int32_t L_3 = V_5;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = V_5;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)10))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = V_5;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)15))))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_004a;
	}

IL_003e:
	{
		XmlException_t731 * L_6 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral518, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_004a:
	{
		__this->___currentState_39 = ((int32_t)10);
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		V_3 = 0;
		V_4 = 0;
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		String_t* L_7 = XmlTextReader_ReadName_m3702(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		int32_t L_8 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_6 = L_8;
		int32_t L_9 = V_6;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_00a6;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_00d1;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_00d1;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 3)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_00d1;
	}

IL_0099:
	{
		String_t* L_10 = XmlTextReader_ReadSystemLiteral_m3700(__this, 1, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_00d1;
	}

IL_00a6:
	{
		String_t* L_11 = XmlTextReader_ReadPubidLiteral_m3701(__this, /*hidden argument*/NULL);
		V_1 = L_11;
		bool L_12 = XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00c4;
		}
	}
	{
		XmlException_t731 * L_13 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral374, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_00c4:
	{
		String_t* L_14 = XmlTextReader_ReadSystemLiteral_m3700(__this, 0, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_00d1;
	}

IL_00d1:
	{
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		int32_t L_15 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0118;
		}
	}
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(39 /* System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber() */, __this);
		V_3 = L_16;
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(40 /* System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition() */, __this);
		V_4 = L_17;
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		XmlTextReader_ReadInternalSubset_m3699(__this, /*hidden argument*/NULL);
		XmlParserContext_t746 * L_18 = (__this->___parserContext_11);
		String_t* L_19 = XmlTextReader_CreateValueString_m3673(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		XmlParserContext_set_InternalSubset_m3530(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0118:
	{
		XmlTextReader_ExpectAfterWhitespace_m3706(__this, ((int32_t)62), /*hidden argument*/NULL);
		String_t* L_20 = V_0;
		String_t* L_21 = V_1;
		String_t* L_22 = V_2;
		XmlParserContext_t746 * L_23 = (__this->___parserContext_11);
		NullCheck(L_23);
		String_t* L_24 = XmlParserContext_get_InternalSubset_m3529(L_23, /*hidden argument*/NULL);
		int32_t L_25 = V_3;
		int32_t L_26 = V_4;
		XmlTextReader_GenerateDTDObjectModel_m3695(__this, L_20, L_21, L_22, L_24, L_25, L_26, /*hidden argument*/NULL);
		String_t* L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_29 = V_0;
		XmlParserContext_t746 * L_30 = (__this->___parserContext_11);
		NullCheck(L_30);
		String_t* L_31 = XmlParserContext_get_InternalSubset_m3529(L_30, /*hidden argument*/NULL);
		XmlTextReader_SetProperties_m3657(__this, ((int32_t)10), L_27, L_28, L_29, 0, L_31, 1, /*hidden argument*/NULL);
		String_t* L_32 = V_1;
		if (!L_32)
		{
			goto IL_0166;
		}
	}
	{
		String_t* L_33 = V_1;
		XmlTextReader_AddAttributeWithValue_m3680(__this, _stringLiteral378, L_33, /*hidden argument*/NULL);
	}

IL_0166:
	{
		String_t* L_34 = V_2;
		if (!L_34)
		{
			goto IL_0178;
		}
	}
	{
		String_t* L_35 = V_2;
		XmlTextReader_AddAttributeWithValue_m3680(__this, _stringLiteral375, L_35, /*hidden argument*/NULL);
	}

IL_0178:
	{
		int32_t L_36 = (-1);
		V_6 = L_36;
		__this->___currentAttributeValue_9 = L_36;
		int32_t L_37 = V_6;
		__this->___currentAttribute_8 = L_37;
		return;
	}
}
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
extern "C" DTDObjectModel_t689 * XmlTextReader_GenerateDTDObjectModel_m3694 (XmlTextReader_t754 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___publicId;
		String_t* L_2 = ___systemId;
		String_t* L_3 = ___internalSubset;
		DTDObjectModel_t689 * L_4 = XmlTextReader_GenerateDTDObjectModel_m3695(__this, L_0, L_1, L_2, L_3, 0, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String,System.Int32,System.Int32)
// System.Xml.DTDReader
#include "System_Xml_System_Xml_DTDReaderMethodDeclarations.h"
extern TypeInfo* DTDObjectModel_t689_il2cpp_TypeInfo_var;
extern TypeInfo* DTDReader_t717_il2cpp_TypeInfo_var;
extern "C" DTDObjectModel_t689 * XmlTextReader_GenerateDTDObjectModel_m3695 (XmlTextReader_t754 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, int32_t ___intSubsetStartLine, int32_t ___intSubsetStartColumn, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DTDObjectModel_t689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		DTDReader_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	DTDReader_t717 * V_0 = {0};
	{
		XmlParserContext_t746 * L_0 = (__this->___parserContext_11);
		XmlNameTable_t697 * L_1 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(16 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		DTDObjectModel_t689 * L_2 = (DTDObjectModel_t689 *)il2cpp_codegen_object_new (DTDObjectModel_t689_il2cpp_TypeInfo_var);
		DTDObjectModel__ctor_m3251(L_2, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlParserContext_set_Dtd_m3527(L_0, L_2, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_3 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Mono.Xml2.XmlTextReader::get_BaseURI() */, __this);
		NullCheck(L_3);
		DTDObjectModel_set_BaseURI_m3253(L_3, L_4, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_5 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___name;
		NullCheck(L_5);
		DTDObjectModel_set_Name_m3257(L_5, L_6, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_7 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		String_t* L_8 = ___publicId;
		NullCheck(L_7);
		DTDObjectModel_set_PublicId_m3260(L_7, L_8, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_9 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		String_t* L_10 = ___systemId;
		NullCheck(L_9);
		DTDObjectModel_set_SystemId_m3262(L_9, L_10, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_11 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		String_t* L_12 = ___internalSubset;
		NullCheck(L_11);
		DTDObjectModel_set_InternalSubset_m3264(L_11, L_12, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_13 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		XmlResolver_t696 * L_14 = (__this->___resolver_45);
		NullCheck(L_13);
		DTDObjectModel_set_XmlResolver_m3270(L_13, L_14, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_15 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		bool L_16 = (__this->___isStandalone_23);
		NullCheck(L_15);
		DTDObjectModel_set_IsStandalone_m3255(L_15, L_16, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_17 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		int32_t L_18 = (__this->___line_33);
		NullCheck(L_17);
		DTDObjectModel_set_LineNumber_m3267(L_17, L_18, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_19 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___column_34);
		NullCheck(L_19);
		DTDObjectModel_set_LinePosition_m3268(L_19, L_20, /*hidden argument*/NULL);
		DTDObjectModel_t689 * L_21 = XmlTextReader_get_DTD_m3649(__this, /*hidden argument*/NULL);
		int32_t L_22 = ___intSubsetStartLine;
		int32_t L_23 = ___intSubsetStartColumn;
		DTDReader_t717 * L_24 = (DTDReader_t717 *)il2cpp_codegen_object_new (DTDReader_t717_il2cpp_TypeInfo_var);
		DTDReader__ctor_m3378(L_24, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		DTDReader_t717 * L_25 = V_0;
		bool L_26 = (__this->___normalization_46);
		NullCheck(L_25);
		DTDReader_set_Normalization_m3381(L_25, L_26, /*hidden argument*/NULL);
		DTDReader_t717 * L_27 = V_0;
		NullCheck(L_27);
		DTDObjectModel_t689 * L_28 = DTDReader_GenerateDTDObjectModel_m3386(L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader::get_State()
extern "C" int32_t XmlTextReader_get_State_m3696 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	{
		DtdInputStateStack_t758 * L_0 = (__this->___stateStack_53);
		NullCheck(L_0);
		int32_t L_1 = DtdInputStateStack_Peek_m3598(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadValueChar()
extern "C" int32_t XmlTextReader_ReadValueChar_m3697 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		XmlTextReader_AppendValueChar_m3671(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ExpectAndAppend(System.String)
extern "C" void XmlTextReader_ExpectAndAppend_m3698 (XmlTextReader_t754 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		XmlTextReader_Expect_m3705(__this, L_0, /*hidden argument*/NULL);
		StringBuilder_t320 * L_1 = (__this->___valueBuffer_26);
		String_t* L_2 = ___s;
		NullCheck(L_1);
		StringBuilder_Append_m3134(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ReadInternalSubset()
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral519;
extern Il2CppCodeGenString* _stringLiteral332;
extern Il2CppCodeGenString* _stringLiteral329;
extern Il2CppCodeGenString* _stringLiteral520;
extern Il2CppCodeGenString* _stringLiteral334;
extern Il2CppCodeGenString* _stringLiteral335;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral521;
extern Il2CppCodeGenString* _stringLiteral522;
extern Il2CppCodeGenString* _stringLiteral453;
extern Il2CppCodeGenString* _stringLiteral523;
extern "C" void XmlTextReader_ReadInternalSubset_m3699 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral519 = il2cpp_codegen_string_literal_from_index(519);
		_stringLiteral332 = il2cpp_codegen_string_literal_from_index(332);
		_stringLiteral329 = il2cpp_codegen_string_literal_from_index(329);
		_stringLiteral520 = il2cpp_codegen_string_literal_from_index(520);
		_stringLiteral334 = il2cpp_codegen_string_literal_from_index(334);
		_stringLiteral335 = il2cpp_codegen_string_literal_from_index(335);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral521 = il2cpp_codegen_string_literal_from_index(521);
		_stringLiteral522 = il2cpp_codegen_string_literal_from_index(522);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		_stringLiteral523 = il2cpp_codegen_string_literal_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 1;
		goto IL_03e5;
	}

IL_0007:
	{
		int32_t L_0 = XmlTextReader_ReadValueChar_m3697(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_027f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_0397;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_0238;
		}
	}

IL_002f:
	{
		int32_t L_2 = V_2;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)60))) == 0)
		{
			goto IL_00ce;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)60))) == 1)
		{
			goto IL_0048;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)60))) == 2)
		{
			goto IL_02c7;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)60))) == 3)
		{
			goto IL_0331;
		}
	}

IL_0048:
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)45))))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)93))))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_03e5;
	}

IL_0064:
	{
		int32_t L_6 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (((int32_t)((int32_t)L_7-(int32_t)7)) == 0)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)7)) == 1)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)7)) == 2)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		goto IL_00b1;
	}

IL_008b:
	{
		StringBuilder_t320 * L_9 = (__this->___valueBuffer_26);
		StringBuilder_t320 * L_10 = (__this->___valueBuffer_26);
		NullCheck(L_10);
		int32_t L_11 = StringBuilder_get_Length_m3860(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Remove_m3877(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), 1, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00bd;
	}

IL_00ac:
	{
		goto IL_03e5;
	}

IL_00b1:
	{
		XmlException_t731 * L_12 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral519, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_00bd:
	{
		goto IL_03e5;
	}

IL_00c2:
	{
		XmlException_t731 * L_13 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral519, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_00ce:
	{
		int32_t L_14 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		V_3 = L_14;
		int32_t L_15 = V_3;
		if (((int32_t)((int32_t)L_15-(int32_t)7)) == 0)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)7)) == 1)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)7)) == 2)
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_00f3;
	}

IL_00ee:
	{
		goto IL_03e5;
	}

IL_00f3:
	{
		int32_t L_16 = XmlTextReader_ReadValueChar_m3697(__this, /*hidden argument*/NULL);
		V_1 = L_16;
		int32_t L_17 = V_1;
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)33))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)63))))
		{
			goto IL_0114;
		}
	}
	{
		goto IL_021b;
	}

IL_0114:
	{
		DtdInputStateStack_t758 * L_20 = (__this->___stateStack_53);
		NullCheck(L_20);
		DtdInputStateStack_Push_m3600(L_20, 6, /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_0125:
	{
		int32_t L_21 = XmlTextReader_ReadValueChar_m3697(__this, /*hidden argument*/NULL);
		V_5 = L_21;
		int32_t L_22 = V_5;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)45))))
		{
			goto IL_01fa;
		}
	}
	{
		int32_t L_23 = V_5;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)65))))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)69))))
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)78))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0216;
	}

IL_0156:
	{
		int32_t L_26 = XmlTextReader_ReadValueChar_m3697(__this, /*hidden argument*/NULL);
		V_6 = L_26;
		int32_t L_27 = V_6;
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)76))) == 0)
		{
			goto IL_0179;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)76))) == 1)
		{
			goto IL_01b1;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)76))) == 2)
		{
			goto IL_0195;
		}
	}
	{
		goto IL_01b1;
	}

IL_0179:
	{
		XmlTextReader_ExpectAndAppend_m3698(__this, _stringLiteral332, /*hidden argument*/NULL);
		DtdInputStateStack_t758 * L_28 = (__this->___stateStack_53);
		NullCheck(L_28);
		DtdInputStateStack_Push_m3600(L_28, 2, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0195:
	{
		XmlTextReader_ExpectAndAppend_m3698(__this, _stringLiteral329, /*hidden argument*/NULL);
		DtdInputStateStack_t758 * L_29 = (__this->___stateStack_53);
		NullCheck(L_29);
		DtdInputStateStack_Push_m3600(L_29, 4, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_01b1:
	{
		XmlException_t731 * L_30 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral520, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_30);
	}

IL_01bd:
	{
		goto IL_0216;
	}

IL_01c2:
	{
		XmlTextReader_ExpectAndAppend_m3698(__this, _stringLiteral334, /*hidden argument*/NULL);
		DtdInputStateStack_t758 * L_31 = (__this->___stateStack_53);
		NullCheck(L_31);
		DtdInputStateStack_Push_m3600(L_31, 3, /*hidden argument*/NULL);
		goto IL_0216;
	}

IL_01de:
	{
		XmlTextReader_ExpectAndAppend_m3698(__this, _stringLiteral335, /*hidden argument*/NULL);
		DtdInputStateStack_t758 * L_32 = (__this->___stateStack_53);
		NullCheck(L_32);
		DtdInputStateStack_Push_m3600(L_32, 5, /*hidden argument*/NULL);
		goto IL_0216;
	}

IL_01fa:
	{
		XmlTextReader_ExpectAndAppend_m3698(__this, _stringLiteral32, /*hidden argument*/NULL);
		DtdInputStateStack_t758 * L_33 = (__this->___stateStack_53);
		NullCheck(L_33);
		DtdInputStateStack_Push_m3600(L_33, 7, /*hidden argument*/NULL);
		goto IL_0216;
	}

IL_0216:
	{
		goto IL_0233;
	}

IL_021b:
	{
		int32_t L_34 = V_1;
		uint16_t L_35 = (((uint16_t)L_34));
		Object_t * L_36 = Box(Char_t355_il2cpp_TypeInfo_var, &L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral521, L_36, /*hidden argument*/NULL);
		XmlException_t731 * L_38 = XmlTextReader_NotWFError_m3651(__this, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_38);
	}

IL_0233:
	{
		goto IL_03e5;
	}

IL_0238:
	{
		int32_t L_39 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)8))))
		{
			goto IL_0255;
		}
	}
	{
		DtdInputStateStack_t758 * L_40 = (__this->___stateStack_53);
		NullCheck(L_40);
		DtdInputStateStack_Pop_m3599(L_40, /*hidden argument*/NULL);
		goto IL_027a;
	}

IL_0255:
	{
		int32_t L_41 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)9))))
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_42 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_42) == ((int32_t)7)))
		{
			goto IL_027a;
		}
	}
	{
		DtdInputStateStack_t758 * L_43 = (__this->___stateStack_53);
		NullCheck(L_43);
		DtdInputStateStack_Push_m3600(L_43, 8, /*hidden argument*/NULL);
	}

IL_027a:
	{
		goto IL_03e5;
	}

IL_027f:
	{
		int32_t L_44 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_029d;
		}
	}
	{
		DtdInputStateStack_t758 * L_45 = (__this->___stateStack_53);
		NullCheck(L_45);
		DtdInputStateStack_Pop_m3599(L_45, /*hidden argument*/NULL);
		goto IL_02c2;
	}

IL_029d:
	{
		int32_t L_46 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_46) == ((int32_t)8)))
		{
			goto IL_02c2;
		}
	}
	{
		int32_t L_47 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)7)))
		{
			goto IL_02c2;
		}
	}
	{
		DtdInputStateStack_t758 * L_48 = (__this->___stateStack_53);
		NullCheck(L_48);
		DtdInputStateStack_Push_m3600(L_48, ((int32_t)9), /*hidden argument*/NULL);
	}

IL_02c2:
	{
		goto IL_03e5;
	}

IL_02c7:
	{
		int32_t L_49 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		V_3 = L_49;
		int32_t L_50 = V_3;
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 0)
		{
			goto IL_02fb;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 1)
		{
			goto IL_0300;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 2)
		{
			goto IL_0305;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 3)
		{
			goto IL_030a;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 4)
		{
			goto IL_0320;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 5)
		{
			goto IL_031b;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 6)
		{
			goto IL_031b;
		}
		if (((int32_t)((int32_t)L_50-(int32_t)2)) == 7)
		{
			goto IL_031b;
		}
	}
	{
		goto IL_0320;
	}

IL_02fb:
	{
		goto IL_030a;
	}

IL_0300:
	{
		goto IL_030a;
	}

IL_0305:
	{
		goto IL_030a;
	}

IL_030a:
	{
		DtdInputStateStack_t758 * L_51 = (__this->___stateStack_53);
		NullCheck(L_51);
		DtdInputStateStack_Pop_m3599(L_51, /*hidden argument*/NULL);
		goto IL_032c;
	}

IL_031b:
	{
		goto IL_03e5;
	}

IL_0320:
	{
		XmlException_t731 * L_52 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral522, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_52);
	}

IL_032c:
	{
		goto IL_03e5;
	}

IL_0331:
	{
		int32_t L_53 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)6))))
		{
			goto IL_0356;
		}
	}
	{
		int32_t L_54 = XmlTextReader_ReadValueChar_m3697(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0356;
		}
	}
	{
		DtdInputStateStack_t758 * L_55 = (__this->___stateStack_53);
		NullCheck(L_55);
		DtdInputStateStack_Pop_m3599(L_55, /*hidden argument*/NULL);
	}

IL_0356:
	{
		goto IL_03e5;
	}

IL_035b:
	{
		int32_t L_56 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_56) == ((uint32_t)7))))
		{
			goto IL_0392;
		}
	}
	{
		int32_t L_57 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0392;
		}
	}
	{
		XmlTextReader_ReadValueChar_m3697(__this, /*hidden argument*/NULL);
		XmlTextReader_ExpectAndAppend_m3698(__this, _stringLiteral453, /*hidden argument*/NULL);
		DtdInputStateStack_t758 * L_58 = (__this->___stateStack_53);
		NullCheck(L_58);
		DtdInputStateStack_Pop_m3599(L_58, /*hidden argument*/NULL);
	}

IL_0392:
	{
		goto IL_03e5;
	}

IL_0397:
	{
		int32_t L_59 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_59) == ((int32_t)1)))
		{
			goto IL_03e0;
		}
	}
	{
		int32_t L_60 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_60) == ((int32_t)4)))
		{
			goto IL_03e0;
		}
	}
	{
		int32_t L_61 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_61) == ((int32_t)7)))
		{
			goto IL_03e0;
		}
	}
	{
		int32_t L_62 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_62) == ((int32_t)((int32_t)9))))
		{
			goto IL_03e0;
		}
	}
	{
		int32_t L_63 = XmlTextReader_get_State_m3696(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_63) == ((int32_t)8)))
		{
			goto IL_03e0;
		}
	}
	{
		XmlException_t731 * L_64 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral523, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_64);
	}

IL_03e0:
	{
		goto IL_03e5;
	}

IL_03e5:
	{
		bool L_65 = V_0;
		if (L_65)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Mono.Xml2.XmlTextReader::ReadSystemLiteral(System.Boolean)
extern Il2CppCodeGenString* _stringLiteral375;
extern Il2CppCodeGenString* _stringLiteral376;
extern Il2CppCodeGenString* _stringLiteral377;
extern "C" String_t* XmlTextReader_ReadSystemLiteral_m3700 (XmlTextReader_t754 * __this, bool ___expectSYSTEM, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral375 = il2cpp_codegen_string_literal_from_index(375);
		_stringLiteral376 = il2cpp_codegen_string_literal_from_index(376);
		_stringLiteral377 = il2cpp_codegen_string_literal_from_index(377);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = ___expectSYSTEM;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		XmlTextReader_Expect_m3705(__this, _stringLiteral375, /*hidden argument*/NULL);
		bool L_1 = XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		XmlException_t731 * L_2 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral376, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0028:
	{
		goto IL_0034;
	}

IL_002d:
	{
		XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		int32_t L_3 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0048:
	{
		int32_t L_4 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		XmlException_t731 * L_6 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral377, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0062:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_9 = V_1;
		XmlTextReader_AppendValueChar_m3671(__this, L_9, /*hidden argument*/NULL);
	}

IL_0070:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_12 = XmlTextReader_CreateValueString_m3673(__this, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String Mono.Xml2.XmlTextReader::ReadPubidLiteral()
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral378;
extern Il2CppCodeGenString* _stringLiteral379;
extern Il2CppCodeGenString* _stringLiteral377;
extern Il2CppCodeGenString* _stringLiteral380;
extern "C" String_t* XmlTextReader_ReadPubidLiteral_m3701 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral378 = il2cpp_codegen_string_literal_from_index(378);
		_stringLiteral379 = il2cpp_codegen_string_literal_from_index(379);
		_stringLiteral377 = il2cpp_codegen_string_literal_from_index(377);
		_stringLiteral380 = il2cpp_codegen_string_literal_from_index(380);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		XmlTextReader_Expect_m3705(__this, _stringLiteral378, /*hidden argument*/NULL);
		bool L_0 = XmlTextReader_SkipWhitespace_m3707(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		XmlException_t731 * L_1 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral379, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0022:
	{
		int32_t L_2 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0036:
	{
		int32_t L_3 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		XmlException_t731 * L_5 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral377, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0050:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_9 = XmlChar_IsPubidChar_m3447(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_10 = V_1;
		uint16_t L_11 = (((uint16_t)L_10));
		Object_t * L_12 = Box(Char_t355_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral380, L_12, /*hidden argument*/NULL);
		XmlException_t731 * L_14 = XmlTextReader_NotWFError_m3651(__this, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_007a:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_17 = V_1;
		XmlTextReader_AppendValueChar_m3671(__this, L_17, /*hidden argument*/NULL);
	}

IL_0088:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_20 = XmlTextReader_CreateValueString_m3673(__this, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.String Mono.Xml2.XmlTextReader::ReadName()
extern "C" String_t* XmlTextReader_ReadName_m3702 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = XmlTextReader_ReadName_m3703(__this, (&V_0), (&V_1), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Mono.Xml2.XmlTextReader::ReadName(System.String&,System.String&)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t61_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral382;
extern "C" String_t* XmlTextReader_ReadName_m3703 (XmlTextReader_t754 * __this, String_t** ___prefix, String_t** ___localName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		ObjectU5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	{
		bool L_0 = (__this->___preserveCurrentTag_32);
		V_0 = L_0;
		__this->___preserveCurrentTag_32 = 1;
		int32_t L_1 = (__this->___peekCharsIndex_29);
		int32_t L_2 = (__this->___curNodePeekIndex_31);
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		int32_t L_3 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_5 = XmlChar_IsFirstNameChar_m3441(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_6 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t61* L_7 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 2));
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t61* L_11 = L_7;
		int32_t L_12 = V_2;
		uint16_t L_13 = (((uint16_t)L_12));
		Object_t * L_14 = Box(Char_t355_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1, sizeof(Object_t *))) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m3834(NULL /*static, unused*/, L_6, _stringLiteral382, L_11, /*hidden argument*/NULL);
		XmlException_t731 * L_16 = XmlTextReader_NotWFError_m3651(__this, L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_16);
	}

IL_005d:
	{
		int32_t L_17 = V_2;
		XmlTextReader_Advance_m3663(__this, L_17, /*hidden argument*/NULL);
		V_3 = 1;
		V_4 = (-1);
		goto IL_0097;
	}

IL_006e:
	{
		int32_t L_18 = V_2;
		XmlTextReader_Advance_m3663(__this, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0093;
		}
	}
	{
		bool L_20 = (__this->___namespaces_43);
		if (!L_20)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_22 = V_3;
		V_4 = L_22;
	}

IL_0093:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0097:
	{
		int32_t L_24 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		V_2 = L_25;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_26 = XmlChar_IsNameChar_m3445(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_27 = (__this->___curNodePeekIndex_31);
		int32_t L_28 = V_1;
		V_5 = ((int32_t)((int32_t)L_27+(int32_t)L_28));
		XmlNameTable_t697 * L_29 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(16 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		CharU5BU5D_t60* L_30 = (__this->___peekChars_28);
		int32_t L_31 = V_5;
		int32_t L_32 = V_3;
		NullCheck(L_29);
		String_t* L_33 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t60*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_29, L_30, L_31, L_32);
		V_6 = L_33;
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		String_t** L_35 = ___prefix;
		XmlNameTable_t697 * L_36 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(16 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		CharU5BU5D_t60* L_37 = (__this->___peekChars_28);
		int32_t L_38 = V_5;
		int32_t L_39 = V_4;
		NullCheck(L_36);
		String_t* L_40 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t60*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_36, L_37, L_38, L_39);
		*((Object_t **)(L_35)) = (Object_t *)L_40;
		String_t** L_41 = ___localName;
		XmlNameTable_t697 * L_42 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(16 /* System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable() */, __this);
		CharU5BU5D_t60* L_43 = (__this->___peekChars_28);
		int32_t L_44 = V_5;
		int32_t L_45 = V_4;
		int32_t L_46 = V_3;
		int32_t L_47 = V_4;
		NullCheck(L_42);
		String_t* L_48 = (String_t*)VirtFuncInvoker3< String_t*, CharU5BU5D_t60*, int32_t, int32_t >::Invoke(5 /* System.String System.Xml.XmlNameTable::Add(System.Char[],System.Int32,System.Int32) */, L_42, L_43, ((int32_t)((int32_t)((int32_t)((int32_t)L_44+(int32_t)L_45))+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_46-(int32_t)L_47))-(int32_t)1)));
		*((Object_t **)(L_41)) = (Object_t *)L_48;
		goto IL_0118;
	}

IL_010d:
	{
		String_t** L_49 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_49)) = (Object_t *)L_50;
		String_t** L_51 = ___localName;
		String_t* L_52 = V_6;
		*((Object_t **)(L_51)) = (Object_t *)L_52;
	}

IL_0118:
	{
		bool L_53 = V_0;
		__this->___preserveCurrentTag_32 = L_53;
		String_t* L_54 = V_6;
		return L_54;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Expect(System.Int32)
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t61_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral383;
extern Il2CppCodeGenString* _stringLiteral524;
extern "C" void XmlTextReader_Expect_m3704 (XmlTextReader_t754 * __this, int32_t ___expected, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		ObjectU5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral383 = il2cpp_codegen_string_literal_from_index(383);
		_stringLiteral524 = il2cpp_codegen_string_literal_from_index(524);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t61* G_B3_1 = {0};
	ObjectU5BU5D_t61* G_B3_2 = {0};
	String_t* G_B3_3 = {0};
	CultureInfo_t608 * G_B3_4 = {0};
	XmlTextReader_t754 * G_B3_5 = {0};
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t61* G_B2_1 = {0};
	ObjectU5BU5D_t61* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	CultureInfo_t608 * G_B2_4 = {0};
	XmlTextReader_t754 * G_B2_5 = {0};
	Object_t * G_B4_0 = {0};
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_t61* G_B4_2 = {0};
	ObjectU5BU5D_t61* G_B4_3 = {0};
	String_t* G_B4_4 = {0};
	CultureInfo_t608 * G_B4_5 = {0};
	XmlTextReader_t754 * G_B4_6 = {0};
	{
		int32_t L_0 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___expected;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_3 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t61* L_4 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 4));
		int32_t L_5 = ___expected;
		uint16_t L_6 = (((uint16_t)L_5));
		Object_t * L_7 = Box(Char_t355_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t61* L_8 = L_4;
		int32_t L_9 = ___expected;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 1, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t61* L_12 = L_8;
		int32_t L_13 = V_0;
		G_B2_0 = 2;
		G_B2_1 = L_12;
		G_B2_2 = L_12;
		G_B2_3 = _stringLiteral383;
		G_B2_4 = L_3;
		G_B2_5 = __this;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			G_B3_0 = 2;
			G_B3_1 = L_12;
			G_B3_2 = L_12;
			G_B3_3 = _stringLiteral383;
			G_B3_4 = L_3;
			G_B3_5 = __this;
			goto IL_0045;
		}
	}
	{
		G_B4_0 = ((Object_t *)(_stringLiteral524));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		G_B4_5 = G_B2_4;
		G_B4_6 = G_B2_5;
		goto IL_004c;
	}

IL_0045:
	{
		int32_t L_14 = V_0;
		uint16_t L_15 = (((uint16_t)L_14));
		Object_t * L_16 = Box(Char_t355_il2cpp_TypeInfo_var, &L_15);
		G_B4_0 = L_16;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
		G_B4_5 = G_B3_4;
		G_B4_6 = G_B3_5;
	}

IL_004c:
	{
		NullCheck(G_B4_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B4_2, G_B4_1);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B4_2, G_B4_1, sizeof(Object_t *))) = (Object_t *)G_B4_0;
		ObjectU5BU5D_t61* L_17 = G_B4_3;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 3, sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Format_m3834(NULL /*static, unused*/, G_B4_5, G_B4_4, L_17, /*hidden argument*/NULL);
		NullCheck(G_B4_6);
		XmlException_t731 * L_22 = XmlTextReader_NotWFError_m3651(G_B4_6, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_22);
	}

IL_0061:
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::Expect(System.String)
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t61_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral525;
extern "C" void XmlTextReader_Expect_m3705 (XmlTextReader_t754 * __this, String_t* ___expected, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		ObjectU5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral525 = il2cpp_codegen_string_literal_from_index(525);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_003d;
	}

IL_0007:
	{
		int32_t L_0 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___expected;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		uint16_t L_3 = String_get_Chars_m1913(L_1, L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_4 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t61* L_5 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 1));
		String_t* L_6 = ___expected;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 0, sizeof(Object_t *))) = (Object_t *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m3834(NULL /*static, unused*/, L_4, _stringLiteral525, L_5, /*hidden argument*/NULL);
		XmlException_t731 * L_8 = XmlTextReader_NotWFError_m3651(__this, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		String_t* L_11 = ___expected;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m159(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Xml2.XmlTextReader::ExpectAfterWhitespace(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t61_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral526;
extern Il2CppCodeGenString* _stringLiteral524;
extern "C" void XmlTextReader_ExpectAfterWhitespace_m3706 (XmlTextReader_t754 * __this, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		ObjectU5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Char_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral526 = il2cpp_codegen_string_literal_from_index(526);
		_stringLiteral524 = il2cpp_codegen_string_literal_from_index(524);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t61* G_B6_1 = {0};
	ObjectU5BU5D_t61* G_B6_2 = {0};
	String_t* G_B6_3 = {0};
	CultureInfo_t608 * G_B6_4 = {0};
	XmlTextReader_t754 * G_B6_5 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t61* G_B5_1 = {0};
	ObjectU5BU5D_t61* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	CultureInfo_t608 * G_B5_4 = {0};
	XmlTextReader_t754 * G_B5_5 = {0};
	Object_t * G_B7_0 = {0};
	int32_t G_B7_1 = 0;
	ObjectU5BU5D_t61* G_B7_2 = {0};
	ObjectU5BU5D_t61* G_B7_3 = {0};
	String_t* G_B7_4 = {0};
	CultureInfo_t608 * G_B7_5 = {0};
	XmlTextReader_t754 * G_B7_6 = {0};

IL_0000:
	{
		int32_t L_0 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)33))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsWhitespace_m3439(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0000;
	}

IL_001f:
	{
		uint16_t L_4 = ___c;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_6 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t61* L_7 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 3));
		uint16_t L_8 = ___c;
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(Char_t355_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t61* L_11 = L_7;
		int32_t L_12 = V_0;
		G_B5_0 = 1;
		G_B5_1 = L_11;
		G_B5_2 = L_11;
		G_B5_3 = _stringLiteral526;
		G_B5_4 = L_6;
		G_B5_5 = __this;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			G_B6_0 = 1;
			G_B6_1 = L_11;
			G_B6_2 = L_11;
			G_B6_3 = _stringLiteral526;
			G_B6_4 = L_6;
			G_B6_5 = __this;
			goto IL_0053;
		}
	}
	{
		G_B7_0 = ((Object_t *)(_stringLiteral524));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		G_B7_5 = G_B5_4;
		G_B7_6 = G_B5_5;
		goto IL_005a;
	}

IL_0053:
	{
		int32_t L_13 = V_0;
		uint16_t L_14 = (((uint16_t)L_13));
		Object_t * L_15 = Box(Char_t355_il2cpp_TypeInfo_var, &L_14);
		G_B7_0 = L_15;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
		G_B7_5 = G_B6_4;
		G_B7_6 = G_B6_5;
	}

IL_005a:
	{
		NullCheck(G_B7_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B7_2, G_B7_1);
		ArrayElementTypeCheck (G_B7_2, G_B7_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B7_2, G_B7_1, sizeof(Object_t *))) = (Object_t *)G_B7_0;
		ObjectU5BU5D_t61* L_16 = G_B7_3;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 2, sizeof(Object_t *))) = (Object_t *)L_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m3834(NULL /*static, unused*/, G_B7_5, G_B7_4, L_16, /*hidden argument*/NULL);
		NullCheck(G_B7_6);
		XmlException_t731 * L_21 = XmlTextReader_NotWFError_m3651(G_B7_6, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}

IL_006f:
	{
		goto IL_0079;
	}
	// Dead block : IL_0074: br IL_0000

IL_0079:
	{
		return;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespace()
extern "C" bool XmlTextReader_SkipWhitespace_m3707 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)((int32_t)13)))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 1;
	}

IL_0027:
	{
		V_1 = G_B5_0;
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		return 0;
	}

IL_0030:
	{
		int32_t L_6 = V_0;
		XmlTextReader_Advance_m3663(__this, L_6, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_003c:
	{
		int32_t L_7 = V_0;
		XmlTextReader_Advance_m3663(__this, L_7, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_8 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		V_0 = L_9;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)32))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)9))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)10))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)13))))
		{
			goto IL_003c;
		}
	}
	{
		bool L_13 = V_1;
		return L_13;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadWhitespace()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool XmlTextReader_ReadWhitespace_m3708 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	{
		int32_t L_0 = (__this->___currentState_39);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->___currentState_39 = ((int32_t)17);
	}

IL_0013:
	{
		bool L_1 = (__this->___preserveCurrentTag_32);
		V_0 = L_1;
		__this->___preserveCurrentTag_32 = 1;
		int32_t L_2 = (__this->___peekCharsIndex_29);
		int32_t L_3 = (__this->___curNodePeekIndex_31);
		V_1 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		int32_t L_4 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_2 = L_4;
	}

IL_0036:
	{
		int32_t L_5 = V_2;
		XmlTextReader_Advance_m3663(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)9))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)10))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_11 = (__this->___currentState_39);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_13 = V_2;
		G_B11_0 = ((((int32_t)((((int32_t)L_13) == ((int32_t)((int32_t)60)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B11_0 = 0;
	}

IL_0082:
	{
		V_3 = G_B11_0;
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_15 = (__this->___whitespaceHandling_44);
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_16 = (__this->___whitespaceHandling_44);
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace() */, __this);
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_00af;
		}
	}

IL_00ad:
	{
		return 0;
	}

IL_00af:
	{
		XmlTextReader_ClearValueBuffer_m3674(__this, /*hidden argument*/NULL);
		StringBuilder_t320 * L_18 = (__this->___valueBuffer_26);
		CharU5BU5D_t60* L_19 = (__this->___peekChars_28);
		int32_t L_20 = (__this->___curNodePeekIndex_31);
		int32_t L_21 = (__this->___peekCharsIndex_29);
		int32_t L_22 = (__this->___curNodePeekIndex_31);
		int32_t L_23 = V_1;
		NullCheck(L_18);
		StringBuilder_Append_m3862(L_18, L_19, L_20, ((int32_t)((int32_t)((int32_t)((int32_t)L_21-(int32_t)L_22))-(int32_t)L_23)), /*hidden argument*/NULL);
		bool L_24 = V_0;
		__this->___preserveCurrentTag_32 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00f5;
		}
	}
	{
		XmlTextReader_ReadText_m3675(__this, 0, /*hidden argument*/NULL);
		goto IL_0126;
	}

IL_00f5:
	{
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace() */, __this);
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_0108;
		}
	}
	{
		G_B21_0 = ((int32_t)14);
		goto IL_010a;
	}

IL_0108:
	{
		G_B21_0 = ((int32_t)13);
	}

IL_010a:
	{
		V_4 = G_B21_0;
		int32_t L_27 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_29 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		XmlTextReader_SetProperties_m3657(__this, L_27, L_28, L_29, L_30, 0, (String_t*)NULL, 1, /*hidden argument*/NULL);
	}

IL_0126:
	{
		return 1;
	}
}
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharsInternal(System.Char[],System.Int32,System.Int32)
extern Il2CppCodeGenString* _stringLiteral527;
extern "C" int32_t XmlTextReader_ReadCharsInternal_m3709 (XmlTextReader_t754 * __this, CharU5BU5D_t60* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral527 = il2cpp_codegen_string_literal_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___offset;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0131;
	}

IL_0009:
	{
		int32_t L_1 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = L_2;
		int32_t L_3 = V_3;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00d2;
	}

IL_0026:
	{
		XmlException_t731 * L_5 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral527, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0032:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___length;
		if ((!(((uint32_t)((int32_t)((int32_t)L_6+(int32_t)1))) == ((uint32_t)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_003d:
	{
		int32_t L_9 = V_2;
		XmlTextReader_Advance_m3663(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_11 = (__this->___nestLevel_40);
		__this->___nestLevel_40 = ((int32_t)((int32_t)L_11+(int32_t)1));
		CharU5BU5D_t60* L_12 = ___buffer;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_14);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, L_14, sizeof(uint16_t))) = (uint16_t)((int32_t)60);
		goto IL_012d;
	}

IL_006d:
	{
		int32_t L_15 = (__this->___nestLevel_40);
		int32_t L_16 = L_15;
		V_4 = L_16;
		__this->___nestLevel_40 = ((int32_t)((int32_t)L_16-(int32_t)1));
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		CharU5BU5D_t60* L_18 = ___buffer;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20, sizeof(uint16_t))) = (uint16_t)((int32_t)60);
		goto IL_012d;
	}

IL_0094:
	{
		XmlTextReader_Expect_m3704(__this, ((int32_t)47), /*hidden argument*/NULL);
		bool L_21 = (__this->___depthUp_18);
		if (!L_21)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_22 = (__this->___depth_16);
		__this->___depth_16 = ((int32_t)((int32_t)L_22+(int32_t)1));
		__this->___depthUp_18 = 0;
	}

IL_00bc:
	{
		XmlTextReader_ReadEndTag_m3669(__this, /*hidden argument*/NULL);
		__this->___readCharsInProgress_41 = 0;
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, __this);
		int32_t L_23 = V_1;
		return L_23;
	}

IL_00d2:
	{
		int32_t L_24 = V_2;
		XmlTextReader_Advance_m3663(__this, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_00f2;
		}
	}
	{
		CharU5BU5D_t60* L_26 = ___buffer;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		int32_t L_29 = V_2;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_26, L_28, sizeof(uint16_t))) = (uint16_t)(((uint16_t)L_29));
		goto IL_0128;
	}

IL_00f2:
	{
		CharU5BU5D_t60* L_30 = ___buffer;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)1));
		int32_t L_33 = V_2;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_32);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32, sizeof(uint16_t))) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33-(int32_t)((int32_t)65536)))/(int32_t)((int32_t)1024)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t60* L_34 = ___buffer;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_36);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_34, L_36, sizeof(uint16_t))) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_37-(int32_t)((int32_t)65536)))%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
	}

IL_0128:
	{
		goto IL_012d;
	}

IL_012d:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0131:
	{
		int32_t L_39 = V_1;
		int32_t L_40 = ___length;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_41 = ___length;
		return L_41;
	}
}
// System.Boolean Mono.Xml2.XmlTextReader::ReadUntilEndTag()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral527;
extern "C" bool XmlTextReader_ReadUntilEndTag_m3710 (XmlTextReader_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral527 = il2cpp_codegen_string_literal_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->___currentState_39 = ((int32_t)15);
	}

IL_0013:
	{
		int32_t L_1 = XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = L_2;
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00cb;
	}

IL_0030:
	{
		XmlException_t731 * L_5 = XmlTextReader_NotWFError_m3651(__this, _stringLiteral527, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_003c:
	{
		int32_t L_6 = XmlTextReader_PeekChar_m3661(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)47))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = (__this->___nestLevel_40);
		__this->___nestLevel_40 = ((int32_t)((int32_t)L_7+(int32_t)1));
		goto IL_00cb;
	}

IL_005c:
	{
		int32_t L_8 = (__this->___nestLevel_40);
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		V_3 = L_9;
		__this->___nestLevel_40 = L_9;
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00cb;
	}

IL_0078:
	{
		XmlTextReader_ReadChar_m3662(__this, /*hidden argument*/NULL);
		String_t* L_11 = XmlTextReader_ReadName_m3702(__this, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = V_1;
		TagNameU5BU5D_t761* L_13 = (__this->___elementNames_20);
		int32_t L_14 = (__this->___elementNameStackPos_21);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14-(int32_t)1)));
		String_t* L_15 = (((TagName_t756 *)(TagName_t756 *)SZArrayLdElema(L_13, ((int32_t)((int32_t)L_14-(int32_t)1)), sizeof(TagName_t756 )))->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Inequality_m172(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_00cb;
	}

IL_00ae:
	{
		XmlTextReader_Expect_m3704(__this, ((int32_t)62), /*hidden argument*/NULL);
		int32_t L_17 = (__this->___depth_16);
		__this->___depth_16 = ((int32_t)((int32_t)L_17-(int32_t)1));
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, __this);
		return L_18;
	}

IL_00cb:
	{
		goto IL_0013;
	}
}
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReader.h"
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReaderMethodDeclarations.h"
// System.Collections.Generic.Stack`1<System.String>
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
// System.Collections.Generic.Stack`1<System.String>
#include "System_System_Collections_Generic_Stack_1_gen_0MethodDeclarations.h"
// System.Void System.Xml.XmlTextReader::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Xml.NameTable
#include "System_Xml_System_Xml_NameTableMethodDeclarations.h"
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReaderMethodDeclarations.h"
extern TypeInfo* NameTable_t722_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m166 (XmlTextReader_t59 * __this, String_t* ___url, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NameTable_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		NameTable_t722 * L_1 = (NameTable_t722 *)il2cpp_codegen_object_new (NameTable_t722_il2cpp_TypeInfo_var);
		NameTable__ctor_m3432(L_1, /*hidden argument*/NULL);
		XmlTextReader__ctor_m3711(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNameTable)
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReaderMethodDeclarations.h"
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReaderMethodDeclarations.h"
extern TypeInfo* XmlTextReader_t754_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m3711 (XmlTextReader_t59 * __this, String_t* ___url, XmlNameTable_t697 * ___nt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTextReader_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlReader__ctor_m3559(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url;
		XmlNameTable_t697 * L_1 = ___nt;
		XmlTextReader_t754 * L_2 = (XmlTextReader_t754 *)il2cpp_codegen_object_new (XmlTextReader_t754_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m3601(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->___source_3 = L_2;
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContext.h"
extern TypeInfo* XmlTextReader_t754_il2cpp_TypeInfo_var;
extern "C" void XmlTextReader__ctor_m3712 (XmlTextReader_t59 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t746 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTextReader_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlReader__ctor_m3559(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___xmlFragment;
		int32_t L_1 = ___fragType;
		XmlParserContext_t746 * L_2 = ___context;
		XmlTextReader_t754 * L_3 = (XmlTextReader_t754 *)il2cpp_codegen_object_new (XmlTextReader_t754_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m3606(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___source_3 = L_3;
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
// Mono.Xml2.XmlTextReader
#include "System_Xml_Mono_Xml2_XmlTextReader.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void XmlTextReader__ctor_m3713 (XmlTextReader_t59 * __this, XmlTextReader_t754 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method)
{
	{
		XmlReader__ctor_m3559(__this, /*hidden argument*/NULL);
		XmlTextReader_t754 * L_0 = ___entityContainer;
		__this->___source_3 = L_0;
		bool L_1 = ___insideAttribute;
		__this->___entityInsideAttribute_4 = L_1;
		return;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t746 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m3714 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlParserContext_t746 * L_0 = XmlTextReader_get_ParserContext_m3727(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C" XmlReader_t57 * XmlTextReader_get_Current_m3715 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	XmlTextReader_t59 * G_B4_0 = {0};
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		XmlTextReader_t59 * L_3 = (__this->___entity_2);
		G_B4_0 = L_3;
		goto IL_002c;
	}

IL_0026:
	{
		XmlTextReader_t754 * L_4 = (__this->___source_3);
		G_B4_0 = ((XmlTextReader_t59 *)(L_4));
	}

IL_002c:
	{
		return G_B4_0;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m3716 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m3717 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m3718 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, L_3);
		XmlTextReader_t59 * L_5 = (__this->___entity_2);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlTextReader::get_Depth() */, L_5);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_6))+(int32_t)1));
	}

IL_0036:
	{
		XmlTextReader_t754 * L_7 = (__this->___source_3);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, L_7);
		return L_8;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m3719 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t754 * L_0 = (__this->___source_3);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Mono.Xml2.XmlTextReader::get_EOF() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m3720 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m3721 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m3722 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m3723 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m3724 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t697 * XmlTextReader_get_NameTable_m3725 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlNameTable_t697 * L_1 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(16 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m3726 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_3);
		G_B6_0 = ((int32_t)(L_4));
		goto IL_004d;
	}

IL_002b:
	{
		XmlTextReader_t59 * L_5 = (__this->___entity_2);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_5);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		G_B6_0 = ((int32_t)16);
		goto IL_004d;
	}

IL_0042:
	{
		XmlTextReader_t59 * L_7 = (__this->___entity_2);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType() */, L_7);
		G_B6_0 = ((int32_t)(L_8));
	}

IL_004d:
	{
		return (int32_t)(G_B6_0);
	}

IL_004e:
	{
		XmlTextReader_t754 * L_9 = (__this->___source_3);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_9);
		return L_10;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern TypeInfo* IHasXmlParserContext_t795_il2cpp_TypeInfo_var;
extern "C" XmlParserContext_t746 * XmlTextReader_get_ParserContext_m3727 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHasXmlParserContext_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(((Object_t *)Castclass(L_0, IHasXmlParserContext_t795_il2cpp_TypeInfo_var)));
		XmlParserContext_t746 * L_1 = (XmlParserContext_t746 *)InterfaceFuncInvoker0< XmlParserContext_t746 * >::Invoke(0 /* System.Xml.XmlParserContext Mono.Xml.IHasXmlParserContext::get_ParserContext() */, IHasXmlParserContext_t795_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_0, IHasXmlParserContext_t795_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m3728 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Prefix() */, L_0);
		return L_1;
	}
}
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m3729 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001c;
	}

IL_0011:
	{
		XmlTextReader_t754 * L_1 = (__this->___source_3);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t749 * XmlTextReader_get_Settings_m3730 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReaderSettings_t749 * L_0 = XmlReader_get_Settings_m3566(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.XmlTextReader::get_Value()
extern "C" String_t* XmlTextReader_get_Value_m3731 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Value() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m3732 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m3733 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		bool L_2 = XmlTextReader_get_CharacterChecking_m3733(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		NullCheck(L_3);
		bool L_4 = XmlTextReader_get_CharacterChecking_m3612(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m3734 (XmlTextReader_t59 * __this, bool ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		bool L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_CharacterChecking_m3734(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		bool L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_CharacterChecking_m3613(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m3735 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		bool L_2 = XmlTextReader_get_CloseInput_m3735(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		NullCheck(L_3);
		bool L_4 = XmlTextReader_get_CloseInput_m3614(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m3736 (XmlTextReader_t59 * __this, bool ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		bool L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_CloseInput_m3736(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		bool L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_CloseInput_m3615(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
extern "C" void XmlTextReader_set_Conformance_m3737 (XmlTextReader_t59 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		int32_t L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_Conformance_m3737(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		int32_t L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_Conformance_m3656(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t696 * XmlTextReader_get_Resolver_m3738 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t754 * L_0 = (__this->___source_3);
		NullCheck(L_0);
		XmlResolver_t696 * L_1 = XmlTextReader_get_Resolver_m3650(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReader.h"
// System.Xml.XmlReaderSettings
#include "System_Xml_System_Xml_XmlReaderSettingsMethodDeclarations.h"
extern "C" void XmlTextReader_CopyProperties_m3739 (XmlTextReader_t59 * __this, XmlTextReader_t59 * ___other, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = ___other;
		NullCheck(L_0);
		bool L_1 = XmlTextReader_get_CharacterChecking_m3733(L_0, /*hidden argument*/NULL);
		XmlTextReader_set_CharacterChecking_m3734(__this, L_1, /*hidden argument*/NULL);
		XmlTextReader_t59 * L_2 = ___other;
		NullCheck(L_2);
		bool L_3 = XmlTextReader_get_CloseInput_m3735(L_2, /*hidden argument*/NULL);
		XmlTextReader_set_CloseInput_m3736(__this, L_3, /*hidden argument*/NULL);
		XmlTextReader_t59 * L_4 = ___other;
		NullCheck(L_4);
		XmlReaderSettings_t749 * L_5 = (XmlReaderSettings_t749 *)VirtFuncInvoker0< XmlReaderSettings_t749 * >::Invoke(20 /* System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings() */, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		XmlTextReader_t59 * L_6 = ___other;
		NullCheck(L_6);
		XmlReaderSettings_t749 * L_7 = (XmlReaderSettings_t749 *)VirtFuncInvoker0< XmlReaderSettings_t749 * >::Invoke(20 /* System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings() */, L_6);
		NullCheck(L_7);
		int32_t L_8 = XmlReaderSettings_get_ConformanceLevel_m3582(L_7, /*hidden argument*/NULL);
		XmlTextReader_set_Conformance_m3737(__this, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		XmlTextReader_t59 * L_9 = ___other;
		NullCheck(L_9);
		XmlResolver_t696 * L_10 = XmlTextReader_get_Resolver_m3738(L_9, /*hidden argument*/NULL);
		XmlTextReader_set_XmlResolver_m3744(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m3740 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t754 * L_0 = (__this->___source_3);
		NullCheck(L_0);
		int32_t L_1 = XmlTextReader_get_EntityHandling_m3617(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m3741 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(39 /* System.Int32 System.Xml.XmlTextReader::get_LineNumber() */, L_1);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(39 /* System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber() */, L_3);
		return L_4;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m3742 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(40 /* System.Int32 System.Xml.XmlTextReader::get_LinePosition() */, L_1);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(40 /* System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition() */, L_3);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m3743 (XmlTextReader_t59 * __this, bool ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		bool L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_Normalization_m3743(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		bool L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_Normalization_m3629(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
// System.Xml.XmlResolver
#include "System_Xml_System_Xml_XmlResolver.h"
extern "C" void XmlTextReader_set_XmlResolver_m3744 (XmlTextReader_t59 * __this, XmlResolver_t696 * ___value, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		XmlResolver_t696 * L_2 = ___value;
		NullCheck(L_1);
		XmlTextReader_set_XmlResolver_m3744(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		XmlResolver_t696 * L_4 = ___value;
		NullCheck(L_3);
		XmlTextReader_set_XmlResolver_m3634(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C" void XmlTextReader_SkipTextDeclaration_m3745 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		XmlTextReader_SkipTextDeclaration_m3745(L_1, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_001b:
	{
		XmlTextReader_t754 * L_2 = (__this->___source_3);
		NullCheck(L_2);
		XmlTextReader_SkipTextDeclaration_m3689(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m3746 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Xml.XmlTextReader::Close() */, L_1);
	}

IL_0016:
	{
		XmlTextReader_t754 * L_2 = (__this->___source_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(23 /* System.Void Mono.Xml2.XmlTextReader::Close() */, L_2);
		return;
	}
}
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m3747 (XmlTextReader_t59 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		XmlReader_t57 * L_0 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void XmlTextReader_MoveToAttribute_m3748 (XmlTextReader_t59 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_4);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_CloseEntity_m3755(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		XmlReader_t57 * L_2 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___i;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(28 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_2, L_3);
		__this->___insideAttribute_5 = 1;
		return;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m3749 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_4);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_CloseEntity_m3755(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		XmlReader_t57 * L_2 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 0;
	}

IL_002e:
	{
		__this->___insideAttribute_5 = 0;
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m3750 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_4);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlTextReader_t59 * L_2 = (__this->___entity_2);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute() */, L_2);
		return L_3;
	}

IL_0022:
	{
		XmlTextReader_t754 * L_4 = (__this->___source_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute() */, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		XmlTextReader_t59 * L_6 = (__this->___entity_2);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = (__this->___entityInsideAttribute_4);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XmlTextReader_CloseEntity_m3755(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->___insideAttribute_5 = 1;
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m3751 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_4);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlTextReader_t59 * L_2 = (__this->___entity_2);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute() */, L_2);
		return L_3;
	}

IL_0022:
	{
		XmlTextReader_t754 * L_4 = (__this->___source_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute() */, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		XmlTextReader_t59 * L_6 = (__this->___entity_2);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = (__this->___entityInsideAttribute_4);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XmlTextReader_CloseEntity_m3755(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->___insideAttribute_5 = 1;
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m3752 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		__this->___insideAttribute_5 = 0;
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_4);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		XmlTextReader_t59 * L_2 = (__this->___entity_2);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_2);
		if (!L_3)
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		XmlTextReader_CloseEntity_m3755(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		XmlTextReader_t59 * L_4 = (__this->___entity_2);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		XmlTextReader_t59 * L_5 = (__this->___entity_2);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlTextReader::Read() */, L_5);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		return 1;
	}

IL_0050:
	{
		int32_t L_7 = XmlTextReader_get_EntityHandling_m3740(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		XmlTextReader_CloseEntity_m3755(__this, /*hidden argument*/NULL);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlTextReader::Read() */, __this);
		return L_8;
	}

IL_0069:
	{
		return 1;
	}

IL_006b:
	{
		XmlTextReader_t754 * L_9 = (__this->___source_3);
		NullCheck(L_9);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, L_9);
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		return 0;
	}

IL_007d:
	{
		int32_t L_11 = XmlTextReader_get_EntityHandling_m3740(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00a7;
		}
	}
	{
		XmlTextReader_t754 * L_12 = (__this->___source_3);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_12);
		if ((!(((uint32_t)L_13) == ((uint32_t)5))))
		{
			goto IL_00a7;
		}
	}
	{
		VirtActionInvoker0::Invoke(36 /* System.Void System.Xml.XmlTextReader::ResolveEntity() */, __this);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlTextReader::Read() */, __this);
		return L_14;
	}

IL_00a7:
	{
		return 1;
	}
}
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m3753 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		bool L_1 = (__this->___entityInsideAttribute_4);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		XmlTextReader_t59 * L_2 = (__this->___entity_2);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		XmlTextReader_CloseEntity_m3755(__this, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_0031:
	{
		XmlTextReader_t59 * L_4 = (__this->___entity_2);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlTextReader::Read() */, L_4);
		return 1;
	}

IL_003f:
	{
		XmlReader_t57 * L_5 = XmlTextReader_get_Current_m3715(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_5);
		return L_6;
	}
}
// System.Void System.Xml.XmlTextReader::ResolveEntity()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Xml.XmlParserContext
#include "System_Xml_System_Xml_XmlParserContextMethodDeclarations.h"
// Mono.Xml.DTDObjectModel
#include "System_Xml_Mono_Xml_DTDObjectModelMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlExceptionMethodDeclarations.h"
// System.Collections.Generic.Stack`1<System.String>
#include "System_System_Collections_Generic_Stack_1_gen_0MethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_1_t762_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextReader_t59_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m3878_MethodInfo_var;
extern const MethodInfo* Stack_1_Contains_m3879_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m3880_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral528;
extern Il2CppCodeGenString* _stringLiteral529;
extern Il2CppCodeGenString* _stringLiteral530;
extern "C" void XmlTextReader_ResolveEntity_m3754 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		Stack_1_t762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		XmlTextReader_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		Stack_1__ctor_m3878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483999);
		Stack_1_Contains_m3879_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484000);
		Stack_1_Push_m3880_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484001);
		_stringLiteral528 = il2cpp_codegen_string_literal_from_index(528);
		_stringLiteral529 = il2cpp_codegen_string_literal_from_index(529);
		_stringLiteral530 = il2cpp_codegen_string_literal_from_index(530);
		s_Il2CppMethodIntialized = true;
	}
	XmlTextReader_t754 * V_0 = {0};
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(36 /* System.Void System.Xml.XmlTextReader::ResolveEntity() */, L_1);
		goto IL_011a;
	}

IL_001b:
	{
		XmlTextReader_t754 * L_2 = (__this->___source_3);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0037;
		}
	}
	{
		InvalidOperationException_t785 * L_4 = (InvalidOperationException_t785 *)il2cpp_codegen_object_new (InvalidOperationException_t785_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3826(L_4, _stringLiteral528, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0037:
	{
		V_0 = (XmlTextReader_t754 *)NULL;
		XmlParserContext_t746 * L_5 = XmlTextReader_get_ParserContext_m3727(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		DTDObjectModel_t689 * L_6 = XmlParserContext_get_Dtd_m3526(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		XmlParserContext_t746 * L_7 = XmlTextReader_get_ParserContext_m3727(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		DTDObjectModel_t689 * L_8 = XmlParserContext_get_Dtd_m3526(L_7, /*hidden argument*/NULL);
		XmlTextReader_t754 * L_9 = (__this->___source_3);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String Mono.Xml2.XmlTextReader::get_Name() */, L_9);
		XmlParserContext_t746 * L_11 = XmlTextReader_get_ParserContext_m3727(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		XmlTextReader_t754 * L_12 = DTDObjectModel_GenerateEntityContentReader_m3279(L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_006b:
	{
		XmlTextReader_t754 * L_13 = V_0;
		if (L_13)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlTextReader::get_BaseURI() */, __this);
		XmlTextReader_t754 * L_15 = (__this->___source_3);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String Mono.Xml2.XmlTextReader::get_Name() */, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral529, L_16, /*hidden argument*/NULL);
		XmlException_t731 * L_18 = (XmlException_t731 *)il2cpp_codegen_object_new (XmlException_t731_il2cpp_TypeInfo_var);
		XmlException__ctor_m3454(L_18, __this, L_14, L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_0093:
	{
		Stack_1_t762 * L_19 = (__this->___entityNameStack_6);
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		Stack_1_t762 * L_20 = (Stack_1_t762 *)il2cpp_codegen_object_new (Stack_1_t762_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3878(L_20, /*hidden argument*/Stack_1__ctor_m3878_MethodInfo_var);
		__this->___entityNameStack_6 = L_20;
		goto IL_00da;
	}

IL_00ae:
	{
		Stack_1_t762 * L_21 = (__this->___entityNameStack_6);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		NullCheck(L_21);
		bool L_23 = Stack_1_Contains_m3879(L_21, L_22, /*hidden argument*/Stack_1_Contains_m3879_MethodInfo_var);
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral530, L_24, /*hidden argument*/NULL);
		XmlException_t731 * L_26 = (XmlException_t731 *)il2cpp_codegen_object_new (XmlException_t731_il2cpp_TypeInfo_var);
		XmlException__ctor_m3453(L_26, L_25, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}

IL_00da:
	{
		Stack_1_t762 * L_27 = (__this->___entityNameStack_6);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		NullCheck(L_27);
		Stack_1_Push_m3880(L_27, L_28, /*hidden argument*/Stack_1_Push_m3880_MethodInfo_var);
		XmlTextReader_t754 * L_29 = V_0;
		bool L_30 = (__this->___insideAttribute_5);
		XmlTextReader_t59 * L_31 = (XmlTextReader_t59 *)il2cpp_codegen_object_new (XmlTextReader_t59_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m3713(L_31, L_29, L_30, /*hidden argument*/NULL);
		__this->___entity_2 = L_31;
		XmlTextReader_t59 * L_32 = (__this->___entity_2);
		Stack_1_t762 * L_33 = (__this->___entityNameStack_6);
		NullCheck(L_32);
		L_32->___entityNameStack_6 = L_33;
		XmlTextReader_t59 * L_34 = (__this->___entity_2);
		NullCheck(L_34);
		XmlTextReader_CopyProperties_m3739(L_34, __this, /*hidden argument*/NULL);
	}

IL_011a:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern const MethodInfo* Stack_1_Pop_m3881_MethodInfo_var;
extern "C" void XmlTextReader_CloseEntity_m3755 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_1_Pop_m3881_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484002);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Xml.XmlTextReader::Close() */, L_0);
		__this->___entity_2 = (XmlTextReader_t59 *)NULL;
		Stack_1_t762 * L_1 = (__this->___entityNameStack_6);
		NullCheck(L_1);
		Stack_1_Pop_m3881(L_1, /*hidden argument*/Stack_1_Pop_m3881_MethodInfo_var);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m3756 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	{
		XmlReader_Skip_m3575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern const MethodInfo* Stack_1_Pop_m3881_MethodInfo_var;
extern "C" TextReader_t736 * XmlTextReader_GetRemainder_m3757 (XmlTextReader_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_1_Pop_m3881_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484002);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlTextReader_t59 * L_0 = (__this->___entity_2);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		XmlTextReader_t59 * L_1 = (__this->___entity_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Xml.XmlTextReader::Close() */, L_1);
		__this->___entity_2 = (XmlTextReader_t59 *)NULL;
		Stack_1_t762 * L_2 = (__this->___entityNameStack_6);
		NullCheck(L_2);
		Stack_1_Pop_m3881(L_2, /*hidden argument*/Stack_1_Pop_m3881_MethodInfo_var);
	}

IL_0029:
	{
		XmlTextReader_t754 * L_3 = (__this->___source_3);
		NullCheck(L_3);
		TextReader_t736 * L_4 = XmlTextReader_GetRemainder_m3638(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Xml.XmlTextWriter/XmlNodeInfo
#include "System_Xml_System_Xml_XmlTextWriter_XmlNodeInfo.h"
// System.Xml.XmlTextWriter/XmlNodeInfo
#include "System_Xml_System_Xml_XmlTextWriter_XmlNodeInfoMethodDeclarations.h"
// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void XmlNodeInfo__ctor_m3758 (XmlNodeInfo_t763 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlTextWriter/StringUtil
#include "System_Xml_System_Xml_XmlTextWriter_StringUtil.h"
// System.Xml.XmlTextWriter/StringUtil
#include "System_Xml_System_Xml_XmlTextWriter_StringUtilMethodDeclarations.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"
// System.Void System.Xml.XmlTextWriter/StringUtil::.cctor()
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* StringUtil_t764_il2cpp_TypeInfo_var;
extern "C" void StringUtil__cctor_m3759 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		StringUtil_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_0 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		((StringUtil_t764_StaticFields*)StringUtil_t764_il2cpp_TypeInfo_var->static_fields)->___cul_0 = L_0;
		CultureInfo_t608 * L_1 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		CompareInfo_t765 * L_2 = (CompareInfo_t765 *)VirtFuncInvoker0< CompareInfo_t765 * >::Invoke(9 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_1);
		((StringUtil_t764_StaticFields*)StringUtil_t764_il2cpp_TypeInfo_var->static_fields)->___cmp_1 = L_2;
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* StringUtil_t764_il2cpp_TypeInfo_var;
extern "C" int32_t StringUtil_IndexOf_m3760 (Object_t * __this /* static, unused */, String_t* ___src, String_t* ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringUtil_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t764_il2cpp_TypeInfo_var);
		CompareInfo_t765 * L_0 = ((StringUtil_t764_StaticFields*)StringUtil_t764_il2cpp_TypeInfo_var->static_fields)->___cmp_1;
		String_t* L_1 = ___src;
		String_t* L_2 = ___target;
		NullCheck(L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(9 /* System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringUtil_t764_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* StringUtil_Format_m3761 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t61* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringUtil_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t764_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_0 = ((StringUtil_t764_StaticFields*)StringUtil_t764_il2cpp_TypeInfo_var->static_fields)->___cul_0;
		String_t* L_1 = ___format;
		ObjectU5BU5D_t61* L_2 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m3834(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Xml.XmlTextWriter/XmlDeclState
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclState.h"
// System.Xml.XmlTextWriter/XmlDeclState
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclStateMethodDeclarations.h"
// System.Xml.NewLineHandling
#include "System_Xml_System_Xml_NewLineHandling.h"
// System.Text.UTF8Encoding
#include "mscorlib_System_Text_UTF8Encoding.h"
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriter.h"
// <PrivateImplementationDetails>
#include "System_Xml_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"
// System.Xml.NamespaceHandling
#include "System_Xml_System_Xml_NamespaceHandling.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
// System.Text.UTF8Encoding
#include "mscorlib_System_Text_UTF8EncodingMethodDeclarations.h"
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriterMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "System_Xml_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriterMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriterMethodDeclarations.h"
extern TypeInfo* XmlNodeInfoU5BU5D_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_t719_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t695_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral531;
extern Il2CppCodeGenString* _stringLiteral532;
extern "C" void XmlTextWriter__ctor_m3762 (XmlTextWriter_t767 * __this, TextWriter_t769 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlNodeInfoU5BU5D_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		Stack_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		ArrayList_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		_stringLiteral531 = il2cpp_codegen_string_literal_from_index(531);
		_stringLiteral532 = il2cpp_codegen_string_literal_from_index(532);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___close_output_stream_10 = 1;
		__this->___namespaces_12 = 1;
		__this->___newline_handling_15 = 2;
		__this->___elements_21 = ((XmlNodeInfoU5BU5D_t771*)SZArrayNew(XmlNodeInfoU5BU5D_t771_il2cpp_TypeInfo_var, ((int32_t)10)));
		Stack_t719 * L_0 = (Stack_t719 *)il2cpp_codegen_object_new (Stack_t719_il2cpp_TypeInfo_var);
		Stack__ctor_m3829(L_0, /*hidden argument*/NULL);
		__this->___new_local_namespaces_22 = L_0;
		ArrayList_t695 * L_1 = (ArrayList_t695 *)il2cpp_codegen_object_new (ArrayList_t695_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3815(L_1, /*hidden argument*/NULL);
		__this->___explicit_nsdecls_23 = L_1;
		__this->___indent_count_26 = 2;
		__this->___indent_char_27 = ((int32_t)32);
		__this->___indent_string_28 = _stringLiteral531;
		__this->___quote_char_31 = ((int32_t)34);
		XmlWriter__ctor_m3806(__this, /*hidden argument*/NULL);
		TextWriter_t769 * L_2 = ___writer;
		if (L_2)
		{
			goto IL_0071;
		}
	}
	{
		ArgumentNullException_t617 * L_3 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_3, _stringLiteral532, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0071:
	{
		TextWriter_t769 * L_4 = ___writer;
		NullCheck(L_4);
		Encoding_t52 * L_5 = (Encoding_t52 *)VirtFuncInvoker0< Encoding_t52 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_4);
		__this->___ignore_encoding_11 = ((((Object_t*)(Encoding_t52 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		TextWriter_t769 * L_6 = ___writer;
		XmlTextWriter_Initialize_m3764(__this, L_6, /*hidden argument*/NULL);
		__this->___allow_doc_fragment_9 = 1;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.cctor()
// System.Text.UTF8Encoding
#include "mscorlib_System_Text_UTF8EncodingMethodDeclarations.h"
extern TypeInfo* UTF8Encoding_t56_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t767_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter__cctor_m3763 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UTF8Encoding_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		XmlTextWriter_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	{
		UTF8Encoding_t56 * L_0 = (UTF8Encoding_t56 *)il2cpp_codegen_object_new (UTF8Encoding_t56_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m3864(L_0, 0, 0, /*hidden argument*/NULL);
		((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___unmarked_utf8encoding_0 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
// System.Xml.NameTable
#include "System_Xml_System_Xml_NameTableMethodDeclarations.h"
// System.Xml.XmlNamespaceManager
#include "System_Xml_System_Xml_XmlNamespaceManagerMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t617_il2cpp_TypeInfo_var;
extern TypeInfo* NameTable_t722_il2cpp_TypeInfo_var;
extern TypeInfo* StreamWriter_t796_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNamespaceManager_t741_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t60_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t767_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t779____U24U24fieldU2D43_5_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t779____U24U24fieldU2D44_6_FieldInfo_var;
extern Il2CppCodeGenString* _stringLiteral532;
extern "C" void XmlTextWriter_Initialize_m3764 (XmlTextWriter_t767 * __this, TextWriter_t769 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		NameTable_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		StreamWriter_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		XmlNamespaceManager_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		CharU5BU5D_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		XmlTextWriter_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		U3CPrivateImplementationDetailsU3E_t779____U24U24fieldU2D43_5_FieldInfo_var = il2cpp_codegen_field_info_from_index(447, 5);
		U3CPrivateImplementationDetailsU3E_t779____U24U24fieldU2D44_6_FieldInfo_var = il2cpp_codegen_field_info_from_index(447, 6);
		_stringLiteral532 = il2cpp_codegen_string_literal_from_index(532);
		s_Il2CppMethodIntialized = true;
	}
	XmlNameTable_t697 * V_0 = {0};
	CharU5BU5D_t60* G_B7_0 = {0};
	{
		TextWriter_t769 * L_0 = ___writer;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t617 * L_1 = (ArgumentNullException_t617 *)il2cpp_codegen_object_new (ArgumentNullException_t617_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3146(L_1, _stringLiteral532, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		NameTable_t722 * L_2 = (NameTable_t722 *)il2cpp_codegen_object_new (NameTable_t722_il2cpp_TypeInfo_var);
		NameTable__ctor_m3432(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		TextWriter_t769 * L_3 = ___writer;
		__this->___writer_5 = L_3;
		TextWriter_t769 * L_4 = ___writer;
		if (!((StreamWriter_t796 *)IsInstClass(L_4, StreamWriter_t796_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		TextWriter_t769 * L_5 = ___writer;
		NullCheck(((StreamWriter_t796 *)CastclassClass(L_5, StreamWriter_t796_il2cpp_TypeInfo_var)));
		Stream_t738 * L_6 = (Stream_t738 *)VirtFuncInvoker0< Stream_t738 * >::Invoke(19 /* System.IO.Stream System.IO.StreamWriter::get_BaseStream() */, ((StreamWriter_t796 *)CastclassClass(L_5, StreamWriter_t796_il2cpp_TypeInfo_var)));
		__this->___base_stream_3 = L_6;
	}

IL_003a:
	{
		TextWriter_t769 * L_7 = ___writer;
		__this->___source_4 = L_7;
		XmlNameTable_t697 * L_8 = V_0;
		XmlNamespaceManager_t741 * L_9 = (XmlNamespaceManager_t741 *)il2cpp_codegen_object_new (XmlNamespaceManager_t741_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m3499(L_9, L_8, /*hidden argument*/NULL);
		__this->___nsmanager_19 = L_9;
		TextWriter_t769 * L_10 = ___writer;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.IO.TextWriter::get_NewLine() */, L_10);
		__this->___newline_29 = L_11;
		int32_t L_12 = (__this->___newline_handling_15);
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t60* L_13 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 5));
		RuntimeHelpers_InitializeArray_m3813(NULL /*static, unused*/, (Array_t *)(Array_t *)L_13, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t779____U24U24fieldU2D43_5_FieldInfo_var), /*hidden argument*/NULL);
		G_B7_0 = L_13;
		goto IL_0090;
	}

IL_007b:
	{
		CharU5BU5D_t60* L_14 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 3));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)38);
		CharU5BU5D_t60* L_15 = L_14;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, 1, sizeof(uint16_t))) = (uint16_t)((int32_t)60);
		CharU5BU5D_t60* L_16 = L_15;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_16, 2, sizeof(uint16_t))) = (uint16_t)((int32_t)62);
		G_B7_0 = L_16;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___escaped_text_chars_1 = G_B7_0;
		CharU5BU5D_t60* L_17 = ((CharU5BU5D_t60*)SZArrayNew(CharU5BU5D_t60_il2cpp_TypeInfo_var, 6));
		RuntimeHelpers_InitializeArray_m3813(NULL /*static, unused*/, (Array_t *)(Array_t *)L_17, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t779____U24U24fieldU2D44_6_FieldInfo_var), /*hidden argument*/NULL);
		((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___escaped_attr_chars_2 = L_17;
		return;
	}
}
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C" String_t* XmlTextWriter_get_XmlLang_m3765 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___open_count_20);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_t771* L_1 = (__this->___elements_21);
		int32_t L_2 = (__this->___open_count_20);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_1, L_3, sizeof(XmlNodeInfo_t763 *))));
		String_t* L_4 = ((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_1, L_3, sizeof(XmlNodeInfo_t763 *)))->___XmlLang_5);
		G_B3_0 = L_4;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C" int32_t XmlTextWriter_get_XmlSpace_m3766 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___open_count_20);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_t771* L_1 = (__this->___elements_21);
		int32_t L_2 = (__this->___open_count_20);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_1, L_3, sizeof(XmlNodeInfo_t763 *))));
		int32_t L_4 = ((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_1, L_3, sizeof(XmlNodeInfo_t763 *)))->___XmlSpace_6);
		G_B3_0 = ((int32_t)(L_4));
	}

IL_0025:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral533;
extern "C" String_t* XmlTextWriter_LookupPrefix_m3767 (XmlTextWriter_t767 * __this, String_t* ___namespaceUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral533 = il2cpp_codegen_string_literal_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___namespaceUri;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Equality_m67(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0016:
	{
		Exception_t33 * L_4 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0022:
	{
		String_t* L_5 = ___namespaceUri;
		XmlNamespaceManager_t741 * L_6 = (__this->___nsmanager_19);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m67(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_9;
	}

IL_003e:
	{
		XmlNamespaceManager_t741 * L_10 = (__this->___nsmanager_19);
		String_t* L_11 = ___namespaceUri;
		NullCheck(L_10);
		String_t* L_12 = XmlNamespaceManager_LookupPrefixExclusive_m3512(L_10, L_11, 0, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void System.Xml.XmlTextWriter::Close()
extern "C" void XmlTextWriter_Close_m3768 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_17);
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___state_17);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_001e;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_001e:
	{
		goto IL_0029;
	}

IL_0023:
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlTextWriter::WriteEndElement() */, __this);
	}

IL_0029:
	{
		int32_t L_2 = (__this->___open_count_20);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0035:
	{
		bool L_3 = (__this->___close_output_stream_10);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		TextWriter_t769 * L_4 = (__this->___writer_5);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextWriter::Close() */, L_4);
		goto IL_005b;
	}

IL_0050:
	{
		TextWriter_t769 * L_5 = (__this->___writer_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_5);
	}

IL_005b:
	{
		__this->___state_17 = 5;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern Il2CppCodeGenString* _stringLiteral534;
extern Il2CppCodeGenString* _stringLiteral535;
extern Il2CppCodeGenString* _stringLiteral536;
extern Il2CppCodeGenString* _stringLiteral394;
extern Il2CppCodeGenString* _stringLiteral537;
extern Il2CppCodeGenString* _stringLiteral538;
extern Il2CppCodeGenString* _stringLiteral313;
extern Il2CppCodeGenString* _stringLiteral505;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void XmlTextWriter_WriteStartDocumentCore_m3769 (XmlTextWriter_t767 * __this, bool ___outputStd, bool ___standalone, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral534 = il2cpp_codegen_string_literal_from_index(534);
		_stringLiteral535 = il2cpp_codegen_string_literal_from_index(535);
		_stringLiteral536 = il2cpp_codegen_string_literal_from_index(536);
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		_stringLiteral537 = il2cpp_codegen_string_literal_from_index(537);
		_stringLiteral538 = il2cpp_codegen_string_literal_from_index(538);
		_stringLiteral313 = il2cpp_codegen_string_literal_from_index(313);
		_stringLiteral505 = il2cpp_codegen_string_literal_from_index(505);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	TextWriter_t769 * G_B11_0 = {0};
	TextWriter_t769 * G_B10_0 = {0};
	String_t* G_B12_0 = {0};
	TextWriter_t769 * G_B12_1 = {0};
	{
		int32_t L_0 = (__this->___state_17);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t33 * L_1 = XmlTextWriter_StateError_m3801(__this, _stringLiteral534, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		int32_t L_2 = (__this->___xmldecl_state_13);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0037;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0044;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0044;
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		Exception_t33 * L_4 = XmlTextWriter_InvalidOperation_m3800(__this, _stringLiteral535, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0044:
	{
		__this->___state_17 = 1;
		TextWriter_t769 * L_5 = (__this->___writer_5);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral536);
		TextWriter_t769 * L_6 = (__this->___writer_5);
		uint16_t L_7 = (__this->___quote_char_31);
		NullCheck(L_6);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, L_7);
		TextWriter_t769 * L_8 = (__this->___writer_5);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral394);
		TextWriter_t769 * L_9 = (__this->___writer_5);
		uint16_t L_10 = (__this->___quote_char_31);
		NullCheck(L_9);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, L_10);
		bool L_11 = (__this->___ignore_encoding_11);
		if (L_11)
		{
			goto IL_00e5;
		}
	}
	{
		TextWriter_t769 * L_12 = (__this->___writer_5);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral537);
		TextWriter_t769 * L_13 = (__this->___writer_5);
		uint16_t L_14 = (__this->___quote_char_31);
		NullCheck(L_13);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t769 * L_15 = (__this->___writer_5);
		TextWriter_t769 * L_16 = (__this->___writer_5);
		NullCheck(L_16);
		Encoding_t52 * L_17 = (Encoding_t52 *)VirtFuncInvoker0< Encoding_t52 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_16);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Text.Encoding::get_WebName() */, L_17);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_18);
		TextWriter_t769 * L_19 = (__this->___writer_5);
		uint16_t L_20 = (__this->___quote_char_31);
		NullCheck(L_19);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, L_20);
	}

IL_00e5:
	{
		bool L_21 = ___outputStd;
		if (!L_21)
		{
			goto IL_013d;
		}
	}
	{
		TextWriter_t769 * L_22 = (__this->___writer_5);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, _stringLiteral538);
		TextWriter_t769 * L_23 = (__this->___writer_5);
		uint16_t L_24 = (__this->___quote_char_31);
		NullCheck(L_23);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_23, L_24);
		TextWriter_t769 * L_25 = (__this->___writer_5);
		bool L_26 = ___standalone;
		G_B10_0 = L_25;
		if (!L_26)
		{
			G_B11_0 = L_25;
			goto IL_0122;
		}
	}
	{
		G_B12_0 = _stringLiteral313;
		G_B12_1 = G_B10_0;
		goto IL_0127;
	}

IL_0122:
	{
		G_B12_0 = _stringLiteral505;
		G_B12_1 = G_B11_0;
	}

IL_0127:
	{
		NullCheck(G_B12_1);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B12_1, G_B12_0);
		TextWriter_t769 * L_27 = (__this->___writer_5);
		uint16_t L_28 = (__this->___quote_char_31);
		NullCheck(L_27);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, L_28);
	}

IL_013d:
	{
		TextWriter_t769 * L_29 = (__this->___writer_5);
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_29, _stringLiteral398);
		__this->___xmldecl_state_13 = 1;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
// System.Xml.XmlChar
#include "System_Xml_System_Xml_XmlCharMethodDeclarations.h"
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral539;
extern Il2CppCodeGenString* _stringLiteral540;
extern Il2CppCodeGenString* _stringLiteral541;
extern Il2CppCodeGenString* _stringLiteral542;
extern Il2CppCodeGenString* _stringLiteral543;
extern Il2CppCodeGenString* _stringLiteral267;
extern Il2CppCodeGenString* _stringLiteral268;
extern "C" void XmlTextWriter_WriteDocType_m3770 (XmlTextWriter_t767 * __this, String_t* ___name, String_t* ___pubid, String_t* ___sysid, String_t* ___subset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		_stringLiteral539 = il2cpp_codegen_string_literal_from_index(539);
		_stringLiteral540 = il2cpp_codegen_string_literal_from_index(540);
		_stringLiteral541 = il2cpp_codegen_string_literal_from_index(541);
		_stringLiteral542 = il2cpp_codegen_string_literal_from_index(542);
		_stringLiteral543 = il2cpp_codegen_string_literal_from_index(543);
		_stringLiteral267 = il2cpp_codegen_string_literal_from_index(267);
		_stringLiteral268 = il2cpp_codegen_string_literal_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t33 * L_1 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral539, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m3446(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t33 * L_4 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral539, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0029:
	{
		int32_t L_5 = (__this->___node_state_18);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		Exception_t33 * L_6 = XmlTextWriter_StateError_m3801(__this, _stringLiteral540, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		__this->___node_state_18 = ((int32_t)10);
		int32_t L_7 = (__this->___xmldecl_state_13);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m3791(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		XmlTextWriter_WriteIndent_m3787(__this, /*hidden argument*/NULL);
		TextWriter_t769 * L_8 = (__this->___writer_5);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral541);
		TextWriter_t769 * L_9 = (__this->___writer_5);
		String_t* L_10 = ___name;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
		String_t* L_11 = ___pubid;
		if (!L_11)
		{
			goto IL_0106;
		}
	}
	{
		TextWriter_t769 * L_12 = (__this->___writer_5);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral542);
		TextWriter_t769 * L_13 = (__this->___writer_5);
		uint16_t L_14 = (__this->___quote_char_31);
		NullCheck(L_13);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t769 * L_15 = (__this->___writer_5);
		String_t* L_16 = ___pubid;
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t769 * L_17 = (__this->___writer_5);
		uint16_t L_18 = (__this->___quote_char_31);
		NullCheck(L_17);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, L_18);
		TextWriter_t769 * L_19 = (__this->___writer_5);
		NullCheck(L_19);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, ((int32_t)32));
		TextWriter_t769 * L_20 = (__this->___writer_5);
		uint16_t L_21 = (__this->___quote_char_31);
		NullCheck(L_20);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_20, L_21);
		String_t* L_22 = ___sysid;
		if (!L_22)
		{
			goto IL_00f0;
		}
	}
	{
		TextWriter_t769 * L_23 = (__this->___writer_5);
		String_t* L_24 = ___sysid;
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_24);
	}

IL_00f0:
	{
		TextWriter_t769 * L_25 = (__this->___writer_5);
		uint16_t L_26 = (__this->___quote_char_31);
		NullCheck(L_25);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_25, L_26);
		goto IL_014a;
	}

IL_0106:
	{
		String_t* L_27 = ___sysid;
		if (!L_27)
		{
			goto IL_014a;
		}
	}
	{
		TextWriter_t769 * L_28 = (__this->___writer_5);
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, _stringLiteral543);
		TextWriter_t769 * L_29 = (__this->___writer_5);
		uint16_t L_30 = (__this->___quote_char_31);
		NullCheck(L_29);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_29, L_30);
		TextWriter_t769 * L_31 = (__this->___writer_5);
		String_t* L_32 = ___sysid;
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_31, L_32);
		TextWriter_t769 * L_33 = (__this->___writer_5);
		uint16_t L_34 = (__this->___quote_char_31);
		NullCheck(L_33);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_33, L_34);
	}

IL_014a:
	{
		String_t* L_35 = ___subset;
		if (!L_35)
		{
			goto IL_017e;
		}
	}
	{
		TextWriter_t769 * L_36 = (__this->___writer_5);
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, _stringLiteral267);
		TextWriter_t769 * L_37 = (__this->___writer_5);
		String_t* L_38 = ___subset;
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, L_38);
		TextWriter_t769 * L_39 = (__this->___writer_5);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_39, _stringLiteral268);
	}

IL_017e:
	{
		TextWriter_t769 * L_40 = (__this->___writer_5);
		NullCheck(L_40);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)62));
		__this->___state_17 = 1;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Xml.XmlTextWriter/XmlNodeInfo
#include "System_Xml_System_Xml_XmlTextWriter_XmlNodeInfoMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeInfoU5BU5D_t771_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeInfo_t763_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral544;
extern Il2CppCodeGenString* _stringLiteral545;
extern Il2CppCodeGenString* _stringLiteral546;
extern Il2CppCodeGenString* _stringLiteral547;
extern Il2CppCodeGenString* _stringLiteral438;
extern Il2CppCodeGenString* _stringLiteral548;
extern Il2CppCodeGenString* _stringLiteral451;
extern "C" void XmlTextWriter_WriteStartElement_m3771 (XmlTextWriter_t767 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		XmlNodeInfoU5BU5D_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		XmlNodeInfo_t763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(525);
		_stringLiteral544 = il2cpp_codegen_string_literal_from_index(544);
		_stringLiteral545 = il2cpp_codegen_string_literal_from_index(545);
		_stringLiteral546 = il2cpp_codegen_string_literal_from_index(546);
		_stringLiteral547 = il2cpp_codegen_string_literal_from_index(547);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		_stringLiteral548 = il2cpp_codegen_string_literal_from_index(548);
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	XmlNodeInfoU5BU5D_t771* V_1 = {0};
	XmlNodeInfo_t763 * V_2 = {0};
	String_t* V_3 = {0};
	{
		int32_t L_0 = (__this->___state_17);
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = (__this->___state_17);
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t33 * L_2 = XmlTextWriter_StateError_m3801(__this, _stringLiteral544, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0024:
	{
		__this->___node_state_18 = 1;
		String_t* L_3 = ___prefix;
		V_0 = ((((Object_t*)(String_t*)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		String_t* L_4 = ___prefix;
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___prefix = L_5;
	}

IL_003d:
	{
		bool L_6 = (__this->___namespaces_12);
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_7 = ___namespaceUri;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_8 = ___namespaceUri;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m159(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		Exception_t33 * L_10 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral545, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_10);
	}

IL_0066:
	{
		bool L_11 = (__this->___namespaces_12);
		if (L_11)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_12 = ___prefix;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m159(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		Exception_t33 * L_14 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral546, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_14);
	}

IL_0089:
	{
		String_t* L_15 = ___prefix;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m159(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_17 = ___namespaceUri;
		if (L_17)
		{
			goto IL_00c7;
		}
	}
	{
		XmlNamespaceManager_t741 * L_18 = (__this->___nsmanager_19);
		String_t* L_19 = ___prefix;
		NullCheck(L_18);
		String_t* L_20 = XmlNamespaceManager_LookupNamespace_m3510(L_18, L_19, 0, /*hidden argument*/NULL);
		___namespaceUri = L_20;
		String_t* L_21 = ___namespaceUri;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_22 = ___namespaceUri;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m159(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00c7;
		}
	}

IL_00bb:
	{
		Exception_t33 * L_24 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral547, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_24);
	}

IL_00c7:
	{
		bool L_25 = (__this->___namespaces_12);
		if (!L_25)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_26 = ___prefix;
		if (!L_26)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_27 = ___prefix;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m159(L_27, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)3))))
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_29 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Inequality_m172(NULL /*static, unused*/, L_29, _stringLiteral438, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_31 = ___prefix;
		NullCheck(L_31);
		uint16_t L_32 = String_get_Chars_m1913(L_31, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)120))))
		{
			goto IL_0110;
		}
	}
	{
		String_t* L_33 = ___prefix;
		NullCheck(L_33);
		uint16_t L_34 = String_get_Chars_m1913(L_33, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0153;
		}
	}

IL_0110:
	{
		String_t* L_35 = ___prefix;
		NullCheck(L_35);
		uint16_t L_36 = String_get_Chars_m1913(L_35, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)109))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_37 = ___prefix;
		NullCheck(L_37);
		uint16_t L_38 = String_get_Chars_m1913(L_37, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0153;
		}
	}

IL_012c:
	{
		String_t* L_39 = ___prefix;
		NullCheck(L_39);
		uint16_t L_40 = String_get_Chars_m1913(L_39, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)108))))
		{
			goto IL_0148;
		}
	}
	{
		String_t* L_41 = ___prefix;
		NullCheck(L_41);
		uint16_t L_42 = String_get_Chars_m1913(L_41, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_0153;
		}
	}

IL_0148:
	{
		ArgumentException_t373 * L_43 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2066(L_43, _stringLiteral548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_43);
	}

IL_0153:
	{
		int32_t L_44 = (__this->___xmldecl_state_13);
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m3791(__this, /*hidden argument*/NULL);
	}

IL_0165:
	{
		int32_t L_45 = (__this->___state_17);
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_0177;
		}
	}
	{
		XmlTextWriter_CloseStartElement_m3772(__this, /*hidden argument*/NULL);
	}

IL_0177:
	{
		int32_t L_46 = (__this->___open_count_20);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_47 = (__this->___elements_21);
		int32_t L_48 = (__this->___open_count_20);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, ((int32_t)((int32_t)L_48-(int32_t)1)));
		int32_t L_49 = ((int32_t)((int32_t)L_48-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_47, L_49, sizeof(XmlNodeInfo_t763 *))));
		(*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_47, L_49, sizeof(XmlNodeInfo_t763 *)))->___HasElements_4 = 1;
	}

IL_0198:
	{
		XmlNamespaceManager_t741 * L_50 = (__this->___nsmanager_19);
		NullCheck(L_50);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_50);
		bool L_51 = (__this->___namespaces_12);
		if (!L_51)
		{
			goto IL_01e7;
		}
	}
	{
		String_t* L_52 = ___namespaceUri;
		if (!L_52)
		{
			goto IL_01e7;
		}
	}
	{
		bool L_53 = V_0;
		if (!L_53)
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_54 = ___namespaceUri;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m159(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_56 = ___namespaceUri;
		String_t* L_57 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_56);
		___prefix = L_57;
	}

IL_01cf:
	{
		String_t* L_58 = ___prefix;
		if (!L_58)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_59 = ___namespaceUri;
		NullCheck(L_59);
		int32_t L_60 = String_get_Length_m159(L_59, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_01e7;
		}
	}

IL_01e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___prefix = L_61;
	}

IL_01e7:
	{
		XmlTextWriter_WriteIndent_m3787(__this, /*hidden argument*/NULL);
		TextWriter_t769 * L_62 = (__this->___writer_5);
		NullCheck(L_62);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_62, _stringLiteral451);
		String_t* L_63 = ___prefix;
		NullCheck(L_63);
		int32_t L_64 = String_get_Length_m159(L_63, /*hidden argument*/NULL);
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_0222;
		}
	}
	{
		TextWriter_t769 * L_65 = (__this->___writer_5);
		String_t* L_66 = ___prefix;
		NullCheck(L_65);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_65, L_66);
		TextWriter_t769 * L_67 = (__this->___writer_5);
		NullCheck(L_67);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_67, ((int32_t)58));
	}

IL_0222:
	{
		TextWriter_t769 * L_68 = (__this->___writer_5);
		String_t* L_69 = ___localName;
		NullCheck(L_68);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_68, L_69);
		XmlNodeInfoU5BU5D_t771* L_70 = (__this->___elements_21);
		NullCheck(L_70);
		int32_t L_71 = (__this->___open_count_20);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_70)->max_length)))) == ((uint32_t)L_71))))
		{
			goto IL_0268;
		}
	}
	{
		int32_t L_72 = (__this->___open_count_20);
		V_1 = ((XmlNodeInfoU5BU5D_t771*)SZArrayNew(XmlNodeInfoU5BU5D_t771_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_72<<(int32_t)1))));
		XmlNodeInfoU5BU5D_t771* L_73 = (__this->___elements_21);
		XmlNodeInfoU5BU5D_t771* L_74 = V_1;
		int32_t L_75 = (__this->___open_count_20);
		Array_Copy_m3836(NULL /*static, unused*/, (Array_t *)(Array_t *)L_73, (Array_t *)(Array_t *)L_74, L_75, /*hidden argument*/NULL);
		XmlNodeInfoU5BU5D_t771* L_76 = V_1;
		__this->___elements_21 = L_76;
	}

IL_0268:
	{
		XmlNodeInfoU5BU5D_t771* L_77 = (__this->___elements_21);
		int32_t L_78 = (__this->___open_count_20);
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, L_78);
		int32_t L_79 = L_78;
		if ((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_77, L_79, sizeof(XmlNodeInfo_t763 *))))
		{
			goto IL_028c;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_80 = (__this->___elements_21);
		int32_t L_81 = (__this->___open_count_20);
		XmlNodeInfo_t763 * L_82 = (XmlNodeInfo_t763 *)il2cpp_codegen_object_new (XmlNodeInfo_t763_il2cpp_TypeInfo_var);
		XmlNodeInfo__ctor_m3758(L_82, /*hidden argument*/NULL);
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, L_81);
		ArrayElementTypeCheck (L_80, L_82);
		*((XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_80, L_81, sizeof(XmlNodeInfo_t763 *))) = (XmlNodeInfo_t763 *)L_82;
	}

IL_028c:
	{
		XmlNodeInfoU5BU5D_t771* L_83 = (__this->___elements_21);
		int32_t L_84 = (__this->___open_count_20);
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, L_84);
		int32_t L_85 = L_84;
		V_2 = (*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_83, L_85, sizeof(XmlNodeInfo_t763 *)));
		XmlNodeInfo_t763 * L_86 = V_2;
		String_t* L_87 = ___prefix;
		NullCheck(L_86);
		L_86->___Prefix_0 = L_87;
		XmlNodeInfo_t763 * L_88 = V_2;
		String_t* L_89 = ___localName;
		NullCheck(L_88);
		L_88->___LocalName_1 = L_89;
		XmlNodeInfo_t763 * L_90 = V_2;
		String_t* L_91 = ___namespaceUri;
		NullCheck(L_90);
		L_90->___NS_2 = L_91;
		XmlNodeInfo_t763 * L_92 = V_2;
		NullCheck(L_92);
		L_92->___HasSimple_3 = 0;
		XmlNodeInfo_t763 * L_93 = V_2;
		NullCheck(L_93);
		L_93->___HasElements_4 = 0;
		XmlNodeInfo_t763 * L_94 = V_2;
		String_t* L_95 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Xml.XmlTextWriter::get_XmlLang() */, __this);
		NullCheck(L_94);
		L_94->___XmlLang_5 = L_95;
		XmlNodeInfo_t763 * L_96 = V_2;
		int32_t L_97 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace() */, __this);
		NullCheck(L_96);
		L_96->___XmlSpace_6 = L_97;
		int32_t L_98 = (__this->___open_count_20);
		__this->___open_count_20 = ((int32_t)((int32_t)L_98+(int32_t)1));
		bool L_99 = (__this->___namespaces_12);
		if (!L_99)
		{
			goto IL_0327;
		}
	}
	{
		String_t* L_100 = ___namespaceUri;
		if (!L_100)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t741 * L_101 = (__this->___nsmanager_19);
		String_t* L_102 = ___prefix;
		NullCheck(L_101);
		String_t* L_103 = XmlNamespaceManager_LookupNamespace_m3510(L_101, L_102, 0, /*hidden argument*/NULL);
		V_3 = L_103;
		String_t* L_104 = V_3;
		String_t* L_105 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_106 = String_op_Inequality_m172(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t741 * L_107 = (__this->___nsmanager_19);
		String_t* L_108 = ___prefix;
		String_t* L_109 = ___namespaceUri;
		NullCheck(L_107);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_107, L_108, L_109);
		Stack_t719 * L_110 = (__this->___new_local_namespaces_22);
		String_t* L_111 = ___prefix;
		NullCheck(L_110);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_110, L_111);
	}

IL_0327:
	{
		__this->___state_17 = 2;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C" void XmlTextWriter_CloseStartElement_m3772 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_CloseStartElementCore_m3773(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___state_17);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		TextWriter_t769 * L_1 = (__this->___writer_5);
		NullCheck(L_1);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)62));
	}

IL_001f:
	{
		__this->___state_17 = 4;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral549;
extern Il2CppCodeGenString* _stringLiteral550;
extern "C" void XmlTextWriter_CloseStartElementCore_m3773 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral549 = il2cpp_codegen_string_literal_from_index(549);
		_stringLiteral550 = il2cpp_codegen_string_literal_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	{
		int32_t L_0 = (__this->___state_17);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		Stack_t719 * L_1 = (__this->___new_local_namespaces_22);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		ArrayList_t695 * L_3 = (__this->___explicit_nsdecls_23);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ArrayList_t695 * L_5 = (__this->___explicit_nsdecls_23);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(30 /* System.Void System.Collections.ArrayList::Clear() */, L_5);
	}

IL_003e:
	{
		return;
	}

IL_003f:
	{
		ArrayList_t695 * L_6 = (__this->___explicit_nsdecls_23);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_0 = L_7;
		goto IL_00ba;
	}

IL_0050:
	{
		Stack_t719 * L_8 = (__this->___new_local_namespaces_22);
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Stack::Pop() */, L_8);
		V_1 = ((String_t*)CastclassSealed(L_9, String_t_il2cpp_TypeInfo_var));
		V_2 = 0;
		V_3 = 0;
		goto IL_0091;
	}

IL_006a:
	{
		ArrayList_t695 * L_10 = (__this->___explicit_nsdecls_23);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m67(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_12, String_t_il2cpp_TypeInfo_var)), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		V_2 = 1;
		goto IL_00a2;
	}

IL_008d:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_16 = V_3;
		ArrayList_t695 * L_17 = (__this->___explicit_nsdecls_23);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_006a;
		}
	}

IL_00a2:
	{
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00ba;
	}

IL_00ad:
	{
		ArrayList_t695 * L_20 = (__this->___explicit_nsdecls_23);
		String_t* L_21 = V_1;
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00ba:
	{
		Stack_t719 * L_22 = (__this->___new_local_namespaces_22);
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_22);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_24 = V_0;
		V_4 = L_24;
		goto IL_0180;
	}

IL_00d3:
	{
		ArrayList_t695 * L_25 = (__this->___explicit_nsdecls_23);
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_25, L_26);
		V_5 = ((String_t*)CastclassSealed(L_27, String_t_il2cpp_TypeInfo_var));
		XmlNamespaceManager_t741 * L_28 = (__this->___nsmanager_19);
		String_t* L_29 = V_5;
		NullCheck(L_28);
		String_t* L_30 = XmlNamespaceManager_LookupNamespace_m3510(L_28, L_29, 0, /*hidden argument*/NULL);
		V_6 = L_30;
		String_t* L_31 = V_6;
		if (L_31)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_017a;
	}

IL_0103:
	{
		String_t* L_32 = V_5;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m159(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		TextWriter_t769 * L_34 = (__this->___writer_5);
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral549);
		TextWriter_t769 * L_35 = (__this->___writer_5);
		String_t* L_36 = V_5;
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_35, L_36);
		goto IL_0142;
	}

IL_0132:
	{
		TextWriter_t769 * L_37 = (__this->___writer_5);
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, _stringLiteral550);
	}

IL_0142:
	{
		TextWriter_t769 * L_38 = (__this->___writer_5);
		NullCheck(L_38);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_38, ((int32_t)61));
		TextWriter_t769 * L_39 = (__this->___writer_5);
		uint16_t L_40 = (__this->___quote_char_31);
		NullCheck(L_39);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_39, L_40);
		String_t* L_41 = V_6;
		XmlTextWriter_WriteEscapedString_m3795(__this, L_41, 1, /*hidden argument*/NULL);
		TextWriter_t769 * L_42 = (__this->___writer_5);
		uint16_t L_43 = (__this->___quote_char_31);
		NullCheck(L_42);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_42, L_43);
	}

IL_017a:
	{
		int32_t L_44 = V_4;
		V_4 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_0180:
	{
		int32_t L_45 = V_4;
		ArrayList_t695 * L_46 = (__this->___explicit_nsdecls_23);
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00d3;
		}
	}
	{
		ArrayList_t695 * L_48 = (__this->___explicit_nsdecls_23);
		NullCheck(L_48);
		VirtActionInvoker0::Invoke(30 /* System.Void System.Collections.ArrayList::Clear() */, L_48);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C" void XmlTextWriter_WriteEndElement_m3774 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteEndElementCore_m3776(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C" void XmlTextWriter_WriteFullEndElement_m3775 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteEndElementCore_m3776(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern Il2CppCodeGenString* _stringLiteral551;
extern Il2CppCodeGenString* _stringLiteral552;
extern Il2CppCodeGenString* _stringLiteral553;
extern Il2CppCodeGenString* _stringLiteral554;
extern "C" void XmlTextWriter_WriteEndElementCore_m3776 (XmlTextWriter_t767 * __this, bool ___full, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral551 = il2cpp_codegen_string_literal_from_index(551);
		_stringLiteral552 = il2cpp_codegen_string_literal_from_index(552);
		_stringLiteral553 = il2cpp_codegen_string_literal_from_index(553);
		_stringLiteral554 = il2cpp_codegen_string_literal_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	XmlNodeInfo_t763 * V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___state_17);
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = (__this->___state_17);
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t33 * L_2 = XmlTextWriter_StateError_m3801(__this, _stringLiteral551, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0024:
	{
		int32_t L_3 = (__this->___open_count_20);
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		Exception_t33 * L_4 = XmlTextWriter_InvalidOperation_m3800(__this, _stringLiteral552, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_003b:
	{
		XmlTextWriter_CloseStartElementCore_m3773(__this, /*hidden argument*/NULL);
		XmlNamespaceManager_t741 * L_5 = (__this->___nsmanager_19);
		NullCheck(L_5);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_5);
		int32_t L_6 = (__this->___state_17);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		bool L_7 = ___full;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		TextWriter_t769 * L_8 = (__this->___writer_5);
		NullCheck(L_8);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)62));
		goto IL_0081;
	}

IL_0071:
	{
		TextWriter_t769 * L_9 = (__this->___writer_5);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, _stringLiteral553);
	}

IL_0081:
	{
		bool L_10 = ___full;
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_11 = (__this->___state_17);
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0099;
		}
	}

IL_0093:
	{
		XmlTextWriter_WriteIndentEndElement_m3788(__this, /*hidden argument*/NULL);
	}

IL_0099:
	{
		XmlNodeInfoU5BU5D_t771* L_12 = (__this->___elements_21);
		int32_t L_13 = (__this->___open_count_20);
		int32_t L_14 = ((int32_t)((int32_t)L_13-(int32_t)1));
		V_1 = L_14;
		__this->___open_count_20 = L_14;
		int32_t L_15 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_15);
		int32_t L_16 = L_15;
		V_0 = (*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_12, L_16, sizeof(XmlNodeInfo_t763 *)));
		bool L_17 = ___full;
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_18 = (__this->___state_17);
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_0121;
		}
	}

IL_00c4:
	{
		TextWriter_t769 * L_19 = (__this->___writer_5);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral554);
		XmlNodeInfo_t763 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = (L_20->___Prefix_0);
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m159(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		TextWriter_t769 * L_23 = (__this->___writer_5);
		XmlNodeInfo_t763 * L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25 = (L_24->___Prefix_0);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_25);
		TextWriter_t769 * L_26 = (__this->___writer_5);
		NullCheck(L_26);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, ((int32_t)58));
	}

IL_0103:
	{
		TextWriter_t769 * L_27 = (__this->___writer_5);
		XmlNodeInfo_t763 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (L_28->___LocalName_1);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_27, L_29);
		TextWriter_t769 * L_30 = (__this->___writer_5);
		NullCheck(L_30);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_30, ((int32_t)62));
	}

IL_0121:
	{
		__this->___state_17 = 4;
		int32_t L_31 = (__this->___open_count_20);
		if (L_31)
		{
			goto IL_013b;
		}
	}
	{
		__this->___node_state_18 = ((int32_t)15);
	}

IL_013b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriterMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringWriter_t770_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral555;
extern Il2CppCodeGenString* _stringLiteral437;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral438;
extern Il2CppCodeGenString* _stringLiteral556;
extern Il2CppCodeGenString* _stringLiteral547;
extern "C" void XmlTextWriter_WriteStartAttribute_m3777 (XmlTextWriter_t767 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringWriter_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		_stringLiteral555 = il2cpp_codegen_string_literal_from_index(555);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		_stringLiteral556 = il2cpp_codegen_string_literal_from_index(556);
		_stringLiteral547 = il2cpp_codegen_string_literal_from_index(547);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	XmlTextWriter_t767 * G_B52_0 = {0};
	XmlTextWriter_t767 * G_B51_0 = {0};
	String_t* G_B53_0 = {0};
	XmlTextWriter_t767 * G_B53_1 = {0};
	{
		int32_t L_0 = (__this->___state_17);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		int32_t L_1 = (__this->___state_17);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (__this->___state_17);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Exception_t33 * L_3 = XmlTextWriter_StateError_m3801(__this, _stringLiteral555, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		String_t* L_4 = ___prefix;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___prefix = L_5;
	}

IL_0042:
	{
		V_0 = 0;
		String_t* L_6 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m67(NULL /*static, unused*/, L_6, _stringLiteral437, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		V_0 = 1;
		String_t* L_8 = ___prefix;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m159(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_10 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Inequality_m172(NULL /*static, unused*/, L_10, _stringLiteral436, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		___prefix = _stringLiteral436;
	}

IL_0078:
	{
		goto IL_00ad;
	}

IL_007d:
	{
		String_t* L_12 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m67(NULL /*static, unused*/, L_12, _stringLiteral436, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00ab;
		}
	}
	{
		String_t* L_14 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m67(NULL /*static, unused*/, L_14, _stringLiteral436, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_16 = ___prefix;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m159(L_16, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 0;
	}

IL_00a9:
	{
		G_B18_0 = G_B16_0;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B18_0 = 1;
	}

IL_00ac:
	{
		V_0 = G_B18_0;
	}

IL_00ad:
	{
		bool L_18 = (__this->___namespaces_12);
		if (!L_18)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_19 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m67(NULL /*static, unused*/, L_19, _stringLiteral387, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d4;
		}
	}
	{
		___namespaceUri = _stringLiteral438;
		goto IL_00f3;
	}

IL_00d4:
	{
		String_t* L_21 = ___namespaceUri;
		if (L_21)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_22 = V_0;
		if (!L_22)
		{
			goto IL_00ec;
		}
	}
	{
		___namespaceUri = _stringLiteral437;
		goto IL_00f3;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___namespaceUri = L_23;
	}

IL_00f3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		String_t* L_25 = ___namespaceUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m172(NULL /*static, unused*/, L_25, _stringLiteral437, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral556, _stringLiteral437, /*hidden argument*/NULL);
		Exception_t33 * L_28 = XmlTextWriter_ArgumentError_m3799(__this, L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_28);
	}

IL_011f:
	{
		String_t* L_29 = ___prefix;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m159(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_31 = ___namespaceUri;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m159(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0162;
		}
	}
	{
		XmlNamespaceManager_t741 * L_33 = (__this->___nsmanager_19);
		String_t* L_34 = ___prefix;
		NullCheck(L_33);
		String_t* L_35 = XmlNamespaceManager_LookupNamespace_m3510(L_33, L_34, 0, /*hidden argument*/NULL);
		___namespaceUri = L_35;
		String_t* L_36 = ___namespaceUri;
		if (!L_36)
		{
			goto IL_0156;
		}
	}
	{
		String_t* L_37 = ___namespaceUri;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m159(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0162;
		}
	}

IL_0156:
	{
		Exception_t33 * L_39 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral547, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_39);
	}

IL_0162:
	{
		bool L_40 = V_0;
		if (L_40)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_41 = ___namespaceUri;
		NullCheck(L_41);
		int32_t L_42 = String_get_Length_m159(L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_43 = ___prefix;
		String_t* L_44 = ___localName;
		String_t* L_45 = ___namespaceUri;
		String_t* L_46 = XmlTextWriter_DetermineAttributePrefix_m3778(__this, L_43, L_44, L_45, /*hidden argument*/NULL);
		___prefix = L_46;
	}

IL_017f:
	{
		bool L_47 = (__this->___indent_attributes_30);
		if (!L_47)
		{
			goto IL_0195;
		}
	}
	{
		XmlTextWriter_WriteIndentAttribute_m3789(__this, /*hidden argument*/NULL);
		goto IL_01ad;
	}

IL_0195:
	{
		int32_t L_48 = (__this->___state_17);
		if (!L_48)
		{
			goto IL_01ad;
		}
	}
	{
		TextWriter_t769 * L_49 = (__this->___writer_5);
		NullCheck(L_49);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_49, ((int32_t)32));
	}

IL_01ad:
	{
		String_t* L_50 = ___prefix;
		NullCheck(L_50);
		int32_t L_51 = String_get_Length_m159(L_50, /*hidden argument*/NULL);
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_01d2;
		}
	}
	{
		TextWriter_t769 * L_52 = (__this->___writer_5);
		String_t* L_53 = ___prefix;
		NullCheck(L_52);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_52, L_53);
		TextWriter_t769 * L_54 = (__this->___writer_5);
		NullCheck(L_54);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_54, ((int32_t)58));
	}

IL_01d2:
	{
		TextWriter_t769 * L_55 = (__this->___writer_5);
		String_t* L_56 = ___localName;
		NullCheck(L_55);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_55, L_56);
		TextWriter_t769 * L_57 = (__this->___writer_5);
		NullCheck(L_57);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_57, ((int32_t)61));
		TextWriter_t769 * L_58 = (__this->___writer_5);
		uint16_t L_59 = (__this->___quote_char_31);
		NullCheck(L_58);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_58, L_59);
		bool L_60 = V_0;
		if (L_60)
		{
			goto IL_0212;
		}
	}
	{
		String_t* L_61 = ___prefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_62 = String_op_Equality_m67(NULL /*static, unused*/, L_61, _stringLiteral387, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_028b;
		}
	}

IL_0212:
	{
		StringWriter_t770 * L_63 = (__this->___preserver_6);
		if (L_63)
		{
			goto IL_022d;
		}
	}
	{
		StringWriter_t770 * L_64 = (StringWriter_t770 *)il2cpp_codegen_object_new (StringWriter_t770_il2cpp_TypeInfo_var);
		StringWriter__ctor_m3870(L_64, /*hidden argument*/NULL);
		__this->___preserver_6 = L_64;
		goto IL_023e;
	}

IL_022d:
	{
		StringWriter_t770 * L_65 = (__this->___preserver_6);
		NullCheck(L_65);
		StringBuilder_t320 * L_66 = (StringBuilder_t320 *)VirtFuncInvoker0< StringBuilder_t320 * >::Invoke(18 /* System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder() */, L_65);
		NullCheck(L_66);
		StringBuilder_set_Length_m3838(L_66, 0, /*hidden argument*/NULL);
	}

IL_023e:
	{
		StringWriter_t770 * L_67 = (__this->___preserver_6);
		__this->___writer_5 = L_67;
		bool L_68 = V_0;
		if (L_68)
		{
			goto IL_0263;
		}
	}
	{
		__this->___is_preserved_xmlns_8 = 0;
		String_t* L_69 = ___localName;
		__this->___preserved_name_7 = L_69;
		goto IL_028b;
	}

IL_0263:
	{
		__this->___is_preserved_xmlns_8 = 1;
		String_t* L_70 = ___localName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_71 = String_op_Equality_m67(NULL /*static, unused*/, L_70, _stringLiteral436, /*hidden argument*/NULL);
		G_B51_0 = __this;
		if (!L_71)
		{
			G_B52_0 = __this;
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B53_0 = L_72;
		G_B53_1 = G_B51_0;
		goto IL_0286;
	}

IL_0285:
	{
		String_t* L_73 = ___localName;
		G_B53_0 = L_73;
		G_B53_1 = G_B52_0;
	}

IL_0286:
	{
		NullCheck(G_B53_1);
		G_B53_1->___preserved_name_7 = G_B53_0;
	}

IL_028b:
	{
		__this->___state_17 = 3;
		return;
	}
}
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* XmlTextWriter_DetermineAttributePrefix_m3778 (XmlTextWriter_t767 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___prefix;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m159(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = ___ns;
		String_t* L_3 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_2);
		___prefix = L_3;
		String_t* L_4 = ___prefix;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = ___prefix;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m159(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = ___prefix;
		return L_7;
	}

IL_002a:
	{
		V_0 = 1;
		goto IL_009a;
	}

IL_0031:
	{
		XmlNamespaceManager_t741 * L_8 = (__this->___nsmanager_19);
		NullCheck(L_8);
		XmlNameTable_t697 * L_9 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(6 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_8);
		String_t* L_10 = ___prefix;
		NullCheck(L_9);
		String_t* L_11 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_9, L_10);
		___prefix = L_11;
		XmlNamespaceManager_t741 * L_12 = (__this->___nsmanager_19);
		String_t* L_13 = ___prefix;
		NullCheck(L_12);
		String_t* L_14 = XmlNamespaceManager_LookupNamespace_m3510(L_12, L_13, 1, /*hidden argument*/NULL);
		V_1 = L_14;
		String_t* L_15 = V_1;
		String_t* L_16 = ___ns;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m67(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_18 = ___prefix;
		return L_18;
	}

IL_0060:
	{
		String_t* L_19 = V_1;
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		XmlNamespaceManager_t741 * L_20 = (__this->___nsmanager_19);
		String_t* L_21 = ___prefix;
		String_t* L_22 = V_1;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_20, L_21, L_22);
		XmlNamespaceManager_t741 * L_23 = (__this->___nsmanager_19);
		String_t* L_24 = ___prefix;
		NullCheck(L_23);
		String_t* L_25 = XmlNamespaceManager_LookupNamespace_m3510(L_23, L_24, 1, /*hidden argument*/NULL);
		String_t* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Inequality_m172(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		V_0 = 1;
		XmlNamespaceManager_t741 * L_28 = (__this->___nsmanager_19);
		String_t* L_29 = ___prefix;
		String_t* L_30 = V_1;
		NullCheck(L_28);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_28, L_29, L_30);
	}

IL_009a:
	{
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_32 = ___ns;
		String_t* L_33 = XmlTextWriter_MockupPrefix_m3779(__this, L_32, 1, /*hidden argument*/NULL);
		___prefix = L_33;
	}

IL_00aa:
	{
		Stack_t719 * L_34 = (__this->___new_local_namespaces_22);
		String_t* L_35 = ___prefix;
		NullCheck(L_34);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_34, L_35);
		XmlNamespaceManager_t741 * L_36 = (__this->___nsmanager_19);
		String_t* L_37 = ___prefix;
		String_t* L_38 = ___ns;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_36, L_37, L_38);
		String_t* L_39 = ___prefix;
		return L_39;
	}
}
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
// System.Xml.XmlTextWriter/StringUtil
#include "System_Xml_System_Xml_XmlTextWriter_StringUtilMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t61_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern TypeInfo* StringUtil_t764_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral557;
extern "C" String_t* XmlTextWriter_MockupPrefix_m3779 (XmlTextWriter_t767 * __this, String_t* ___ns, bool ___skipLookup, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		StringUtil_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		_stringLiteral557 = il2cpp_codegen_string_literal_from_index(557);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	String_t* G_B3_0 = {0};
	{
		bool L_0 = ___skipLookup;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_1 = ___ns;
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_1);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m159(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0028:
	{
		V_1 = 1;
		goto IL_00b2;
	}

IL_002f:
	{
		ObjectU5BU5D_t61* L_7 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 2));
		int32_t L_8 = (__this->___open_count_20);
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t61* L_11 = L_7;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1, sizeof(Object_t *))) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t764_il2cpp_TypeInfo_var);
		String_t* L_15 = StringUtil_Format_m3761(NULL /*static, unused*/, _stringLiteral557, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		Stack_t719 * L_16 = (__this->___new_local_namespaces_22);
		String_t* L_17 = V_0;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(13 /* System.Boolean System.Collections.Stack::Contains(System.Object) */, L_16, L_17);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00ae;
	}

IL_006d:
	{
		XmlNamespaceManager_t741 * L_19 = (__this->___nsmanager_19);
		XmlNamespaceManager_t741 * L_20 = (__this->___nsmanager_19);
		NullCheck(L_20);
		XmlNameTable_t697 * L_21 = (XmlNameTable_t697 *)VirtFuncInvoker0< XmlNameTable_t697 * >::Invoke(6 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_20);
		String_t* L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_21, L_22);
		NullCheck(L_19);
		String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_19, L_23);
		if (!L_24)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00ae;
	}

IL_0093:
	{
		XmlNamespaceManager_t741 * L_25 = (__this->___nsmanager_19);
		String_t* L_26 = V_0;
		String_t* L_27 = ___ns;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_25, L_26, L_27);
		Stack_t719 * L_28 = (__this->___new_local_namespaces_22);
		String_t* L_29 = V_0;
		NullCheck(L_28);
		VirtActionInvoker1< Object_t * >::Invoke(18 /* System.Void System.Collections.Stack::Push(System.Object) */, L_28, L_29);
		String_t* L_30 = V_0;
		return L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00b2:
	{
		goto IL_002f;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t767_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t202_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1931_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral558;
extern Il2CppCodeGenString* _stringLiteral559;
extern Il2CppCodeGenString* _stringLiteral560;
extern Il2CppCodeGenString* _stringLiteral479;
extern Il2CppCodeGenString* _stringLiteral480;
extern Il2CppCodeGenString* _stringLiteral482;
extern Il2CppCodeGenString* _stringLiteral481;
extern Il2CppCodeGenString* _stringLiteral561;
extern "C" void XmlTextWriter_WriteEndAttribute_m3780 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		XmlTextWriter_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		Dictionary_2_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		Dictionary_2__ctor_m1931_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		_stringLiteral558 = il2cpp_codegen_string_literal_from_index(558);
		_stringLiteral559 = il2cpp_codegen_string_literal_from_index(559);
		_stringLiteral560 = il2cpp_codegen_string_literal_from_index(560);
		_stringLiteral479 = il2cpp_codegen_string_literal_from_index(479);
		_stringLiteral480 = il2cpp_codegen_string_literal_from_index(480);
		_stringLiteral482 = il2cpp_codegen_string_literal_from_index(482);
		_stringLiteral481 = il2cpp_codegen_string_literal_from_index(481);
		_stringLiteral561 = il2cpp_codegen_string_literal_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	Dictionary_2_t202 * V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	{
		int32_t L_0 = (__this->___state_17);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		Exception_t33 * L_1 = XmlTextWriter_StateError_m3801(__this, _stringLiteral558, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		TextWriter_t769 * L_2 = (__this->___writer_5);
		StringWriter_t770 * L_3 = (__this->___preserver_6);
		if ((!(((Object_t*)(TextWriter_t769 *)L_2) == ((Object_t*)(StringWriter_t770 *)L_3))))
		{
			goto IL_02e2;
		}
	}
	{
		TextWriter_t769 * L_4 = (__this->___source_4);
		__this->___writer_5 = L_4;
		StringWriter_t770 * L_5 = (__this->___preserver_6);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_5);
		V_0 = L_6;
		bool L_7 = (__this->___is_preserved_xmlns_8);
		if (!L_7)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_8 = (__this->___preserved_name_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m159(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m159(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		Exception_t33 * L_12 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral559, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0074:
	{
		XmlNamespaceManager_t741 * L_13 = (__this->___nsmanager_19);
		String_t* L_14 = (__this->___preserved_name_7);
		NullCheck(L_13);
		String_t* L_15 = XmlNamespaceManager_LookupNamespace_m3510(L_13, L_14, 0, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = (__this->___namespace_handling_24);
		if (!((int32_t)((int32_t)L_16&(int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_17 = V_1;
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Inequality_m172(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}

IL_00a0:
	{
		ArrayList_t695 * L_20 = (__this->___explicit_nsdecls_23);
		String_t* L_21 = (__this->___preserved_name_7);
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00b2:
	{
		int32_t L_22 = (__this->___open_count_20);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_018c;
		}
	}
	{
		bool L_23 = (__this->___v2_32);
		if (!L_23)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_24 = (__this->___elements_21);
		int32_t L_25 = (__this->___open_count_20);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)L_25-(int32_t)1)));
		int32_t L_26 = ((int32_t)((int32_t)L_25-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_24, L_26, sizeof(XmlNodeInfo_t763 *))));
		String_t* L_27 = ((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_24, L_26, sizeof(XmlNodeInfo_t763 *)))->___Prefix_0);
		String_t* L_28 = (__this->___preserved_name_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m67(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_30 = (__this->___elements_21);
		int32_t L_31 = (__this->___open_count_20);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)L_31-(int32_t)1)));
		int32_t L_32 = ((int32_t)((int32_t)L_31-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_30, L_32, sizeof(XmlNodeInfo_t763 *))));
		String_t* L_33 = ((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_30, L_32, sizeof(XmlNodeInfo_t763 *)))->___NS_2);
		String_t* L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Inequality_m172(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_36 = (__this->___preserved_name_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m1684(NULL /*static, unused*/, _stringLiteral560, L_36, /*hidden argument*/NULL);
		XmlException_t731 * L_38 = (XmlException_t731 *)il2cpp_codegen_object_new (XmlException_t731_il2cpp_TypeInfo_var);
		XmlException__ctor_m3453(L_38, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_38);
	}

IL_0122:
	{
		XmlNodeInfoU5BU5D_t771* L_39 = (__this->___elements_21);
		int32_t L_40 = (__this->___open_count_20);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)L_40-(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)L_40-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_39, L_41, sizeof(XmlNodeInfo_t763 *))));
		String_t* L_42 = ((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_39, L_41, sizeof(XmlNodeInfo_t763 *)))->___NS_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_44 = String_op_Equality_m67(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_016e;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_45 = (__this->___elements_21);
		int32_t L_46 = (__this->___open_count_20);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)L_46-(int32_t)1)));
		int32_t L_47 = ((int32_t)((int32_t)L_46-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_45, L_47, sizeof(XmlNodeInfo_t763 *))));
		String_t* L_48 = ((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_45, L_47, sizeof(XmlNodeInfo_t763 *)))->___Prefix_0);
		String_t* L_49 = (__this->___preserved_name_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m67(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_018c;
	}

IL_016e:
	{
		String_t* L_51 = V_1;
		String_t* L_52 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Inequality_m172(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_018c;
		}
	}
	{
		XmlNamespaceManager_t741 * L_54 = (__this->___nsmanager_19);
		String_t* L_55 = (__this->___preserved_name_7);
		String_t* L_56 = V_0;
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_54, L_55, L_56);
	}

IL_018c:
	{
		goto IL_02d6;
	}

IL_0191:
	{
		String_t* L_57 = (__this->___preserved_name_7);
		V_2 = L_57;
		String_t* L_58 = V_2;
		if (!L_58)
		{
			goto IL_02d6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_59 = ((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map54_34;
		if (L_59)
		{
			goto IL_01cd;
		}
	}
	{
		Dictionary_2_t202 * L_60 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_60, 2, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_3 = L_60;
		Dictionary_2_t202 * L_61 = V_3;
		NullCheck(L_61);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_61, _stringLiteral479, 0);
		Dictionary_2_t202 * L_62 = V_3;
		NullCheck(L_62);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_62, _stringLiteral480, 1);
		Dictionary_2_t202 * L_63 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map54_34 = L_63;
	}

IL_01cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_64 = ((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map54_34;
		String_t* L_65 = V_2;
		NullCheck(L_64);
		bool L_66 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_64, L_65, (&V_4));
		if (!L_66)
		{
			goto IL_02d6;
		}
	}
	{
		int32_t L_67 = V_4;
		if (!L_67)
		{
			goto IL_01f3;
		}
	}
	{
		int32_t L_68 = V_4;
		if ((((int32_t)L_68) == ((int32_t)1)))
		{
			goto IL_0219;
		}
	}
	{
		goto IL_02d6;
	}

IL_01f3:
	{
		int32_t L_69 = (__this->___open_count_20);
		if ((((int32_t)L_69) <= ((int32_t)0)))
		{
			goto IL_0214;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_70 = (__this->___elements_21);
		int32_t L_71 = (__this->___open_count_20);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)((int32_t)L_71-(int32_t)1)));
		int32_t L_72 = ((int32_t)((int32_t)L_71-(int32_t)1));
		String_t* L_73 = V_0;
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_70, L_72, sizeof(XmlNodeInfo_t763 *))));
		(*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_70, L_72, sizeof(XmlNodeInfo_t763 *)))->___XmlLang_5 = L_73;
	}

IL_0214:
	{
		goto IL_02d6;
	}

IL_0219:
	{
		String_t* L_74 = V_0;
		V_5 = L_74;
		String_t* L_75 = V_5;
		if (!L_75)
		{
			goto IL_02c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_76 = ((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map53_33;
		if (L_76)
		{
			goto IL_0252;
		}
	}
	{
		Dictionary_2_t202 * L_77 = (Dictionary_2_t202 *)il2cpp_codegen_object_new (Dictionary_2_t202_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1931(L_77, 2, /*hidden argument*/Dictionary_2__ctor_m1931_MethodInfo_var);
		V_3 = L_77;
		Dictionary_2_t202 * L_78 = V_3;
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_78, _stringLiteral482, 0);
		Dictionary_2_t202 * L_79 = V_3;
		NullCheck(L_79);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_79, _stringLiteral481, 1);
		Dictionary_2_t202 * L_80 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map53_33 = L_80;
	}

IL_0252:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		Dictionary_2_t202 * L_81 = ((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map53_33;
		String_t* L_82 = V_5;
		NullCheck(L_81);
		bool L_83 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_81, L_82, (&V_6));
		if (!L_83)
		{
			goto IL_02c5;
		}
	}
	{
		int32_t L_84 = V_6;
		if (!L_84)
		{
			goto IL_0279;
		}
	}
	{
		int32_t L_85 = V_6;
		if ((((int32_t)L_85) == ((int32_t)1)))
		{
			goto IL_029f;
		}
	}
	{
		goto IL_02c5;
	}

IL_0279:
	{
		int32_t L_86 = (__this->___open_count_20);
		if ((((int32_t)L_86) <= ((int32_t)0)))
		{
			goto IL_029a;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_87 = (__this->___elements_21);
		int32_t L_88 = (__this->___open_count_20);
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, ((int32_t)((int32_t)L_88-(int32_t)1)));
		int32_t L_89 = ((int32_t)((int32_t)L_88-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_87, L_89, sizeof(XmlNodeInfo_t763 *))));
		(*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_87, L_89, sizeof(XmlNodeInfo_t763 *)))->___XmlSpace_6 = 1;
	}

IL_029a:
	{
		goto IL_02d1;
	}

IL_029f:
	{
		int32_t L_90 = (__this->___open_count_20);
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_02c0;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_91 = (__this->___elements_21);
		int32_t L_92 = (__this->___open_count_20);
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, ((int32_t)((int32_t)L_92-(int32_t)1)));
		int32_t L_93 = ((int32_t)((int32_t)L_92-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_91, L_93, sizeof(XmlNodeInfo_t763 *))));
		(*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_91, L_93, sizeof(XmlNodeInfo_t763 *)))->___XmlSpace_6 = 2;
	}

IL_02c0:
	{
		goto IL_02d1;
	}

IL_02c5:
	{
		Exception_t33 * L_94 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral561, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_94);
	}

IL_02d1:
	{
		goto IL_02d6;
	}

IL_02d6:
	{
		TextWriter_t769 * L_95 = (__this->___writer_5);
		String_t* L_96 = V_0;
		NullCheck(L_95);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_95, L_96);
	}

IL_02e2:
	{
		TextWriter_t769 * L_97 = (__this->___writer_5);
		uint16_t L_98 = (__this->___quote_char_31);
		NullCheck(L_97);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_97, L_98);
		__this->___state_17 = 2;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern TypeInfo* StringUtil_t764_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral562;
extern Il2CppCodeGenString* _stringLiteral563;
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral564;
extern Il2CppCodeGenString* _stringLiteral565;
extern Il2CppCodeGenString* _stringLiteral566;
extern Il2CppCodeGenString* _stringLiteral567;
extern "C" void XmlTextWriter_WriteComment_m3781 (XmlTextWriter_t767 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringUtil_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		_stringLiteral562 = il2cpp_codegen_string_literal_from_index(562);
		_stringLiteral563 = il2cpp_codegen_string_literal_from_index(563);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral564 = il2cpp_codegen_string_literal_from_index(564);
		_stringLiteral565 = il2cpp_codegen_string_literal_from_index(565);
		_stringLiteral566 = il2cpp_codegen_string_literal_from_index(566);
		_stringLiteral567 = il2cpp_codegen_string_literal_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t33 * L_1 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral562, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m159(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = ___text;
		String_t* L_5 = ___text;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m159(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		uint16_t L_7 = String_get_Chars_m1913(L_4, ((int32_t)((int32_t)L_6-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_003f;
		}
	}
	{
		Exception_t33 * L_8 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral563, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_003f:
	{
		String_t* L_9 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t764_il2cpp_TypeInfo_var);
		int32_t L_10 = StringUtil_IndexOf_m3760(NULL /*static, unused*/, L_9, _stringLiteral192, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		Exception_t33 * L_11 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral564, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_005c:
	{
		int32_t L_12 = (__this->___state_17);
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_13 = (__this->___state_17);
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}

IL_0074:
	{
		XmlTextWriter_CloseStartElement_m3772(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
		XmlTextWriter_WriteIndent_m3787(__this, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_m3792(__this, _stringLiteral565, 0, 0, 0, /*hidden argument*/NULL);
		TextWriter_t769 * L_14 = (__this->___writer_5);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_14, _stringLiteral566);
		TextWriter_t769 * L_15 = (__this->___writer_5);
		String_t* L_16 = ___text;
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t769 * L_17 = (__this->___writer_5);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_17, _stringLiteral567);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern TypeInfo* StringUtil_t764_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral539;
extern Il2CppCodeGenString* _stringLiteral562;
extern Il2CppCodeGenString* _stringLiteral568;
extern Il2CppCodeGenString* _stringLiteral398;
extern Il2CppCodeGenString* _stringLiteral569;
extern Il2CppCodeGenString* _stringLiteral570;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral571;
extern "C" void XmlTextWriter_WriteProcessingInstruction_m3782 (XmlTextWriter_t767 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		StringUtil_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral539 = il2cpp_codegen_string_literal_from_index(539);
		_stringLiteral562 = il2cpp_codegen_string_literal_from_index(562);
		_stringLiteral568 = il2cpp_codegen_string_literal_from_index(568);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		_stringLiteral569 = il2cpp_codegen_string_literal_from_index(569);
		_stringLiteral570 = il2cpp_codegen_string_literal_from_index(570);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral571 = il2cpp_codegen_string_literal_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t33 * L_1 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral539, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Exception_t33 * L_3 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral562, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0024:
	{
		XmlTextWriter_WriteIndent_m3787(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_5 = XmlChar_IsName_m3446(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		Exception_t33 * L_6 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral568, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0041:
	{
		String_t* L_7 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t764_il2cpp_TypeInfo_var);
		int32_t L_8 = StringUtil_IndexOf_m3760(NULL /*static, unused*/, L_7, _stringLiteral398, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Exception_t33 * L_9 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral569, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_005e:
	{
		String_t* L_10 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m67(NULL /*static, unused*/, L_10, _stringLiteral387, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_m3792(__this, _stringLiteral570, 0, L_11, 0, /*hidden argument*/NULL);
		TextWriter_t769 * L_12 = (__this->___writer_5);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral571);
		TextWriter_t769 * L_13 = (__this->___writer_5);
		String_t* L_14 = ___name;
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		TextWriter_t769 * L_15 = (__this->___writer_5);
		NullCheck(L_15);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_15, ((int32_t)32));
		TextWriter_t769 * L_16 = (__this->___writer_5);
		String_t* L_17 = ___text;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, L_17);
		TextWriter_t769 * L_18 = (__this->___writer_5);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteral398);
		int32_t L_19 = (__this->___state_17);
		if (L_19)
		{
			goto IL_00cd;
		}
	}
	{
		__this->___state_17 = 1;
	}

IL_00cd:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral562;
extern Il2CppCodeGenString* _stringLiteral572;
extern Il2CppCodeGenString* _stringLiteral573;
extern "C" void XmlTextWriter_WriteWhitespace_m3783 (XmlTextWriter_t767 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		_stringLiteral562 = il2cpp_codegen_string_literal_from_index(562);
		_stringLiteral572 = il2cpp_codegen_string_literal_from_index(572);
		_stringLiteral573 = il2cpp_codegen_string_literal_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t33 * L_1 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral562, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m159(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		int32_t L_5 = XmlChar_IndexOfNonWhitespace_m3440(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		Exception_t33 * L_6 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral572, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0035:
	{
		XmlTextWriter_ShiftStateTopLevel_m3792(__this, _stringLiteral573, 1, 0, 1, /*hidden argument*/NULL);
		TextWriter_t769 * L_7 = (__this->___writer_5);
		String_t* L_8 = ___text;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringUtil_t764_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral574;
extern Il2CppCodeGenString* _stringLiteral575;
extern Il2CppCodeGenString* _stringLiteral576;
extern Il2CppCodeGenString* _stringLiteral577;
extern "C" void XmlTextWriter_WriteCData_m3784 (XmlTextWriter_t767 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringUtil_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		_stringLiteral574 = il2cpp_codegen_string_literal_from_index(574);
		_stringLiteral575 = il2cpp_codegen_string_literal_from_index(575);
		_stringLiteral576 = il2cpp_codegen_string_literal_from_index(576);
		_stringLiteral577 = il2cpp_codegen_string_literal_from_index(577);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___text = L_1;
	}

IL_000d:
	{
		XmlTextWriter_ShiftStateContent_m3794(__this, _stringLiteral574, 0, /*hidden argument*/NULL);
		String_t* L_2 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t764_il2cpp_TypeInfo_var);
		int32_t L_3 = StringUtil_IndexOf_m3760(NULL /*static, unused*/, L_2, _stringLiteral575, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		Exception_t33 * L_4 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral576, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0036:
	{
		TextWriter_t769 * L_5 = (__this->___writer_5);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral577);
		String_t* L_6 = ___text;
		XmlTextWriter_WriteCheckedString_m3796(__this, L_6, /*hidden argument*/NULL);
		TextWriter_t769 * L_7 = (__this->___writer_5);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteral575);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern Il2CppCodeGenString* _stringLiteral82;
extern "C" void XmlTextWriter_WriteString_m3785 (XmlTextWriter_t767 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral82 = il2cpp_codegen_string_literal_from_index(82);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___text;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m159(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = (__this->___v2_32);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		XmlTextWriter_ShiftStateContent_m3794(__this, _stringLiteral82, 1, /*hidden argument*/NULL);
		String_t* L_4 = ___text;
		int32_t L_5 = (__this->___state_17);
		XmlTextWriter_WriteEscapedString_m3795(__this, L_4, ((((int32_t)L_5) == ((int32_t)3))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral539;
extern Il2CppCodeGenString* _stringLiteral578;
extern Il2CppCodeGenString* _stringLiteral579;
extern "C" void XmlTextWriter_WriteEntityRef_m3786 (XmlTextWriter_t767 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		_stringLiteral539 = il2cpp_codegen_string_literal_from_index(539);
		_stringLiteral578 = il2cpp_codegen_string_literal_from_index(578);
		_stringLiteral579 = il2cpp_codegen_string_literal_from_index(579);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t33 * L_1 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral539, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m3446(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t33 * L_4 = XmlTextWriter_ArgumentError_m3799(__this, _stringLiteral578, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0029:
	{
		XmlTextWriter_ShiftStateContent_m3794(__this, _stringLiteral579, 1, /*hidden argument*/NULL);
		TextWriter_t769 * L_5 = (__this->___writer_5);
		NullCheck(L_5);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)38));
		TextWriter_t769 * L_6 = (__this->___writer_5);
		String_t* L_7 = ___name;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_7);
		TextWriter_t769 * L_8 = (__this->___writer_5);
		NullCheck(L_8);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)59));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C" void XmlTextWriter_WriteIndent_m3787 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteIndentCore_m3790(__this, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C" void XmlTextWriter_WriteIndentEndElement_m3788 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		XmlTextWriter_WriteIndentCore_m3790(__this, (-1), 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C" void XmlTextWriter_WriteIndentAttribute_m3789 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		bool L_0 = XmlTextWriter_WriteIndentCore_m3790(__this, 0, 1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		TextWriter_t769 * L_1 = (__this->___writer_5);
		NullCheck(L_1);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)32));
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool XmlTextWriter_WriteIndentCore_m3790 (XmlTextWriter_t767 * __this, int32_t ___nestFix, bool ___attribute, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->___indent_25);
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
		int32_t L_1 = (__this->___open_count_20);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0039;
	}

IL_001b:
	{
		bool L_2 = ___attribute;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_3 = (__this->___elements_21);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_3, L_5, sizeof(XmlNodeInfo_t763 *))));
		bool L_6 = ((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_3, L_5, sizeof(XmlNodeInfo_t763 *)))->___HasSimple_3);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = (__this->___state_17);
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t769 * L_10 = (__this->___writer_5);
		String_t* L_11 = (__this->___newline_29);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, L_11);
	}

IL_005c:
	{
		V_1 = 0;
		goto IL_0078;
	}

IL_0063:
	{
		TextWriter_t769 * L_12 = (__this->___writer_5);
		String_t* L_13 = (__this->___indent_string_28);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = (__this->___open_count_20);
		int32_t L_17 = ___nestFix;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)L_16+(int32_t)L_17)))))
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}
}
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C" void XmlTextWriter_OutputAutoStartDocument_m3791 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_17);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		XmlTextWriter_WriteStartDocumentCore_m3769(__this, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateTopLevel_m3792 (XmlTextWriter_t767 * __this, String_t* ___occured, bool ___allowAttribute, bool ___dontCheckXmlDecl, bool ___isCharacter, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___state_17);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0036;
		}
		if (L_1 == 1)
		{
			goto IL_00a1;
		}
		if (L_1 == 2)
		{
			goto IL_0077;
		}
		if (L_1 == 3)
		{
			goto IL_0067;
		}
		if (L_1 == 4)
		{
			goto IL_008f;
		}
		if (L_1 == 5)
		{
			goto IL_002e;
		}
		if (L_1 == 6)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured;
		Exception_t33 * L_3 = XmlTextWriter_StateError_m3801(__this, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0036:
	{
		bool L_4 = ___isCharacter;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m3793(__this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_5 = (__this->___xmldecl_state_13);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		bool L_6 = ___dontCheckXmlDecl;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m3791(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		__this->___state_17 = 1;
		goto IL_00a1;
	}

IL_0067:
	{
		bool L_7 = ___allowAttribute;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		goto IL_00a1;
	}

IL_0072:
	{
		goto IL_002e;
	}

IL_0077:
	{
		bool L_8 = ___isCharacter;
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m3793(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		XmlTextWriter_CloseStartElement_m3772(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008f:
	{
		bool L_9 = ___isCharacter;
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m3793(__this, /*hidden argument*/NULL);
	}

IL_009c:
	{
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C" void XmlTextWriter_CheckMixedContentState_m3793 (XmlTextWriter_t767 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___open_count_20);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		XmlNodeInfoU5BU5D_t771* L_1 = (__this->___elements_21);
		int32_t L_2 = (__this->___open_count_20);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		NullCheck((*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_1, L_3, sizeof(XmlNodeInfo_t763 *))));
		(*(XmlNodeInfo_t763 **)(XmlNodeInfo_t763 **)SZArrayLdElema(L_1, L_3, sizeof(XmlNodeInfo_t763 *)))->___HasSimple_3 = 1;
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateContent_m3794 (XmlTextWriter_t767 * __this, String_t* ___occured, bool ___allowAttribute, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___state_17);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0036;
		}
		if (L_1 == 1)
		{
			goto IL_0036;
		}
		if (L_1 == 2)
		{
			goto IL_0085;
		}
		if (L_1 == 3)
		{
			goto IL_0075;
		}
		if (L_1 == 4)
		{
			goto IL_0096;
		}
		if (L_1 == 5)
		{
			goto IL_002e;
		}
		if (L_1 == 6)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured;
		Exception_t33 * L_3 = XmlTextWriter_StateError_m3801(__this, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0036:
	{
		bool L_4 = (__this->___allow_doc_fragment_9);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = (__this->___is_document_entity_16);
		if (!L_5)
		{
			goto IL_0051;
		}
	}

IL_004c:
	{
		goto IL_002e;
	}

IL_0051:
	{
		int32_t L_6 = (__this->___xmldecl_state_13);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0063;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m3791(__this, /*hidden argument*/NULL);
	}

IL_0063:
	{
		XmlTextWriter_CheckMixedContentState_m3793(__this, /*hidden argument*/NULL);
		__this->___state_17 = 4;
		goto IL_00a1;
	}

IL_0075:
	{
		bool L_7 = ___allowAttribute;
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00a1;
	}

IL_0080:
	{
		goto IL_002e;
	}

IL_0085:
	{
		XmlTextWriter_CloseStartElement_m3772(__this, /*hidden argument*/NULL);
		XmlTextWriter_CheckMixedContentState_m3793(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0096:
	{
		XmlTextWriter_CheckMixedContentState_m3793(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern TypeInfo* XmlTextWriter_t767_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteEscapedString_m3795 (XmlTextWriter_t767 * __this, String_t* ___text, bool ___isAttribute, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlTextWriter_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t60* V_0 = {0};
	int32_t V_1 = 0;
	CharU5BU5D_t60* V_2 = {0};
	CharU5BU5D_t60* G_B3_0 = {0};
	{
		bool L_0 = ___isAttribute;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		CharU5BU5D_t60* L_1 = ((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___escaped_attr_chars_2;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t767_il2cpp_TypeInfo_var);
		CharU5BU5D_t60* L_2 = ((XmlTextWriter_t767_StaticFields*)XmlTextWriter_t767_il2cpp_TypeInfo_var->static_fields)->___escaped_text_chars_1;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		String_t* L_3 = ___text;
		CharU5BU5D_t60* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m3882(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_7 = ___text;
		NullCheck(L_7);
		CharU5BU5D_t60* L_8 = String_ToCharArray_m173(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		CharU5BU5D_t60* L_9 = V_2;
		int32_t L_10 = V_1;
		XmlTextWriter_WriteCheckedBuffer_m3797(__this, L_9, 0, L_10, /*hidden argument*/NULL);
		CharU5BU5D_t60* L_11 = V_2;
		int32_t L_12 = V_1;
		CharU5BU5D_t60* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = V_1;
		bool L_15 = ___isAttribute;
		XmlTextWriter_WriteEscapedBuffer_m3798(__this, L_11, L_12, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_13)->max_length)))-(int32_t)L_14)), L_15, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0048:
	{
		String_t* L_16 = ___text;
		XmlTextWriter_WriteCheckedString_m3796(__this, L_16, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern "C" void XmlTextWriter_WriteCheckedString_m3796 (XmlTextWriter_t767 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t60* V_1 = {0};
	{
		String_t* L_0 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		int32_t L_1 = XmlChar_IndexOfInvalid_m3443(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_3 = ___s;
		NullCheck(L_3);
		CharU5BU5D_t60* L_4 = String_ToCharArray_m173(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		TextWriter_t769 * L_5 = (__this->___writer_5);
		CharU5BU5D_t60* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		VirtActionInvoker3< CharU5BU5D_t60*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		CharU5BU5D_t60* L_8 = V_1;
		int32_t L_9 = V_0;
		CharU5BU5D_t60* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m3797(__this, L_8, L_9, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)L_11)), /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0036:
	{
		TextWriter_t769 * L_12 = (__this->___writer_5);
		String_t* L_13 = ___s;
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_13);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern TypeInfo* Int32_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t608_il2cpp_TypeInfo_var;
extern TypeInfo* XmlChar_t729_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral580;
extern Il2CppCodeGenString* _stringLiteral581;
extern Il2CppCodeGenString* _stringLiteral582;
extern "C" void XmlTextWriter_WriteCheckedBuffer_m3797 (XmlTextWriter_t767 * __this, CharU5BU5D_t60* ___text, int32_t ___idx, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CultureInfo_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		XmlChar_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		_stringLiteral580 = il2cpp_codegen_string_literal_from_index(580);
		_stringLiteral581 = il2cpp_codegen_string_literal_from_index(581);
		_stringLiteral582 = il2cpp_codegen_string_literal_from_index(582);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___idx;
		V_0 = L_0;
		int32_t L_1 = ___idx;
		int32_t L_2 = ___length;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		goto IL_0096;
	}

IL_000b:
	{
		bool L_3 = (__this->___check_character_validity_14);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = ___idx;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_5);
		CharU5BU5D_t60* L_7 = ___text;
		int32_t L_8 = ___idx;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		int32_t L_10 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_7, L_9, sizeof(uint16_t)));
		Object_t * L_11 = Box(Int32_t37_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m3827(NULL /*static, unused*/, _stringLiteral580, L_6, L_11, /*hidden argument*/NULL);
		Exception_t33 * L_13 = XmlTextWriter_ArgumentError_m3799(__this, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_0035:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___idx;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_t769 * L_16 = (__this->___writer_5);
		CharU5BU5D_t60* L_17 = ___text;
		int32_t L_18 = V_0;
		int32_t L_19 = ___idx;
		int32_t L_20 = V_0;
		NullCheck(L_16);
		VirtActionInvoker3< CharU5BU5D_t60*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_16, L_17, L_18, ((int32_t)((int32_t)L_19-(int32_t)L_20)));
	}

IL_004c:
	{
		TextWriter_t769 * L_21 = (__this->___writer_5);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_21, _stringLiteral581);
		TextWriter_t769 * L_22 = (__this->___writer_5);
		CharU5BU5D_t60* L_23 = ___text;
		int32_t L_24 = ___idx;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25, sizeof(uint16_t)));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t608_il2cpp_TypeInfo_var);
		CultureInfo_t608 * L_26 = CultureInfo_get_InvariantCulture_m3830(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_27 = Int32_ToString_m3883((&V_2), _stringLiteral582, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, L_27);
		TextWriter_t769 * L_28 = (__this->___writer_5);
		NullCheck(L_28);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_28, ((int32_t)59));
		int32_t L_29 = ___length;
		int32_t L_30 = ___idx;
		int32_t L_31 = V_0;
		___length = ((int32_t)((int32_t)L_29-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30-(int32_t)L_31))+(int32_t)1))));
		int32_t L_32 = ___idx;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0096:
	{
		CharU5BU5D_t60* L_33 = ___text;
		int32_t L_34 = V_0;
		int32_t L_35 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t729_il2cpp_TypeInfo_var);
		int32_t L_36 = XmlChar_IndexOfInvalid_m3444(NULL /*static, unused*/, L_33, L_34, L_35, 1, /*hidden argument*/NULL);
		int32_t L_37 = L_36;
		___idx = L_37;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) >= ((int32_t)L_39)))
		{
			goto IL_00bf;
		}
	}
	{
		TextWriter_t769 * L_40 = (__this->___writer_5);
		CharU5BU5D_t60* L_41 = ___text;
		int32_t L_42 = V_0;
		int32_t L_43 = V_1;
		int32_t L_44 = V_0;
		NullCheck(L_40);
		VirtActionInvoker3< CharU5BU5D_t60*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_40, L_41, L_42, ((int32_t)((int32_t)L_43-(int32_t)L_44)));
	}

IL_00bf:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern Il2CppCodeGenString* _stringLiteral583;
extern Il2CppCodeGenString* _stringLiteral584;
extern Il2CppCodeGenString* _stringLiteral585;
extern Il2CppCodeGenString* _stringLiteral586;
extern Il2CppCodeGenString* _stringLiteral587;
extern Il2CppCodeGenString* _stringLiteral588;
extern Il2CppCodeGenString* _stringLiteral589;
extern "C" void XmlTextWriter_WriteEscapedBuffer_m3798 (XmlTextWriter_t767 * __this, CharU5BU5D_t60* ___text, int32_t ___index, int32_t ___length, bool ___isAttribute, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral583 = il2cpp_codegen_string_literal_from_index(583);
		_stringLiteral584 = il2cpp_codegen_string_literal_from_index(584);
		_stringLiteral585 = il2cpp_codegen_string_literal_from_index(585);
		_stringLiteral586 = il2cpp_codegen_string_literal_from_index(586);
		_stringLiteral587 = il2cpp_codegen_string_literal_from_index(587);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		_stringLiteral589 = il2cpp_codegen_string_literal_from_index(589);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	int32_t V_5 = {0};
	TextWriter_t769 * G_B30_0 = {0};
	TextWriter_t769 * G_B29_0 = {0};
	String_t* G_B31_0 = {0};
	TextWriter_t769 * G_B31_1 = {0};
	TextWriter_t769 * G_B37_0 = {0};
	TextWriter_t769 * G_B36_0 = {0};
	String_t* G_B38_0 = {0};
	TextWriter_t769 * G_B38_1 = {0};
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = ___index;
		int32_t L_2 = ___length;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		int32_t L_3 = V_0;
		V_2 = L_3;
		goto IL_0231;
	}

IL_000d:
	{
		CharU5BU5D_t60* L_4 = ___text;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_3 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6, sizeof(uint16_t)));
		uint16_t L_7 = V_3;
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_0139;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_0032;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_0032;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_0032;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_0139;
		}
	}

IL_0032:
	{
		uint16_t L_8 = V_3;
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)10))) == 0)
		{
			goto IL_0174;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)10))) == 1)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)10))) == 2)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)10))) == 3)
		{
			goto IL_0158;
		}
	}

IL_004b:
	{
		uint16_t L_9 = V_3;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)60))) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)60))) == 1)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)60))) == 2)
		{
			goto IL_006a;
		}
	}
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_022d;
	}

IL_006a:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_2;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_007c;
		}
	}
	{
		CharU5BU5D_t60* L_12 = ___text;
		int32_t L_13 = V_0;
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m3797(__this, L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/NULL);
	}

IL_007c:
	{
		TextWriter_t769 * L_16 = (__this->___writer_5);
		NullCheck(L_16);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_16, ((int32_t)38));
		CharU5BU5D_t60* L_17 = ___text;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_17, L_19, sizeof(uint16_t)));
		uint16_t L_20 = V_4;
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_00cb;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_010a;
		}
	}

IL_00b0:
	{
		uint16_t L_21 = V_4;
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)60))) == 0)
		{
			goto IL_00e0;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)60))) == 1)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)60))) == 2)
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0134;
	}

IL_00cb:
	{
		TextWriter_t769 * L_22 = (__this->___writer_5);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, _stringLiteral583);
		goto IL_0134;
	}

IL_00e0:
	{
		TextWriter_t769 * L_23 = (__this->___writer_5);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, _stringLiteral584);
		goto IL_0134;
	}

IL_00f5:
	{
		TextWriter_t769 * L_24 = (__this->___writer_5);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_24, _stringLiteral585);
		goto IL_0134;
	}

IL_010a:
	{
		TextWriter_t769 * L_25 = (__this->___writer_5);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_25, _stringLiteral586);
		goto IL_0134;
	}

IL_011f:
	{
		TextWriter_t769 * L_26 = (__this->___writer_5);
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_26, _stringLiteral587);
		goto IL_0134;
	}

IL_0134:
	{
		goto IL_0229;
	}

IL_0139:
	{
		bool L_27 = ___isAttribute;
		if (!L_27)
		{
			goto IL_0153;
		}
	}
	{
		CharU5BU5D_t60* L_28 = ___text;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		int32_t L_30 = L_29;
		uint16_t L_31 = (__this->___quote_char_31);
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_28, L_30, sizeof(uint16_t)))) == ((uint32_t)L_31))))
		{
			goto IL_0153;
		}
	}
	{
		goto IL_006a;
	}

IL_0153:
	{
		goto IL_022d;
	}

IL_0158:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_32+(int32_t)1))) >= ((int32_t)L_33)))
		{
			goto IL_016f;
		}
	}
	{
		CharU5BU5D_t60* L_34 = ___text;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		int32_t L_36 = L_35;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_34, L_36, sizeof(uint16_t)))) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_016f:
	{
		goto IL_0174;
	}

IL_0174:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		if ((((int32_t)L_38) >= ((int32_t)L_39)))
		{
			goto IL_0186;
		}
	}
	{
		CharU5BU5D_t60* L_40 = ___text;
		int32_t L_41 = V_0;
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m3797(__this, L_40, L_41, ((int32_t)((int32_t)L_42-(int32_t)L_43)), /*hidden argument*/NULL);
	}

IL_0186:
	{
		bool L_44 = ___isAttribute;
		if (!L_44)
		{
			goto IL_01b6;
		}
	}
	{
		TextWriter_t769 * L_45 = (__this->___writer_5);
		CharU5BU5D_t60* L_46 = ___text;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		G_B29_0 = L_45;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_46, L_48, sizeof(uint16_t)))) == ((uint32_t)((int32_t)13)))))
		{
			G_B30_0 = L_45;
			goto IL_01a7;
		}
	}
	{
		G_B31_0 = _stringLiteral588;
		G_B31_1 = G_B29_0;
		goto IL_01ac;
	}

IL_01a7:
	{
		G_B31_0 = _stringLiteral589;
		G_B31_1 = G_B30_0;
	}

IL_01ac:
	{
		NullCheck(G_B31_1);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B31_1, G_B31_0);
		goto IL_0229;
	}

IL_01b6:
	{
		int32_t L_49 = (__this->___newline_handling_15);
		V_5 = L_49;
		int32_t L_50 = V_5;
		if (!L_50)
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) == ((int32_t)1)))
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_0211;
	}

IL_01d2:
	{
		TextWriter_t769 * L_52 = (__this->___writer_5);
		CharU5BU5D_t60* L_53 = ___text;
		int32_t L_54 = V_2;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		int32_t L_55 = L_54;
		G_B36_0 = L_52;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_53, L_55, sizeof(uint16_t)))) == ((uint32_t)((int32_t)13)))))
		{
			G_B37_0 = L_52;
			goto IL_01ec;
		}
	}
	{
		G_B38_0 = _stringLiteral588;
		G_B38_1 = G_B36_0;
		goto IL_01f1;
	}

IL_01ec:
	{
		G_B38_0 = _stringLiteral589;
		G_B38_1 = G_B37_0;
	}

IL_01f1:
	{
		NullCheck(G_B38_1);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B38_1, G_B38_0);
		goto IL_0224;
	}

IL_01fb:
	{
		TextWriter_t769 * L_56 = (__this->___writer_5);
		String_t* L_57 = (__this->___newline_29);
		NullCheck(L_56);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_56, L_57);
		goto IL_0224;
	}

IL_0211:
	{
		TextWriter_t769 * L_58 = (__this->___writer_5);
		CharU5BU5D_t60* L_59 = ___text;
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = L_60;
		NullCheck(L_58);
		VirtActionInvoker1< uint16_t >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_58, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_59, L_61, sizeof(uint16_t))));
		goto IL_0224;
	}

IL_0224:
	{
		goto IL_0229;
	}

IL_0229:
	{
		int32_t L_62 = V_2;
		V_0 = ((int32_t)((int32_t)L_62+(int32_t)1));
	}

IL_022d:
	{
		int32_t L_63 = V_2;
		V_2 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0231:
	{
		int32_t L_64 = V_2;
		int32_t L_65 = V_1;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_66 = V_0;
		int32_t L_67 = V_1;
		if ((((int32_t)L_66) >= ((int32_t)L_67)))
		{
			goto IL_024a;
		}
	}
	{
		CharU5BU5D_t60* L_68 = ___text;
		int32_t L_69 = V_0;
		int32_t L_70 = V_1;
		int32_t L_71 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m3797(__this, L_68, L_69, ((int32_t)((int32_t)L_70-(int32_t)L_71)), /*hidden argument*/NULL);
	}

IL_024a:
	{
		return;
	}
}
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern "C" Exception_t33 * XmlTextWriter_ArgumentError_m3799 (XmlTextWriter_t767 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___state_17 = 6;
		String_t* L_0 = ___msg;
		ArgumentException_t373 * L_1 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2066(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t785_il2cpp_TypeInfo_var;
extern "C" Exception_t33 * XmlTextWriter_InvalidOperation_m3800 (XmlTextWriter_t767 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___state_17 = 6;
		String_t* L_0 = ___msg;
		InvalidOperationException_t785 * L_1 = (InvalidOperationException_t785 *)il2cpp_codegen_object_new (InvalidOperationException_t785_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3826(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern TypeInfo* WriteState_t728_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral590;
extern "C" Exception_t33 * XmlTextWriter_StateError_m3801 (XmlTextWriter_t767 * __this, String_t* ___occured, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WriteState_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral590 = il2cpp_codegen_string_literal_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___occured;
		int32_t L_1 = (__this->___state_17);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(WriteState_t728_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m3827(NULL /*static, unused*/, _stringLiteral590, L_0, L_3, /*hidden argument*/NULL);
		Exception_t33 * L_5 = XmlTextWriter_InvalidOperation_m3800(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedTypeMethodDeclarations.h"
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStreamMethodDeclarations.h"
// System.Net.WebRequest
#include "System_System_Net_WebRequestMethodDeclarations.h"
// System.Net.WebResponse
#include "System_System_Net_WebResponseMethodDeclarations.h"
// System.Void System.Xml.XmlUrlResolver::.ctor()
// System.Xml.XmlResolver
#include "System_Xml_System_Xml_XmlResolverMethodDeclarations.h"
extern "C" void XmlUrlResolver__ctor_m3802 (XmlUrlResolver_t773 * __this, const MethodInfo* method)
{
	{
		XmlResolver__ctor_m3583(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
// System.Uri
#include "System_System_Uri.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlExceptionMethodDeclarations.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Xml.XmlUrlResolver
#include "System_Xml_System_Xml_XmlUrlResolverMethodDeclarations.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStreamMethodDeclarations.h"
// System.Net.WebRequest
#include "System_System_Net_WebRequestMethodDeclarations.h"
extern const Il2CppType* Stream_t738_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FileStream_t798_il2cpp_TypeInfo_var;
extern TypeInfo* WebRequest_t797_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral591;
extern Il2CppCodeGenString* _stringLiteral592;
extern Il2CppCodeGenString* _stringLiteral593;
extern Il2CppCodeGenString* _stringLiteral594;
extern "C" Object_t * XmlUrlResolver_GetEntity_m3803 (XmlUrlResolver_t773 * __this, Uri_t711 * ___absoluteUri, String_t* ___role, Type_t * ___ofObjectToReturn, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t738_0_0_0_var = il2cpp_codegen_type_from_index(456);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		XmlException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		FileStream_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		WebRequest_t797_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		_stringLiteral591 = il2cpp_codegen_string_literal_from_index(591);
		_stringLiteral592 = il2cpp_codegen_string_literal_from_index(592);
		_stringLiteral593 = il2cpp_codegen_string_literal_from_index(593);
		_stringLiteral594 = il2cpp_codegen_string_literal_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	WebRequest_t797 * V_0 = {0};
	{
		Type_t * L_0 = ___ofObjectToReturn;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1796(NULL /*static, unused*/, LoadTypeToken(Stream_t738_0_0_0_var), /*hidden argument*/NULL);
		___ofObjectToReturn = L_1;
	}

IL_0012:
	{
		Type_t * L_2 = ___ofObjectToReturn;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1796(NULL /*static, unused*/, LoadTypeToken(Stream_t738_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		XmlException_t731 * L_4 = (XmlException_t731 *)il2cpp_codegen_object_new (XmlException_t731_il2cpp_TypeInfo_var);
		XmlException__ctor_m3453(L_4, _stringLiteral591, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_002d:
	{
		Uri_t711 * L_5 = ___absoluteUri;
		NullCheck(L_5);
		bool L_6 = Uri_get_IsAbsoluteUri_m3884(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_t373 * L_7 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3885(L_7, _stringLiteral592, _stringLiteral593, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0048:
	{
		Uri_t711 * L_8 = ___absoluteUri;
		NullCheck(L_8);
		String_t* L_9 = Uri_get_Scheme_m3886(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m67(NULL /*static, unused*/, L_9, _stringLiteral594, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0097;
		}
	}
	{
		Uri_t711 * L_11 = ___absoluteUri;
		NullCheck(L_11);
		String_t* L_12 = Uri_get_AbsolutePath_m3887(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_14 = String_op_Equality_m67(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		ArgumentException_t373 * L_15 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3885(L_15, _stringLiteral592, _stringLiteral593, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_15);
	}

IL_0082:
	{
		Uri_t711 * L_16 = ___absoluteUri;
		NullCheck(L_16);
		String_t* L_17 = Uri_get_LocalPath_m3888(L_16, /*hidden argument*/NULL);
		String_t* L_18 = XmlUrlResolver_UnescapeRelativeUriBody_m3805(__this, L_17, /*hidden argument*/NULL);
		FileStream_t798 * L_19 = (FileStream_t798 *)il2cpp_codegen_object_new (FileStream_t798_il2cpp_TypeInfo_var);
		FileStream__ctor_m3889(L_19, L_18, 3, 1, 1, /*hidden argument*/NULL);
		return L_19;
	}

IL_0097:
	{
		Uri_t711 * L_20 = ___absoluteUri;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t797_il2cpp_TypeInfo_var);
		WebRequest_t797 * L_21 = WebRequest_Create_m3890(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		Object_t * L_22 = (__this->___credential_0);
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		WebRequest_t797 * L_23 = V_0;
		Object_t * L_24 = (__this->___credential_0);
		NullCheck(L_23);
		VirtActionInvoker1< Object_t * >::Invoke(7 /* System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials) */, L_23, L_24);
	}

IL_00b5:
	{
		WebRequest_t797 * L_25 = V_0;
		NullCheck(L_25);
		WebResponse_t799 * L_26 = (WebResponse_t799 *)VirtFuncInvoker0< WebResponse_t799 * >::Invoke(15 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_25);
		NullCheck(L_26);
		Stream_t738 * L_27 = (Stream_t738 *)VirtFuncInvoker0< Stream_t738 * >::Invoke(8 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_26);
		return L_27;
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C" Uri_t711 * XmlUrlResolver_ResolveUri_m3804 (XmlUrlResolver_t773 * __this, Uri_t711 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	{
		Uri_t711 * L_0 = ___baseUri;
		String_t* L_1 = ___relativeUri;
		Uri_t711 * L_2 = XmlResolver_ResolveUri_m3584(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern Il2CppCodeGenString* _stringLiteral452;
extern Il2CppCodeGenString* _stringLiteral451;
extern Il2CppCodeGenString* _stringLiteral454;
extern Il2CppCodeGenString* _stringLiteral453;
extern Il2CppCodeGenString* _stringLiteral456;
extern Il2CppCodeGenString* _stringLiteral455;
extern Il2CppCodeGenString* _stringLiteral459;
extern Il2CppCodeGenString* _stringLiteral189;
extern Il2CppCodeGenString* _stringLiteral595;
extern Il2CppCodeGenString* _stringLiteral286;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral457;
extern "C" String_t* XmlUrlResolver_UnescapeRelativeUriBody_m3805 (XmlUrlResolver_t773 * __this, String_t* ___src, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral452 = il2cpp_codegen_string_literal_from_index(452);
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		_stringLiteral454 = il2cpp_codegen_string_literal_from_index(454);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		_stringLiteral455 = il2cpp_codegen_string_literal_from_index(455);
		_stringLiteral459 = il2cpp_codegen_string_literal_from_index(459);
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		_stringLiteral595 = il2cpp_codegen_string_literal_from_index(595);
		_stringLiteral286 = il2cpp_codegen_string_literal_from_index(286);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral457 = il2cpp_codegen_string_literal_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___src;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m130(L_0, _stringLiteral452, _stringLiteral451, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m130(L_1, _stringLiteral454, _stringLiteral453, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m130(L_2, _stringLiteral456, _stringLiteral455, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m130(L_3, _stringLiteral459, _stringLiteral189, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m130(L_4, _stringLiteral595, _stringLiteral286, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = String_Replace_m130(L_5, _stringLiteral458, _stringLiteral457, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Xml.XmlWriter::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void XmlWriter__ctor_m3806 (XmlWriter_t768 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m142(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C" void XmlWriter_System_IDisposable_Dispose_m3807 (XmlWriter_t768 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, 0);
		return;
	}
}
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C" String_t* XmlWriter_get_XmlLang_m3808 (XmlWriter_t768 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C" int32_t XmlWriter_get_XmlSpace_m3809 (XmlWriter_t768 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void XmlWriter_Dispose_m3810 (XmlWriter_t768 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::Close() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
extern "C" void XmlWriter_WriteAttribute_m3811 (XmlWriter_t768 * __this, XmlReader_t57 * ___reader, bool ___defattr, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		bool L_0 = ___defattr;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_t57 * L_1 = ___reader;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
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
		XmlReader_t57 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		XmlReader_t57 * L_5 = ___reader;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
		XmlReader_t57 * L_7 = ___reader;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_4, L_6, L_8);
		goto IL_0071;
	}

IL_002f:
	{
		XmlReader_t57 * L_9 = ___reader;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 0)
		{
			goto IL_004f;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 1)
		{
			goto IL_0071;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)3)) == 2)
		{
			goto IL_0060;
		}
	}
	{
		goto IL_0071;
	}

IL_004f:
	{
		XmlReader_t57 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_13);
		goto IL_0071;
	}

IL_0060:
	{
		XmlReader_t57 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_15);
		goto IL_0071;
	}

IL_0071:
	{
		XmlReader_t57 * L_16 = ___reader;
		NullCheck(L_16);
		bool L_17 = (bool)VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_16);
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriterMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Xml.XmlException
#include "System_Xml_System_Xml_XmlExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t373_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t61_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeType_t744_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlException_t731_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral378;
extern Il2CppCodeGenString* _stringLiteral375;
extern Il2CppCodeGenString* _stringLiteral596;
extern Il2CppCodeGenString* _stringLiteral597;
extern "C" void XmlWriter_WriteNode_m3812 (XmlWriter_t768 * __this, XmlReader_t57 * ___reader, bool ___defattr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		ObjectU5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		XmlNodeType_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		_stringLiteral378 = il2cpp_codegen_string_literal_from_index(378);
		_stringLiteral375 = il2cpp_codegen_string_literal_from_index(375);
		_stringLiteral596 = il2cpp_codegen_string_literal_from_index(596);
		_stringLiteral597 = il2cpp_codegen_string_literal_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		XmlReader_t57 * L_0 = ___reader;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_t373 * L_1 = (ArgumentException_t373 *)il2cpp_codegen_object_new (ArgumentException_t373_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3891(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000c:
	{
		XmlReader_t57 * L_2 = ___reader;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_t57 * L_4 = ___reader;
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001e:
	{
		XmlReader_t57 * L_5 = ___reader;
		bool L_6 = ___defattr;
		VirtActionInvoker2< XmlReader_t57 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_5, L_6);
		XmlReader_t57 * L_7 = ___reader;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_7);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0032:
	{
		XmlReader_t57 * L_9 = ___reader;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if (L_11 == 0)
		{
			goto IL_01db;
		}
		if (L_11 == 1)
		{
			goto IL_008c;
		}
		if (L_11 == 2)
		{
			goto IL_012c;
		}
		if (L_11 == 3)
		{
			goto IL_012d;
		}
		if (L_11 == 4)
		{
			goto IL_013e;
		}
		if (L_11 == 5)
		{
			goto IL_014f;
		}
		if (L_11 == 6)
		{
			goto IL_01e0;
		}
		if (L_11 == 7)
		{
			goto IL_0160;
		}
		if (L_11 == 8)
		{
			goto IL_0177;
		}
		if (L_11 == 9)
		{
			goto IL_01e0;
		}
		if (L_11 == 10)
		{
			goto IL_0188;
		}
		if (L_11 == 11)
		{
			goto IL_01e0;
		}
		if (L_11 == 12)
		{
			goto IL_01e0;
		}
		if (L_11 == 13)
		{
			goto IL_01ba;
		}
		if (L_11 == 14)
		{
			goto IL_01b5;
		}
		if (L_11 == 15)
		{
			goto IL_01cb;
		}
		if (L_11 == 16)
		{
			goto IL_01d6;
		}
		if (L_11 == 17)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_01e0;
	}

IL_008c:
	{
		XmlReader_t57 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlReader_t57 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		XmlReader_t57 * L_16 = ___reader;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_13, L_15, L_17);
		XmlReader_t57 * L_18 = ___reader;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_18);
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = 0;
		goto IL_00c9;
	}

IL_00b6:
	{
		XmlReader_t57 * L_20 = ___reader;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(28 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_20, L_21);
		XmlReader_t57 * L_22 = ___reader;
		bool L_23 = ___defattr;
		XmlWriter_WriteAttribute_m3811(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_0;
		XmlReader_t57 * L_26 = ___reader;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		XmlReader_t57 * L_28 = ___reader;
		NullCheck(L_28);
		VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_28);
	}

IL_00dc:
	{
		XmlReader_t57 * L_29 = ___reader;
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_29);
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0127;
	}

IL_00f2:
	{
		XmlReader_t57 * L_31 = ___reader;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		V_1 = L_32;
		XmlReader_t57 * L_33 = ___reader;
		NullCheck(L_33);
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, L_33);
		XmlReader_t57 * L_34 = ___reader;
		NullCheck(L_34);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)15))))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		XmlReader_t57 * L_36 = ___reader;
		bool L_37 = ___defattr;
		VirtActionInvoker2< XmlReader_t57 *, bool >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_36, L_37);
		int32_t L_38 = V_1;
		XmlReader_t57 * L_39 = ___reader;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010d;
		}
	}

IL_0121:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0127:
	{
		goto IL_0218;
	}

IL_012c:
	{
		return;
	}

IL_012d:
	{
		XmlReader_t57 * L_41 = ___reader;
		NullCheck(L_41);
		String_t* L_42 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_42);
		goto IL_0218;
	}

IL_013e:
	{
		XmlReader_t57 * L_43 = ___reader;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Value() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_44);
		goto IL_0218;
	}

IL_014f:
	{
		XmlReader_t57 * L_45 = ___reader;
		NullCheck(L_45);
		String_t* L_46 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Name() */, L_45);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_46);
		goto IL_0218;
	}

IL_0160:
	{
		XmlReader_t57 * L_47 = ___reader;
		NullCheck(L_47);
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Name() */, L_47);
		XmlReader_t57 * L_49 = ___reader;
		NullCheck(L_49);
		String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_48, L_50);
		goto IL_0218;
	}

IL_0177:
	{
		XmlReader_t57 * L_51 = ___reader;
		NullCheck(L_51);
		String_t* L_52 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Value() */, L_51);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_52);
		goto IL_0218;
	}

IL_0188:
	{
		XmlReader_t57 * L_53 = ___reader;
		NullCheck(L_53);
		String_t* L_54 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Name() */, L_53);
		XmlReader_t57 * L_55 = ___reader;
		NullCheck(L_55);
		String_t* L_56 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_55, _stringLiteral378);
		XmlReader_t57 * L_57 = ___reader;
		NullCheck(L_57);
		String_t* L_58 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_57, _stringLiteral375);
		XmlReader_t57 * L_59 = ___reader;
		NullCheck(L_59);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_54, L_56, L_58, L_60);
		goto IL_0218;
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		XmlReader_t57 * L_61 = ___reader;
		NullCheck(L_61);
		String_t* L_62 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Xml.XmlReader::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_62);
		goto IL_0218;
	}

IL_01cb:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
		goto IL_0218;
	}

IL_01d6:
	{
		goto IL_0218;
	}

IL_01db:
	{
		goto IL_0218;
	}

IL_01e0:
	{
		ObjectU5BU5D_t61* L_63 = ((ObjectU5BU5D_t61*)SZArrayNew(ObjectU5BU5D_t61_il2cpp_TypeInfo_var, 4));
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, 0);
		ArrayElementTypeCheck (L_63, _stringLiteral596);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_63, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral596;
		ObjectU5BU5D_t61* L_64 = L_63;
		XmlReader_t57 * L_65 = ___reader;
		NullCheck(L_65);
		String_t* L_66 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Name() */, L_65);
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, 1);
		ArrayElementTypeCheck (L_64, L_66);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_64, 1, sizeof(Object_t *))) = (Object_t *)L_66;
		ObjectU5BU5D_t61* L_67 = L_64;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, 2);
		ArrayElementTypeCheck (L_67, _stringLiteral597);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_67, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral597;
		ObjectU5BU5D_t61* L_68 = L_67;
		XmlReader_t57 * L_69 = ___reader;
		NullCheck(L_69);
		int32_t L_70 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_69);
		int32_t L_71 = L_70;
		Object_t * L_72 = Box(XmlNodeType_t744_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 3);
		ArrayElementTypeCheck (L_68, L_72);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_68, 3, sizeof(Object_t *))) = (Object_t *)L_72;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m174(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		XmlException_t731 * L_74 = (XmlException_t731 *)il2cpp_codegen_object_new (XmlException_t731_il2cpp_TypeInfo_var);
		XmlException__ctor_m3453(L_74, L_73, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_74);
	}

IL_0218:
	{
		XmlReader_t57 * L_75 = ___reader;
		NullCheck(L_75);
		VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::Read() */, L_75);
		return;
	}
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t775_marshal(const U24ArrayTypeU2412_t775& unmarshaled, U24ArrayTypeU2412_t775_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2412_t775_marshal_back(const U24ArrayTypeU2412_t775_marshaled& marshaled, U24ArrayTypeU2412_t775& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t775_marshal_cleanup(U24ArrayTypeU2412_t775_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$8
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_0.h"
// <PrivateImplementationDetails>/$ArrayType$8
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void U24ArrayTypeU248_t776_marshal(const U24ArrayTypeU248_t776& unmarshaled, U24ArrayTypeU248_t776_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU248_t776_marshal_back(const U24ArrayTypeU248_t776_marshaled& marshaled, U24ArrayTypeU248_t776& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void U24ArrayTypeU248_t776_marshal_cleanup(U24ArrayTypeU248_t776_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_1.h"
// <PrivateImplementationDetails>/$ArrayType$256
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_1MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void U24ArrayTypeU24256_t777_marshal(const U24ArrayTypeU24256_t777& unmarshaled, U24ArrayTypeU24256_t777_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24256_t777_marshal_back(const U24ArrayTypeU24256_t777_marshaled& marshaled, U24ArrayTypeU24256_t777& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void U24ArrayTypeU24256_t777_marshal_cleanup(U24ArrayTypeU24256_t777_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1280
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_2.h"
// <PrivateImplementationDetails>/$ArrayType$1280
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_2MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1280
extern "C" void U24ArrayTypeU241280_t778_marshal(const U24ArrayTypeU241280_t778& unmarshaled, U24ArrayTypeU241280_t778_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU241280_t778_marshal_back(const U24ArrayTypeU241280_t778_marshaled& marshaled, U24ArrayTypeU241280_t778& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1280
extern "C" void U24ArrayTypeU241280_t778_marshal_cleanup(U24ArrayTypeU241280_t778_marshaled& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
