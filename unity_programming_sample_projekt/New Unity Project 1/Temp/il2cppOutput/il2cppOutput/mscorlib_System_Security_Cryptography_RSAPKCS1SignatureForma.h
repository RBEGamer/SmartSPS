#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t852;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t843;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t1713  : public AsymmetricSignatureFormatter_t916
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t852 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t843 * ___hash_1;
};
