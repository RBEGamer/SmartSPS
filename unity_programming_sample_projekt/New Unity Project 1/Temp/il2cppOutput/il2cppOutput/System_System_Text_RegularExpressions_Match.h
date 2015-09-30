#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t616;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1172;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t993;
// System.Text.RegularExpressions.Match
struct Match_t992;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct  Match_t992  : public Group_t994
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t616 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t993 * ___groups_9;
};
struct Match_t992_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t992 * ___empty_10;
};
