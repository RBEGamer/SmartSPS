#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1676;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1675;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1669;

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C" void BaseFixupRecord__ctor_m10118 (BaseFixupRecord_t1676 * __this, ObjectRecord_t1675 * ___objectToBeFixed, ObjectRecord_t1675 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool BaseFixupRecord_DoFixup_m10119 (BaseFixupRecord_t1676 * __this, ObjectManager_t1669 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
