#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t734;
// System.Uri
struct Uri_t816;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t584;
// System.Net.ServicePoint
struct ServicePoint_t817;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m4330 (HttpWebRequest_t734 * __this, Uri_t816 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m4331 (HttpWebRequest_t734 * __this, SerializationInfo_t584 * ___serializationInfo, StreamingContext_t585  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m4332 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m4333 (HttpWebRequest_t734 * __this, SerializationInfo_t584 * ___serializationInfo, StreamingContext_t585  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t816 * HttpWebRequest_get_Address_m4182 (HttpWebRequest_t734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t817 * HttpWebRequest_get_ServicePoint_m4186 (HttpWebRequest_t734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t817 * HttpWebRequest_GetServicePoint_m4334 (HttpWebRequest_t734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m4335 (HttpWebRequest_t734 * __this, SerializationInfo_t584 * ___serializationInfo, StreamingContext_t585  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
