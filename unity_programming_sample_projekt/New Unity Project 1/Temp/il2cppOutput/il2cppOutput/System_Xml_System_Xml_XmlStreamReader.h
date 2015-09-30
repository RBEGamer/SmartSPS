#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t735;
// System.Xml.XmlException
struct XmlException_t731;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t733  : public NonBlockingStreamReader_t734
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t735 * ___input_12;
};
struct XmlStreamReader_t733_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t731 * ___invalidDataException_13;
};
