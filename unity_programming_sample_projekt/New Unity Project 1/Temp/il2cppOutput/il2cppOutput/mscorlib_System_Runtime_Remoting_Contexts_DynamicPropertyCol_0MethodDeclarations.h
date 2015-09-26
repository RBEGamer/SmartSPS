#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t1320;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t1324;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1342;

// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::.ctor()
extern "C" void DynamicPropertyCollection__ctor_m8014 (DynamicPropertyCollection_t1320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::get_HasProperties()
extern "C" bool DynamicPropertyCollection_get_HasProperties_m8015 (DynamicPropertyCollection_t1320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty)
extern "C" bool DynamicPropertyCollection_RegisterDynamicProperty_m8016 (DynamicPropertyCollection_t1320 * __this, Object_t * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::UnregisterDynamicProperty(System.String)
extern "C" bool DynamicPropertyCollection_UnregisterDynamicProperty_m8017 (DynamicPropertyCollection_t1320 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::NotifyMessage(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C" void DynamicPropertyCollection_NotifyMessage_m8018 (DynamicPropertyCollection_t1320 * __this, bool ___start, Object_t * ___msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.DynamicPropertyCollection::FindProperty(System.String)
extern "C" int32_t DynamicPropertyCollection_FindProperty_m8019 (DynamicPropertyCollection_t1320 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
