#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t52;
// System.Char[]
struct CharU5BU5D_t60;
// System.IO.Stream
struct Stream_t738;
// System.IO.TextWriter
struct TextWriter_t769;
// System.IO.StringWriter
struct StringWriter_t770;
// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t741;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t771;
// System.Collections.Stack
struct Stack_t719;
// System.Collections.ArrayList
struct ArrayList_t695;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t202;
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriter.h"
// System.Xml.XmlTextWriter/XmlDeclState
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclState.h"
// System.Xml.NewLineHandling
#include "System_Xml_System_Xml_NewLineHandling.h"
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.NamespaceHandling
#include "System_Xml_System_Xml_NamespaceHandling.h"
// System.Xml.XmlTextWriter
struct  XmlTextWriter_t767  : public XmlWriter_t768
{
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_t738 * ___base_stream_3;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t769 * ___source_4;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t769 * ___writer_5;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t770 * ___preserver_6;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name_7;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns_8;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment_9;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream_10;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding_11;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_12;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state_13;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity_14;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling_15;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity_16;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state_17;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state_18;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t741 * ___nsmanager_19;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count_20;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_t771* ___elements_21;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t719 * ___new_local_namespaces_22;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t695 * ___explicit_nsdecls_23;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling_24;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent_25;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count_26;
	// System.Char System.Xml.XmlTextWriter::indent_char
	uint16_t ___indent_char_27;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string_28;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline_29;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes_30;
	// System.Char System.Xml.XmlTextWriter::quote_char
	uint16_t ___quote_char_31;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2_32;
};
struct XmlTextWriter_t767_StaticFields{
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t52 * ___unmarked_utf8encoding_0;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t60* ___escaped_text_chars_1;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t60* ___escaped_attr_chars_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map53
	Dictionary_2_t202 * ___U3CU3Ef__switchU24map53_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map54
	Dictionary_2_t202 * ___U3CU3Ef__switchU24map54_34;
};
