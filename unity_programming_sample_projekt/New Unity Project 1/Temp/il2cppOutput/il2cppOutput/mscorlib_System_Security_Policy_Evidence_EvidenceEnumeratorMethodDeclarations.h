#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence/EvidenceEnumerator
struct EvidenceEnumerator_t1484;
// System.Collections.IEnumerator
struct IEnumerator_t28;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::.ctor(System.Collections.IEnumerator,System.Collections.IEnumerator)
extern "C" void EvidenceEnumerator__ctor_m8868 (EvidenceEnumerator_t1484 * __this, Object_t * ___hostenum, Object_t * ___assemblyenum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence/EvidenceEnumerator::MoveNext()
extern "C" bool EvidenceEnumerator_MoveNext_m8869 (EvidenceEnumerator_t1484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence/EvidenceEnumerator::get_Current()
extern "C" Object_t * EvidenceEnumerator_get_Current_m8870 (EvidenceEnumerator_t1484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
