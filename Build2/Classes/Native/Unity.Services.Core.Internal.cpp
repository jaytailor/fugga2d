#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>
struct Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>
struct Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32>
struct IReadOnlyCollection_1_t0114882DFCA42EC6C648641A315FCD199A031075;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct KeyCollection_t017A3C390BDA13690840EBBC865515DB80085258;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct KeyCollection_t304DFD5A0E4619A012FCB1763FC797D8F7CBA71A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct ValueCollection_t9CACBC0D045234A3E3C144C48C04B64794475A62;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct ValueCollection_tC0B58DA7C0433448029FE2BACD7848C036C3E4FE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct ValueCollection_t34BBEB9C03313D552CDFBC4C7554A405EF018D18;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<System.Int32>>[]
struct EntryU5BU5D_t57B820DF2CED255D3C95F7A90EFFBBFB3A07CD9E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>[]
struct EntryU5BU5D_tD5E8DD9A88E75DC423244A19A730077DAF1E6687;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.IServiceComponent>[]
struct EntryU5BU5D_t5A71599D2E773B2D4D0C0FC45A91C1C8BC29AD75;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>[]
struct EntryU5BU5D_t0251DEA7A90D733BCA68E7A473C992294FE187F4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// Unity.Services.Core.Internal.AsyncOperation
struct AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Unity.Services.Core.Internal.AsyncOperationBase
struct AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// Unity.Services.Core.Internal.CircularDependencyException
struct CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC;
// Unity.Services.Core.Internal.ComponentRegistry
struct ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// Unity.Services.Core.Internal.CoreRegistryInitializer
struct CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.Services.Core.Internal.DependencyTree
struct DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Exception
struct Exception_t;
// Unity.Services.Core.Networking.Internal.HttpRequest
struct HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03;
// Unity.Services.Core.Networking.Internal.HttpResponse
struct HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59;
// Unity.Services.Core.Internal.IAsyncOperation
struct IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Core.Internal.IInitializablePackage
struct IInitializablePackage_tC78F3A872EFC30DA406E624FDC1C72C9B1381098;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// Unity.Services.Core.Internal.IServiceComponent
struct IServiceComponent_t88C101C3AF6A1CA33BFF6842BF9AD1E6266E72E9;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// Unity.Services.Core.Internal.LockedComponentRegistry
struct LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F;
// Unity.Services.Core.Internal.LockedPackageRegistry
struct LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Services.Core.Internal.MissingComponent
struct MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// Unity.Services.Core.Internal.PackageRegistry
struct PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9;
// Unity.Services.Core.Internal.PreventAotStripping
struct PreventAotStripping_tD14B398038581CA562049BA05E6722BBC1D2CF53;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// Unity.Services.Core.Internal.TaskAsyncOperation
struct TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Unity.Services.Core.Internal.UnityServicesInternal
struct UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375;
// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0;
// Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944;
// Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9;
// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Unity.Services.Core.Internal.TaskAsyncOperation/<>c
struct U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2;
// Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializablePackage_tC78F3A872EFC30DA406E624FDC1C72C9B1381098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t0114882DFCA42EC6C648641A315FCD199A031075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral17D9D9AD164713AC451185991D75EF5F482F34E1;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9;
IL2CPP_EXTERN_C String_t* _stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81;
IL2CPP_EXTERN_C String_t* _stringLiteral569045DB02C57E62748D078AAAB3C20AAB0640AB;
IL2CPP_EXTERN_C String_t* _stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B;
IL2CPP_EXTERN_C String_t* _stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
IL2CPP_EXTERN_C String_t* _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralFAFBB570A0C923E831AB15C338ABE4641A7828DE;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PreventAotStripping_PreserveStringEnumConverterForAOT_mF25BBCD480CD5D4CD1915CCF5076BB7041ADA894_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CInitializePackageAtU3Eg__TrackFailureAndProceedInitializationU7C0_m1620911543F8F1720F73835184E07ECECECA2258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServicesInternal_OnInitializationCompleted_mBE2706653713DFC2455056C32B33DCBA5EC8B728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t69B2CF866FE66B798597285246666CFA7B9798CA 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t57B820DF2CED255D3C95F7A90EFFBBFB3A07CD9E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t017A3C390BDA13690840EBBC865515DB80085258* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD5E8DD9A88E75DC423244A19A730077DAF1E6687* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9CACBC0D045234A3E3C144C48C04B64794475A62* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5A71599D2E773B2D4D0C0FC45A91C1C8BC29AD75* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC0B58DA7C0433448029FE2BACD7848C036C3E4FE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0251DEA7A90D733BCA68E7A473C992294FE187F4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t304DFD5A0E4619A012FCB1763FC797D8F7CBA71A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t34BBEB9C03313D552CDFBC4C7554A405EF018D18* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ____task_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ____dictionary_0;
};
struct Il2CppArrayBounds;

// Unity.Services.Core.Internal.AsyncOperationExtensions
struct AsyncOperationExtensions_t7B8CA055BEF33981ED3D43D7663DCF2FCFEC7B4C  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.ComponentRegistry
struct ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::<ComponentTypeHashToInstance>k__BackingField
	Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___U3CComponentTypeHashToInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.CoreLogger
struct CoreLogger_tAC968BAEF6C6BF338D4EE7A71CBFC5A3992ED287  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;
};

struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.CoreRegistryInitializer
struct CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03  : public RuntimeObject
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistryInitializer::m_Registry
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___m_Registry_0;
	// Unity.Services.Core.Internal.AsyncOperation Unity.Services.Core.Internal.CoreRegistryInitializer::m_Operation
	AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* ___m_Operation_1;
	// System.Collections.Generic.List`1<System.Int32> Unity.Services.Core.Internal.CoreRegistryInitializer::m_SortedPackageTypeHashes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SortedPackageTypeHashes_2;
	// System.Collections.Generic.List`1<System.Exception> Unity.Services.Core.Internal.CoreRegistryInitializer::m_PackageInitializationFailureReasons
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ___m_PackageInitializationFailureReasons_3;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
};

// Unity.Services.Core.Internal.DependencyTree
struct DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage> Unity.Services.Core.Internal.DependencyTree::PackageTypeHashToInstance
	Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ___PackageTypeHashToInstance_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Unity.Services.Core.Internal.DependencyTree::ComponentTypeHashToPackageTypeHash
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___ComponentTypeHashToPackageTypeHash_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> Unity.Services.Core.Internal.DependencyTree::PackageTypeHashToComponentTypeHashDependencies
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___PackageTypeHashToComponentTypeHashDependencies_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.DependencyTree::ComponentTypeHashToInstance
	Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___ComponentTypeHashToInstance_3;
};

// Unity.Services.Core.Networking.Internal.HttpRequestExtensions
struct HttpRequestExtensions_t8601C12B123C24B30FD3629A183BAD02D3F27E4C  : public RuntimeObject
{
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::m_Values
	RuntimeObject* ___m_Values_0;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.LockedComponentRegistry
struct LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.LockedComponentRegistry::<Registry>k__BackingField
	RuntimeObject* ___U3CRegistryU3Ek__BackingField_1;
};

// Unity.Services.Core.Internal.LockedPackageRegistry
struct LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::<Registry>k__BackingField
	RuntimeObject* ___U3CRegistryU3Ek__BackingField_1;
};

// Unity.Services.Core.Internal.MissingComponent
struct MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8  : public RuntimeObject
{
};

struct MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_StaticFields
{
	// Unity.Services.Core.Internal.MissingComponent Unity.Services.Core.Internal.MissingComponent::<Instance>k__BackingField
	MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.PackageRegistry
struct PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9  : public RuntimeObject
{
	// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::<Tree>k__BackingField
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___U3CTreeU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.PreventAotStripping
struct PreventAotStripping_tD14B398038581CA562049BA05E6722BBC1D2CF53  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Unity.Services.Core.UnityServices
struct UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317  : public RuntimeObject
{
};

struct UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields
{
	// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::<InstantiationCompletion>k__BackingField
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___U3CInstantiationCompletionU3Ek__BackingField_1;
};

// Unity.Services.Core.Internal.UnityServicesInitializer
struct UnityServicesInitializer_tF4287AF7FF70BF3671B5DCAC5D9ECF2B3FB996C3  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.UnityWebRequestUtils
struct UnityWebRequestUtils_t825249AFFC48EF2B9787D9E74BD5368FE0C951C1  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375  : public RuntimeObject
{
	// System.Action Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
};

// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0  : public RuntimeObject
{
	// System.Action Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
};

// Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944  : public RuntimeObject
{
	// System.Action Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
};

// Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___taskCompletionSource_0;
};

// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544  : public RuntimeObject
{
	// Unity.Services.Core.Internal.CoreRegistryInitializer Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::<>4__this
	CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* ___U3CU3E4__this_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::index
	int32_t ___index_1;
};

// Unity.Services.Core.Internal.TaskAsyncOperation/<>c
struct U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2  : public RuntimeObject
{
};

struct U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields
{
	// Unity.Services.Core.Internal.TaskAsyncOperation/<>c Unity.Services.Core.Internal.TaskAsyncOperation/<>c::<>9
	U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* ___U3CU3E9_0;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> Unity.Services.Core.Internal.TaskAsyncOperation/<>c::<>9__10_0
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___U3CU3E9__10_0_1;
};

// Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::completionSource
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___completionSource_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// Unity.Services.Core.Internal.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662 
{
	// Unity.Services.Core.Internal.IAsyncOperation Unity.Services.Core.Internal.AsyncOperationAwaiter::m_Operation
	RuntimeObject* ___m_Operation_0;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_pinvoke
{
	RuntimeObject* ___m_Operation_0;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_com
{
	RuntimeObject* ___m_Operation_0;
};

// Unity.Services.Core.Internal.AsyncOperationBase
struct AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation> Unity.Services.Core.Internal.AsyncOperationBase::m_CompletedCallback
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___m_CompletedCallback_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};

// Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3 
{
	// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::Tree
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___Tree_0;
	// System.Collections.Generic.ICollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::Target
	RuntimeObject* ___Target_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::m_PackageTypeHashExplorationHistory
	Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* ___m_PackageTypeHashExplorationHistory_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_pinvoke
{
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___Tree_0;
	RuntimeObject* ___Target_1;
	Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* ___m_PackageTypeHashExplorationHistory_2;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_com
{
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___Tree_0;
	RuntimeObject* ___Target_1;
	Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* ___m_PackageTypeHashExplorationHistory_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Unity.Services.Core.Networking.Internal.HttpOptions
struct HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC 
{
	// System.Int32 Unity.Services.Core.Networking.Internal.HttpOptions::RequestTimeoutInSeconds
	int32_t ___RequestTimeoutInSeconds_0;
	// System.Int32 Unity.Services.Core.Networking.Internal.HttpOptions::RedirectLimit
	int32_t ___RedirectLimit_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
struct ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 
{
	// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::m_Request
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___m_Request_0;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
struct ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_pinvoke
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___m_Request_0;
};
// Native definition for COM marshalling of Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
struct ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_com
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___m_Request_0;
};

// Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
struct ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9 
{
	// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::m_Response
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___m_Response_0;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
struct ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_pinvoke
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___m_Response_0;
};
// Native definition for COM marshalling of Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
struct ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_com
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___m_Response_0;
};

// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Converters.StringEnumConverter::<NamingStrategy>k__BackingField
	NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___U3CNamingStrategyU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<AllowIntegerValues>k__BackingField
	bool ___U3CAllowIntegerValuesU3Ek__BackingField_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// Unity.Services.Core.Internal.AsyncOperationStatus
struct AsyncOperationStatus_t59AAF954B21DE409B04BE2AFB6442665F082C13A 
{
	// System.Int32 Unity.Services.Core.Internal.AsyncOperationStatus::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Unity.Services.Core.Networking.Internal.HttpRequest
struct HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03  : public RuntimeObject
{
	// System.String Unity.Services.Core.Networking.Internal.HttpRequest::Method
	String_t* ___Method_0;
	// System.String Unity.Services.Core.Networking.Internal.HttpRequest::Url
	String_t* ___Url_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.HttpRequest::Headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Headers_2;
	// System.Byte[] Unity.Services.Core.Networking.Internal.HttpRequest::Body
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Body_3;
	// Unity.Services.Core.Networking.Internal.HttpOptions Unity.Services.Core.Networking.Internal.HttpRequest::Options
	HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC ___Options_4;
};

// Unity.Services.Core.Networking.Internal.HttpResponse
struct HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59  : public RuntimeObject
{
	// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest Unity.Services.Core.Networking.Internal.HttpResponse::Request
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ___Request_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.HttpResponse::Headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Headers_1;
	// System.Byte[] Unity.Services.Core.Networking.Internal.HttpResponse::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_2;
	// System.Int64 Unity.Services.Core.Networking.Internal.HttpResponse::StatusCode
	int64_t ___StatusCode_3;
	// System.String Unity.Services.Core.Networking.Internal.HttpResponse::ErrorMessage
	String_t* ___ErrorMessage_4;
	// System.Boolean Unity.Services.Core.Networking.Internal.HttpResponse::IsHttpError
	bool ___IsHttpError_5;
	// System.Boolean Unity.Services.Core.Networking.Internal.HttpResponse::IsNetworkError
	bool ___IsNetworkError_6;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// UnityEngine.LogType
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;
};

// Unity.Services.Core.ServicesInitializationState
struct ServicesInitializationState_t3285FD49152B310475A0B1254422946A268764AD 
{
	// System.Int32 Unity.Services.Core.ServicesInitializationState::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Unity.Services.Core.Internal.TaskAsyncOperation
struct TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128  : public AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124
{
	// System.Threading.Tasks.Task Unity.Services.Core.Internal.TaskAsyncOperation::m_Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_Task_2;
};

struct TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields
{
	// System.Threading.Tasks.TaskScheduler Unity.Services.Core.Internal.TaskAsyncOperation::Scheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___Scheduler_1;
};

// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// System.Threading.Tasks.TaskStatus
struct TaskStatus_tDF62ACF297808A2BF8B7465A4A8E9FF161C9AB79 
{
	// System.Int32 System.Threading.Tasks.TaskStatus::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark
struct ExplorationMark_t80EA896AFCB1D83A69419B657CF49E1CF34CF31B 
{
	// System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UnityWebRequest/Result
struct Result_tFB98154F15BF37A66902802D441FEFADC68D4C87 
{
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// Unity.Services.Core.Internal.AsyncOperation
struct AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0  : public RuntimeObject
{
	// System.Boolean Unity.Services.Core.Internal.AsyncOperation::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperation::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_1;
	// System.Exception Unity.Services.Core.Internal.AsyncOperation::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_2;
	// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation> Unity.Services.Core.Internal.AsyncOperation::m_CompletedCallback
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___m_CompletedCallback_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Unity.Services.Core.Internal.UnityServicesInternal
struct UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE  : public RuntimeObject
{
	// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal::<Options>k__BackingField
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___U3COptionsU3Ek__BackingField_1;
	// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::CanInitialize
	bool ___CanInitialize_2;
	// Unity.Services.Core.Internal.AsyncOperation Unity.Services.Core.Internal.UnityServicesInternal::m_Initialization
	AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* ___m_Initialization_3;
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::<Registry>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CRegistryU3Ek__BackingField_4;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>
struct Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Unity.Services.Core.Internal.CircularDependencyException
struct CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC  : public ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m45D4BDE5F5F4F795B9A0C2C49164D2C67F66158E_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9C7A828C0B5419633EB1A5AA73FC2E06284E639E_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAE0A06EC5B926430F136A7C53C6C039591152462_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___method0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::.ctor(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B_inline (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___request0, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::.ctor(Unity.Services.Core.Networking.Internal.HttpResponse)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C_inline (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___response0, const RuntimeMethod* method) ;
// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Int64 Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.AsyncOperation::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>::Invoke(T)
inline void Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50 (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared)(__this, ___obj0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Status(Unity.Services.Core.Internal.AsyncOperationStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_IsDone(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Exception(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.OperationCanceledException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4 (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::.ctor(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668_inline (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, RuntimeObject* ___asyncOperation0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m0C6D38DE814AB874FF9303D952D1E7A82F8120DA (U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9 (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m5549E3FE1162B8CBEF71ED6F8254360B00C9682D (U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.AsyncOperationAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_m238748BEE1ADD4EDF78ED968D94A089897228BB8 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m122B1CD2CAB952EAC3144B97638FA48B26CC00E1 (U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_add_Completed_mBF050A2DCED3671779F2DCB9CE85B0CBF09D434C (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD92A511117A89E573219D50367FC2ECD9551DA54 (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
inline void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::<AsTask>g__CompleteTask|0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* __this, RuntimeObject* ___operation0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_gshared)(__this, ___exception0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
inline bool TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, RuntimeObject*, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_gshared)(__this, ___result0, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase__ctor_mAF087348521B946CBA095B83B3FC55FBE1C9E314 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::SetScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation_SetScheduler_m9332E7895ECAB965F2235125568C07C577113A0C (const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9 (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___continuationAction0, RuntimeObject* ___state1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, int32_t ___continuationOptions3, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler4, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::.ctor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation__ctor_mEDC34C8442D9965300375DEB7A1658ED3BF33D46 (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Start_m2DC09C3214A841B5C3A6AD800E4020DE365FA620 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_FromCurrentSynchronizationContext_m5B4C4FEA7E2375B6C71B2D35FA7E8E0197293428 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A0343E410EC083744848A5D7F30B3A483D4ED20 (U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::DidComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_DidComplete_m898BABFB881C305E46DE4A8B443BED8E94A8F948 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) ;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20_inline (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9*, int32_t, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// Unity.Services.Core.Internal.MissingComponent Unity.Services.Core.Internal.MissingComponent::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* MissingComponent_get_Instance_mAB80E0DDC311B463121A6946C1F10D6BE614A3E5_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, RuntimeObject* ___registry0, int32_t ___packageHash1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330 (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___tree0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___componentTypeHashToInstance0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927 (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, RuntimeObject* ___registryToLock0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::get_ComponentRegistry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.LockedComponentRegistry::.ctor(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1 (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* __this, RuntimeObject* ___registryToLock0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::CompleteInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_CompleteInitialization_m7243B763EBD1A9974916A939A70B6EEA24168B2C (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
inline void List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::InitializePackageAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_InitializePackageAt_mAC199EE2E9B924285074EB6B77648ECD4D3BE19E (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Succeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Succeed_mE56F6B7EC1E7A92BD743C0B4E8D4EC85C1F07A28 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) ;
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, RuntimeObject* ___innerExceptions0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::Fail(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Fail_m863A1DBBA999B7B0EA18739E519AACFF0054A5DF (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___reason0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mDE6DEBA879D9F7E6C5FBB18B102ADE63014E4C94 (U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer::GetPackageAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistryInitializer_GetPackageAt_mFA97EEF57B94EFC6EBF88C57353B096959899F99 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m0520801D14DFF2AFA6140672AE2D7BAE100E1A43 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___continuationAction0, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
inline void List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, Exception_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, Exception_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071 (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Threading.Tasks.TaskStatus System.Threading.Tasks.Task::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::.ctor()
inline void Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868 (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::.ctor()
inline void Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72 (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* __this, Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ___packageToInstance0, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___componentToPackage1, Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___packageToComponentDependencies2, Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___componentToInstance3, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___tree0, RuntimeObject* ___target1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205 (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m45D4BDE5F5F4F795B9A0C2C49164D2C67F66158E_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___packageTypeHash0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Values()
inline ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882 (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* (*) (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>::GetEnumerator()
inline Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7 (ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 (*) (ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6*, const RuntimeMethod*))ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::Dispose()
inline void Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36 (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5*, const RuntimeMethod*))Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Current()
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_inline (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5* __this, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5*, const RuntimeMethod*))Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline)(__this, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::MoveNext()
inline bool Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925 (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5*, const RuntimeMethod*))Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared)(__this, method);
}
// System.Boolean Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::IsOptional(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeInitializeOrderSorter_IsOptional_m6A6CF00707E0D87469552A28996BBAD5F7957C78 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::IsProvided(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeInitializeOrderSorter_IsProvided_m3F8555633FE8E2A1AFFE39D0C902BD23AC171364 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4 (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m9C7A828C0B5419633EB1A5AA73FC2E06284E639E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2 (CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___packageTypeHash0, int32_t ___mark1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___packageTypeHash0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method) ;
// System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mAE0A06EC5B926430F136A7C53C6C039591152462_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Keys()
inline KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06 (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* (*) (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36*, const RuntimeMethod*))Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Item(TKey)
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared)(__this, ___key0, method);
}
// System.Void Unity.Services.Core.Internal.MissingComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingComponent__ctor_mF979DE0E49A4D89DB2730CA254E594D7E8EF30B5 (MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A_inline (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C_inline (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::get_Tree()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B_inline (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_Instance(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_Instance_mF131533D65A3CDAE3C7DCB969369DC33AE15CADA_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal__ctor_mE1CD373BE5A4323A6CF1F27D0B9DD0264C441FA5 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.UnityServices::set_Instance(Unity.Services.Core.IUnityServices)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_Instance_m4623DEFDB0F3E54B27834ADA639565E8E1D2ACD3_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::get_InstantiationCompletion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_m8DA644951E01436B3FE99881CFD4CBDE5E107A46_inline (const RuntimeMethod* method) ;
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m497618344EE8CEF1455FAC5A3AD84164F9DDF6E8_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::EnableInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_EnableInitialization_m22C8228B658003BA234EB36E085AEFC987490E47 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasInitializationFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_HasInitializationFailed_m3CBF2389027203FFD69564492D4A40C7314946F5 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_Options(Unity.Services.Core.InitializationOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::CreateInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_CreateInitialization_mFB7E812553282DF2F2600F5F700436B4BFA3E127 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.Internal.AsyncOperationExtensions::AsTask(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncOperationExtensions_AsTask_m2EDCCEA7ABE216E3D5BDE1AABA6B8A7BDF82A4A5 (RuntimeObject* ___self0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::StartInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_StartInitialization_m224881A50A61A1E59F3E1DDFC783C5E5A7EE1668 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperation::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AsyncOperation_get_Status_m0A936D453514234140366F6C2318ECA656CF3A87_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_m39B9682C2896CAA23CAC25FCF9D902C19EBF11DE (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::SetInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_SetInProgress_mF9F046353697ECEB9B2FD83E3193E8C050BCC860 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_Completed_m3BF706D0128F8660347D12C9C4F4DCBB580EC67F (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Count()
inline int32_t Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.AsyncOperation,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer__ctor_m53CA275B05368556550BE038B94CC69D4D555329 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* ___operation1, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___sortedPackageTypeHashes2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_InitializeRegistry_mA8BEC2E19E3BD1F8FC5B7654375B3BB727442E38 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockComponentRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockPackageRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockPackageRegistration_m031751BE6E5CBB6D30AAE2B64DAF04FC0EEA5A0B (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEnumConverter__ctor_m36B6009E735666675AEB30CD83B385291E98CC73 (StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1 (U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtils_HasSucceeded_mB0737EF4169CFB0110E7AFA40F3E9A649D6FB50D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___self0, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared)(__this, ___exception0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Networking.Internal.HttpRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequest__ctor_mFA4C4CD9671444C5892575B80746E0772BFBD2E2 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, const RuntimeMethod* method) 
{
{
		// public HttpRequest() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public HttpRequest() {}
		return;
	}
}
// System.Void Unity.Services.Core.Networking.Internal.HttpRequest::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequest__ctor_mC4489FDDBE8347EC6991F8FE82845193230AD16A (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___method0, String_t* ___url1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___body3, const RuntimeMethod* method) 
{
{
		// public HttpRequest(string method, string url, Dictionary<string, string> headers, byte[] body)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Method = method;
		String_t* L_0 = ___method0;
		__this->___Method_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Method_0), (void*)L_0);
		// Url = url;
		String_t* L_1 = ___url1;
		__this->___Url_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Url_1), (void*)L_1);
		// Headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___headers2;
		__this->___Headers_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_2), (void*)L_2);
		// Body = body;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___body3;
		__this->___Body_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_3), (void*)L_3);
		// }
		return;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___method0, const RuntimeMethod* method) 
{
{
		// Method = method;
		String_t* L_0 = ___method0;
		__this->___Method_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Method_0), (void*)L_0);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetUrl_m3D7DDD4113C5FDDEFA35499033A48BDCBCDF0F1A (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___url0, const RuntimeMethod* method) 
{
{
		// Url = url;
		String_t* L_0 = ___url0;
		__this->___Url_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Url_1), (void*)L_0);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetHeader_m2DC1503D7C51FA7E0D93ABD170EE43720114F4AB (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (Headers is null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___Headers_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Headers = new Dictionary<string, string>(1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2(L_1, 1, /*hidden argument*/Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2_RuntimeMethod_var);
		__this->___Headers_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_2), (void*)L_1);
	}

IL_0014:
	{
		// Headers[key] = value;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = __this->___Headers_2;
		String_t* L_3 = ___key0;
		String_t* L_4 = ___value1;
		NullCheck(L_2);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_2, L_3, L_4, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetHeaders_mE3D7A9F8099C9FF9857674E646C3B0BD10A842A5 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers0, const RuntimeMethod* method) 
{
{
		// Headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___headers0;
		__this->___Headers_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_2), (void*)L_0);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetBody(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetBody_mE1ABCAE172B4BCDFDF9B9EA0A518C46997E8133D (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___body0, const RuntimeMethod* method) 
{
{
		// Body = body;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___body0;
		__this->___Body_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_3), (void*)L_0);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetOptions(Unity.Services.Core.Networking.Internal.HttpOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetOptions_m1271D089E1B03979885B59141F1763C26BC48FE7 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC ___options0, const RuntimeMethod* method) 
{
{
		// Options = options;
		HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC L_0 = ___options0;
		__this->___Options_4 = L_0;
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetRedirectLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetRedirectLimit_mE0252B498EFF4A1AA52DD11AAFFA2F2A2FEE3D37 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, int32_t ___redirectLimit0, const RuntimeMethod* method) 
{
{
		// Options.RedirectLimit = redirectLimit;
		HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC* L_0 = (&__this->___Options_4);
		int32_t L_1 = ___redirectLimit0;
		L_0->___RedirectLimit_1 = L_1;
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetTimeOutInSeconds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetTimeOutInSeconds_mCC75A3869DA6ECB09515FD6BDD6F17C47C70A908 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, int32_t ___timeout0, const RuntimeMethod* method) 
{
{
		// Options.RequestTimeoutInSeconds = timeout;
		HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC* L_0 = (&__this->___Options_4);
		int32_t L_1 = ___timeout0;
		L_0->___RequestTimeoutInSeconds_0 = L_1;
		// return this;
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsGet(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsGet_m28DF3ED7F818274BF1AC977B17CC0C525E354AFD (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("GET");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPost(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsPost_mF1A934B205A1884F4981E920D31BE19A05B8FA3C (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("POST");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPut(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsPut_m890B18C8C5429D6E34E3FBF2F5057E2DDD26E6C9 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("PUT");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsDelete(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsDelete_m5AD1D8F86BD40371874367FC549FB552A905C53F (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("DELETE");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPatch(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsPatch_m4B291F0F4D58A20CF0200F26DE209AD888834512 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("PATCH");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsHead(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsHead_mEFED7EF8E375D169ED994C2AF8AA72CDC363B165 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("HEAD");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsConnect(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsConnect_mA31E141BC108F548E27E0A004B61B6A24AB64053 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("CONNECT");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsOptions(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsOptions_m746C02B3B06FCFBEA9680115FFAC4330970AE279 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("OPTIONS");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsTrace(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsTrace_m1409607795138437F7FB4EEE5ADB2D716A587065 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral569045DB02C57E62748D078AAAB3C20AAB0640AB);
		s_Il2CppMethodInitialized = true;
	}
{
		// return self.SetMethod("TRACE");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___self0;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral569045DB02C57E62748D078AAAB3C20AAB0640AB, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetRequest(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetRequest_m5FAFFF426085600C4B924AF89876CFA229423982 (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___request0, const RuntimeMethod* method) 
{
{
		// Request = new ReadOnlyHttpRequest(request);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___request0;
		ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B_inline((&L_1), L_0, /*hidden argument*/NULL);
		__this->___Request_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Request_0))->___m_Request_0), (void*)NULL);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetRequest(Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetRequest_m157F40648D8A89D39A4FCA78A34C12844BD2972B (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ___request0, const RuntimeMethod* method) 
{
{
		// Request = request;
		ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 L_0 = ___request0;
		__this->___Request_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Request_0))->___m_Request_0), (void*)NULL);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetHeader_mA8207E139EC699A78CCEAFE41099E106859739EF (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// Headers[key] = value;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___Headers_1;
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetHeaders_m9787E73858C566DD4D3B2106CBF714E3BCEB1823 (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers0, const RuntimeMethod* method) 
{
{
		// Headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___headers0;
		__this->___Headers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_1), (void*)L_0);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetData_m7C392B3890056E0405626462183B05F1A24F24BD (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
{
		// Data = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		__this->___Data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_2), (void*)L_0);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetStatusCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetStatusCode_m53FC74E65C0256A49B51F7F4ACB265958C08166E (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, int64_t ___statusCode0, const RuntimeMethod* method) 
{
{
		// StatusCode = statusCode;
		int64_t L_0 = ___statusCode0;
		__this->___StatusCode_3 = L_0;
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetErrorMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetErrorMessage_m41C88451AEBB8A9727621F4E6F6C9D63EEF75AFE (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, String_t* ___errorMessage0, const RuntimeMethod* method) 
{
{
		// ErrorMessage = errorMessage;
		String_t* L_0 = ___errorMessage0;
		__this->___ErrorMessage_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ErrorMessage_4), (void*)L_0);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetIsHttpError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetIsHttpError_m42D96A0FA33493639D8D312AB9B0E080CDD7AD91 (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, bool ___isHttpError0, const RuntimeMethod* method) 
{
{
		// IsHttpError = isHttpError;
		bool L_0 = ___isHttpError0;
		__this->___IsHttpError_5 = L_0;
		// return this;
		return __this;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetIsNetworkError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetIsNetworkError_mBE51289A5E2DCCB412D3F15245A2DDD4109AFA9B (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, bool ___isNetworkError0, const RuntimeMethod* method) 
{
{
		// IsNetworkError = isNetworkError;
		bool L_0 = ___isNetworkError0;
		__this->___IsNetworkError_6 = L_0;
		// return this;
		return __this;
	}
}
// System.Void Unity.Services.Core.Networking.Internal.HttpResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponse__ctor_mFF0EA6082417016169BE870EE83437BA173172B4 (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_pinvoke(const ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560& unmarshaled, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Request_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Request' of type 'ReadOnlyHttpRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Request_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_pinvoke_back(const ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_pinvoke& marshaled, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560& unmarshaled)
{
	Exception_t* ___m_Request_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Request' of type 'ReadOnlyHttpRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Request_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_pinvoke_cleanup(ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_com(const ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560& unmarshaled, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_com& marshaled)
{
	Exception_t* ___m_Request_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Request' of type 'ReadOnlyHttpRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Request_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_com_back(const ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_com& marshaled, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560& unmarshaled)
{
	Exception_t* ___m_Request_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Request' of type 'ReadOnlyHttpRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Request_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_com_cleanup(ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::.ctor(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___request0, const RuntimeMethod* method) 
{
{
		// m_Request = request;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___request0;
		__this->___m_Request_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B_AdjustorThunk (RuntimeObject* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___request0, const RuntimeMethod* method)
{
ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B_inline(_thisAdjusted, ___request0, method);
}
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) 
{
{
		// public string Method => m_Request.Method;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = __this->___m_Request_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Method_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) 
{
{
		// public string Url => m_Request.Url;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = __this->___m_Request_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Url_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) 
{
{
		// public IReadOnlyDictionary<string, string> Headers => m_Request.Headers;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = __this->___m_Request_0;
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0->___Headers_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) 
{
{
		// public byte[] Body => m_Request.Body;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = __this->___m_Request_0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___Body_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_pinvoke(const ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9& unmarshaled, ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Response_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Response' of type 'ReadOnlyHttpResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Response_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_pinvoke_back(const ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_pinvoke& marshaled, ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9& unmarshaled)
{
	Exception_t* ___m_Response_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Response' of type 'ReadOnlyHttpResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Response_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_pinvoke_cleanup(ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_com(const ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9& unmarshaled, ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_com& marshaled)
{
	Exception_t* ___m_Response_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Response' of type 'ReadOnlyHttpResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Response_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_com_back(const ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_com& marshaled, ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9& unmarshaled)
{
	Exception_t* ___m_Response_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Response' of type 'ReadOnlyHttpResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Response_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_com_cleanup(ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::.ctor(Unity.Services.Core.Networking.Internal.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___response0, const RuntimeMethod* method) 
{
{
		// m_Response = response;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = ___response0;
		__this->___m_Response_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Response_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C_AdjustorThunk (RuntimeObject* __this, HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___response0, const RuntimeMethod* method)
{
ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C_inline(_thisAdjusted, ___response0, method);
}
// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
{
		// public ReadOnlyHttpRequest Request => m_Response.Request;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 L_1 = L_0->___Request_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
{
		// public IReadOnlyDictionary<string, string> Headers => m_Response.Headers;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0->___Headers_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
{
		// public byte[] Data => m_Response.Data;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___Data_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
{
		// public long StatusCode => m_Response.StatusCode;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		int64_t L_1 = L_0->___StatusCode_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
{
		// public string ErrorMessage => m_Response.ErrorMessage;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___ErrorMessage_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
{
		// public bool IsHttpError => m_Response.IsHttpError;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		bool L_1 = L_0->___IsHttpError_5;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
{
		// public bool IsNetworkError => m_Response.IsNetworkError;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		bool L_1 = L_0->___IsNetworkError_6;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Core.Internal.AsyncOperation::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_IsDone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, bool ___value0, const RuntimeMethod* method) 
{
{
		// public bool IsDone { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsDoneU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperation::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperation_get_Status_m0A936D453514234140366F6C2318ECA656CF3A87 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Status(Unity.Services.Core.Internal.AsyncOperationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_Completed_m3BF706D0128F8660347D12C9C4F4DCBB580EC67F (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// value(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = ___value0;
		NullCheck(L_1);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50(L_1, __this, Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		return;
	}

IL_0010:
	{
		// m_CompletedCallback += value;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_2 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		__this->___m_CompletedCallback_3 = ((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_4, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_4, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_remove_Completed_mE76C24A21D1799C3979DBA0823F181CFEFCFB228 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// remove => m_CompletedCallback -= value;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_0 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		__this->___m_CompletedCallback_3 = ((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_2, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_2, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Exception Unity.Services.Core.Internal.AsyncOperation::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperation_get_Exception_mA4C2316EBBAF7FC9E73CD1225E4D42E20F8663A9 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// public Exception Exception { get; protected set; }
		Exception_t* L_0 = __this->___U3CExceptionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___value0, const RuntimeMethod* method) 
{
{
		// public Exception Exception { get; protected set; }
		Exception_t* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::SetInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_SetInProgress_mF9F046353697ECEB9B2FD83E3193E8C050BCC860 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// Status = AsyncOperationStatus.InProgress;
		AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Succeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Succeed_mE56F6B7EC1E7A92BD743C0B4E8D4EC85C1F07A28 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B4_0 = NULL;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B3_0 = NULL;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// IsDone = true;
		AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline(__this, (bool)1, NULL);
		// Status = AsyncOperationStatus.Succeeded;
		AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline(__this, 2, NULL);
		// m_CompletedCallback?.Invoke(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0023;
		}
	}
	{
		goto IL_0029;
	}

IL_0023:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50(G_B4_0, __this, Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
	}

IL_0029:
	{
		// m_CompletedCallback = null;
		__this->___m_CompletedCallback_3 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Fail(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Fail_m863A1DBBA999B7B0EA18739E519AACFF0054A5DF (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___reason0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B4_0 = NULL;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B3_0 = NULL;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Exception = reason;
		Exception_t* L_1 = ___reason0;
		AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244_inline(__this, L_1, NULL);
		// IsDone = true;
		AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline(__this, (bool)1, NULL);
		// Status = AsyncOperationStatus.Failed;
		AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline(__this, 3, NULL);
		// m_CompletedCallback?.Invoke(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_2 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_002a;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50(G_B4_0, __this, Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
	}

IL_0030:
	{
		// m_CompletedCallback = null;
		__this->___m_CompletedCallback_3 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Cancel_m32C14294FB4C72F2F3B260796F47D6401B2F4045 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B4_0 = NULL;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B3_0 = NULL;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Exception = new OperationCanceledException();
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_1 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(L_1, /*hidden argument*/NULL);
		AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244_inline(__this, L_1, NULL);
		// IsDone = true;
		AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline(__this, (bool)1, NULL);
		// Status = AsyncOperationStatus.Cancelled;
		AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline(__this, 4, NULL);
		// m_CompletedCallback?.Invoke(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_2 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_002e;
		}
	}
	{
		goto IL_0034;
	}

IL_002e:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50(G_B4_0, __this, Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
	}

IL_0034:
	{
		// m_CompletedCallback = null;
		__this->___m_CompletedCallback_3 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_System_Collections_IEnumerator_MoveNext_m596CB807AE95B2B961DB02CED835209527DAB777 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// bool IEnumerator.MoveNext() => !IsDone;
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_System_Collections_IEnumerator_Reset_m6A6B5E00A6EC7F7286CFF63F2802A2C9C83426AE (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// void IEnumerator.Reset() {}
		return;
	}
}
// System.Object Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperation_System_Collections_IEnumerator_get_Current_mE64353F2F4CB9E9CBD92B52FC1D56F96C6B93314 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// object IEnumerator.Current => null;
		return NULL;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_m39B9682C2896CAA23CAC25FCF9D902C19EBF11DE (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Services.Core.Internal.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_pinvoke(const AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662& unmarshaled, AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Operation' of type 'AsyncOperationAwaiter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Operation_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_pinvoke_back(const AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_pinvoke& marshaled, AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662& unmarshaled)
{
	Exception_t* ___m_Operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Operation' of type 'AsyncOperationAwaiter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Operation_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_pinvoke_cleanup(AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Internal.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_com(const AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662& unmarshaled, AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_com& marshaled)
{
	Exception_t* ___m_Operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Operation' of type 'AsyncOperationAwaiter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Operation_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_com_back(const AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_com& marshaled, AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662& unmarshaled)
{
	Exception_t* ___m_Operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Operation' of type 'AsyncOperationAwaiter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Operation_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_com_cleanup(AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::.ctor(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, RuntimeObject* ___asyncOperation0, const RuntimeMethod* method) 
{
{
		// m_Operation = asyncOperation;
		RuntimeObject* L_0 = ___asyncOperation0;
		__this->___m_Operation_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Operation_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___asyncOperation0, const RuntimeMethod* method)
{
AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668_inline(_thisAdjusted, ___asyncOperation0, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* L_0 = (U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m0C6D38DE814AB874FF9303D952D1E7A82F8120DA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___continuation_0), (void*)L_2);
		// m_Operation.Completed += operation => continuation();
		RuntimeObject* L_3 = __this->___m_Operation_0;
		U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* L_4 = V_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_5 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* >::Invoke(2 /* System.Void Unity.Services.Core.Internal.IAsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>) */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0(_thisAdjusted, ___continuation0, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* L_0 = (U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m5549E3FE1162B8CBEF71ED6F8254360B00C9682D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___continuation_0), (void*)L_2);
		// m_Operation.Completed += operation => continuation();
		RuntimeObject* L_3 = __this->___m_Operation_0;
		U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* L_4 = V_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_5 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* >::Invoke(2 /* System.Void Unity.Services.Core.Internal.IAsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>) */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957(_thisAdjusted, ___continuation0, method);
}
// System.Boolean Unity.Services.Core.Internal.AsyncOperationAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public bool IsCompleted => m_Operation.IsDone;
		RuntimeObject* L_0 = __this->___m_Operation_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Internal.IAsyncOperation::get_IsDone() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (m_Operation.Status == AsyncOperationStatus.Failed
		//     || m_Operation.Status == AsyncOperationStatus.Cancelled)
		RuntimeObject* L_0 = __this->___m_Operation_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_Operation_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0028;
		}
	}

IL_001c:
	{
		// throw m_Operation.Exception;
		RuntimeObject* L_4 = __this->___m_Operation_0;
		NullCheck(L_4);
		Exception_t* L_5;
		L_5 = InterfaceFuncInvoker0< Exception_t* >::Invoke(4 /* System.Exception Unity.Services.Core.Internal.IAsyncOperation::get_Exception() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var)), L_4);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504_RuntimeMethod_var)));
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m0C6D38DE814AB874FF9303D952D1E7A82F8120DA (U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::<OnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430 (U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* __this, RuntimeObject* ___operation0, const RuntimeMethod* method) 
{
{
		// m_Operation.Completed += operation => continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E(L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m5549E3FE1162B8CBEF71ED6F8254360B00C9682D (U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::<UnsafeOnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1 (U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* __this, RuntimeObject* ___operation0, const RuntimeMethod* method) 
{
{
		// m_Operation.Completed += operation => continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E(L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_keepWaiting_mA5C59C7B9164015B04F3653329FD905A743D507F (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) 
{
{
		// public override bool keepWaiting => !IsCompleted;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(14 /* System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsCompleted() */, __this);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_m238748BEE1ADD4EDF78ED968D94A089897228BB8 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) 
{
{
		// public bool IsDone => IsCompleted;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(14 /* System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsCompleted() */, __this);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_add_Completed_mBF050A2DCED3671779F2DCB9CE85B0CBF09D434C (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperationBase_get_IsDone_m238748BEE1ADD4EDF78ED968D94A089897228BB8(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// value(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = ___value0;
		NullCheck(L_1);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50(L_1, __this, Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		return;
	}

IL_0010:
	{
		// m_CompletedCallback += value;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_2 = __this->___m_CompletedCallback_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		__this->___m_CompletedCallback_0 = ((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_4, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_0), (void*)((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_4, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_remove_Completed_m275A690292CDEB367604BFCB1642DBFDFFF32625 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// remove => m_CompletedCallback -= value;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_0 = __this->___m_CompletedCallback_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		__this->___m_CompletedCallback_0 = ((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_2, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_0), (void*)((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_2, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::DidComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_DidComplete_m898BABFB881C305E46DE4A8B443BED8E94A8F948 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B2_0 = NULL;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B1_0 = NULL;
	{
		// m_CompletedCallback?.Invoke(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_0 = __this->___m_CompletedCallback_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50(G_B2_0, __this, Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_OnCompleted_m857D67EBD531576BF37FB74499C781666DC27F88 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* L_0 = (U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass17_0__ctor_m122B1CD2CAB952EAC3144B97638FA48B26CC00E1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___continuation_0), (void*)L_2);
		// Completed += op => continuation?.Invoke();
		U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* L_3 = V_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_4 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		AsyncOperationBase_add_Completed_mBF050A2DCED3671779F2DCB9CE85B0CBF09D434C(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase__ctor_mAF087348521B946CBA095B83B3FC55FBE1C9E314 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) 
{
{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m122B1CD2CAB952EAC3144B97638FA48B26CC00E1 (U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::<OnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C (U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* __this, RuntimeObject* ___op0, const RuntimeMethod* method) 
{
Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// Completed += op => continuation?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E(G_B2_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.AsyncOperationAwaiter Unity.Services.Core.Internal.AsyncOperationExtensions::GetAwaiter(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662 AsyncOperationExtensions_GetAwaiter_m2C028ED897351C7B1B61E677F62AEB9DDBB2FE17 (RuntimeObject* ___self0, const RuntimeMethod* method) 
{
{
		// return new AsyncOperationAwaiter(self);
		RuntimeObject* L_0 = ___self0;
		AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.AsyncOperationExtensions::AsTask(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncOperationExtensions_AsTask_m2EDCCEA7ABE216E3D5BDE1AABA6B8A7BDF82A4A5 (RuntimeObject* ___self0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_0 = (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_mD92A511117A89E573219D50367FC2ECD9551DA54(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (self.Status == AsyncOperationStatus.Succeeded)
		RuntimeObject* L_1 = ___self0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline(NULL);
		return L_3;
	}

IL_0015:
	{
		// var taskCompletionSource = new TaskCompletionSource<object>();
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_4 = V_0;
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_5 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_5, /*hidden argument*/TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___taskCompletionSource_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___taskCompletionSource_0), (void*)L_5);
		// if (self.IsDone)
		RuntimeObject* L_6 = ___self0;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Internal.IAsyncOperation::get_IsDone() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// CompleteTask(self);
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_8 = V_0;
		RuntimeObject* L_9 = ___self0;
		NullCheck(L_8);
		U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A(L_8, L_9, NULL);
		goto IL_0043;
	}

IL_0031:
	{
		// self.Completed += CompleteTask;
		RuntimeObject* L_10 = ___self0;
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_11 = V_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_12 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* >::Invoke(2 /* System.Void Unity.Services.Core.Internal.IAsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>) */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_10, L_12);
	}

IL_0043:
	{
		// return taskCompletionSource.Task;
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_13 = V_0;
		NullCheck(L_13);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_14 = L_13->___taskCompletionSource_0;
		NullCheck(L_14);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_15;
		L_15 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_14, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD92A511117A89E573219D50367FC2ECD9551DA54 (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::<AsTask>g__CompleteTask|0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* __this, RuntimeObject* ___operation0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		// switch (operation.Status)
		RuntimeObject* L_0 = ___operation0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 2)))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0030;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_001d:
	{
		// taskCompletionSource.TrySetException(operation.Exception);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_3 = __this->___taskCompletionSource_0;
		RuntimeObject* L_4 = ___operation0;
		NullCheck(L_4);
		Exception_t* L_5;
		L_5 = InterfaceFuncInvoker0< Exception_t* >::Invoke(4 /* System.Exception Unity.Services.Core.Internal.IAsyncOperation::get_Exception() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_3);
		bool L_6;
		L_6 = TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334(L_3, L_5, TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var);
		// break;
		return;
	}

IL_0030:
	{
		// taskCompletionSource.TrySetCanceled();
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_7 = __this->___taskCompletionSource_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175(L_7, TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_RuntimeMethod_var);
		// break;
		return;
	}

IL_003d:
	{
		// taskCompletionSource.TrySetResult(null);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_9 = __this->___taskCompletionSource_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B(L_9, NULL, TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		// break;
		return;
	}

IL_004b:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Core.Internal.TaskAsyncOperation::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAsyncOperation_get_IsCompleted_mE8E514DC0AF426E20D123189A8166B0536A5BB0A (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
{
		// public override bool IsCompleted => m_Task.IsCompleted;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___m_Task_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.TaskAsyncOperation::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAsyncOperation_get_Status_mE71FE39E4040745C8991A9B2D9013485F2F570B2 (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
{
		// if (m_Task == null)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___m_Task_2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return AsyncOperationStatus.None;
		return (int32_t)(0);
	}

IL_000a:
	{
		// if (!m_Task.IsCompleted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = __this->___m_Task_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return AsyncOperationStatus.InProgress;
		return (int32_t)(1);
	}

IL_0019:
	{
		// if (m_Task.IsCanceled)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = __this->___m_Task_2;
		NullCheck(L_3);
		bool L_4;
		L_4 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_3, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// return AsyncOperationStatus.Cancelled;
		return (int32_t)(4);
	}

IL_0028:
	{
		// if (m_Task.IsFaulted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = __this->___m_Task_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// return AsyncOperationStatus.Failed;
		return (int32_t)(3);
	}

IL_0037:
	{
		// return AsyncOperationStatus.Succeeded;
		return (int32_t)(2);
	}
}
// System.Exception Unity.Services.Core.Internal.TaskAsyncOperation::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* TaskAsyncOperation_get_Exception_m0DE2EB1BFD825B1EC8DF097F19BEAB5A97A8476D (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B2_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B1_0 = NULL;
	{
		// public override Exception Exception => m_Task?.Exception;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___m_Task_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (Exception_t*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_2;
		L_2 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(G_B2_0, NULL);
		return L_2;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation_GetResult_mF09BB788C2E02361476796AE889E2FA9E88541C6 (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
{
		// public override void GetResult() {}
		return;
	}
}
// Unity.Services.Core.Internal.AsyncOperationBase Unity.Services.Core.Internal.TaskAsyncOperation::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* TaskAsyncOperation_GetAwaiter_mAFF3CA07A0A4DAFBB96D2D11C5A5085A4988521F (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
{
		// return this;
		return __this;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation__ctor_mEDC34C8442D9965300375DEB7A1658ED3BF33D46 (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B4_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B4_1 = NULL;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B3_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B3_1 = NULL;
	{
		// public TaskAsyncOperation(Task task)
		AsyncOperationBase__ctor_mAF087348521B946CBA095B83B3FC55FBE1C9E314(__this, NULL);
		// if (Scheduler == null)
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var))->___Scheduler_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// SetScheduler();
		TaskAsyncOperation_SetScheduler_m9332E7895ECAB965F2235125568C07C577113A0C(NULL);
	}

IL_0012:
	{
		// m_Task = task;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___task0;
		__this->___m_Task_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Task_2), (void*)L_1);
		// task.ContinueWith((t, state) =>
		// {
		//     var self = (TaskAsyncOperation)state;
		//     self.DidComplete();
		// }, this, CancellationToken.None, TaskContinuationOptions.None, Scheduler);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___task0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_3 = ((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = L_2;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = L_2;
			goto IL_0039;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* L_5 = ((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_6 = (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*)il2cpp_codegen_object_new(Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9_RuntimeMethod_var);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_7 = L_6;
		((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_0039:
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8;
		L_8 = CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_9 = ((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var))->___Scheduler_1;
		NullCheck(G_B4_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
		L_10 = Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F(G_B4_1, G_B4_0, __this, L_8, 0, L_9, NULL);
		// }
		return;
	}
}
// Unity.Services.Core.Internal.TaskAsyncOperation Unity.Services.Core.Internal.TaskAsyncOperation::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* TaskAsyncOperation_Run_mC16E6AD6990BFBC0CDD771A0CA5BCF976C91067F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* V_0 = NULL;
	{
		// var task = new Task(action);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)il2cpp_codegen_object_new(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637(L_1, L_0, /*hidden argument*/NULL);
		// var ret = new TaskAsyncOperation(task);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = L_1;
		TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* L_3 = (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128*)il2cpp_codegen_object_new(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		TaskAsyncOperation__ctor_mEDC34C8442D9965300375DEB7A1658ED3BF33D46(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// task.Start();
		NullCheck(L_2);
		Task_Start_m2DC09C3214A841B5C3A6AD800E4020DE365FA620(L_2, NULL);
		// return ret;
		TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::SetScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation_SetScheduler_m9332E7895ECAB965F2235125568C07C577113A0C (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// Scheduler = TaskScheduler.FromCurrentSynchronizationContext();
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0;
		L_0 = TaskScheduler_FromCurrentSynchronizationContext_m5B4C4FEA7E2375B6C71B2D35FA7E8E0197293428(NULL);
		((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var))->___Scheduler_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var))->___Scheduler_1), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2DEEAD91E0DBC47856131A14B3B258C5088236B4 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* L_0 = (U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2*)il2cpp_codegen_object_new(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5A0343E410EC083744848A5D7F30B3A483D4ED20(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A0343E410EC083744848A5D7F30B3A483D4ED20 (U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::<.ctor>b__10_0(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF (U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// var self = (TaskAsyncOperation)state;
		RuntimeObject* L_0 = ___state1;
		// self.DidComplete();
		NullCheck(((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128*)CastclassClass((RuntimeObject*)L_0, TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var)));
		AsyncOperationBase_DidComplete_m898BABFB881C305E46DE4A8B443BED8E94A8F948(((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128*)CastclassClass((RuntimeObject*)L_0, TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var)), NULL);
		// }, this, CancellationToken.None, TaskContinuationOptions.None, Scheduler);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.CoreLogger::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_Log_mF35C18BCEE8C07B2E3DC5FD82151F964D5FA0194 (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static void Log(object message) => Debug.unityLogger.Log(k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogWarning_m3EC29259EEF1CEA23B40D00075D3030A789F43C0 (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static void LogWarning(object message) => Debug.unityLogger.LogWarning(k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(6 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogError_m60BDFED5C2144A408C9641D048F9A7C5141B8195 (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static void LogError(object message) => Debug.unityLogger.LogError(k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(7 /* System.Void UnityEngine.ILogger::LogError(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogException_mB3CF4A6EFC19F55590FA92A35024E4CC1224D582 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
{
		// Debug.unityLogger.Log(LogType.Exception, k_Tag, exception);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		Exception_t* L_1 = ___exception0;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, String_t*, RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, 4, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogAssertion(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogAssertion_mE6F3A1E0F0B4588A6420524D5CC94E42A8CA2215 (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static void LogAssertion(object message) => Debug.unityLogger.Log(LogType.Assert, k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, String_t*, RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, 1, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogVerbose(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogVerbose_m7E3463F8BDFECC42C657C52D7F710BE4402EF28F (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static void LogVerbose(object message) => Debug.unityLogger.Log(k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2 (CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC* __this, const RuntimeMethod* method) 
{
{
		// public CircularDependencyException() {}
		ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C(__this, NULL);
		// public CircularDependencyException() {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularDependencyException__ctor_m3D8DEB3AB4C12EFA05800264FF203F8DBB8F5D62 (CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC* __this, String_t* ___message0, const RuntimeMethod* method) 
{
{
		// : base(message) {}
		String_t* L_0 = ___message0;
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(__this, L_0, NULL);
		// : base(message) {}
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20 (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, const RuntimeMethod* method) 
{
{
		// internal Dictionary<int, IServiceComponent> ComponentTypeHashToInstance { get; }
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0 = __this->___U3CComponentTypeHashToInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___componentTypeHashToInstance0, const RuntimeMethod* method) 
{
{
		// public ComponentRegistry(
		//     [NotNull] Dictionary<int, IServiceComponent> componentTypeHashToInstance)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ComponentTypeHashToInstance = componentTypeHashToInstance;
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0 = ___componentTypeHashToInstance0;
		__this->___U3CComponentTypeHashToInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CComponentTypeHashToInstanceU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Internal.ComponentRegistry::IsComponentTypeRegistered(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentRegistry_IsComponentTypeRegistered_m71D21117B9314CB1CA28F75B0246E215888228F8 (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		// return ComponentTypeHashToInstance.TryGetValue(componentTypeHash, out var storedComponent)
		//     && !(storedComponent is null)
		//     && storedComponent != MissingComponent.Instance;
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0;
		L_0 = ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20_inline(__this, NULL);
		int32_t L_1 = ___componentTypeHash0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* L_5;
		L_5 = MissingComponent_get_Instance_mAB80E0DDC311B463121A6946C1F10D6BE614A3E5_inline(NULL);
		return (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8*)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.LockedComponentRegistry::get_Registry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LockedComponentRegistry_get_Registry_m2170B5DB74B027249B53D07BF8A05D530956F941 (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* __this, const RuntimeMethod* method) 
{
{
		// internal IComponentRegistry Registry { get; }
		RuntimeObject* L_0 = __this->___U3CRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.LockedComponentRegistry::.ctor(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1 (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* __this, RuntimeObject* ___registryToLock0, const RuntimeMethod* method) 
{
{
		// public LockedComponentRegistry(
		//     [NotNull] IComponentRegistry registryToLock)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Registry = registryToLock;
		RuntimeObject* L_0 = ___registryToLock0;
		__this->___U3CRegistryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegistryU3Ek__BackingField_1), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_pinvoke(const CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581& unmarshaled, CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_pinvoke_back(const CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke& marshaled, CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581& unmarshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_pinvoke_cleanup(CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_com(const CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581& unmarshaled, CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com& marshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_com_back(const CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com& marshaled, CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581& unmarshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_com_cleanup(CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, RuntimeObject* ___registry0, int32_t ___packageHash1, const RuntimeMethod* method) 
{
{
		// m_Registry = registry;
		RuntimeObject* L_0 = ___registry0;
		__this->___m_Registry_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Registry_0), (void*)L_0);
		// m_PackageHash = packageHash;
		int32_t L_1 = ___packageHash1;
		__this->___m_PackageHash_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___registry0, int32_t ___packageHash1, const RuntimeMethod* method)
{
CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*>(__this + _offset);
	CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1(_thisAdjusted, ___registry0, ___packageHash1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_Instance(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_set_Instance_mF131533D65A3CDAE3C7DCB969369DC33AE15CADA (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ___value0;
		((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPackageRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPackageRegistryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPackageRegistryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::get_ComponentRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = __this->___U3CComponentRegistryU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CComponentRegistryU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CComponentRegistryU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* V_0 = NULL;
	{
		// internal CoreRegistry()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var dependencyTree = new DependencyTree();
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992*)il2cpp_codegen_object_new(DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992_il2cpp_TypeInfo_var);
		DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// PackageRegistry = new PackageRegistry(dependencyTree);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_1 = V_0;
		PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* L_2 = (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9*)il2cpp_codegen_object_new(PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9_il2cpp_TypeInfo_var);
		PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330(L_2, L_1, /*hidden argument*/NULL);
		CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline(__this, L_2, NULL);
		// ComponentRegistry = new ComponentRegistry(dependencyTree.ComponentTypeHashToInstance);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_4 = L_3->___ComponentTypeHashToInstance_3;
		ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* L_5 = (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523*)il2cpp_codegen_object_new(ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523_il2cpp_TypeInfo_var);
		ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A(L_5, L_4, /*hidden argument*/NULL);
		CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry,Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__ctor_m210E3AE3F6BAF2AB54B45EC734EA77D15C86EC23 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___packageRegistry0, RuntimeObject* ___componentRegistry1, const RuntimeMethod* method) 
{
{
		// internal CoreRegistry(
		//     [NotNull] IPackageRegistry packageRegistry,
		//     [NotNull] IComponentRegistry componentRegistry)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// PackageRegistry = packageRegistry;
		RuntimeObject* L_0 = ___packageRegistry0;
		CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline(__this, L_0, NULL);
		// ComponentRegistry = componentRegistry;
		RuntimeObject* L_1 = ___componentRegistry1;
		CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockPackageRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockPackageRegistration_m031751BE6E5CBB6D30AAE2B64DAF04FC0EEA5A0B (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (PackageRegistry is LockedPackageRegistry)
		RuntimeObject* L_0;
		L_0 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(__this, NULL);
		if (!((LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499*)IsInstClass((RuntimeObject*)L_0, LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499_il2cpp_TypeInfo_var)))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// PackageRegistry = new LockedPackageRegistry(PackageRegistry);
		RuntimeObject* L_1;
		L_1 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(__this, NULL);
		LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* L_2 = (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499*)il2cpp_codegen_object_new(LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499_il2cpp_TypeInfo_var);
		LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927(L_2, L_1, /*hidden argument*/NULL);
		CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockComponentRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (ComponentRegistry is LockedComponentRegistry)
		RuntimeObject* L_0;
		L_0 = CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline(__this, NULL);
		if (!((LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F*)IsInstClass((RuntimeObject*)L_0, LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F_il2cpp_TypeInfo_var)))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// ComponentRegistry = new LockedComponentRegistry(ComponentRegistry);
		RuntimeObject* L_1;
		L_1 = CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline(__this, NULL);
		LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* L_2 = (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F*)il2cpp_codegen_object_new(LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F_il2cpp_TypeInfo_var);
		LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1(L_2, L_1, /*hidden argument*/NULL);
		CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline(__this, L_2, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.AsyncOperation,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer__ctor_m53CA275B05368556550BE038B94CC69D4D555329 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* ___operation1, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___sortedPackageTypeHashes2, const RuntimeMethod* method) 
{
{
		// public CoreRegistryInitializer(
		//     CoreRegistry registry, AsyncOperation operation, List<int> sortedPackageTypeHashes)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Registry = registry;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ___registry0;
		__this->___m_Registry_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Registry_0), (void*)L_0);
		// m_Operation = operation;
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_1 = ___operation1;
		__this->___m_Operation_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Operation_1), (void*)L_1);
		// m_SortedPackageTypeHashes = sortedPackageTypeHashes;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___sortedPackageTypeHashes2;
		__this->___m_SortedPackageTypeHashes_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SortedPackageTypeHashes_2), (void*)L_2);
		// m_PackageInitializationFailureReasons = null;
		__this->___m_PackageInitializationFailureReasons_3 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageInitializationFailureReasons_3), (void*)(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_InitializeRegistry_mA8BEC2E19E3BD1F8FC5B7654375B3BB727442E38 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (m_SortedPackageTypeHashes.Count <= 0)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___m_SortedPackageTypeHashes_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// CompleteInitialization();
		CoreRegistryInitializer_CompleteInitialization_m7243B763EBD1A9974916A939A70B6EEA24168B2C(__this, NULL);
		// return;
		return;
	}

IL_0015:
	{
		// m_PackageInitializationFailureReasons = new List<Exception>(m_SortedPackageTypeHashes.Count);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___m_SortedPackageTypeHashes_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_2, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_4 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)il2cpp_codegen_object_new(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94(L_4, L_3, /*hidden argument*/List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94_RuntimeMethod_var);
		__this->___m_PackageInitializationFailureReasons_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageInitializationFailureReasons_3), (void*)L_4);
		// InitializePackageAt(0);
		CoreRegistryInitializer_InitializePackageAt_mAC199EE2E9B924285074EB6B77648ECD4D3BE19E(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::CompleteInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_CompleteInitialization_m7243B763EBD1A9974916A939A70B6EEA24168B2C (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAFBB570A0C923E831AB15C338ABE4641A7828DE);
		s_Il2CppMethodInitialized = true;
	}
AggregateException_t51B6205846DFB356B94452702201DD239D44422F* V_0 = NULL;
	ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* V_1 = NULL;
	{
		// if (m_PackageInitializationFailureReasons is null
		//     || m_PackageInitializationFailureReasons.Count <= 0)
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_0 = __this->___m_PackageInitializationFailureReasons_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1 = __this->___m_PackageInitializationFailureReasons_3;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline(L_1, List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0016:
	{
		// m_Operation.Succeed();
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_3 = __this->___m_Operation_1;
		NullCheck(L_3);
		AsyncOperation_Succeed_mE56F6B7EC1E7A92BD743C0B4E8D4EC85C1F07A28(L_3, NULL);
		goto IL_0047;
	}

IL_0023:
	{
		// var innerException = new AggregateException(m_PackageInitializationFailureReasons);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_4 = __this->___m_PackageInitializationFailureReasons_3;
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_5 = (AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)il2cpp_codegen_object_new(AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// var reason = new ServicesInitializationException(errorMessage, innerException);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6 = V_0;
		ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_7 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var);
		ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578(L_7, _stringLiteralFAFBB570A0C923E831AB15C338ABE4641A7828DE, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// m_Operation.Fail(reason);
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_8 = __this->___m_Operation_1;
		ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_9 = V_1;
		NullCheck(L_8);
		AsyncOperation_Fail_m863A1DBBA999B7B0EA18739E519AACFF0054A5DF(L_8, L_9, NULL);
	}

IL_0047:
	{
		// m_Registry.PackageRegistry.Tree = null;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_10 = __this->___m_Registry_0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(L_10, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(1 /* System.Void Unity.Services.Core.Internal.IPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree) */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_11, (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992*)NULL);
		// m_PackageInitializationFailureReasons = null;
		__this->___m_PackageInitializationFailureReasons_3 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageInitializationFailureReasons_3), (void*)(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::InitializePackageAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_InitializePackageAt_mAC199EE2E9B924285074EB6B77648ECD4D3BE19E (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, int32_t ___index0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializablePackage_tC78F3A872EFC30DA406E624FDC1C72C9B1381098_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CInitializePackageAtU3Eg__TrackFailureAndProceedInitializationU7C0_m1620911543F8F1720F73835184E07ECECECA2258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* L_0 = (U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_mDE6DEBA879D9F7E6C5FBB18B102ADE63014E4C94(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* L_2 = V_0;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		L_2->___index_1 = L_3;
		// var package = GetPackageAt(index);
		U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___index_1;
		RuntimeObject* L_6;
		L_6 = CoreRegistryInitializer_GetPackageAt_mFA97EEF57B94EFC6EBF88C57353B096959899F99(__this, L_5, NULL);
		V_1 = L_6;
	}

IL_0021:
	try
	{// begin try (depth: 1)
		// var initialization = package.Initialize(m_Registry);
		RuntimeObject* L_7 = V_1;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_8 = __this->___m_Registry_0;
		NullCheck(L_7);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* >::Invoke(0 /* System.Threading.Tasks.Task Unity.Services.Core.Internal.IInitializablePackage::Initialize(Unity.Services.Core.Internal.CoreRegistry) */, IInitializablePackage_tC78F3A872EFC30DA406E624FDC1C72C9B1381098_il2cpp_TypeInfo_var, L_7, L_8);
		// initialization.ContinueWith(TrackFailureAndProceedInitialization,
		//     TaskScheduler.FromCurrentSynchronizationContext());
		U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* L_10 = V_0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_11 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CInitializePackageAtU3Eg__TrackFailureAndProceedInitializationU7C0_m1620911543F8F1720F73835184E07ECECECA2258_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_12;
		L_12 = TaskScheduler_FromCurrentSynchronizationContext_m5B4C4FEA7E2375B6C71B2D35FA7E8E0197293428(NULL);
		NullCheck(L_9);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
		L_13 = Task_ContinueWith_m0520801D14DFF2AFA6140672AE2D7BAE100E1A43(L_9, L_11, L_12, NULL);
		// }
		goto IL_0063;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// m_PackageInitializationFailureReasons.Add(e);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_14 = __this->___m_PackageInitializationFailureReasons_3;
		Exception_t* L_15 = V_2;
		NullCheck(L_14);
		List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline(L_14, L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var)));
		// InitializePackageAt(index + 1);
		U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___index_1;
		CoreRegistryInitializer_InitializePackageAt_mAC199EE2E9B924285074EB6B77648ECD4D3BE19E(__this, ((int32_t)il2cpp_codegen_add(L_17, 1)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}// end catch (depth: 1)

IL_0063:
	{
		// }
		return;
	}
}
// Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer::GetPackageAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistryInitializer_GetPackageAt_mFA97EEF57B94EFC6EBF88C57353B096959899F99 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, int32_t ___index0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		// var packageTypeHash = m_SortedPackageTypeHashes[index];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___m_SortedPackageTypeHashes_2;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_0, L_1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_2;
		// return m_Registry.PackageRegistry.Tree.PackageTypeHashToInstance[packageTypeHash];
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_3 = __this->___m_Registry_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(L_3, NULL);
		NullCheck(L_4);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_5;
		L_5 = InterfaceFuncInvoker0< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_6 = L_5->___PackageTypeHashToInstance_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071(L_6, L_7, Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071_RuntimeMethod_var);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mDE6DEBA879D9F7E6C5FBB18B102ADE63014E4C94 (U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::<InitializePackageAt>g__TrackFailureAndProceedInitialization|0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CInitializePackageAtU3Eg__TrackFailureAndProceedInitializationU7C0_m1620911543F8F1720F73835184E07ECECECA2258 (U3CU3Ec__DisplayClass7_0_tB85794AFE8089D3315E59F000E04D4947A16E544* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___previousInitialization0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		// if (previousInitialization.Status == TaskStatus.Faulted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___previousInitialization0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_001f;
		}
	}
	{
		// m_PackageInitializationFailureReasons.Add(previousInitialization.Exception);
		CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_3 = L_2->___m_PackageInitializationFailureReasons_3;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = ___previousInitialization0;
		NullCheck(L_4);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_5;
		L_5 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_4, NULL);
		NullCheck(L_3);
		List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline(L_3, L_5, List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var);
	}

IL_001f:
	{
		// index++;
		int32_t L_6 = __this->___index_1;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->___index_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if (index >= m_SortedPackageTypeHashes.Count)
		int32_t L_8 = __this->___index_1;
		CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_9 = __this->___U3CU3E4__this_0;
		NullCheck(L_9);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = L_9->___m_SortedPackageTypeHashes_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_10, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_11)))
		{
			goto IL_0053;
		}
	}
	{
		// CompleteInitialization();
		CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_12 = __this->___U3CU3E4__this_0;
		NullCheck(L_12);
		CoreRegistryInitializer_CompleteInitialization_m7243B763EBD1A9974916A939A70B6EEA24168B2C(L_12, NULL);
		return;
	}

IL_0053:
	{
		// InitializePackageAt(index);
		CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_13 = __this->___U3CU3E4__this_0;
		int32_t L_14 = __this->___index_1;
		NullCheck(L_13);
		CoreRegistryInitializer_InitializePackageAt_mAC199EE2E9B924285074EB6B77648ECD4D3BE19E(L_13, L_14, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// : this(
		//     new Dictionary<int, IInitializablePackage>(),
		//     new Dictionary<int, int>(),
		//     new Dictionary<int, List<int>>(),
		//     new Dictionary<int, IServiceComponent>()) {}
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_0 = (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36*)il2cpp_codegen_object_new(Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED(L_0, /*hidden argument*/Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED_RuntimeMethod_var);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_1, /*hidden argument*/Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_2 = (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3*)il2cpp_codegen_object_new(Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868(L_2, /*hidden argument*/Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_3 = (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9*)il2cpp_codegen_object_new(Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72(L_3, /*hidden argument*/Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72_RuntimeMethod_var);
		DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928(__this, L_0, L_1, L_2, L_3, NULL);
		// new Dictionary<int, IServiceComponent>()) {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* __this, Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ___packageToInstance0, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___componentToPackage1, Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___packageToComponentDependencies2, Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___componentToInstance3, const RuntimeMethod* method) 
{
{
		// internal DependencyTree(
		//     Dictionary<int, IInitializablePackage> packageToInstance,
		//     Dictionary<int, int> componentToPackage,
		//     Dictionary<int, List<int>> packageToComponentDependencies,
		//     Dictionary<int, IServiceComponent> componentToInstance)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// PackageTypeHashToInstance = packageToInstance;
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_0 = ___packageToInstance0;
		__this->___PackageTypeHashToInstance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PackageTypeHashToInstance_0), (void*)L_0);
		// ComponentTypeHashToPackageTypeHash = componentToPackage;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = ___componentToPackage1;
		__this->___ComponentTypeHashToPackageTypeHash_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ComponentTypeHashToPackageTypeHash_1), (void*)L_1);
		// PackageTypeHashToComponentTypeHashDependencies = packageToComponentDependencies;
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_2 = ___packageToComponentDependencies2;
		__this->___PackageTypeHashToComponentTypeHashDependencies_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PackageTypeHashToComponentTypeHashDependencies_2), (void*)L_2);
		// ComponentTypeHashToInstance = componentToInstance;
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_3 = ___componentToInstance3;
		__this->___ComponentTypeHashToInstance_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ComponentTypeHashToInstance_3), (void*)L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_pinvoke(const DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3& unmarshaled, DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_pinvoke_back(const DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_pinvoke& marshaled, DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3& unmarshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_pinvoke_cleanup(DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_com(const DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3& unmarshaled, DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_com& marshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_com_back(const DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_com& marshaled, DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3& unmarshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_com_cleanup(DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___tree0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
{
		// Tree = tree;
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___tree0;
		__this->___Tree_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tree_0), (void*)L_0);
		// Target = target;
		RuntimeObject* L_1 = ___target1;
		__this->___Target_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Target_1), (void*)L_1);
		// m_PackageTypeHashExplorationHistory = null;
		__this->___m_PackageTypeHashExplorationHistory_2 = (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageTypeHashExplorationHistory_2), (void*)(Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7_AdjustorThunk (RuntimeObject* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___tree0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7(_thisAdjusted, ___tree0, ___target1, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t0114882DFCA42EC6C648641A315FCD199A031075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Target.Clear();
		RuntimeObject* L_0 = __this->___Target_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear() */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_0);
		// RemoveUnprovidedOptionalDependenciesFromTree();
		DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183(__this, NULL);
		// var registeredPackageTypeHashes = GetPackageTypeHashes();
		RuntimeObject* L_1;
		L_1 = DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653(__this, NULL);
		V_0 = L_1;
		// m_PackageTypeHashExplorationHistory = new Dictionary<int, ExplorationMark>(registeredPackageTypeHashes.Count);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Int32>::get_Count() */, IReadOnlyCollection_1_t0114882DFCA42EC6C648641A315FCD199A031075_il2cpp_TypeInfo_var, L_2);
		Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* L_4 = (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)il2cpp_codegen_object_new(Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205(L_4, L_3, /*hidden argument*/Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205_RuntimeMethod_var);
		__this->___m_PackageTypeHashExplorationHistory_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageTypeHashExplorationHistory_2), (void*)L_4);
		// foreach (var packageTypeHash in registeredPackageTypeHashes)
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_0030:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0053;
					}
				}

IL_004d:
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040;
			}

IL_0032:
			{
				// foreach (var packageTypeHash in registeredPackageTypeHashes)
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				// SortTreeThrough(packageTypeHash);
				int32_t L_11 = V_2;
				DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C(__this, L_11, NULL);
			}

IL_0040:
			{
				// foreach (var packageTypeHash in registeredPackageTypeHashes)
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0032;
				}
			}

IL_0048:
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// m_PackageTypeHashExplorationHistory = null;
		__this->___m_PackageTypeHashExplorationHistory_2 = (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageTypeHashExplorationHistory_2), (void*)(Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	{
		// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_1 = L_0->___PackageTypeHashToComponentTypeHashDependencies_2;
		NullCheck(L_1);
		ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* L_2;
		L_2 = Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882(L_1, Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 L_3;
		L_3 = ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7(L_2, ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0016:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36((&V_0), Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027;
			}

IL_0018:
			{
				// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4;
				L_4 = Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_inline((&V_0), Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_RuntimeMethod_var);
				V_1 = L_4;
				// RemoveUnprovidedOptionalDependencies(dependencyTypeHashes);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = V_1;
				DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B(__this, L_5, NULL);
			}

IL_0027:
			{
				// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
				bool L_6;
				L_6 = Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925((&V_0), Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0018;
				}
			}

IL_0030:
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		RuntimeObject* L_0 = ___dependencyTypeHashes0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0030;
	}

IL_000b:
	{
		// var dependencyTypeHash = dependencyTypeHashes[i];
		RuntimeObject* L_2 = ___dependencyTypeHashes0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		// if (IsOptional(dependencyTypeHash)
		//     && !IsProvided(dependencyTypeHash))
		int32_t L_5 = V_1;
		bool L_6;
		L_6 = DependencyTreeInitializeOrderSorter_IsOptional_m6A6CF00707E0D87469552A28996BBAD5F7957C78(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_1;
		bool L_8;
		L_8 = DependencyTreeInitializeOrderSorter_IsProvided_m3F8555633FE8E2A1AFFE39D0C902BD23AC171364(__this, L_7, NULL);
		if (L_8)
		{
			goto IL_002c;
		}
	}
	{
		// dependencyTypeHashes.RemoveAt(i);
		RuntimeObject* L_9 = ___dependencyTypeHashes0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32) */, IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var, L_9, L_10);
	}

IL_002c:
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0030:
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B(_thisAdjusted, ___dependencyTypeHashes0, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___packageTypeHash0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		// m_PackageTypeHashExplorationHistory.TryGetValue(packageTypeHash, out var explorationMark);
		Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* L_0 = __this->___m_PackageTypeHashExplorationHistory_2;
		int32_t L_1 = ___packageTypeHash0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4_RuntimeMethod_var);
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0020;
	}

IL_0019:
	{
		// throw new CircularDependencyException();
		CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC* L_5 = (CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC_il2cpp_TypeInfo_var)));
		CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_RuntimeMethod_var)));
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// MarkPackage(packageTypeHash, ExplorationMark.Viewed);
		int32_t L_6 = ___packageTypeHash0;
		DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31(__this, L_6, 1, NULL);
		// var dependencyTypeHashes = GetDependencyTypeHashesFor(packageTypeHash);
		int32_t L_7 = ___packageTypeHash0;
		RuntimeObject* L_8;
		L_8 = DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF(__this, L_7, NULL);
		V_1 = L_8;
		// SortTreeThrough(dependencyTypeHashes);
		RuntimeObject* L_9 = V_1;
		DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D(__this, L_9, NULL);
		// Target.Add(packageTypeHash);
		RuntimeObject* L_10 = __this->___Target_1;
		int32_t L_11 = ___packageTypeHash0;
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Add(T) */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_10, L_11);
		// MarkPackage(packageTypeHash, ExplorationMark.Sorted);
		int32_t L_12 = ___packageTypeHash0;
		DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31(__this, L_12, 2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_AdjustorThunk (RuntimeObject* __this, int32_t ___packageTypeHash0, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C(_thisAdjusted, ___packageTypeHash0, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// foreach (var dependency in dependencyTypeHashes)
		RuntimeObject* L_0 = ___dependencyTypeHashes0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0032;
					}
				}

IL_002c:
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f;
			}

IL_0009:
			{
				// foreach (var dependency in dependencyTypeHashes)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// var dependencyPackageTypeHash = GetPackageTypeHashFor(dependency);
				int32_t L_6 = V_1;
				int32_t L_7;
				L_7 = DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634(__this, L_6, NULL);
				V_2 = L_7;
				// SortTreeThrough(dependencyPackageTypeHash);
				int32_t L_8 = V_2;
				DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C(__this, L_8, NULL);
			}

IL_001f:
			{
				// foreach (var dependency in dependencyTypeHashes)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0009;
				}
			}

IL_0027:
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D(_thisAdjusted, ___dependencyTypeHashes0, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___packageTypeHash0, int32_t ___mark1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// m_PackageTypeHashExplorationHistory[packageTypeHash] = mark;
		Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* L_0 = __this->___m_PackageTypeHashExplorationHistory_2;
		int32_t L_1 = ___packageTypeHash0;
		int32_t L_2 = ___mark1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B(L_0, L_1, L_2, Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31_AdjustorThunk (RuntimeObject* __this, int32_t ___packageTypeHash0, int32_t ___mark1, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31(_thisAdjusted, ___packageTypeHash0, ___mark1, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// => Tree.PackageTypeHashToInstance.Keys;
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_1 = L_0->___PackageTypeHashToInstance_0;
		NullCheck(L_1);
		KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* L_2;
		L_2 = Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06(L_1, Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// => Tree.ComponentTypeHashToPackageTypeHash[componentTypeHash];
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = L_0->___ComponentTypeHashToPackageTypeHash_1;
		int32_t L_2 = ___componentTypeHash0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_1, L_2, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_AdjustorThunk (RuntimeObject* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634(_thisAdjusted, ___componentTypeHash0, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___packageTypeHash0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// => Tree.PackageTypeHashToComponentTypeHashDependencies[packageTypeHash];
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_1 = L_0->___PackageTypeHashToComponentTypeHashDependencies_2;
		int32_t L_2 = ___packageTypeHash0;
		NullCheck(L_1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3;
		L_3 = Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC(L_1, L_2, Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_AdjustorThunk (RuntimeObject* __this, int32_t ___packageTypeHash0, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF(_thisAdjusted, ___packageTypeHash0, method);
	return _returnValue;
}
// System.Boolean Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::IsOptional(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeInitializeOrderSorter_IsOptional_m6A6CF00707E0D87469552A28996BBAD5F7957C78 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		// return Tree.ComponentTypeHashToInstance.TryGetValue(componentTypeHash, out var component)
		//     && component is null;
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_1 = L_0->___ComponentTypeHashToInstance_3;
		int32_t L_2 = ___componentTypeHash0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool DependencyTreeInitializeOrderSorter_IsOptional_m6A6CF00707E0D87469552A28996BBAD5F7957C78_AdjustorThunk (RuntimeObject* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_IsOptional_m6A6CF00707E0D87469552A28996BBAD5F7957C78(_thisAdjusted, ___componentTypeHash0, method);
	return _returnValue;
}
// System.Boolean Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::IsProvided(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeInitializeOrderSorter_IsProvided_m3F8555633FE8E2A1AFFE39D0C902BD23AC171364 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// return Tree.ComponentTypeHashToPackageTypeHash.ContainsKey(componentTypeHash);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = L_0->___ComponentTypeHashToPackageTypeHash_1;
		int32_t L_2 = ___componentTypeHash0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9(L_1, L_2, Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool DependencyTreeInitializeOrderSorter_IsProvided_m3F8555633FE8E2A1AFFE39D0C902BD23AC171364_AdjustorThunk (RuntimeObject* __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	bool _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_IsProvided_m3F8555633FE8E2A1AFFE39D0C902BD23AC171364(_thisAdjusted, ___componentTypeHash0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.MissingComponent Unity.Services.Core.Internal.MissingComponent::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* MissingComponent_get_Instance_mAB80E0DDC311B463121A6946C1F10D6BE614A3E5 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static MissingComponent Instance { get; }
		il2cpp_codegen_runtime_class_init_inline(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* L_0 = ((MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_StaticFields*)il2cpp_codegen_static_fields_for(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.MissingComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingComponent__ctor_mF979DE0E49A4D89DB2730CA254E594D7E8EF30B5 (MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* __this, const RuntimeMethod* method) 
{
{
		// MissingComponent() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// MissingComponent() {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.MissingComponent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingComponent__cctor_m63AF32EB858A155A28D02B6D252CDF232DA5A0EF (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// = new MissingComponent();
		MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* L_0 = (MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8*)il2cpp_codegen_object_new(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		MissingComponent__ctor_mF979DE0E49A4D89DB2730CA254E594D7E8EF30B5(L_0, /*hidden argument*/NULL);
		((MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_StaticFields*)il2cpp_codegen_static_fields_for(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_StaticFields*)il2cpp_codegen_static_fields_for(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, const RuntimeMethod* method) 
{
{
		// internal IPackageRegistry Registry { get; }
		RuntimeObject* L_0 = __this->___U3CRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927 (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, RuntimeObject* ___registryToLock0, const RuntimeMethod* method) 
{
{
		// public LockedPackageRegistry(
		//     [NotNull] IPackageRegistry registryToLock)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Registry = registryToLock;
		RuntimeObject* L_0 = ___registryToLock0;
		__this->___U3CRegistryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegistryU3Ek__BackingField_1), (void*)L_0);
		// }
		return;
	}
}
// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.LockedPackageRegistry::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* LockedPackageRegistry_get_Tree_m29C509F6076AB2B4910AA7E2413385AD3523123D (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// get => Registry.Tree;
		RuntimeObject* L_0;
		L_0 = LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A_inline(__this, NULL);
		NullCheck(L_0);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_1;
		L_1 = InterfaceFuncInvoker0< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry_set_Tree_m51DD9195FEE8F0E7366F915B039495A797BC1C11 (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// set => Registry.Tree = value;
		RuntimeObject* L_0;
		L_0 = LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A_inline(__this, NULL);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(1 /* System.Void Unity.Services.Core.Internal.IPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree) */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, const RuntimeMethod* method) 
{
{
		// public DependencyTree Tree { get; set; }
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___U3CTreeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___value0, const RuntimeMethod* method) 
{
{
		// public DependencyTree Tree { get; set; }
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___value0;
		__this->___U3CTreeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTreeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330 (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___tree0, const RuntimeMethod* method) 
{
{
		// public PackageRegistry(
		//     [CanBeNull] DependencyTree tree)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Tree = tree;
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___tree0;
		PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.PackageRegistry::AddComponentDependencyToPackage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry_AddComponentDependencyToPackage_m930F30EC365AAEE8596E7458AD8C86E73D445812 (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, int32_t ___componentTypeHash0, int32_t ___packageTypeHash1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	{
		// var dependencyTypeHashs = Tree.PackageTypeHashToComponentTypeHashDependencies[packageTypeHash];
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0;
		L_0 = PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B_inline(__this, NULL);
		NullCheck(L_0);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_1 = L_0->___PackageTypeHashToComponentTypeHashDependencies_2;
		int32_t L_2 = ___packageTypeHash1;
		NullCheck(L_1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3;
		L_3 = Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC(L_1, L_2, Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC_RuntimeMethod_var);
		V_0 = L_3;
		// if (!dependencyTypeHashs.Contains(componentTypeHash))
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = V_0;
		int32_t L_5 = ___componentTypeHash0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(L_4, L_5, List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		// dependencyTypeHashs.Add(componentTypeHash);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = V_0;
		int32_t L_8 = ___componentTypeHash0;
		NullCheck(L_7);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_7, L_8, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0022:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer::CreateStaticInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInitializer_CreateStaticInstance_mA8A93029FC22CB37056B0B13AAA15AFD688E6B27 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* G_B2_0 = NULL;
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* G_B1_0 = NULL;
	{
		// CoreRegistry.Instance = new CoreRegistry();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)il2cpp_codegen_object_new(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314(L_0, /*hidden argument*/NULL);
		CoreRegistry_set_Instance_mF131533D65A3CDAE3C7DCB969369DC33AE15CADA_inline(L_0, NULL);
		// UnityServices.Instance = new UnityServicesInternal(CoreRegistry.Instance);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_1;
		L_1 = CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2_inline(NULL);
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_2 = (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)il2cpp_codegen_object_new(UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var);
		UnityServicesInternal__ctor_mE1CD373BE5A4323A6CF1F27D0B9DD0264C441FA5(L_2, L_1, /*hidden argument*/NULL);
		UnityServices_set_Instance_m4623DEFDB0F3E54B27834ADA639565E8E1D2ACD3_inline(L_2, NULL);
		// UnityServices.InstantiationCompletion?.TrySetResult(null);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_3;
		L_3 = UnityServices_get_InstantiationCompletion_m8DA644951E01436B3FE99881CFD4CBDE5E107A46_inline(NULL);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		NullCheck(G_B2_0);
		bool L_5;
		L_5 = TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B(G_B2_0, NULL, TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer::EnableServicesInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInitializer_EnableServicesInitialization_mCBEECB62393C405F9F3F87A12DA61046AAE811DD (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// var instance = (UnityServicesInternal)UnityServices.Instance;
		RuntimeObject* L_0;
		L_0 = UnityServices_get_Instance_m497618344EE8CEF1455FAC5A3AD84164F9DDF6E8_inline(NULL);
		// instance.EnableInitialization();
		NullCheck(((UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)CastclassClass((RuntimeObject*)L_0, UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var)));
		UnityServicesInternal_EnableInitialization_m22C8228B658003BA234EB36E085AEFC987490E47(((UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)CastclassClass((RuntimeObject*)L_0, UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* UnityServicesInternal_get_Options_mF08FB9CE83332107302744620D7A459CC581C54F (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
{
		// public InitializationOptions Options { get; private set; }
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = __this->___U3COptionsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_Options(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___value0, const RuntimeMethod* method) 
{
{
		// public InitializationOptions Options { get; private set; }
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
{
		// CoreRegistry Registry { get; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = __this->___U3CRegistryU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal__ctor_mE1CD373BE5A4323A6CF1F27D0B9DD0264C441FA5 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) 
{
{
		// public UnityServicesInternal(
		//     [NotNull] CoreRegistry registry)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Registry = registry;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ___registry0;
		__this->___U3CRegistryU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegistryU3Ek__BackingField_4), (void*)L_0);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServicesInternal_InitializeAsync_m964BF1654D9A647F2216029243F3CB1ED6F600C4 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options0, const RuntimeMethod* method) 
{
{
		// if (!HasRequestedInitialization()
		//     || HasInitializationFailed())
		bool L_0;
		L_0 = UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = UnityServicesInternal_HasInitializationFailed_m3CBF2389027203FFD69564492D4A40C7314946F5(__this, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}

IL_0010:
	{
		// Options = options;
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_2 = ___options0;
		UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E_inline(__this, L_2, NULL);
		// CreateInitialization();
		UnityServicesInternal_CreateInitialization_mFB7E812553282DF2F2600F5F700436B4BFA3E127(__this, NULL);
	}

IL_001d:
	{
		// if (!CanInitialize
		//     || State != ServicesInitializationState.Uninitialized)
		bool L_3 = __this->___CanInitialize_2;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4;
		L_4 = UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}

IL_002d:
	{
		// return m_Initialization.AsTask();
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_5 = __this->___m_Initialization_3;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = AsyncOperationExtensions_AsTask_m2EDCCEA7ABE216E3D5BDE1AABA6B8A7BDF82A4A5(L_5, NULL);
		return L_6;
	}

IL_0039:
	{
		// StartInitialization();
		UnityServicesInternal_StartInitialization_m224881A50A61A1E59F3E1DDFC783C5E5A7EE1668(__this, NULL);
		// return m_Initialization.AsTask();
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_7 = __this->___m_Initialization_3;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AsyncOperationExtensions_AsTask_m2EDCCEA7ABE216E3D5BDE1AABA6B8A7BDF82A4A5(L_7, NULL);
		return L_8;
	}
}
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
{
		// return !(m_Initialization is null);
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_0 = __this->___m_Initialization_3;
		return (bool)((((int32_t)((((RuntimeObject*)(AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasInitializationFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_HasInitializationFailed_m3CBF2389027203FFD69564492D4A40C7314946F5 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
{
		// return m_Initialization.Status == AsyncOperationStatus.Failed;
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_0 = __this->___m_Initialization_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AsyncOperation_get_Status_m0A936D453514234140366F6C2318ECA656CF3A87_inline(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::CreateInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_CreateInitialization_mFB7E812553282DF2F2600F5F700436B4BFA3E127 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServicesInternal_OnInitializationCompleted_mBE2706653713DFC2455056C32B33DCBA5EC8B728_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// m_Initialization = new AsyncOperation();
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_0 = (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0*)il2cpp_codegen_object_new(AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0_il2cpp_TypeInfo_var);
		AsyncOperation__ctor_m39B9682C2896CAA23CAC25FCF9D902C19EBF11DE(L_0, /*hidden argument*/NULL);
		__this->___m_Initialization_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Initialization_3), (void*)L_0);
		// m_Initialization.SetInProgress();
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_1 = __this->___m_Initialization_3;
		NullCheck(L_1);
		AsyncOperation_SetInProgress_mF9F046353697ECEB9B2FD83E3193E8C050BCC860(L_1, NULL);
		// m_Initialization.Completed += OnInitializationCompleted;
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_2 = __this->___m_Initialization_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_3, __this, (intptr_t)((void*)UnityServicesInternal_OnInitializationCompleted_mBE2706653713DFC2455056C32B33DCBA5EC8B728_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9_RuntimeMethod_var);
		NullCheck(L_2);
		AsyncOperation_add_Completed_m3BF706D0128F8660347D12C9C4F4DCBB580EC67F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::StartInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_StartInitialization_m224881A50A61A1E59F3E1DDFC783C5E5A7EE1668 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* G_B2_0 = NULL;
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// State = ServicesInitializationState.Initializing;
		UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline(__this, 1, NULL);
		// var sortedPackageTypeHashes = new List<int>(
		//     Registry.PackageRegistry.Tree?.PackageTypeHashToInstance.Count ?? 0);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(L_0, NULL);
		NullCheck(L_1);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_2;
		L_2 = InterfaceFuncInvoker0< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_1);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0028;
	}

IL_001e:
	{
		NullCheck(G_B2_0);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_4 = G_B2_0->___PackageTypeHashToInstance_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C(L_4, Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_0028:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_6, G_B3_0, /*hidden argument*/List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_002e:
	try
	{// begin try (depth: 1)
		// var sorter = new DependencyTreeInitializeOrderSorter(
		//     Registry.PackageRegistry.Tree, sortedPackageTypeHashes);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_7;
		L_7 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(L_7, NULL);
		NullCheck(L_8);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_9;
		L_9 = InterfaceFuncInvoker0< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_8);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = V_0;
		DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7((&V_1), L_9, L_10, NULL);
		// sorter.SortRegisteredPackagesIntoTarget();
		DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831((&V_1), NULL);
		// }
		goto IL_005e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004f;
		}
		throw e;
	}

CATCH_004f:
	{// begin catch(System.Exception)
		// catch (Exception reason)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// m_Initialization.Fail(reason);
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_11 = __this->___m_Initialization_3;
		Exception_t* L_12 = V_2;
		NullCheck(L_11);
		AsyncOperation_Fail_m863A1DBBA999B7B0EA18739E519AACFF0054A5DF(L_11, L_12, NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0087;
	}// end catch (depth: 1)

IL_005e:
	{
	}

IL_005f:
	try
	{// begin try (depth: 1)
		// var initializer = new CoreRegistryInitializer(Registry, m_Initialization, sortedPackageTypeHashes);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_13;
		L_13 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(__this, NULL);
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_14 = __this->___m_Initialization_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = V_0;
		CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_16 = (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03*)il2cpp_codegen_object_new(CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03_il2cpp_TypeInfo_var);
		CoreRegistryInitializer__ctor_m53CA275B05368556550BE038B94CC69D4D555329(L_16, L_13, L_14, L_15, /*hidden argument*/NULL);
		// initializer.InitializeRegistry();
		NullCheck(L_16);
		CoreRegistryInitializer_InitializeRegistry_mA8BEC2E19E3BD1F8FC5B7654375B3BB727442E38(L_16, NULL);
		// }
		goto IL_0087;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0078;
		}
		throw e;
	}

CATCH_0078:
	{// begin catch(System.Exception)
		// catch (Exception reason)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// m_Initialization.Fail(reason);
		AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* L_17 = __this->___m_Initialization_3;
		Exception_t* L_18 = V_3;
		NullCheck(L_17);
		AsyncOperation_Fail_m863A1DBBA999B7B0EA18739E519AACFF0054A5DF(L_17, L_18, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0087;
	}// end catch (depth: 1)

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::OnInitializationCompleted(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_OnInitializationCompleted_mBE2706653713DFC2455056C32B33DCBA5EC8B728 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, RuntimeObject* ___initialization0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// switch (initialization.Status)
		RuntimeObject* L_0 = ___initialization0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}
	{
		// State = ServicesInitializationState.Initialized;
		UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline(__this, 2, NULL);
		// Registry.LockComponentRegistration();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2;
		L_2 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(__this, NULL);
		NullCheck(L_2);
		CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC(L_2, NULL);
		// break;
		return;
	}

IL_001c:
	{
		// State = ServicesInitializationState.Uninitialized;
		UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::EnableInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_EnableInitialization_m22C8228B658003BA234EB36E085AEFC987490E47 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
{
		// CanInitialize = true;
		__this->___CanInitialize_2 = (bool)1;
		// Registry.LockPackageRegistration();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(__this, NULL);
		NullCheck(L_0);
		CoreRegistry_LockPackageRegistration_m031751BE6E5CBB6D30AAE2B64DAF04FC0EEA5A0B(L_0, NULL);
		// if (HasRequestedInitialization())
		bool L_1;
		L_1 = UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03(__this, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// StartInitialization();
		UnityServicesInternal_StartInitialization_m224881A50A61A1E59F3E1DDFC783C5E5A7EE1668(__this, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.PreventAotStripping::PreserveStringEnumConverterForAOT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreventAotStripping_PreserveStringEnumConverterForAOT_mF25BBCD480CD5D4CD1915CCF5076BB7041ADA894 (PreventAotStripping_tD14B398038581CA562049BA05E6722BBC1D2CF53* __this, const RuntimeMethod* method) 
{
{
		// new StringEnumConverter();
		StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184* L_0 = (StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_il2cpp_TypeInfo_var)));
		StringEnumConverter__ctor_m36B6009E735666675AEB30CD83B385291E98CC73(L_0, /*hidden argument*/NULL);
		// throw new InvalidOperationException("This method is used for AOT code generation only. Do not call it at runtime.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17D9D9AD164713AC451185991D75EF5F482F34E1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PreventAotStripping_PreserveStringEnumConverterForAOT_mF25BBCD480CD5D4CD1915CCF5076BB7041ADA894_RuntimeMethod_var)));
	}
}
// System.Void Unity.Services.Core.Internal.PreventAotStripping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreventAotStripping__ctor_mF1DC59EB7696C647B96CCBCD186B398117025372 (PreventAotStripping_tD14B398038581CA562049BA05E6722BBC1D2CF53* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Core.Internal.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtils_HasSucceeded_mB0737EF4169CFB0110E7AFA40F3E9A649D6FB50D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___self0, const RuntimeMethod* method) 
{
{
		// return self.result == UnityWebRequest.Result.Success;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___self0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Internal.UnityWebRequestUtils::GetTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* UnityWebRequestUtils_GetTextAsync_m0FBB057A5007FDF0C0771EA1D748D9612020A8F0 (String_t* ___uri0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* L_0 = (U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var completionSource = new TaskCompletionSource<string>();
		U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* L_1 = V_0;
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_2 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1(L_2, /*hidden argument*/TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___completionSource_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___completionSource_0), (void*)L_2);
		// var request = UnityWebRequest.Get(uri);
		String_t* L_3 = ___uri0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
		L_4 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_3, NULL);
		// request.SendWebRequest()
		//     .completed += CompleteFetchTaskOnRequestCompleted;
		NullCheck(L_4);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5;
		L_5 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_4, NULL);
		U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* L_6 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_7 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D_RuntimeMethod_var);
		NullCheck(L_5);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_5, L_7, NULL);
		// return completionSource.Task;
		U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_9 = L_8->___completionSource_0;
		NullCheck(L_9);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_10;
		L_10 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_9, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1 (U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::<GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759 (U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___rawOperation0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D);
		s_Il2CppMethodInitialized = true;
	}
UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// var operation = (UnityWebRequestAsyncOperation)rawOperation;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = ___rawOperation0;
		V_0 = ((UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)CastclassClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var));
		// using (operation.webRequest)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = V_0;
		NullCheck(L_1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_1, NULL);
		V_1 = L_2;
	}

IL_000e:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				{
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = V_1;
					if (!L_3)
					{
						goto IL_007a;
					}
				}

IL_0074:
				{
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_007a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (operation.webRequest.HasSucceeded())
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5 = V_0;
				NullCheck(L_5);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
				L_6 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_5, NULL);
				bool L_7;
				L_7 = UnityWebRequestUtils_HasSucceeded_mB0737EF4169CFB0110E7AFA40F3E9A649D6FB50D(L_6, NULL);
				if (!L_7)
				{
					goto IL_0038;
				}
			}

IL_001b:
			{
				// completionSource.SetResult(operation.webRequest.downloadHandler.text);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_8 = __this->___completionSource_0;
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_9 = V_0;
				NullCheck(L_9);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10;
				L_10 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_9, NULL);
				NullCheck(L_10);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_11;
				L_11 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_10, NULL);
				NullCheck(L_11);
				String_t* L_12;
				L_12 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_11, NULL);
				NullCheck(L_8);
				TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1(L_8, L_12, TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
				goto IL_007b;
			}

IL_0038:
			{
				// var errorMessage = "Couldn't fetch config file." +
				//     $"\nURL: {operation.webRequest.url}" +
				//     $"\nReason: {operation.webRequest.error}";
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_13 = V_0;
				NullCheck(L_13);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14;
				L_14 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_13, NULL);
				NullCheck(L_14);
				String_t* L_15;
				L_15 = UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8(L_14, NULL);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_16 = V_0;
				NullCheck(L_16);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17;
				L_17 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_16, NULL);
				NullCheck(L_17);
				String_t* L_18;
				L_18 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_17, NULL);
				String_t* L_19;
				L_19 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81, L_15, _stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D, L_18, NULL);
				V_2 = L_19;
				// completionSource.SetException(new Exception(errorMessage));
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_20 = __this->___completionSource_0;
				String_t* L_21 = V_2;
				Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, L_21, /*hidden argument*/NULL);
				NullCheck(L_20);
				TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6(L_20, L_22, TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6_RuntimeMethod_var);
				// }
				goto IL_007b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B_inline (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___request0, const RuntimeMethod* method) 
{
{
		// m_Request = request;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___request0;
		__this->___m_Request_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C_inline (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___response0, const RuntimeMethod* method) 
{
{
		// m_Response = response;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = ___response0;
		__this->___m_Response_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Response_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, bool ___value0, const RuntimeMethod* method) 
{
{
		// public bool IsDone { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsDoneU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___value0, const RuntimeMethod* method) 
{
{
		// public Exception Exception { get; protected set; }
		Exception_t* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668_inline (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, RuntimeObject* ___asyncOperation0, const RuntimeMethod* method) 
{
{
		// m_Operation = asyncOperation;
		RuntimeObject* L_0 = ___asyncOperation0;
		__this->___m_Operation_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Operation_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20_inline (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, const RuntimeMethod* method) 
{
{
		// internal Dictionary<int, IServiceComponent> ComponentTypeHashToInstance { get; }
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0 = __this->___U3CComponentTypeHashToInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* MissingComponent_get_Instance_mAB80E0DDC311B463121A6946C1F10D6BE614A3E5_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static MissingComponent Instance { get; }
		il2cpp_codegen_runtime_class_init_inline(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* L_0 = ((MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_StaticFields*)il2cpp_codegen_static_fields_for(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPackageRegistryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPackageRegistryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CComponentRegistryU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CComponentRegistryU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPackageRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = __this->___U3CComponentRegistryU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A_inline (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, const RuntimeMethod* method) 
{
{
		// internal IPackageRegistry Registry { get; }
		RuntimeObject* L_0 = __this->___U3CRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C_inline (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___value0, const RuntimeMethod* method) 
{
{
		// public DependencyTree Tree { get; set; }
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___value0;
		__this->___U3CTreeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTreeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B_inline (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, const RuntimeMethod* method) 
{
{
		// public DependencyTree Tree { get; set; }
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___U3CTreeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_Instance_mF131533D65A3CDAE3C7DCB969369DC33AE15CADA_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ___value0;
		((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_Instance_m4623DEFDB0F3E54B27834ADA639565E8E1D2ACD3_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// internal static IUnityServices Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_m8DA644951E01436B3FE99881CFD4CBDE5E107A46_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m497618344EE8CEF1455FAC5A3AD84164F9DDF6E8_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// internal static IUnityServices Instance { get; set; }
		RuntimeObject* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___value0, const RuntimeMethod* method) 
{
{
		// public InitializationOptions Options { get; private set; }
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AsyncOperation_get_Status_m0A936D453514234140366F6C2318ECA656CF3A87_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
{
		// CoreRegistry Registry { get; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = __this->___U3CRegistryU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) 
{
{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) 
{
{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
