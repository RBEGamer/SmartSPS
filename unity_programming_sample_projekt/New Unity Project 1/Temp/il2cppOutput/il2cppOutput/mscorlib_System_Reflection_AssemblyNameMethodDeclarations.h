#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t1240;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t584;
// System.String
struct String_t;
// System.Version
struct Version_t864;
// System.Byte[]
struct ByteU5BU5D_t441;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m7639 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName__ctor_m7640 (AssemblyName_t1240 * __this, SerializationInfo_t584 * ___si, StreamingContext_t585  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" String_t* AssemblyName_get_Name_m7641 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m7642 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m7643 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t864 * AssemblyName_get_Version_m7644 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m7645 (AssemblyName_t1240 * __this, Version_t864 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C" String_t* AssemblyName_ToString_m7646 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m7647 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C" ByteU5BU5D_t441* AssemblyName_InternalGetPublicKeyToken_m7648 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C" ByteU5BU5D_t441* AssemblyName_ComputePublicKeyToken_m7649 (AssemblyName_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m7650 (AssemblyName_t1240 * __this, ByteU5BU5D_t441* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m7651 (AssemblyName_t1240 * __this, ByteU5BU5D_t441* ___publicKeyToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName_GetObjectData_m7652 (AssemblyName_t1240 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C" void AssemblyName_OnDeserialization_m7653 (AssemblyName_t1240 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
