#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1095;
// System.Net.WebRequest
struct WebRequest_t797;
// System.Uri
struct Uri_t711;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m5568 (HttpRequestCreator_t1095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t797 * HttpRequestCreator_Create_m5569 (HttpRequestCreator_t1095 * __this, Uri_t711 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
