#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberFilter
struct MemberFilter_t1016;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C" void MemberFilter__ctor_m10125 (MemberFilter_t1016 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C" bool MemberFilter_Invoke_m10126 (MemberFilter_t1016 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_MemberFilter_t1016(Il2CppObject* delegate, MemberInfo_t * ___m, Object_t * ___filterCriteria);
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * MemberFilter_BeginInvoke_m10127 (MemberFilter_t1016 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern "C" bool MemberFilter_EndInvoke_m10128 (MemberFilter_t1016 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
