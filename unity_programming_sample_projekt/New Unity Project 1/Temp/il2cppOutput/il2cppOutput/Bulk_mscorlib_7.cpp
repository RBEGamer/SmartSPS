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

// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void EventHandler__ctor_m10161 (EventHandler_t1549 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
extern "C" void EventHandler_Invoke_m10162 (EventHandler_t1549 * __this, Object_t * ___sender, EventArgs_t678 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandler_Invoke_m10162((EventHandler_t1549 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, EventArgs_t678 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, EventArgs_t678 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, EventArgs_t678 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1549(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t678 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * EventHandler_BeginInvoke_m10163 (EventHandler_t1549 * __this, Object_t * ___sender, EventArgs_t678 * ___e, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m10164 (EventHandler_t1549 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ResolveEventHandler__ctor_m10165 (ResolveEventHandler_t1548 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
extern "C" Assembly_t997 * ResolveEventHandler_Invoke_m10166 (ResolveEventHandler_t1548 * __this, Object_t * ___sender, ResolveEventArgs_t1605 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResolveEventHandler_Invoke_m10166((ResolveEventHandler_t1548 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Assembly_t997 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ResolveEventArgs_t1605 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Assembly_t997 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ResolveEventArgs_t1605 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Assembly_t997 * (*FunctionPointerType) (Object_t * __this, ResolveEventArgs_t1605 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Assembly_t997 * pinvoke_delegate_wrapper_ResolveEventHandler_t1548(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1605 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m10167 (ResolveEventHandler_t1548 * __this, Object_t * ___sender, ResolveEventArgs_t1605 * ___args, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t997 * ResolveEventHandler_EndInvoke_m10168 (ResolveEventHandler_t1548 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Assembly_t997 *)__result;
}
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnhandledExceptionEventHandler__ctor_m3059 (UnhandledExceptionEventHandler_t588 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
extern "C" void UnhandledExceptionEventHandler_Invoke_m10169 (UnhandledExceptionEventHandler_t588 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t570 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m10169((UnhandledExceptionEventHandler_t588 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t570 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t570 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UnhandledExceptionEventArgs_t570 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t588(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t570 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m10170 (UnhandledExceptionEventHandler_t588 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t570 * ___e, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m10171 (UnhandledExceptionEventHandler_t588 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
extern "C" void U24ArrayTypeU2456_t1625_marshal(const U24ArrayTypeU2456_t1625& unmarshaled, U24ArrayTypeU2456_t1625_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2456_t1625_marshal_back(const U24ArrayTypeU2456_t1625_marshaled& marshaled, U24ArrayTypeU2456_t1625& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
extern "C" void U24ArrayTypeU2456_t1625_marshal_cleanup(U24ArrayTypeU2456_t1625_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
extern "C" void U24ArrayTypeU2424_t1626_marshal(const U24ArrayTypeU2424_t1626& unmarshaled, U24ArrayTypeU2424_t1626_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2424_t1626_marshal_back(const U24ArrayTypeU2424_t1626_marshaled& marshaled, U24ArrayTypeU2424_t1626& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
extern "C" void U24ArrayTypeU2424_t1626_marshal_cleanup(U24ArrayTypeU2424_t1626_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void U24ArrayTypeU2416_t1627_marshal(const U24ArrayTypeU2416_t1627& unmarshaled, U24ArrayTypeU2416_t1627_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2416_t1627_marshal_back(const U24ArrayTypeU2416_t1627_marshaled& marshaled, U24ArrayTypeU2416_t1627& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void U24ArrayTypeU2416_t1627_marshal_cleanup(U24ArrayTypeU2416_t1627_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
extern "C" void U24ArrayTypeU24120_t1628_marshal(const U24ArrayTypeU24120_t1628& unmarshaled, U24ArrayTypeU24120_t1628_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24120_t1628_marshal_back(const U24ArrayTypeU24120_t1628_marshaled& marshaled, U24ArrayTypeU24120_t1628& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
extern "C" void U24ArrayTypeU24120_t1628_marshal_cleanup(U24ArrayTypeU24120_t1628_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
extern "C" void U24ArrayTypeU243132_t1629_marshal(const U24ArrayTypeU243132_t1629& unmarshaled, U24ArrayTypeU243132_t1629_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU243132_t1629_marshal_back(const U24ArrayTypeU243132_t1629_marshaled& marshaled, U24ArrayTypeU243132_t1629& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
extern "C" void U24ArrayTypeU243132_t1629_marshal_cleanup(U24ArrayTypeU243132_t1629_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void U24ArrayTypeU2420_t1630_marshal(const U24ArrayTypeU2420_t1630& unmarshaled, U24ArrayTypeU2420_t1630_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2420_t1630_marshal_back(const U24ArrayTypeU2420_t1630_marshaled& marshaled, U24ArrayTypeU2420_t1630& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void U24ArrayTypeU2420_t1630_marshal_cleanup(U24ArrayTypeU2420_t1630_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
extern "C" void U24ArrayTypeU2432_t1631_marshal(const U24ArrayTypeU2432_t1631& unmarshaled, U24ArrayTypeU2432_t1631_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2432_t1631_marshal_back(const U24ArrayTypeU2432_t1631_marshaled& marshaled, U24ArrayTypeU2432_t1631& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
extern "C" void U24ArrayTypeU2432_t1631_marshal_cleanup(U24ArrayTypeU2432_t1631_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
extern "C" void U24ArrayTypeU2448_t1632_marshal(const U24ArrayTypeU2448_t1632& unmarshaled, U24ArrayTypeU2448_t1632_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2448_t1632_marshal_back(const U24ArrayTypeU2448_t1632_marshaled& marshaled, U24ArrayTypeU2448_t1632& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
extern "C" void U24ArrayTypeU2448_t1632_marshal_cleanup(U24ArrayTypeU2448_t1632_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
extern "C" void U24ArrayTypeU2464_t1633_marshal(const U24ArrayTypeU2464_t1633& unmarshaled, U24ArrayTypeU2464_t1633_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2464_t1633_marshal_back(const U24ArrayTypeU2464_t1633_marshaled& marshaled, U24ArrayTypeU2464_t1633& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
extern "C" void U24ArrayTypeU2464_t1633_marshal_cleanup(U24ArrayTypeU2464_t1633_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1634_marshal(const U24ArrayTypeU2412_t1634& unmarshaled, U24ArrayTypeU2412_t1634_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2412_t1634_marshal_back(const U24ArrayTypeU2412_t1634_marshaled& marshaled, U24ArrayTypeU2412_t1634& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1634_marshal_cleanup(U24ArrayTypeU2412_t1634_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
extern "C" void U24ArrayTypeU24136_t1635_marshal(const U24ArrayTypeU24136_t1635& unmarshaled, U24ArrayTypeU24136_t1635_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24136_t1635_marshal_back(const U24ArrayTypeU24136_t1635_marshaled& marshaled, U24ArrayTypeU24136_t1635& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
extern "C" void U24ArrayTypeU24136_t1635_marshal_cleanup(U24ArrayTypeU24136_t1635_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void U24ArrayTypeU248_t1636_marshal(const U24ArrayTypeU248_t1636& unmarshaled, U24ArrayTypeU248_t1636_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU248_t1636_marshal_back(const U24ArrayTypeU248_t1636_marshaled& marshaled, U24ArrayTypeU248_t1636& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void U24ArrayTypeU248_t1636_marshal_cleanup(U24ArrayTypeU248_t1636_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
extern "C" void U24ArrayTypeU2472_t1637_marshal(const U24ArrayTypeU2472_t1637& unmarshaled, U24ArrayTypeU2472_t1637_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2472_t1637_marshal_back(const U24ArrayTypeU2472_t1637_marshaled& marshaled, U24ArrayTypeU2472_t1637& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
extern "C" void U24ArrayTypeU2472_t1637_marshal_cleanup(U24ArrayTypeU2472_t1637_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
extern "C" void U24ArrayTypeU24124_t1638_marshal(const U24ArrayTypeU24124_t1638& unmarshaled, U24ArrayTypeU24124_t1638_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24124_t1638_marshal_back(const U24ArrayTypeU24124_t1638_marshaled& marshaled, U24ArrayTypeU24124_t1638& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
extern "C" void U24ArrayTypeU24124_t1638_marshal_cleanup(U24ArrayTypeU24124_t1638_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249.h"
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
extern "C" void U24ArrayTypeU2496_t1639_marshal(const U24ArrayTypeU2496_t1639& unmarshaled, U24ArrayTypeU2496_t1639_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2496_t1639_marshal_back(const U24ArrayTypeU2496_t1639_marshaled& marshaled, U24ArrayTypeU2496_t1639& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
extern "C" void U24ArrayTypeU2496_t1639_marshal_cleanup(U24ArrayTypeU2496_t1639_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1.h"
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
extern "C" void U24ArrayTypeU242048_t1640_marshal(const U24ArrayTypeU242048_t1640& unmarshaled, U24ArrayTypeU242048_t1640_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU242048_t1640_marshal_back(const U24ArrayTypeU242048_t1640_marshaled& marshaled, U24ArrayTypeU242048_t1640& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
extern "C" void U24ArrayTypeU242048_t1640_marshal_cleanup(U24ArrayTypeU242048_t1640_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2.h"
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void U24ArrayTypeU24256_t1641_marshal(const U24ArrayTypeU24256_t1641& unmarshaled, U24ArrayTypeU24256_t1641_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24256_t1641_marshal_back(const U24ArrayTypeU24256_t1641_marshaled& marshaled, U24ArrayTypeU24256_t1641& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void U24ArrayTypeU24256_t1641_marshal_cleanup(U24ArrayTypeU24256_t1641_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4.h"
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
extern "C" void U24ArrayTypeU241024_t1642_marshal(const U24ArrayTypeU241024_t1642& unmarshaled, U24ArrayTypeU241024_t1642_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU241024_t1642_marshal_back(const U24ArrayTypeU241024_t1642_marshaled& marshaled, U24ArrayTypeU241024_t1642& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
extern "C" void U24ArrayTypeU241024_t1642_marshal_cleanup(U24ArrayTypeU241024_t1642_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0.h"
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
extern "C" void U24ArrayTypeU24640_t1643_marshal(const U24ArrayTypeU24640_t1643& unmarshaled, U24ArrayTypeU24640_t1643_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24640_t1643_marshal_back(const U24ArrayTypeU24640_t1643_marshaled& marshaled, U24ArrayTypeU24640_t1643& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
extern "C" void U24ArrayTypeU24640_t1643_marshal_cleanup(U24ArrayTypeU24640_t1643_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5.h"
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1644_marshal(const U24ArrayTypeU24128_t1644& unmarshaled, U24ArrayTypeU24128_t1644_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24128_t1644_marshal_back(const U24ArrayTypeU24128_t1644_marshaled& marshaled, U24ArrayTypeU24128_t1644& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1644_marshal_cleanup(U24ArrayTypeU24128_t1644_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0.h"
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
extern "C" void U24ArrayTypeU2452_t1645_marshal(const U24ArrayTypeU2452_t1645& unmarshaled, U24ArrayTypeU2452_t1645_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2452_t1645_marshal_back(const U24ArrayTypeU2452_t1645_marshaled& marshaled, U24ArrayTypeU2452_t1645& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
extern "C" void U24ArrayTypeU2452_t1645_marshal_cleanup(U24ArrayTypeU2452_t1645_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
#ifdef __clang__
#pragma clang diagnostic pop
#endif
