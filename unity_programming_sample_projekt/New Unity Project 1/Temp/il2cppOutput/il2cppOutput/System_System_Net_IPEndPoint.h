#pragma once
#include <stdint.h>
// System.Net.IPAddress
struct IPAddress_t1106;
// System.Net.EndPoint
#include "System_System_Net_EndPoint.h"
// System.Net.IPEndPoint
struct  IPEndPoint_t1093  : public EndPoint_t1038
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t1106 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;
};
