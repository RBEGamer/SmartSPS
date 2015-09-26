#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t560;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t554;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t320;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C" void InvokableCallList__ctor_m3018 (InvokableCallList_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3019 (InvokableCallList_t560 * __this, BaseInvokableCall_t554 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m3020 (InvokableCallList_t560 * __this, BaseInvokableCall_t554 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCallList_RemoveListener_m3021 (InvokableCallList_t560 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m3022 (InvokableCallList_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C" void InvokableCallList_Invoke_m3023 (InvokableCallList_t560 * __this, ObjectU5BU5D_t320* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
