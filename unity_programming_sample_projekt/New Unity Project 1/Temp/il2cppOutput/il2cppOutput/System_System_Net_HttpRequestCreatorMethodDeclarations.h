#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t862;
// System.Net.WebRequest
struct WebRequest_t821;
// System.Uri
struct Uri_t816;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4327 (HttpRequestCreator_t862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t821 * HttpRequestCreator_Create_m4328 (HttpRequestCreator_t862 * __this, Uri_t816 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
