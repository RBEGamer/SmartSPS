#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<remote_uploader/node_database_information>
struct Comparison_1_t1993;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// remote_uploader/node_database_information
#include "AssemblyU2DCSharp_remote_uploader_node_database_information.h"

// System.Void System.Comparison`1<remote_uploader/node_database_information>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12331_gshared (Comparison_1_t1993 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12331(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1993 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12331_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<remote_uploader/node_database_information>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12332_gshared (Comparison_1_t1993 * __this, node_database_information_t21  ___x, node_database_information_t21  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12332(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1993 *, node_database_information_t21 , node_database_information_t21 , const MethodInfo*))Comparison_1_Invoke_m12332_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<remote_uploader/node_database_information>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12333_gshared (Comparison_1_t1993 * __this, node_database_information_t21  ___x, node_database_information_t21  ___y, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12333(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1993 *, node_database_information_t21 , node_database_information_t21 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12333_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<remote_uploader/node_database_information>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12334_gshared (Comparison_1_t1993 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12334(__this, ___result, method) (( int32_t (*) (Comparison_1_t1993 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12334_gshared)(__this, ___result, method)
