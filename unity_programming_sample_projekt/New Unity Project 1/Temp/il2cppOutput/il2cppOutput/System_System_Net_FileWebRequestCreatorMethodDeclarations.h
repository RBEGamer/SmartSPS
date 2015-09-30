#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1079;
// System.Net.WebRequest
struct WebRequest_t797;
// System.Uri
struct Uri_t711;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m5437 (FileWebRequestCreator_t1079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t797 * FileWebRequestCreator_Create_m5438 (FileWebRequestCreator_t1079 * __this, Uri_t711 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
