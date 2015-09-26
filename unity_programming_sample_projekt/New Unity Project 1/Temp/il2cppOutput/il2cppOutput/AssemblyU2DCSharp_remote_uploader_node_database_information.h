#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// remote_uploader/node_database_information
struct  node_database_information_t21 
{
	// System.Single remote_uploader/node_database_information::pos_x
	float ___pos_x_0;
	// System.Single remote_uploader/node_database_information::pos_y
	float ___pos_y_1;
	// System.Int32 remote_uploader/node_database_information::node_id
	int32_t ___node_id_2;
	// System.String remote_uploader/node_database_information::node_connections
	String_t* ___node_connections_3;
	// System.String remote_uploader/node_database_information::node_parameters
	String_t* ___node_parameters_4;
	// System.String remote_uploader/node_database_information::NSI
	String_t* ___NSI_5;
};
// Native definition for marshalling of: remote_uploader/node_database_information
struct node_database_information_t21_marshaled
{
	float ___pos_x_0;
	float ___pos_y_1;
	int32_t ___node_id_2;
	char* ___node_connections_3;
	char* ___node_parameters_4;
	char* ___NSI_5;
};
