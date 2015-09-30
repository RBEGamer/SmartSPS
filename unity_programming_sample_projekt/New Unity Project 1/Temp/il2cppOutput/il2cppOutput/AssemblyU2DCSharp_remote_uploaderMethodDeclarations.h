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
// UnityEngine.WWWForm
struct WWWForm_t28;
// System.Collections.IEnumerator
struct IEnumerator_t29;

// System.Void remote_uploader::.ctor()
extern "C" void remote_uploader__ctor_m43 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::Start()
extern "C" void remote_uploader_Start_m44 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::start_upload()
extern "C" void remote_uploader_start_upload_m45 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::start_load()
extern "C" void remote_uploader_start_load_m46 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::clear_field()
extern "C" void remote_uploader_clear_field_m47 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::clear_db()
extern "C" void remote_uploader_clear_db_m48 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void remote_uploader::Update()
extern "C" void remote_uploader_Update_m49 (remote_uploader_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW remote_uploader::GET(System.String)
extern "C" WWW_t23 * remote_uploader_GET_m50 (remote_uploader_t24 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW remote_uploader::POST(System.String,UnityEngine.WWWForm)
extern "C" WWW_t23 * remote_uploader_POST_m51 (remote_uploader_t24 * __this, String_t* ___url, WWWForm_t28 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator remote_uploader::WaitForRequest(UnityEngine.WWW)
extern "C" Object_t * remote_uploader_WaitForRequest_m52 (remote_uploader_t24 * __this, WWW_t23 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
