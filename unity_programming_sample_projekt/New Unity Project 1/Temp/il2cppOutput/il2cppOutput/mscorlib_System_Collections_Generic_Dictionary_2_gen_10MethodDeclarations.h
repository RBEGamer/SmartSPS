#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2140;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2091;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t587;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2416;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2566;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1239;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2144;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14105_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14105(__this, method) (( void (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2__ctor_m14105_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14107_gshared (Dictionary_2_t2140 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14107(__this, ___comparer, method) (( void (*) (Dictionary_2_t2140 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14107_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14109_gshared (Dictionary_2_t2140 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14109(__this, ___capacity, method) (( void (*) (Dictionary_2_t2140 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14109_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14111_gshared (Dictionary_2_t2140 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14111(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2140 *, SerializationInfo_t587 *, StreamingContext_t588 , const MethodInfo*))Dictionary_2__ctor_m14111_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14113_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14113(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14113_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14115_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14115(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2140 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14115_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14117_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14117(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2140 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14117_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14119_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14119(__this, ___key, method) (( bool (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14119_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14121_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14121(__this, ___key, method) (( void (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14121_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14123_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14123(__this, method) (( bool (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14123_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14125_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14125(__this, method) (( Object_t * (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14125_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14127_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14127(__this, method) (( bool (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14127_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14129_gshared (Dictionary_2_t2140 * __this, KeyValuePair_2_t2142  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14129(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2140 *, KeyValuePair_2_t2142 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14129_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14131_gshared (Dictionary_2_t2140 * __this, KeyValuePair_2_t2142  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14131(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2140 *, KeyValuePair_2_t2142 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14131_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14133_gshared (Dictionary_2_t2140 * __this, KeyValuePair_2U5BU5D_t2416* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14133(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2140 *, KeyValuePair_2U5BU5D_t2416*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14133_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14135_gshared (Dictionary_2_t2140 * __this, KeyValuePair_2_t2142  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14135(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2140 *, KeyValuePair_2_t2142 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14135_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14137_gshared (Dictionary_2_t2140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14137(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2140 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14137_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14139_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14139(__this, method) (( Object_t * (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14139_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14141_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14141(__this, method) (( Object_t* (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14141_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14143_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14143(__this, method) (( Object_t * (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14143_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14145_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14145(__this, method) (( int32_t (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_get_Count_m14145_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14147_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14147(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14147_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14149_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14149(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2140 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14149_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14151_gshared (Dictionary_2_t2140 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14151(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2140 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14151_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14153_gshared (Dictionary_2_t2140 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14153(__this, ___size, method) (( void (*) (Dictionary_2_t2140 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14153_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14155_gshared (Dictionary_2_t2140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14155(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2140 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14155_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2142  Dictionary_2_make_pair_m14157_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14157(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2142  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14157_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14159_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14159(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14159_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14161_gshared (Dictionary_2_t2140 * __this, KeyValuePair_2U5BU5D_t2416* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14161(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2140 *, KeyValuePair_2U5BU5D_t2416*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14161_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14163_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14163(__this, method) (( void (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_Resize_m14163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14165_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14165(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2140 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m14165_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14167_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14167(__this, method) (( void (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_Clear_m14167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14169_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14169(__this, ___key, method) (( bool (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14169_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14171_gshared (Dictionary_2_t2140 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14171(__this, ___value, method) (( bool (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14171_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14173_gshared (Dictionary_2_t2140 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14173(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2140 *, SerializationInfo_t587 *, StreamingContext_t588 , const MethodInfo*))Dictionary_2_GetObjectData_m14173_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14175_gshared (Dictionary_2_t2140 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14175(__this, ___sender, method) (( void (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14175_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14177_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14177(__this, ___key, method) (( bool (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14177_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14179_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14179(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2140 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14179_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2144 * Dictionary_2_get_Values_m14181_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14181(__this, method) (( ValueCollection_t2144 * (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_get_Values_m14181_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14183_gshared (Dictionary_2_t2140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14183(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14183_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14185_gshared (Dictionary_2_t2140 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14185(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2140 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14185_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14187_gshared (Dictionary_2_t2140 * __this, KeyValuePair_2_t2142  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14187(__this, ___pair, method) (( bool (*) (Dictionary_2_t2140 *, KeyValuePair_2_t2142 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14187_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2146  Dictionary_2_GetEnumerator_m14189_gshared (Dictionary_2_t2140 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14189(__this, method) (( Enumerator_t2146  (*) (Dictionary_2_t2140 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14189_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1240  Dictionary_2_U3CCopyToU3Em__0_m14191_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14191(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1240  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14191_gshared)(__this /* static, unused */, ___key, ___value, method)
