#pragma once
#include <stdint.h>
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t820;
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
// Mono.Security.Cryptography.RC4
struct  RC4_t839  : public SymmetricAlgorithm_t806
{
};
struct RC4_t839_StaticFields{
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t820* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t820* ___s_legalKeySizes_11;
};
