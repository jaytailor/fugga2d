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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IDictionary_2_tC2DD277FD757B5D1EBE17DDC9278C21DA48CE13D;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct KeyCollection_tCE1CFD9B808885E5C2BE2E9AF3A334C16332ADE5;
// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct TaskFactory_1_t2BAA4F6BB5062AF0CE16323757B12F91C891CECD;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct TaskFactory_1_tC12AE1439EC8245FEBF9B21842BE199076B92573;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskFactory_1_t2AB428330E6C0DBAD27B0CBDE7EF31A2FDB89E9B;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct ValueCollection_t684F278DE8ED87A4E8AFEAE8048BBB1729BB6288;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>[]
struct EntryU5BU5D_t485FBC023EFDD29F553E596F5565C5D04B2F9709;
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Unity.Services.Core.Scheduler.Internal.ActionScheduler
struct ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154;
// Unity.Services.Core.Configuration.CloudProjectId
struct CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Registration.CorePackageInitializer
struct CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// System.Delegate
struct Delegate_t;
// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00;
// System.Exception
struct Exception_t;
// Unity.Services.Core.Scheduler.Internal.IActionScheduler
struct IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId
struct ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// Unity.Services.Core.Configuration.IConfigurationLoader
struct IConfigurationLoader_tC5D49E531BA88F2FA7772F0EF305AF524FF0AEE4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7;
// Unity.Services.Core.Device.Internal.IInstallationId
struct IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9;
// Unity.Services.Core.Device.IUserIdentifierProvider
struct IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// Unity.Services.Core.Device.InstallationId
struct InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873;
// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConfigurationLoader_tC5D49E531BA88F2FA7772F0EF305AF524FF0AEE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
IL2CPP_EXTERN_C String_t* _stringLiteral72A108E053F65E47DD8EFDC2C7EB71B5E7879550;
IL2CPP_EXTERN_C String_t* _stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m26CFE03AA8E44DAB63C3547CBB5E8383B51E989E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3DB1182376B84D656222E222B5D8B012AE994771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_mF416D3391731E64A781AFCDC8A6C64624A625A24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m0794BD857A482D77686E96D28CEA1D79458EA88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m1846BCEA7C185998947639F3FFAD856E9203F889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mE90A9D360F0FF6976C8350541CD738AE00694709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mED7C06670186E2C1006CD13B8D748204EC66B2AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF578692F3D94D3981503A7C2313F1DC9E478C88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m9B116275B0D5587B404A6E6F90B319B1A5F6F429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA2124C7CD9A64992EF6036BCF594B8BF804FA1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m776403B017A5282A2689DEB5AF3A189A742AC5B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m85FB1CA743B1A3935C902F37A83B8D87FC307B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m9F5F70E9419F624D09DB202C0506D80A09E97453_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3665CE034D8CDAEFD26A8667B6DA9FCB81ED4AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_m6BC0E665141240C5ABE9D351EB78C77616CD2E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mE25828873E770E43AD1D945463BD8CB51216BF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mF8F8A7FE6098186D0EA360D30973514DAC8BDB01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m162EF9585CAC17936E1ECC19CE54547E8DF96C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m480D714A79FBDE79AFB9333CD7D9386F4512C626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_m0159753FCF0300F1F6F69172E558D8AF52EE0F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_m3AAC98E34B75EBCD1C0A8067193A726D7901C718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m096BD42A4DA4295A8E266020DEFE3C149A1776E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m9ED4DB94953C21AC1CA78D88F5982B28F11CEE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m121CED2EBD1FEB805A9E62C197B38BDB1B1E9600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisCorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6_mDD47FD776BB4516A3E82F5F0E5997C2089924FD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mF33380C7C0C591AAF6956F38B5E0A8C2AFD33861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mC0C47C75BEEC7A2365DD0F21F5BDFB2CC51ABCEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m6E459C26DF5C659197C1A476665BECCD6A02B0D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mE88E97BABEAA4648F874203419080A75B4CC36D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m9D6C10E6BB5914734D353354D30C9A3411EFC475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE717AB7B8D8DC0D1E3879C9437CDA2F4FC67D104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA3C947C54BE5D5E6B4506F8962309A5B7E3A0866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC1F7731050BE09A87E9FBE0B3F6FD1FB902C6CC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m15A8209797F54D77FE913ADD1B106EEF399156CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m38F12B40A5382D0BB9013E03DAC27317A788D8ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m57F533CF0C0319D7748CE05C11A50699F08489F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mB826C2D3B372C220CB87605D3BEBBBECE9BF9738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ed__1_MoveNext_mDEEA2C72715650DD2F71E37DA1630644B3AFFC8D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t04F5463B88FCB2429491F706F2F1C4E518D007AC 
{
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t485FBC023EFDD29F553E596F5565C5D04B2F9709* ____entries_1;
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
	KeyCollection_tCE1CFD9B808885E5C2BE2E9AF3A334C16332ADE5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t684F278DE8ED87A4E8AFEAE8048BBB1729BB6288* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// Unity.Services.Core.Configuration.CloudProjectId
struct CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0  : public RuntimeObject
{
};

// Unity.Services.Core.Configuration.ConfigurationUtils
struct ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC  : public RuntimeObject
{
};

struct ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_StaticFields
{
	// System.String Unity.Services.Core.Configuration.ConfigurationUtils::<RuntimeConfigFullPath>k__BackingField
	String_t* ___U3CRuntimeConfigFullPathU3Ek__BackingField_3;
	// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::<ConfigurationLoader>k__BackingField
	RuntimeObject* ___U3CConfigurationLoaderU3Ek__BackingField_4;
};

// Unity.Services.Core.Registration.CorePackageInitializer
struct CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6  : public RuntimeObject
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

// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00  : public RuntimeObject
{
	// System.String Unity.Services.Core.Environments.Internal.Environments::<Current>k__BackingField
	String_t* ___U3CCurrentU3Ek__BackingField_0;
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::m_Values
	RuntimeObject* ___m_Values_0;
};

// Unity.Services.Core.Device.InstallationId
struct InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873  : public RuntimeObject
{
	// System.String Unity.Services.Core.Device.InstallationId::identifier
	String_t* ___identifier_1;
	// Unity.Services.Core.Device.IUserIdentifierProvider Unity.Services.Core.Device.InstallationId::unityAdsIdentifierProvider
	RuntimeObject* ___unityAdsIdentifierProvider_2;
	// Unity.Services.Core.Device.IUserIdentifierProvider Unity.Services.Core.Device.InstallationId::unityAnalyticsIdentifierProvider
	RuntimeObject* ___unityAnalyticsIdentifierProvider_3;
};

// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry> Unity.Services.Core.Configuration.ProjectConfiguration::m_ConfigValues
	RuntimeObject* ___m_ConfigValues_0;
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

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* ___m_task_0;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE 
{
	// System.String[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Keys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Keys_0;
	// Unity.Services.Core.Configuration.ConfigurationEntry[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Values
	ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* ___Values_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_pinvoke
{
	char** ___Keys_0;
	ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* ___Values_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_com
{
	Il2CppChar** ___Keys_0;
	ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* ___Values_1;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
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

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
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

// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2BAA4F6BB5062AF0CE16323757B12F91C891CECD* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* ___m_result_22;
};

struct Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC12AE1439EC8245FEBF9B21842BE199076B92573* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE ___m_result_22;
};

struct Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2AB428330E6C0DBAD27B0CBDE7EF31A2FDB89E9B* ___s_defaultFactory_23;
};

// Unity.Services.Core.Scheduler.Internal.ActionScheduler
struct ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154  : public RuntimeObject
{
	// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation> Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_ScheduledActions
	MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* ___m_ScheduledActions_0;
	// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation> Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_IdScheduledInvocationMap
	Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* ___m_IdScheduledInvocationMap_1;
	// UnityEngine.LowLevel.PlayerLoopSystem Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_SchedulerLoopSystem
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___m_SchedulerLoopSystem_3;
	// System.Int64 Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_NextId
	int64_t ___m_NextId_4;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7
struct U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8 
{
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94 ___U3CU3Et__builder_1;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7::options
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7::<>u__1
	TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A ___U3CU3Eu__1_3;
};

// Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8
struct U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1 
{
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8::<>u__1
	TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A ___U3CU3Eu__1_2;
};

// Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6
struct U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96 
{
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::<>t__builder
	AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC ___U3CU3Et__builder_1;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::options
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options_2;
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::registry
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::<>u__1
	TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92 ___U3CU3Eu__1_4;
};

// Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1
struct U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722 
{
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::registry
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry_2;
	// Unity.Services.Core.Scheduler.Internal.ActionScheduler Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::<scheduler>5__2
	ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* ___U3CschedulerU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::<>u__1
	TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5 ___U3CU3Eu__1_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<System.Object>(TPackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___package0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m480D714A79FBDE79AFB9333CD7D9386F4512C626_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<System.Object>(TComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_mE1CAF4013B287E4DF0EA7199FE32A4212A462136_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m52E7D0DFA5C0F7BA358B3FAE091E5D36C132E032_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C AsyncTaskMethodBuilder_1_Create_m1846BCEA7C185998947639F3FFAD856E9203F889_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3665CE034D8CDAEFD26A8667B6DA9FCB81ED4AA3_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_mA513197C5E00E6C9A240897FE95B8D91A9537C3A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_m211C56033B4A332798B4D4C263124D3953FFC27C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523_gshared (Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E_gshared (TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_mE74CF6D63DFBB21534A65B598B3C5140F6541099_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* ___awaiter0, U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7_gshared (TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3DB1182376B84D656222E222B5D8B012AE994771_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* ___awaiter0, U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;

// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer__ctor_m97F489025B2C46F7E07A944E9AF11E45ABC73A8C (CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.Services.Core.Registration.CorePackageInitializer>(TPackage)
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisCorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6_mDD47FD776BB4516A3E82F5F0E5997C2089924FD7 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6* ___package0, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6*, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared)(__this, ___package0, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Device.Internal.IInstallationId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m9ED4DB94953C21AC1CA78D88F5982B28F11CEE84 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_m3AAC98E34B75EBCD1C0A8067193A726D7901C718 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Scheduler.Internal.IActionScheduler>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_m0159753FCF0300F1F6F69172E558D8AF52EE0F15 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m096BD42A4DA4295A8E266020DEFE3C149A1776E6 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m121CED2EBD1FEB805A9E62C197B38BDB1B1E9600 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m480D714A79FBDE79AFB9333CD7D9386F4512C626 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m480D714A79FBDE79AFB9333CD7D9386F4512C626_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.InstallationId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId__ctor_mD8E8D5B7A72C54F2517D33F9F2C89FA708CC6BF7 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Device.Internal.IInstallationId>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mE88E97BABEAA4648F874203419080A75B4CC36D1 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler__ctor_m65721521873C0894B75820E4DC934F47E068495D (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::JoinPlayerLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler_JoinPlayerLoopSystem_mB998001E51285B4DF2406DE197A3A5377BD62892 (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Scheduler.Internal.IActionScheduler>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mF33380C7C0C591AAF6956F38B5E0A8C2AFD33861 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Configuration.CloudProjectId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudProjectId__ctor_m04C6207EF478495335469EA975A65E82B79BACF7 (CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mC0C47C75BEEC7A2365DD0F21F5BDFB2CC51ABCEA (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Environments.Internal.Environments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environments__ctor_m907828E3A910416469C90CF39C6D863F6C0B5A6B (Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Environments.Internal.Environments::set_Current(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Environments_set_Current_mF2F9146800431DE9BBE5F95E94919DF01477BB84_inline (Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Environments.Internal.IEnvironments>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m6E459C26DF5C659197C1A476665BECCD6A02B0D1 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC AsyncTaskMethodBuilder_1_Create_mE90A9D360F0FF6976C8350541CD738AE00694709 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_m6BC0E665141240C5ABE9D351EB78C77616CD2E5C (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* __this, U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC*, U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_mE1CAF4013B287E4DF0EA7199FE32A4212A462136_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::get_Task()
inline Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* AsyncTaskMethodBuilder_1_get_Task_mE25828873E770E43AD1D945463BD8CB51216BF1C (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* (*) (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94 AsyncTaskMethodBuilder_1_Create_m0794BD857A482D77686E96D28CEA1D79458EA88A (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m9F5F70E9419F624D09DB202C0506D80A09E97453 (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* __this, U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94*, U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m52E7D0DFA5C0F7BA358B3FAE091E5D36C132E032_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::get_Task()
inline Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* AsyncTaskMethodBuilder_1_get_Task_mF8F8A7FE6098186D0EA360D30973514DAC8BDB01 (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* (*) (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C AsyncTaskMethodBuilder_1_Create_m1846BCEA7C185998947639F3FFAD856E9203F889 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m1846BCEA7C185998947639F3FFAD856E9203F889_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3665CE034D8CDAEFD26A8667B6DA9FCB81ED4AA3 (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3665CE034D8CDAEFD26A8667B6DA9FCB81ED4AA3_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
inline Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterInstallationId(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterInstallationId_mF25F84F46C33037BD3A63FC4AFFD07D6DB013ACE (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) ;
// Unity.Services.Core.Scheduler.Internal.ActionScheduler Unity.Services.Core.Registration.CorePackageInitializer::RegisterActionScheduler(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* CorePackageInitializer_RegisterActionScheduler_m006CBABC79690803E2740C57354BD7FCC5B72D50 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) ;
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m497618344EE8CEF1455FAC5A3AD84164F9DDF6E8_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::RegisterProjectConfigurationAsync(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* CorePackageInitializer_RegisterProjectConfigurationAsync_mC5EEBDD9B07CECCCADD82E4B6D0BF5E6504913EC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::GetAwaiter()
inline TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5 Task_1_GetAwaiter_m57F533CF0C0319D7748CE05C11A50699F08489F9 (Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5 (*) (Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m38F12B40A5382D0BB9013E03DAC27317A788D8ED (TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m162EF9585CAC17936E1ECC19CE54547E8DF96C89 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5* ___awaiter0, U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5*, U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_mA513197C5E00E6C9A240897FE95B8D91A9537C3A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mA3C947C54BE5D5E6B4506F8962309A5B7E3A0866 (TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterEnvironments(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterEnvironments_m4956431C35A24A9F25B5646DEAD9C94C27025343 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, RuntimeObject* ___projectConfiguration1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterCloudProjectId(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterCloudProjectId_m4FD9C68C439538EABCEE6A324D865B60D2EDAFFF (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::QuitPlayerLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler_QuitPlayerLoopSystem_mB6D96A4C581D63A69F43D1F74B9523FBE04ED93A (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_MoveNext_mDEEA2C72715650DD2F71E37DA1630644B3AFFC8D (U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_SetStateMachine_m700C5E5AC096972A68D9BF838D1F48CAF6002336 (U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GenerateProjectConfigurationAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* CorePackageInitializer_GenerateProjectConfigurationAsync_mB3EE672E92A6F82EDFF3D3B33AE14EE62B73FA66 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>::GetAwaiter()
inline TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92 Task_1_GetAwaiter_mB826C2D3B372C220CB87605D3BEBBBECE9BF9738 (Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92 (*) (Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m15A8209797F54D77FE913ADD1B106EEF399156CE (TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_mF416D3391731E64A781AFCDC8A6C64624A625A24 (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* __this, TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92* ___awaiter0, U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC*, TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92*, U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_m211C56033B4A332798B4D4C263124D3953FFC27C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>::GetResult()
inline ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* TaskAwaiter_1_GetResult_mC1F7731050BE09A87E9FBE0B3F6FD1FB902C6CC4 (TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92* __this, const RuntimeMethod* method)
{
	return ((  ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* (*) (TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m9D6C10E6BB5914734D353354D30C9A3411EFC475 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF578692F3D94D3981503A7C2313F1DC9E478C88C (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m9B116275B0D5587B404A6E6F90B319B1A5F6F429 (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterProjectConfigurationAsyncU3Ed__6_MoveNext_mE772D647270A7D083A7058CE8F9F2943AFB43DC5 (U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m85FB1CA743B1A3935C902F37A83B8D87FC307B34 (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterProjectConfigurationAsyncU3Ed__6_SetStateMachine_m4E0222637F2B00BF529A37C8565A235C3CE4136B (U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GetSerializedConfigOrEmptyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* CorePackageInitializer_GetSerializedConfigOrEmptyAsync_m681F4C98935252D52FEFC09C82C0BC4766205031 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetAwaiter()
inline TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523 (Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A (*) (Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B*, const RuntimeMethod*))Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E (TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m26CFE03AA8E44DAB63C3547CBB5E8383B51E989E (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* __this, TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* ___awaiter0, U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94*, TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A*, U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_mE74CF6D63DFBB21534A65B598B3C5140F6541099_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetResult()
inline SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7 (TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* __this, const RuntimeMethod* method)
{
	return ((  SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE (*) (TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mE717AB7B8D8DC0D1E3879C9437CDA2F4FC67D104 (Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.Configuration.SerializableProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m627F3227C7A6037052CDE99B5C21B4D09A413BF6 (RuntimeObject* ___self0, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE ___config1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_mB6E69411468211EE0F3BA8286D597EA48661508E (RuntimeObject* ___self0, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration::.ctor(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectConfiguration__ctor_m3D6DED6203181E5190C9BA67E1F84EFD0F975945 (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* __this, RuntimeObject* ___configValues0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mED7C06670186E2C1006CD13B8D748204EC66B2AA (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mA2124C7CD9A64992EF6036BCF594B8BF804FA1A0 (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* __this, ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94*, ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__7_MoveNext_m6FE53E02799150B93AA2352B70CDC11CC08A0CCE (U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m776403B017A5282A2689DEB5AF3A189A742AC5B4 (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__7_SetStateMachine_mCCDAFAEC1D70009CF3CA6C35E4A230E182426391 (U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::get_ConfigurationLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_m28B28D711958F2CB7DCF65DE8D4AD85330608F02_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3DB1182376B84D656222E222B5D8B012AE994771 (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* ___awaiter0, U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A*, U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3DB1182376B84D656222E222B5D8B012AE994771_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogError_m60BDFED5C2144A408C9641D048F9A7C5141B8195 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Unity.Services.Core.Configuration.SerializableProjectConfiguration Unity.Services.Core.Configuration.SerializableProjectConfiguration::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE SerializableProjectConfiguration_get_Empty_m2D4B149E8E5B32B86A518F4C44EFCAB76D163E5F (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474 (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_MoveNext_mCBB7509F09C61C4358A4BE5B72F60264CF89BAE5 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_SetStateMachine_m4E4AEED213885BEBD7E1828BAC3854FB83DC9622 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
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
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_Register_m3CEFB3A0E2EAD1E5172F00F09565673F9EBCDBB1 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_m0159753FCF0300F1F6F69172E558D8AF52EE0F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_m3AAC98E34B75EBCD1C0A8067193A726D7901C718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m096BD42A4DA4295A8E266020DEFE3C149A1776E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m9ED4DB94953C21AC1CA78D88F5982B28F11CEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m121CED2EBD1FEB805A9E62C197B38BDB1B1E9600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisCorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6_mDD47FD776BB4516A3E82F5F0E5997C2089924FD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CoreRegistry.Instance.RegisterPackage(new CorePackageInitializer())
		//     .ProvidesComponent<IInstallationId>()
		//     .ProvidesComponent<ICloudProjectId>()
		//     .ProvidesComponent<IActionScheduler>()
		//     .ProvidesComponent<IEnvironments>()
		//     .ProvidesComponent<IProjectConfiguration>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2_inline(NULL);
		CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6* L_1 = (CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6*)il2cpp_codegen_object_new(CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6_il2cpp_TypeInfo_var);
		CorePackageInitializer__ctor_m97F489025B2C46F7E07A944E9AF11E45ABC73A8C(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_2;
		L_2 = CoreRegistry_RegisterPackage_TisCorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6_mDD47FD776BB4516A3E82F5F0E5997C2089924FD7(L_0, L_1, CoreRegistry_RegisterPackage_TisCorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6_mDD47FD776BB4516A3E82F5F0E5997C2089924FD7_RuntimeMethod_var);
		V_0 = L_2;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_3;
		L_3 = CoreRegistration_ProvidesComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m9ED4DB94953C21AC1CA78D88F5982B28F11CEE84((&V_0), CoreRegistration_ProvidesComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m9ED4DB94953C21AC1CA78D88F5982B28F11CEE84_RuntimeMethod_var);
		V_0 = L_3;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_4;
		L_4 = CoreRegistration_ProvidesComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_m3AAC98E34B75EBCD1C0A8067193A726D7901C718((&V_0), CoreRegistration_ProvidesComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_m3AAC98E34B75EBCD1C0A8067193A726D7901C718_RuntimeMethod_var);
		V_0 = L_4;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_5;
		L_5 = CoreRegistration_ProvidesComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_m0159753FCF0300F1F6F69172E558D8AF52EE0F15((&V_0), CoreRegistration_ProvidesComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_m0159753FCF0300F1F6F69172E558D8AF52EE0F15_RuntimeMethod_var);
		V_0 = L_5;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_6;
		L_6 = CoreRegistration_ProvidesComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m096BD42A4DA4295A8E266020DEFE3C149A1776E6((&V_0), CoreRegistration_ProvidesComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m096BD42A4DA4295A8E266020DEFE3C149A1776E6_RuntimeMethod_var);
		V_0 = L_6;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_7;
		L_7 = CoreRegistration_ProvidesComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m121CED2EBD1FEB805A9E62C197B38BDB1B1E9600((&V_0), CoreRegistration_ProvidesComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m121CED2EBD1FEB805A9E62C197B38BDB1B1E9600_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Registration.CorePackageInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CorePackageInitializer_Initialize_m589FEC518D5129BCD22937D6E5B7DAED72F9B044 (CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m480D714A79FBDE79AFB9333CD7D9386F4512C626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_1 = ___registry0;
		(&V_0)->___registry_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___registry_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m480D714A79FBDE79AFB9333CD7D9386F4512C626(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m480D714A79FBDE79AFB9333CD7D9386F4512C626_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterInstallationId(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterInstallationId_mF25F84F46C33037BD3A63FC4AFFD07D6DB013ACE (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mE88E97BABEAA4648F874203419080A75B4CC36D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* V_0 = NULL;
	{
		// var installationId = new InstallationId();
		InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* L_0 = (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873*)il2cpp_codegen_object_new(InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873_il2cpp_TypeInfo_var);
		InstallationId__ctor_mD8E8D5B7A72C54F2517D33F9F2C89FA708CC6BF7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// installationId.CreateIdentifier();
		InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* L_1 = V_0;
		NullCheck(L_1);
		InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C(L_1, NULL);
		// registry.RegisterServiceComponent<IInstallationId>(installationId);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2 = ___registry0;
		InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* L_3 = V_0;
		NullCheck(L_2);
		CoreRegistry_RegisterServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mE88E97BABEAA4648F874203419080A75B4CC36D1(L_2, L_3, CoreRegistry_RegisterServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mE88E97BABEAA4648F874203419080A75B4CC36D1_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.Services.Core.Scheduler.Internal.ActionScheduler Unity.Services.Core.Registration.CorePackageInitializer::RegisterActionScheduler(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* CorePackageInitializer_RegisterActionScheduler_m006CBABC79690803E2740C57354BD7FCC5B72D50 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mF33380C7C0C591AAF6956F38B5E0A8C2AFD33861_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* V_0 = NULL;
	{
		// var scheduler = new ActionScheduler();
		ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* L_0 = (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154*)il2cpp_codegen_object_new(ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154_il2cpp_TypeInfo_var);
		ActionScheduler__ctor_m65721521873C0894B75820E4DC934F47E068495D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// scheduler.JoinPlayerLoopSystem();
		ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* L_1 = V_0;
		NullCheck(L_1);
		ActionScheduler_JoinPlayerLoopSystem_mB998001E51285B4DF2406DE197A3A5377BD62892(L_1, NULL);
		// registry.RegisterServiceComponent<IActionScheduler>(scheduler);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2 = ___registry0;
		ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* L_3 = V_0;
		NullCheck(L_2);
		CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mF33380C7C0C591AAF6956F38B5E0A8C2AFD33861(L_2, L_3, CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mF33380C7C0C591AAF6956F38B5E0A8C2AFD33861_RuntimeMethod_var);
		// return scheduler;
		ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterCloudProjectId(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterCloudProjectId_m4FD9C68C439538EABCEE6A324D865B60D2EDAFFF (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mC0C47C75BEEC7A2365DD0F21F5BDFB2CC51ABCEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0* V_0 = NULL;
	{
		// var cloudProjectId = new CloudProjectId();
		CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0* L_0 = (CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0*)il2cpp_codegen_object_new(CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0_il2cpp_TypeInfo_var);
		CloudProjectId__ctor_m04C6207EF478495335469EA975A65E82B79BACF7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// registry.RegisterServiceComponent<ICloudProjectId>(cloudProjectId);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_1 = ___registry0;
		CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0* L_2 = V_0;
		NullCheck(L_1);
		CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mC0C47C75BEEC7A2365DD0F21F5BDFB2CC51ABCEA(L_1, L_2, CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mC0C47C75BEEC7A2365DD0F21F5BDFB2CC51ABCEA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterEnvironments(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterEnvironments_m4956431C35A24A9F25B5646DEAD9C94C27025343 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, RuntimeObject* ___projectConfiguration1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m6E459C26DF5C659197C1A476665BECCD6A02B0D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395);
		s_Il2CppMethodInitialized = true;
	}
Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* V_0 = NULL;
	{
		// var environments = new Environments.Internal.Environments();
		Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* L_0 = (Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00*)il2cpp_codegen_object_new(Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00_il2cpp_TypeInfo_var);
		Environments__ctor_m907828E3A910416469C90CF39C6D863F6C0B5A6B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// environments.Current = projectConfiguration.GetString(EnvironmentsOptionsExtensions.EnvironmentNameKey, "production");
		Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* L_1 = V_0;
		RuntimeObject* L_2 = ___projectConfiguration1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_2, _stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395, _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		NullCheck(L_1);
		Environments_set_Current_mF2F9146800431DE9BBE5F95E94919DF01477BB84_inline(L_1, L_3, NULL);
		// registry.RegisterServiceComponent<IEnvironments>(environments);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_4 = ___registry0;
		Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* L_5 = V_0;
		NullCheck(L_4);
		CoreRegistry_RegisterServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m6E459C26DF5C659197C1A476665BECCD6A02B0D1(L_4, L_5, CoreRegistry_RegisterServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_m6E459C26DF5C659197C1A476665BECCD6A02B0D1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::RegisterProjectConfigurationAsync(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* CorePackageInitializer_RegisterProjectConfigurationAsync_mC5EEBDD9B07CECCCADD82E4B6D0BF5E6504913EC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mE90A9D360F0FF6976C8350541CD738AE00694709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_m6BC0E665141240C5ABE9D351EB78C77616CD2E5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mE25828873E770E43AD1D945463BD8CB51216BF1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mE90A9D360F0FF6976C8350541CD738AE00694709(AsyncTaskMethodBuilder_1_Create_mE90A9D360F0FF6976C8350541CD738AE00694709_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_1 = ___registry0;
		(&V_0)->___registry_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___registry_3), (void*)L_1);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_2 = ___options1;
		(&V_0)->___options_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___options_2), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_m6BC0E665141240C5ABE9D351EB78C77616CD2E5C(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_m6BC0E665141240C5ABE9D351EB78C77616CD2E5C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mE25828873E770E43AD1D945463BD8CB51216BF1C(L_4, AsyncTaskMethodBuilder_1_get_Task_mE25828873E770E43AD1D945463BD8CB51216BF1C_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GenerateProjectConfigurationAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* CorePackageInitializer_GenerateProjectConfigurationAsync_mB3EE672E92A6F82EDFF3D3B33AE14EE62B73FA66 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m0794BD857A482D77686E96D28CEA1D79458EA88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m9F5F70E9419F624D09DB202C0506D80A09E97453_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mF8F8A7FE6098186D0EA360D30973514DAC8BDB01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m0794BD857A482D77686E96D28CEA1D79458EA88A(AsyncTaskMethodBuilder_1_Create_m0794BD857A482D77686E96D28CEA1D79458EA88A_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_1 = ___options0;
		(&V_0)->___options_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___options_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m9F5F70E9419F624D09DB202C0506D80A09E97453(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m9F5F70E9419F624D09DB202C0506D80A09E97453_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mF8F8A7FE6098186D0EA360D30973514DAC8BDB01(L_3, AsyncTaskMethodBuilder_1_get_Task_mF8F8A7FE6098186D0EA360D30973514DAC8BDB01_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GetSerializedConfigOrEmptyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* CorePackageInitializer_GetSerializedConfigOrEmptyAsync_m681F4C98935252D52FEFC09C82C0BC4766205031 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m1846BCEA7C185998947639F3FFAD856E9203F889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3665CE034D8CDAEFD26A8667B6DA9FCB81ED4AA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m1846BCEA7C185998947639F3FFAD856E9203F889(AsyncTaskMethodBuilder_1_Create_m1846BCEA7C185998947639F3FFAD856E9203F889_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3665CE034D8CDAEFD26A8667B6DA9FCB81ED4AA3(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3665CE034D8CDAEFD26A8667B6DA9FCB81ED4AA3_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D(L_2, AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer__ctor_m97F489025B2C46F7E07A944E9AF11E45ABC73A8C (CorePackageInitializer_tB06E53DC37B7383143EC96623CD1EB50AE1F2CF6* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_MoveNext_mDEEA2C72715650DD2F71E37DA1630644B3AFFC8D (U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m162EF9585CAC17936E1ECC19CE54547E8DF96C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA3C947C54BE5D5E6B4506F8962309A5B7E3A0866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m38F12B40A5382D0BB9013E03DAC27317A788D8ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m57F533CF0C0319D7748CE05C11A50699F08489F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* G_B11_0 = NULL;
	ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* G_B10_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}

IL_0007:
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0026;
			}
		}

IL_000a:
		{
			// RegisterInstallationId(registry);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2 = __this->___registry_2;
			CorePackageInitializer_RegisterInstallationId_mF25F84F46C33037BD3A63FC4AFFD07D6DB013ACE(L_2, NULL);
			// var scheduler = RegisterActionScheduler(registry);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_3 = __this->___registry_2;
			ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* L_4;
			L_4 = CorePackageInitializer_RegisterActionScheduler_m006CBABC79690803E2740C57354BD7FCC5B72D50(L_3, NULL);
			__this->___U3CschedulerU3E5__2_3 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CschedulerU3E5__2_3), (void*)L_4);
		}

IL_0026:
		{
		}

IL_0027:
		try
		{// begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0071;
				}
			}

IL_002a:
			{
				// var projectConfiguration = await RegisterProjectConfigurationAsync(
				//     registry, UnityServices.Instance.Options);
				CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_6 = __this->___registry_2;
				RuntimeObject* L_7;
				L_7 = UnityServices_get_Instance_m497618344EE8CEF1455FAC5A3AD84164F9DDF6E8_inline(NULL);
				NullCheck(L_7);
				InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_8;
				L_8 = InterfaceFuncInvoker0< InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* >::Invoke(1 /* Unity.Services.Core.InitializationOptions Unity.Services.Core.IUnityServices::get_Options() */, IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var, L_7);
				Task_1_t4C05C734C0A3359F74B529F22813572C6D5B13E6* L_9;
				L_9 = CorePackageInitializer_RegisterProjectConfigurationAsync_mC5EEBDD9B07CECCCADD82E4B6D0BF5E6504913EC(L_6, L_8, NULL);
				NullCheck(L_9);
				TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5 L_10;
				L_10 = Task_1_GetAwaiter_m57F533CF0C0319D7748CE05C11A50699F08489F9(L_9, Task_1_GetAwaiter_m57F533CF0C0319D7748CE05C11A50699F08489F9_RuntimeMethod_var);
				V_2 = L_10;
				bool L_11;
				L_11 = TaskAwaiter_1_get_IsCompleted_m38F12B40A5382D0BB9013E03DAC27317A788D8ED((&V_2), TaskAwaiter_1_get_IsCompleted_m38F12B40A5382D0BB9013E03DAC27317A788D8ED_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_008d;
				}
			}

IL_004e:
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
				TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5 L_13 = V_2;
				__this->___U3CU3Eu__1_4 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_14 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m162EF9585CAC17936E1ECC19CE54547E8DF96C89(L_14, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5_TisU3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722_m162EF9585CAC17936E1ECC19CE54547E8DF96C89_RuntimeMethod_var);
				goto IL_00fc;
			}

IL_0071:
			{
				TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5 L_15 = __this->___U3CU3Eu__1_4;
				V_2 = L_15;
				TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5* L_16 = (&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t9205A66E4190CCBFA2BDDE62603C3B461B0E43A5));
				int32_t L_17 = (-1);
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
			}

IL_008d:
			{
				RuntimeObject* L_18;
				L_18 = TaskAwaiter_1_GetResult_mA3C947C54BE5D5E6B4506F8962309A5B7E3A0866((&V_2), TaskAwaiter_1_GetResult_mA3C947C54BE5D5E6B4506F8962309A5B7E3A0866_RuntimeMethod_var);
				V_1 = L_18;
				// RegisterEnvironments(registry, projectConfiguration);
				CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_19 = __this->___registry_2;
				RuntimeObject* L_20 = V_1;
				CorePackageInitializer_RegisterEnvironments_m4956431C35A24A9F25B5646DEAD9C94C27025343(L_19, L_20, NULL);
				// RegisterCloudProjectId(registry);
				CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_21 = __this->___registry_2;
				CorePackageInitializer_RegisterCloudProjectId_m4FD9C68C439538EABCEE6A324D865B60D2EDAFFF(L_21, NULL);
				// }
				goto IL_00c2;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ae;
			}
			throw e;
		}

CATCH_00ae:
		{// begin catch(System.Exception)
			{
				// catch (Exception)
				// scheduler?.QuitPlayerLoopSystem();
				ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* L_22 = __this->___U3CschedulerU3E5__2_3;
				ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* L_23 = L_22;
				G_B10_0 = L_23;
				if (L_23)
				{
					G_B11_0 = L_23;
					goto IL_00bb;
				}
			}

IL_00b8:
			{
				goto IL_00c0;
			}

IL_00bb:
			{
				NullCheck(G_B11_0);
				ActionScheduler_QuitPlayerLoopSystem_mB6D96A4C581D63A69F43D1F74B9523FBE04ED93A(G_B11_0, NULL);
			}

IL_00c0:
			{
				// throw;
				IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeU3Ed__1_MoveNext_mDEEA2C72715650DD2F71E37DA1630644B3AFFC8D_RuntimeMethod_var)));
			}
		}// end catch (depth: 2)

IL_00c2:
		{
			goto IL_00e2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c4;
		}
		throw e;
	}

CATCH_00c4:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CschedulerU3E5__2_3 = (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CschedulerU3E5__2_3), (void*)(ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_25 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_24, L_25, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fc;
	}// end catch (depth: 1)

IL_00e2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CschedulerU3E5__2_3 = (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CschedulerU3E5__2_3), (void*)(ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_26 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_26, NULL);
	}

IL_00fc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__1_MoveNext_mDEEA2C72715650DD2F71E37DA1630644B3AFFC8D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722*>(__this + _offset);
	U3CInitializeU3Ed__1_MoveNext_mDEEA2C72715650DD2F71E37DA1630644B3AFFC8D(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_SetStateMachine_m700C5E5AC096972A68D9BF838D1F48CAF6002336 (U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__1_SetStateMachine_m700C5E5AC096972A68D9BF838D1F48CAF6002336_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__1_t230706916460B451159FBE5D7520DAD2EC59D722*>(__this + _offset);
	U3CInitializeU3Ed__1_SetStateMachine_m700C5E5AC096972A68D9BF838D1F48CAF6002336(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterProjectConfigurationAsyncU3Ed__6_MoveNext_mE772D647270A7D083A7058CE8F9F2943AFB43DC5 (U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_mF416D3391731E64A781AFCDC8A6C64624A625A24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m9B116275B0D5587B404A6E6F90B319B1A5F6F429_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m9D6C10E6BB5914734D353354D30C9A3411EFC475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mC1F7731050BE09A87E9FBE0B3F6FD1FB902C6CC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m15A8209797F54D77FE913ADD1B106EEF399156CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mB826C2D3B372C220CB87605D3BEBBBECE9BF9738_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* V_2 = NULL;
	TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}

IL_0007:
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0044;
			}
		}

IL_000a:
		{
			// var projectConfig = await GenerateProjectConfigurationAsync(options);
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_2 = __this->___options_2;
			Task_1_t38A8E3BE7F6E45AC5584F97EAE4E7BAC8B23CF29* L_3;
			L_3 = CorePackageInitializer_GenerateProjectConfigurationAsync_mB3EE672E92A6F82EDFF3D3B33AE14EE62B73FA66(L_2, NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92 L_4;
			L_4 = Task_1_GetAwaiter_mB826C2D3B372C220CB87605D3BEBBBECE9BF9738(L_3, Task_1_GetAwaiter_mB826C2D3B372C220CB87605D3BEBBBECE9BF9738_RuntimeMethod_var);
			V_3 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_1_get_IsCompleted_m15A8209797F54D77FE913ADD1B106EEF399156CE((&V_3), TaskAwaiter_1_get_IsCompleted_m15A8209797F54D77FE913ADD1B106EEF399156CE_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0060;
			}
		}

IL_0024:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92 L_7 = V_3;
			__this->___U3CU3Eu__1_4 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_mF416D3391731E64A781AFCDC8A6C64624A625A24(L_8, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92_TisU3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96_mF416D3391731E64A781AFCDC8A6C64624A625A24_RuntimeMethod_var);
			goto IL_00a5;
		}

IL_0044:
		{
			TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92 L_9 = __this->___U3CU3Eu__1_4;
			V_3 = L_9;
			TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92* L_10 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t665C5D28EB1D56850B9357FC3AD1DD171C694C92));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0060:
		{
			ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* L_12;
			L_12 = TaskAwaiter_1_GetResult_mC1F7731050BE09A87E9FBE0B3F6FD1FB902C6CC4((&V_3), TaskAwaiter_1_GetResult_mC1F7731050BE09A87E9FBE0B3F6FD1FB902C6CC4_RuntimeMethod_var);
			V_2 = L_12;
			// registry.RegisterServiceComponent<IProjectConfiguration>(projectConfig);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_13 = __this->___registry_3;
			ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* L_14 = V_2;
			NullCheck(L_13);
			CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m9D6C10E6BB5914734D353354D30C9A3411EFC475(L_13, L_14, CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_m9D6C10E6BB5914734D353354D30C9A3411EFC475_RuntimeMethod_var);
			// return projectConfig;
			ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* L_15 = V_2;
			V_1 = L_15;
			goto IL_0091;
		}
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
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mF578692F3D94D3981503A7C2313F1DC9E478C88C(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF578692F3D94D3981503A7C2313F1DC9E478C88C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a5;
	}// end catch (depth: 1)

IL_0091:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* L_18 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_19 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m9B116275B0D5587B404A6E6F90B319B1A5F6F429(L_18, L_19, AsyncTaskMethodBuilder_1_SetResult_m9B116275B0D5587B404A6E6F90B319B1A5F6F429_RuntimeMethod_var);
	}

IL_00a5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRegisterProjectConfigurationAsyncU3Ed__6_MoveNext_mE772D647270A7D083A7058CE8F9F2943AFB43DC5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96*>(__this + _offset);
	U3CRegisterProjectConfigurationAsyncU3Ed__6_MoveNext_mE772D647270A7D083A7058CE8F9F2943AFB43DC5(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterProjectConfigurationAsyncU3Ed__6_SetStateMachine_m4E0222637F2B00BF529A37C8565A235C3CE4136B (U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m85FB1CA743B1A3935C902F37A83B8D87FC307B34_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		AsyncTaskMethodBuilder_1_t4F26A311A8D2A2BE54BC148C4F8FD4C610D981AC* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m85FB1CA743B1A3935C902F37A83B8D87FC307B34(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m85FB1CA743B1A3935C902F37A83B8D87FC307B34_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRegisterProjectConfigurationAsyncU3Ed__6_SetStateMachine_m4E0222637F2B00BF529A37C8565A235C3CE4136B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRegisterProjectConfigurationAsyncU3Ed__6_t39597BC46B7ACE7DB6511D4021F07DCD0886FA96*>(__this + _offset);
	U3CRegisterProjectConfigurationAsyncU3Ed__6_SetStateMachine_m4E0222637F2B00BF529A37C8565A235C3CE4136B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__7_MoveNext_m6FE53E02799150B93AA2352B70CDC11CC08A0CCE (U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m26CFE03AA8E44DAB63C3547CBB5E8383B51E989E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA2124C7CD9A64992EF6036BCF594B8BF804FA1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE717AB7B8D8DC0D1E3879C9437CDA2F4FC67D104_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* V_1 = NULL;
	SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}

IL_0007:
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_003e;
			}
		}

IL_000a:
		{
			// var serializedConfig = await GetSerializedConfigOrEmptyAsync();
			Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* L_2;
			L_2 = CorePackageInitializer_GetSerializedConfigOrEmptyAsync_m681F4C98935252D52FEFC09C82C0BC4766205031(NULL);
			NullCheck(L_2);
			TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A L_3;
			L_3 = Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523(L_2, Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523_RuntimeMethod_var);
			V_3 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E((&V_3), TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_005a;
			}
		}

IL_001e:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->___U3CU3E1__state_0 = L_5;
			TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A L_6 = V_3;
			__this->___U3CU3Eu__1_3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* L_7 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m26CFE03AA8E44DAB63C3547CBB5E8383B51E989E(L_7, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8_m26CFE03AA8E44DAB63C3547CBB5E8383B51E989E_RuntimeMethod_var);
			goto IL_00b7;
		}

IL_003e:
		{
			TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A L_8 = __this->___U3CU3Eu__1_3;
			V_3 = L_8;
			TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* L_9 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
		}

IL_005a:
		{
			SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_11;
			L_11 = TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7((&V_3), TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7_RuntimeMethod_var);
			V_2 = L_11;
			// var configValues = new Dictionary<string, ConfigurationEntry>(serializedConfig.Keys.Length);
			SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_12 = V_2;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12.___Keys_0;
			NullCheck(L_13);
			Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0* L_14 = (Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0*)il2cpp_codegen_object_new(Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mE717AB7B8D8DC0D1E3879C9437CDA2F4FC67D104(L_14, ((int32_t)(((RuntimeArray*)L_13)->max_length)), /*hidden argument*/Dictionary_2__ctor_mE717AB7B8D8DC0D1E3879C9437CDA2F4FC67D104_RuntimeMethod_var);
			// configValues.FillWith(serializedConfig);
			Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0* L_15 = L_14;
			SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_16 = V_2;
			ConfigurationCollectionHelper_FillWith_m627F3227C7A6037052CDE99B5C21B4D09A413BF6(L_15, L_16, NULL);
			// configValues.FillWith(options);
			Dictionary_2_tADD69C3AF896A4FA9FB6FA98844E3E0E6AF9C7F0* L_17 = L_15;
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_18 = __this->___options_2;
			ConfigurationCollectionHelper_FillWith_mB6E69411468211EE0F3BA8286D597EA48661508E(L_17, L_18, NULL);
			// return new ProjectConfiguration(configValues);
			ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* L_19 = (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4*)il2cpp_codegen_object_new(ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4_il2cpp_TypeInfo_var);
			ProjectConfiguration__ctor_m3D6DED6203181E5190C9BA67E1F84EFD0F975945(L_19, L_17, /*hidden argument*/NULL);
			V_1 = L_19;
			goto IL_00a3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mED7C06670186E2C1006CD13B8D748204EC66B2AA(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mED7C06670186E2C1006CD13B8D748204EC66B2AA_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b7;
	}// end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* L_22 = (&__this->___U3CU3Et__builder_1);
		ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA2124C7CD9A64992EF6036BCF594B8BF804FA1A0(L_22, L_23, AsyncTaskMethodBuilder_1_SetResult_mA2124C7CD9A64992EF6036BCF594B8BF804FA1A0_RuntimeMethod_var);
	}

IL_00b7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGenerateProjectConfigurationAsyncU3Ed__7_MoveNext_m6FE53E02799150B93AA2352B70CDC11CC08A0CCE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8*>(__this + _offset);
	U3CGenerateProjectConfigurationAsyncU3Ed__7_MoveNext_m6FE53E02799150B93AA2352B70CDC11CC08A0CCE(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__7_SetStateMachine_mCCDAFAEC1D70009CF3CA6C35E4A230E182426391 (U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m776403B017A5282A2689DEB5AF3A189A742AC5B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		AsyncTaskMethodBuilder_1_tE84BC20B1216DBB266B170F6CB383FF7499EBF94* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m776403B017A5282A2689DEB5AF3A189A742AC5B4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m776403B017A5282A2689DEB5AF3A189A742AC5B4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGenerateProjectConfigurationAsyncU3Ed__7_SetStateMachine_mCCDAFAEC1D70009CF3CA6C35E4A230E182426391_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGenerateProjectConfigurationAsyncU3Ed__7_t67D472811512A170AF1D6151F5E3282D92AB07F8*>(__this + _offset);
	U3CGenerateProjectConfigurationAsyncU3Ed__7_SetStateMachine_mCCDAFAEC1D70009CF3CA6C35E4A230E182426391(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_MoveNext_mCBB7509F09C61C4358A4BE5B72F60264CF89BAE5 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3DB1182376B84D656222E222B5D8B012AE994771_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigurationLoader_tC5D49E531BA88F2FA7772F0EF305AF524FF0AEE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}

IL_0007:
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
		}

IL_000a:
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0046;
				}
			}

IL_000d:
			{
				// var config = await ConfigurationUtils.ConfigurationLoader.GetConfigAsync();
				il2cpp_codegen_runtime_class_init_inline(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var);
				RuntimeObject* L_3;
				L_3 = ConfigurationUtils_get_ConfigurationLoader_m28B28D711958F2CB7DCF65DE8D4AD85330608F02_inline(NULL);
				NullCheck(L_3);
				Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* L_4;
				L_4 = InterfaceFuncInvoker0< Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.IConfigurationLoader::GetConfigAsync() */, IConfigurationLoader_tC5D49E531BA88F2FA7772F0EF305AF524FF0AEE4_il2cpp_TypeInfo_var, L_3);
				NullCheck(L_4);
				TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A L_5;
				L_5 = Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523(L_4, Task_1_GetAwaiter_m011452806EE4691E1E32D535C8B469E633961523_RuntimeMethod_var);
				V_2 = L_5;
				bool L_6;
				L_6 = TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E((&V_2), TaskAwaiter_1_get_IsCompleted_mC14B9577DDC2A92191FD58263A699D44BA594A0E_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0062;
				}
			}

IL_0026:
			{
				int32_t L_7 = 0;
				V_0 = L_7;
				__this->___U3CU3E1__state_0 = L_7;
				TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A L_8 = V_2;
				__this->___U3CU3Eu__1_2 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_9 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3DB1182376B84D656222E222B5D8B012AE994771(L_9, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1_m3DB1182376B84D656222E222B5D8B012AE994771_RuntimeMethod_var);
				goto IL_00c2;
			}

IL_0046:
			{
				TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A L_10 = __this->___U3CU3Eu__1_2;
				V_2 = L_10;
				TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A* L_11 = (&__this->___U3CU3Eu__1_2);
				il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t56DAECD1E7CB4AE3E152A398CFBA07DD2AFC300A));
				int32_t L_12 = (-1);
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
			}

IL_0062:
			{
				SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_13;
				L_13 = TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7((&V_2), TaskAwaiter_1_GetResult_m972CF415D1FAB59DE596FD11CD28F0A62B40B7E7_RuntimeMethod_var);
				// return config;
				V_1 = L_13;
				goto IL_00ae;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_006c;
			}
			throw e;
		}

CATCH_006c:
		{// begin catch(System.Exception)
			// catch (Exception e)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// CoreLogger.LogError(
			//     "En error occured while trying to get the project configuration for services." +
			//     $"\n{e.Message}" +
			//     $"\n{e.StackTrace}");
			Exception_t* L_14 = V_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
			Exception_t* L_16 = V_3;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
			String_t* L_18;
			L_18 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72A108E053F65E47DD8EFDC2C7EB71B5E7879550)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_17, NULL);
			CoreLogger_LogError_m60BDFED5C2144A408C9641D048F9A7C5141B8195(L_18, NULL);
			// return SerializableProjectConfiguration.Empty;
			SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_19;
			L_19 = SerializableProjectConfiguration_get_Empty_m2D4B149E8E5B32B86A518F4C44EFCAB76D163E5F(NULL);
			V_1 = L_19;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ae;
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c2;
	}// end catch (depth: 1)

IL_00ae:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_22 = (&__this->___U3CU3Et__builder_1);
		SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF(L_22, L_23, AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_RuntimeMethod_var);
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_MoveNext_mCBB7509F09C61C4358A4BE5B72F60264CF89BAE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1*>(__this + _offset);
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_MoveNext_mCBB7509F09C61C4358A4BE5B72F60264CF89BAE5(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_SetStateMachine_m4E4AEED213885BEBD7E1828BAC3854FB83DC9622 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_SetStateMachine_m4E4AEED213885BEBD7E1828BAC3854FB83DC9622_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_t598A82FB41763D4B0EEF7328603A929CB4F792C1*>(__this + _offset);
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__8_SetStateMachine_m4E4AEED213885BEBD7E1828BAC3854FB83DC9622(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Environments_set_Current_mF2F9146800431DE9BBE5F95E94919DF01477BB84_inline (Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* __this, String_t* ___value0, const RuntimeMethod* method) 
{
{
		// public string Current { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_0), (void*)L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_m28B28D711958F2CB7DCF65DE8D4AD85330608F02_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static IConfigurationLoader ConfigurationLoader { get; internal set; }
		il2cpp_codegen_runtime_class_init_inline(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var))->___U3CConfigurationLoaderU3Ek__BackingField_4;
		return L_0;
	}
}
