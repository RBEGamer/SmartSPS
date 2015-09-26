#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.Exception
struct Exception_t32;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t738;
// System.Byte[]
struct ByteU5BU5D_t441;
// System.IO.Stream
struct Stream_t739;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct  ReceiveRecordAsyncResult_t737  : public Object_t
{
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::locker
	Object_t * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userCallback
	AsyncCallback_t187 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userState
	Object_t * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_asyncException
	Exception_t32 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::handle
	ManualResetEvent_t738 * ___handle_4;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_resultingBuffer
	ByteU5BU5D_t441* ____resultingBuffer_5;
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_record
	Stream_t739 * ____record_6;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::completed
	bool ___completed_7;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_initialBuffer
	ByteU5BU5D_t441* ____initialBuffer_8;
};
