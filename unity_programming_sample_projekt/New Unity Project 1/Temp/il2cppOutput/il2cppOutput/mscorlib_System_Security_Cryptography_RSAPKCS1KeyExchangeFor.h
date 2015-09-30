#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t852;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t804;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t990  : public AsymmetricKeyExchangeFormatter_t1694
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t852 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t804 * ___random_1;
};
