#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1119;
// System.Net.ServicePoint
struct ServicePoint_t981;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t1104;
// System.Net.HttpWebRequest
struct HttpWebRequest_t906;
// System.Collections.Queue
struct Queue_t1043;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m5823 (WebConnectionGroup_t1119 * __this, ServicePoint_t981 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1104 * WebConnectionGroup_GetConnection_m5824 (WebConnectionGroup_t1119 * __this, HttpWebRequest_t906 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m5825 (Object_t * __this /* static, unused */, WebConnection_t1104 * ___cnc, HttpWebRequest_t906 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1104 * WebConnectionGroup_CreateOrReuseConnection_m5826 (WebConnectionGroup_t1119 * __this, HttpWebRequest_t906 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1043 * WebConnectionGroup_get_Queue_m5827 (WebConnectionGroup_t1119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
