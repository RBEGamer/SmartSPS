#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t28;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t52;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t579;
// System.Byte[]
struct ByteU5BU5D_t444;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m155 (WWWForm_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m161 (WWWForm_t28 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m2486 (WWWForm_t28 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t52 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t579 * WWWForm_get_headers_m2487 (WWWForm_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t444* WWWForm_get_data_m2488 (WWWForm_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
