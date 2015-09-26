#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t831;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t914;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct  Group_t831  : public Capture_t913
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t914 * ___captures_5;
};
struct Group_t831_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t831 * ___Fail_3;
};
