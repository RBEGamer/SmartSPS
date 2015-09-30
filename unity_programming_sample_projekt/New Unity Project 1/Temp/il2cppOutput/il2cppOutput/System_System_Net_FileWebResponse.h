#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t711;
// System.IO.FileStream
struct FileStream_t798;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1060;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.FileWebResponse
struct  FileWebResponse_t1076  : public WebResponse_t799
{
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t711 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t798 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t1060 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;
};
