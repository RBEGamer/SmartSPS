#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// remote_uploader
struct remote_uploader_t24;
// UnityEngine.WWW
struct WWW_t23;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t28;

// System.Void remote_uploader::.ctor()
extern "C" void remote_uploader__ctor_m42 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::Start()
extern "C" void remote_uploader_Start_m43 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::start_upload()
extern "C" void remote_uploader_start_upload_m44 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::start_load()
extern "C" void remote_uploader_start_load_m45 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::Update()
extern "C" void remote_uploader_Update_m46 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW remote_uploader::GET(System.String)
extern "C" WWW_t23 * remote_uploader_GET_m47 (remote_uploader_t24 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator remote_uploader::WaitForRequest(UnityEngine.WWW)
extern "C" Object_t * remote_uploader_WaitForRequest_m48 (remote_uploader_t24 * __this, WWW_t23 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
