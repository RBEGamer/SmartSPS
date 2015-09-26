#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// camera_movement
struct  camera_movement_t8  : public MonoBehaviour_t3
{
	// UnityEngine.Transform camera_movement::rotation_center
	Transform_t9 * ___rotation_center_2;
	// System.Single camera_movement::camera_height
	float ___camera_height_3;
	// System.Single camera_movement::camera_z
	float ___camera_z_4;
	// System.Single camera_movement::camera_zoom
	float ___camera_zoom_5;
	// System.Single camera_movement::camera_max_height
	float ___camera_max_height_6;
	// System.Single camera_movement::camera_min_height
	float ___camera_min_height_7;
	// System.Single camera_movement::steigungswinkel_grad
	float ___steigungswinkel_grad_8;
	// System.Boolean camera_movement::zoom_lock_at_100
	bool ___zoom_lock_at_100_9;
	// System.Boolean camera_movement::enable_mouse_movement
	bool ___enable_mouse_movement_10;
	// System.Boolean camera_movement::invert_input
	bool ___invert_input_11;
	// System.Boolean camera_movement::debug_unity_remote_app
	bool ___debug_unity_remote_app_12;
	// System.Int32 camera_movement::intert_input_value
	int32_t ___intert_input_value_13;
	// System.Single camera_movement::camera_max_zoom
	float ___camera_max_zoom_14;
	// System.Single camera_movement::camera_min_zoom
	float ___camera_min_zoom_15;
	// System.Single camera_movement::zoom_speed_multiplier_pc_mouse
	float ___zoom_speed_multiplier_pc_mouse_16;
	// System.Single camera_movement::zoom_speed_multiplier_pc_keyboard
	float ___zoom_speed_multiplier_pc_keyboard_17;
	// System.Single camera_movement::zoom_speed_multiplier_mobile
	float ___zoom_speed_multiplier_mobile_18;
	// System.Single camera_movement::camera_movement_speed_pc
	float ___camera_movement_speed_pc_19;
	// System.Single camera_movement::camera_movement_speed_mobile
	float ___camera_movement_speed_mobile_20;
	// UnityEngine.Vector3 camera_movement::initial_camera_position
	Vector3_t10  ___initial_camera_position_21;
	// UnityEngine.Vector3 camera_movement::camera_position_offset
	Vector3_t10  ___camera_position_offset_22;
	// System.Int32 camera_movement::screen_boarder_to_move
	int32_t ___screen_boarder_to_move_23;
	// UnityEngine.Vector2 camera_movement::current_mouse_pos
	Vector2_t11  ___current_mouse_pos_24;
};
