#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t464;
// UnityEngine.Collider
struct Collider_t35;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t465;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Collision
struct  Collision_t463  : public Object_t
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t10  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t10  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t464 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t35 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t465* ___m_Contacts_4;
};
