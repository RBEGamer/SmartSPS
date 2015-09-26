#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m2739 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_advance(System.Int32)
extern "C" void CharacterInfo_set_advance_m2740 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m2741 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_glyphWidth(System.Int32)
extern "C" void CharacterInfo_set_glyphWidth_m2742 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m2743 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_glyphHeight(System.Int32)
extern "C" void CharacterInfo_set_glyphHeight_m2744 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m2745 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_bearing(System.Int32)
extern "C" void CharacterInfo_set_bearing_m2746 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m2747 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_minY(System.Int32)
extern "C" void CharacterInfo_set_minY_m2748 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m2749 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_maxY(System.Int32)
extern "C" void CharacterInfo_set_maxY_m2750 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m2751 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_minX(System.Int32)
extern "C" void CharacterInfo_set_minX_m2752 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m2753 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_maxX(System.Int32)
extern "C" void CharacterInfo_set_maxX_m2754 (CharacterInfo_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t11  CharacterInfo_get_uvBottomLeftUnFlipped_m2755 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeftUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomLeftUnFlipped_m2756 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t11  CharacterInfo_get_uvBottomRightUnFlipped_m2757 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvBottomRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRightUnFlipped_m2758 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t11  CharacterInfo_get_uvTopRightUnFlipped_m2759 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvTopRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRightUnFlipped_m2760 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t11  CharacterInfo_get_uvTopLeftUnFlipped_m2761 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvTopLeftUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeftUnFlipped_m2762 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t11  CharacterInfo_get_uvBottomLeft_m2763 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomLeft_m2764 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t11  CharacterInfo_get_uvBottomRight_m2765 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvBottomRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRight_m2766 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t11  CharacterInfo_get_uvTopRight_m2767 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvTopRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRight_m2768 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t11  CharacterInfo_get_uvTopLeft_m2769 (CharacterInfo_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvTopLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeft_m2770 (CharacterInfo_t495 * __this, Vector2_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CharacterInfo_t495_marshal(const CharacterInfo_t495& unmarshaled, CharacterInfo_t495_marshaled& marshaled);
extern "C" void CharacterInfo_t495_marshal_back(const CharacterInfo_t495_marshaled& marshaled, CharacterInfo_t495& unmarshaled);
extern "C" void CharacterInfo_t495_marshal_cleanup(CharacterInfo_t495_marshaled& marshaled);
