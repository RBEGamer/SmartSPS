#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t702;
// Mono.Security.ASN1
struct ASN1_t659;
// System.String[]
struct StringU5BU5D_t48;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m3568 (GeneralNames_t702 * __this, ASN1_t659 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t48* GeneralNames_get_DNSNames_m3569 (GeneralNames_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t48* GeneralNames_get_IPAddresses_m3570 (GeneralNames_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m3571 (GeneralNames_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
