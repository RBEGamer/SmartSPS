#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPHostEntry
struct IPHostEntry_t1092;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t1039;
// System.String[]
struct StringU5BU5D_t49;
// System.String
struct String_t;

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m5672 (IPHostEntry_t1092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t1039* IPHostEntry_get_AddressList_m5673 (IPHostEntry_t1092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m5674 (IPHostEntry_t1092 * __this, IPAddressU5BU5D_t1039* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m5675 (IPHostEntry_t1092 * __this, StringU5BU5D_t49* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m5676 (IPHostEntry_t1092 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
