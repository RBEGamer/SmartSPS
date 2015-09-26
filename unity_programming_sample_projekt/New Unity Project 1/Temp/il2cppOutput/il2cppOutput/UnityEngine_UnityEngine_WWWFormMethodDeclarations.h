#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t51;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t52;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t576;
// System.Byte[]
struct ByteU5BU5D_t441;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m149 (WWWForm_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m155 (WWWForm_t51 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m2474 (WWWForm_t51 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t52 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t576 * WWWForm_get_headers_m2475 (WWWForm_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t441* WWWForm_get_data_m2476 (WWWForm_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
