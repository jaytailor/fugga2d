#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Core.Device.IUserIdentifierProvider
struct IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41;
// Unity.Services.Core.Device.InstallationId
struct InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873;
// Unity.Services.Core.Device.NSUserDefaults
struct NSUserDefaults_t518A0A24332EC9EC2361F2C04C06166E301FF25C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// Unity.Services.Core.Device.UnityAdsIdentifier
struct UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56;
// Unity.Services.Core.Device.UnityAnalyticsIdentifier
struct UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2;
IL2CPP_EXTERN_C String_t* _stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035;
IL2CPP_EXTERN_C String_t* _stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC6F3BE26E8DBB3B8108F8360B026950D37DAF754 
{
};
struct Il2CppArrayBounds;

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

// Unity.Services.Core.Device.NSUserDefaults
struct NSUserDefaults_t518A0A24332EC9EC2361F2C04C06166E301FF25C  : public RuntimeObject
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

// Unity.Services.Core.Device.UnityAdsIdentifier
struct UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56  : public RuntimeObject
{
};

// Unity.Services.Core.Device.UnityAnalyticsIdentifier
struct UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D  : public RuntimeObject
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8 (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Device.InstallationId::ReadIdentifierFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_ReadIdentifierFromFile_m374E779A35C429283A79F8C427060A3CDAA31031 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Device.InstallationId::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GenerateGuid_m92C31A4C4A025FAB00E80B9AD865D307DE1DF932 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.InstallationId::WriteIdentifierToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_WriteIdentifierToFile_mF2D6A7327A54991FF1E2912F792366AF6F83ECA3 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, String_t* ___identifier0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Device.NSUserDefaults::UserDefaultsGetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_UserDefaultsGetString_m2DF0E48D3E8D9A0C5DDA0C7CD65CE988E18A0DDC (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.NSUserDefaults::UserDefaultsSetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_UserDefaultsSetString_m3834D3016CF1AC2D0953893938B82EFA62761722 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_IdentifierForInstallIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_IdentifierForInstallIos_m49EF9BDC1EA876CADEF62BE44028E7CE46E79130 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_IdentifierForInstallIos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_IdentifierForInstallIos_m8673F44EA1346FEFF9F9847308EAE822394362EE (String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Device.NSUserDefaults::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_GetString_m5A31B26B2E3119D6040A6B69D2BD038A86ACAF83 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Device.NSUserDefaults::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_SetString_mE11ACCA65C5B0EAF4C673DAFB1F76C87EC8EE24D (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C char* DEFAULT_CALL UOCPUserDefaultsGetString(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UOCPUserDefaultsSetString(char*, char*);
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
// System.Void Unity.Services.Core.Device.InstallationId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId__ctor_mD8E8D5B7A72C54F2517D33F9F2C89FA708CC6BF7 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public InstallationId()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// unityAdsIdentifierProvider = new UnityAdsIdentifier();
		UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* L_0 = (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56*)il2cpp_codegen_object_new(UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var);
		UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8(L_0, /*hidden argument*/NULL);
		__this->___unityAdsIdentifierProvider_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unityAdsIdentifierProvider_2), (void*)L_0);
		// unityAnalyticsIdentifierProvider = new UnityAnalyticsIdentifier();
		UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* L_1 = (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D*)il2cpp_codegen_object_new(UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var);
		UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B(L_1, /*hidden argument*/NULL);
		__this->___unityAnalyticsIdentifierProvider_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unityAnalyticsIdentifierProvider_3), (void*)L_1);
		// }
		return;
	}
}
// System.String Unity.Services.Core.Device.InstallationId::GetOrCreateIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GetOrCreateIdentifier_mB808E735A25CB3357E33337F9A4B737DDAB6B40F (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
{
		// if (string.IsNullOrEmpty(identifier))
		String_t* L_0 = __this->___identifier_1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// CreateIdentifier();
		InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C(__this, NULL);
	}

IL_0013:
	{
		// return identifier;
		String_t* L_2 = __this->___identifier_1;
		return L_2;
	}
}
// System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// identifier = ReadIdentifierFromFile();
		String_t* L_0;
		L_0 = InstallationId_ReadIdentifierFromFile_m374E779A35C429283A79F8C427060A3CDAA31031(__this, NULL);
		__this->___identifier_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___identifier_1), (void*)L_0);
		// if (!string.IsNullOrEmpty(identifier))
		String_t* L_1 = __this->___identifier_1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// var analyticsId = unityAnalyticsIdentifierProvider.UserId;
		RuntimeObject* L_3 = __this->___unityAnalyticsIdentifierProvider_3;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.IUserIdentifierProvider::get_UserId() */, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		// var adsId = unityAdsIdentifierProvider.UserId;
		RuntimeObject* L_5 = __this->___unityAdsIdentifierProvider_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.IUserIdentifierProvider::get_UserId() */, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
		// if (!string.IsNullOrEmpty(analyticsId))
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		// identifier = analyticsId;
		String_t* L_9 = V_0;
		__this->___identifier_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___identifier_1), (void*)L_9);
		goto IL_0060;
	}

IL_0043:
	{
		// else if (!string.IsNullOrEmpty(adsId))
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_10, NULL);
		if (L_11)
		{
			goto IL_0054;
		}
	}
	{
		// identifier = adsId;
		String_t* L_12 = V_1;
		__this->___identifier_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___identifier_1), (void*)L_12);
		goto IL_0060;
	}

IL_0054:
	{
		// identifier = GenerateGuid();
		String_t* L_13;
		L_13 = InstallationId_GenerateGuid_m92C31A4C4A025FAB00E80B9AD865D307DE1DF932(__this, NULL);
		__this->___identifier_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___identifier_1), (void*)L_13);
	}

IL_0060:
	{
		// WriteIdentifierToFile(identifier);
		String_t* L_14 = __this->___identifier_1;
		InstallationId_WriteIdentifierToFile_mF2D6A7327A54991FF1E2912F792366AF6F83ECA3(__this, L_14, NULL);
		// if (string.IsNullOrEmpty(analyticsId))
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0085;
		}
	}
	{
		// unityAnalyticsIdentifierProvider.UserId = identifier;
		RuntimeObject* L_17 = __this->___unityAnalyticsIdentifierProvider_3;
		String_t* L_18 = __this->___identifier_1;
		NullCheck(L_17);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Core.Device.IUserIdentifierProvider::set_UserId(System.String) */, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_17, L_18);
	}

IL_0085:
	{
		// if (string.IsNullOrEmpty(adsId))
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_19, NULL);
		if (!L_20)
		{
			goto IL_009e;
		}
	}
	{
		// unityAdsIdentifierProvider.UserId = identifier;
		RuntimeObject* L_21 = __this->___unityAdsIdentifierProvider_2;
		String_t* L_22 = __this->___identifier_1;
		NullCheck(L_21);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Core.Device.IUserIdentifierProvider::set_UserId(System.String) */, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Core.Device.InstallationId::ReadIdentifierFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_ReadIdentifierFromFile_m374E779A35C429283A79F8C427060A3CDAA31031 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035);
		s_Il2CppMethodInitialized = true;
	}
{
		// return PlayerPrefs.GetString(k_UnityInstallationIdKey);
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Device.InstallationId::WriteIdentifierToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_WriteIdentifierToFile_mF2D6A7327A54991FF1E2912F792366AF6F83ECA3 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, String_t* ___identifier0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035);
		s_Il2CppMethodInitialized = true;
	}
{
		// PlayerPrefs.SetString(k_UnityInstallationIdKey, identifier);
		String_t* L_0 = ___identifier0;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035, L_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Core.Device.InstallationId::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GenerateGuid_m92C31A4C4A025FAB00E80B9AD865D307DE1DF932 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
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
// System.String Unity.Services.Core.Device.NSUserDefaults::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_GetString_m5A31B26B2E3119D6040A6B69D2BD038A86ACAF83 (String_t* ___key0, const RuntimeMethod* method) 
{
{
		// public static string GetString(string key) => UserDefaultsGetString(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = NSUserDefaults_UserDefaultsGetString_m2DF0E48D3E8D9A0C5DDA0C7CD65CE988E18A0DDC(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Core.Device.NSUserDefaults::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_SetString_mE11ACCA65C5B0EAF4C673DAFB1F76C87EC8EE24D (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
{
		// public static void SetString(string key, string value) => UserDefaultsSetString(key, value);
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		NSUserDefaults_UserDefaultsSetString_m3834D3016CF1AC2D0953893938B82EFA62761722(L_0, L_1, NULL);
		return;
	}
}
// System.String Unity.Services.Core.Device.NSUserDefaults::UserDefaultsGetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_UserDefaultsGetString_m2DF0E48D3E8D9A0C5DDA0C7CD65CE988E18A0DDC (String_t* ___key0, const RuntimeMethod* method) 
{
typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

// Marshaling of parameter '___key0' to native representation
char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UOCPUserDefaultsGetString)(____key0_marshaled);

// Marshaling of return value back from native representation
String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

// Marshaling cleanup of return value native representation
il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

// Marshaling cleanup of parameter '___key0' native representation
il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Unity.Services.Core.Device.NSUserDefaults::UserDefaultsSetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_UserDefaultsSetString_m3834D3016CF1AC2D0953893938B82EFA62761722 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

// Marshaling of parameter '___key0' to native representation
char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

// Marshaling of parameter '___value1' to native representation
char* ____value1_marshaled = NULL;
	____value1_marshaled = il2cpp_codegen_marshal_string(___value1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UOCPUserDefaultsSetString)(____key0_marshaled, ____value1_marshaled);

// Marshaling cleanup of parameter '___key0' native representation
il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

// Marshaling cleanup of parameter '___value1' native representation
il2cpp_codegen_marshal_free(____value1_marshaled);
	____value1_marshaled = NULL;

}
// System.Void Unity.Services.Core.Device.NSUserDefaults::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults__ctor_m1DB45F47466FA85D242CEB955560980B1EE87F15 (NSUserDefaults_t518A0A24332EC9EC2361F2C04C06166E301FF25C* __this, const RuntimeMethod* method) 
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
// System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_UserId_m4E41B6AEB6405B6BFA7D4E52FE3F66478A18D90A (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) 
{
{
		// return IdentifierForInstallIos;
		String_t* L_0;
		L_0 = UnityAdsIdentifier_get_IdentifierForInstallIos_m49EF9BDC1EA876CADEF62BE44028E7CE46E79130(NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_UserId_mA2519CC19694D24C35D6E2E72B79E2CE34DACA4F (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, String_t* ___value0, const RuntimeMethod* method) 
{
{
		// IdentifierForInstallIos = value;
		String_t* L_0 = ___value0;
		UnityAdsIdentifier_set_IdentifierForInstallIos_m8673F44EA1346FEFF9F9847308EAE822394362EE(L_0, NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_IdentifierForInstallIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_IdentifierForInstallIos_m49EF9BDC1EA876CADEF62BE44028E7CE46E79130 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5);
		s_Il2CppMethodInitialized = true;
	}
{
		// get => NSUserDefaults.GetString(k_IdfiKey);
		String_t* L_0;
		L_0 = NSUserDefaults_GetString_m5A31B26B2E3119D6040A6B69D2BD038A86ACAF83(_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_IdentifierForInstallIos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_IdentifierForInstallIos_m8673F44EA1346FEFF9F9847308EAE822394362EE (String_t* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5);
		s_Il2CppMethodInitialized = true;
	}
{
		// set => NSUserDefaults.SetString(k_IdfiKey, value);
		String_t* L_0 = ___value0;
		NSUserDefaults_SetString_mE11ACCA65C5B0EAF4C673DAFB1F76C87EC8EE24D(_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5, L_0, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8 (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) 
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
// System.String Unity.Services.Core.Device.UnityAnalyticsIdentifier::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAnalyticsIdentifier_get_UserId_m15964ABDB88E2D752C471143ED9C5A32017989CE (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2);
		s_Il2CppMethodInitialized = true;
	}
{
		// get => PlayerPrefs.GetString(k_PlayerUserIdKey);
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier_set_UserId_m2751FA3CB0A777DAC8AA56ECBE8945EED55CAC3C (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2);
		s_Il2CppMethodInitialized = true;
	}
il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	try
	{// begin try (depth: 1)
		// PlayerPrefs.SetString(k_PlayerUserIdKey, value);
		String_t* L_0 = ___value0;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, L_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// }
		goto IL_0015;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0015;
	}// end catch (depth: 1)

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
