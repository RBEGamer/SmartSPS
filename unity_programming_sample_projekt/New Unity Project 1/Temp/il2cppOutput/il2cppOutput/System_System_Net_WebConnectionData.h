#pragma once
#include <stdint.h>
// System.Net.HttpWebRequest
struct HttpWebRequest_t906;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1060;
// System.Version
struct Version_t1098;
// System.IO.Stream
struct Stream_t738;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionData
struct  WebConnectionData_t1118  : public Object_t
{
	// System.Net.HttpWebRequest System.Net.WebConnectionData::request
	HttpWebRequest_t906 * ___request_0;
	// System.Int32 System.Net.WebConnectionData::StatusCode
	int32_t ___StatusCode_1;
	// System.String System.Net.WebConnectionData::StatusDescription
	String_t* ___StatusDescription_2;
	// System.Net.WebHeaderCollection System.Net.WebConnectionData::Headers
	WebHeaderCollection_t1060 * ___Headers_3;
	// System.Version System.Net.WebConnectionData::Version
	Version_t1098 * ___Version_4;
	// System.IO.Stream System.Net.WebConnectionData::stream
	Stream_t738 * ___stream_5;
	// System.String System.Net.WebConnectionData::Challenge
	String_t* ___Challenge_6;
};
