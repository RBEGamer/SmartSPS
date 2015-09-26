#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t733;
// System.IO.Stream
struct Stream_t739;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t757;
// System.Net.HttpWebRequest
struct HttpWebRequest_t734;
// System.Byte[]
struct ByteU5BU5D_t441;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t758;
// System.Int32[]
struct Int32U5BU5D_t388;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t776;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m3759 (HttpsClientStream_t733 * __this, Stream_t739 * ___stream, X509CertificateCollection_t757 * ___clientCertificates, HttpWebRequest_t734 * ___request, ByteU5BU5D_t441* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m3760 (HttpsClientStream_t733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m3761 (HttpsClientStream_t733 * __this, X509Certificate_t758 * ___certificate, Int32U5BU5D_t388* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t758 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3762 (Object_t * __this /* static, unused */, X509CertificateCollection_t757 * ___clientCerts, X509Certificate_t758 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t757 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t776 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3763 (Object_t * __this /* static, unused */, X509Certificate_t758 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
