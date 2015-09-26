#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t19;
// UnityEngine.GameObject
struct GameObject_t4;
// UnityEngine.LineRenderer
struct LineRenderer_t20;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// enums/con_type
#include "AssemblyU2DCSharp_enums_con_type.h"
// enums/con_datatypes
#include "AssemblyU2DCSharp_enums_con_datatypes.h"
// node_conection
struct  node_conection_t18  : public MonoBehaviour_t3
{
	// enums/con_type node_conection::connection_type
	int32_t ___connection_type_2;
	// enums/con_datatypes node_conection::connection_datatype
	int32_t ___connection_datatype_3;
	// System.Int32 node_conection::connection_id
	int32_t ___connection_id_4;
	// System.Int32 node_conection::associated_node
	int32_t ___associated_node_5;
	// System.Int32 node_conection::connection_position
	int32_t ___connection_position_6;
	// UnityEngine.Material node_conection::ln_mat
	Material_t19 * ___ln_mat_7;
	// System.Int32 node_conection::connection_destination_input_id
	int32_t ___connection_destination_input_id_8;
	// UnityEngine.GameObject node_conection::con_text
	GameObject_t4 * ___con_text_9;
	// UnityEngine.LineRenderer node_conection::ln
	LineRenderer_t20 * ___ln_10;
};
