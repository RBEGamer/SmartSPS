#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t5;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// input_connector/click_state
#include "AssemblyU2DCSharp_input_connector_click_state.h"
// input_connector
struct  input_connector_t2  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject input_connector::parent
	GameObject_t4 * ___parent_2;
	// System.Int32 input_connector::node_index_to_add
	int32_t ___node_index_to_add_3;
	// UnityEngine.GameObject[] input_connector::nodes
	GameObjectU5BU5D_t5* ___nodes_4;
	// input_connector/click_state input_connector::curr_state
	int32_t ___curr_state_5;
	// UnityEngine.GameObject input_connector::selected_input_node
	GameObject_t4 * ___selected_input_node_6;
	// UnityEngine.GameObject input_connector::selected_output_node
	GameObject_t4 * ___selected_output_node_7;
};
