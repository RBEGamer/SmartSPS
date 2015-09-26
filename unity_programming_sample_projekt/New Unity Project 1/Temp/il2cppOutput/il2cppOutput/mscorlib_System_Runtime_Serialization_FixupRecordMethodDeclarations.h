#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t1424;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1420;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1414;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m8459 (FixupRecord_t1424 * __this, ObjectRecord_t1420 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t1420 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m8460 (FixupRecord_t1424 * __this, ObjectManager_t1414 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
