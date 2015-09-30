#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<remote_uploader/node_database_information>
struct Predicate_1_t1990;
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

// System.Void System.Predicate`1<remote_uploader/node_database_information>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12321_gshared (Predicate_1_t1990 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12321(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1990 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12321_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<remote_uploader/node_database_information>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12322_gshared (Predicate_1_t1990 * __this, node_database_information_t21  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12322(__this, ___obj, method) (( bool (*) (Predicate_1_t1990 *, node_database_information_t21 , const MethodInfo*))Predicate_1_Invoke_m12322_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<remote_uploader/node_database_information>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12323_gshared (Predicate_1_t1990 * __this, node_database_information_t21  ___obj, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12323(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1990 *, node_database_information_t21 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12323_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<remote_uploader/node_database_information>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12324_gshared (Predicate_1_t1990 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12324(__this, ___result, method) (( bool (*) (Predicate_1_t1990 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12324_gshared)(__this, ___result, method)
