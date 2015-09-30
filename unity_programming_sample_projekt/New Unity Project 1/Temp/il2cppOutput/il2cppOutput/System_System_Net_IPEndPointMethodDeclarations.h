#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPEndPoint
struct IPEndPoint_t1093;
// System.Net.IPAddress
struct IPAddress_t1106;
// System.Net.EndPoint
struct EndPoint_t1038;
// System.Net.SocketAddress
struct SocketAddress_t1114;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void IPEndPoint__ctor_m5660 (IPEndPoint_t1093 * __this, IPAddress_t1106 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern "C" void IPEndPoint__ctor_m5661 (IPEndPoint_t1093 * __this, int64_t ___iaddr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C" IPAddress_t1106 * IPEndPoint_get_Address_m5662 (IPEndPoint_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
extern "C" void IPEndPoint_set_Address_m5663 (IPEndPoint_t1093 * __this, IPAddress_t1106 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern "C" int32_t IPEndPoint_get_AddressFamily_m5664 (IPEndPoint_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C" int32_t IPEndPoint_get_Port_m5665 (IPEndPoint_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
extern "C" void IPEndPoint_set_Port_m5666 (IPEndPoint_t1093 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern "C" EndPoint_t1038 * IPEndPoint_Create_m5667 (IPEndPoint_t1093 * __this, SocketAddress_t1114 * ___socketAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern "C" SocketAddress_t1114 * IPEndPoint_Serialize_m5668 (IPEndPoint_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
extern "C" String_t* IPEndPoint_ToString_m5669 (IPEndPoint_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern "C" bool IPEndPoint_Equals_m5670 (IPEndPoint_t1093 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
extern "C" int32_t IPEndPoint_GetHashCode_m5671 (IPEndPoint_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
