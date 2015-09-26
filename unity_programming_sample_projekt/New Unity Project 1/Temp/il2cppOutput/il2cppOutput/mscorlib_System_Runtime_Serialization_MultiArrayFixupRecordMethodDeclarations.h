#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1423;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1420;
// System.Int32[]
struct Int32U5BU5D_t388;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1414;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m8457 (MultiArrayFixupRecord_t1423 * __this, ObjectRecord_t1420 * ___objectToBeFixed, Int32U5BU5D_t388* ___indices, ObjectRecord_t1420 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m8458 (MultiArrayFixupRecord_t1423 * __this, ObjectManager_t1414 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
