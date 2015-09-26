#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t858;
// System.Net.WebRequest
struct WebRequest_t821;
// System.Uri
struct Uri_t816;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4319 (FileWebRequestCreator_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t821 * FileWebRequestCreator_Create_m4320 (FileWebRequestCreator_t858 * __this, Uri_t816 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
