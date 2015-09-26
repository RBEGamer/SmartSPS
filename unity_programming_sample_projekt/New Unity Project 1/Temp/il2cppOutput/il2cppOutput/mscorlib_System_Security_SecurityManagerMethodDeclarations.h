#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t1230;
// System.Byte[]
struct ByteU5BU5D_t441;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m8953 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m8954 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t1230 * SecurityManager_Decode_m8955 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t1230 * SecurityManager_Decode_m8956 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
