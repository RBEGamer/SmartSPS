#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1678;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1675;
// System.Int32[]
struct Int32U5BU5D_t391;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1669;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m10122 (MultiArrayFixupRecord_t1678 * __this, ObjectRecord_t1675 * ___objectToBeFixed, Int32U5BU5D_t391* ___indices, ObjectRecord_t1675 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m10123 (MultiArrayFixupRecord_t1678 * __this, ObjectManager_t1669 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
