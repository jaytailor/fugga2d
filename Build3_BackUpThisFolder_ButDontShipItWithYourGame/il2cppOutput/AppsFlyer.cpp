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

// System.Converter`2<AppsFlyerSDK.AppsFlyerAdRevenueType,System.Int32>
struct Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C;
// System.Converter`2<System.Int32Enum,System.Int32>
struct Converter_2_tC119E9F871676A40D4BCD18C684FC9F24994C49A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// AppsFlyerSDK.AppsFlyerAdRevenueType[]
struct AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// AFAdRevenueEvent
struct AFAdRevenueEvent_t2A0544BC503A5C83F5BA89D25C2682778960211B;
// AFInAppEvents
struct AFInAppEvents_tC5168E7ECBC9E205DB5A1634B0559A8856074130;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// AppsFlyerSDK.AppsFlyer
struct AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA;
// AppsFlyerSDK.AppsFlyerAdRevenue
struct AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37;
// AppsFlyerSDK.AppsFlyerAndroid
struct AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4;
// AppsFlyerObjectScript
struct AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED;
// AppsFlyerSDK.AppsFlyerRequestEventArgs
struct AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71;
// AppsFlyerSDK.DeepLinkEventsArgs
struct DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AppsFlyerSDK.AppsFlyerAdRevenue/<>c
struct U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834;
// AFMiniJSON.Json/Parser
struct Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F;
// AFMiniJSON.Json/Serializer
struct Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02E144D0DB3ED32BAD9132BAD38278E7E1F94CF6;
IL2CPP_EXTERN_C String_t* _stringLiteral040BC968D13C27DDE7EDD7C41E01CC04BCB1E424;
IL2CPP_EXTERN_C String_t* _stringLiteral05A9361873F8DF19119260FBA14633082BF234ED;
IL2CPP_EXTERN_C String_t* _stringLiteral05CC334A1D5B52C140EA7E7E8C38E6987CF9AFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral07232168B08FAFB9EEFDEE7B0ECB21C9C0464670;
IL2CPP_EXTERN_C String_t* _stringLiteral0899C0CC6437FDB854B1FD864B75D539CED816E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1300E98B4A07E137D38D108CC70CCD80E1159D31;
IL2CPP_EXTERN_C String_t* _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
IL2CPP_EXTERN_C String_t* _stringLiteral18FFE0A95B599D7BBDCCF1565B4C1B250799CF43;
IL2CPP_EXTERN_C String_t* _stringLiteral1AB25F8F9A918211E403469C2C851819036CD0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral1BE966B394D2DCC26589F616D3CDD4614BC8A367;
IL2CPP_EXTERN_C String_t* _stringLiteral1CDAF50098C5C8647B302AF7AF4C17AD062496E6;
IL2CPP_EXTERN_C String_t* _stringLiteral1D80F5B168A09D9B0655AFB6F216B3A630520C9D;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9F40059822C86B8AEF125F7D1AC7639E4825B2;
IL2CPP_EXTERN_C String_t* _stringLiteral2095A4A05C95774A092312D4FB8B42EE93FF3DAC;
IL2CPP_EXTERN_C String_t* _stringLiteral2099A07A9756CE763F45096ED122941A5502F4A2;
IL2CPP_EXTERN_C String_t* _stringLiteral2195737597038930129AAB41E250EB47C49171B1;
IL2CPP_EXTERN_C String_t* _stringLiteral2339F28E8BA6A6AABFB30A14CC4FD89DCC6DA2BB;
IL2CPP_EXTERN_C String_t* _stringLiteral23C46B975D5704BA005EB63970310B3E22538994;
IL2CPP_EXTERN_C String_t* _stringLiteral23E39D5D880B50D49547323043FBE1EEEEC28913;
IL2CPP_EXTERN_C String_t* _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C;
IL2CPP_EXTERN_C String_t* _stringLiteral28F69B1250EDC34ABBA2F702081D3EDBCD393A9F;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2B5A08040822A9A5BF7079E79513108DDA959E44;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2A76D4105D5F7EC31FB47296BCB16C15EA1D1E;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2F13DB47076BB6959BB34D94AC259D426BCDF4;
IL2CPP_EXTERN_C String_t* _stringLiteral41AC34D8DBAF5CBA43F03167FBED01262D39AFDA;
IL2CPP_EXTERN_C String_t* _stringLiteral41BAF1C183A1066A16559AFAB0507F5743FF6DEB;
IL2CPP_EXTERN_C String_t* _stringLiteral441C41FF6E93EA9C63774CA4F33832FA34B8B88D;
IL2CPP_EXTERN_C String_t* _stringLiteral47CA7AF3AA31AB5DEDA911EBB9D31F1B1101A251;
IL2CPP_EXTERN_C String_t* _stringLiteral49C83A6CB9E3D16269215815C5C23B6418F0F260;
IL2CPP_EXTERN_C String_t* _stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34;
IL2CPP_EXTERN_C String_t* _stringLiteral4D491D6C3C9342A8E0A1580F17094732F0EDC3FE;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4F947CE6F90CAAF1930C6E71DF2D95DC8E236CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral4FBCC5FD07D69F0DD3F15FD6B2E8C56BF9AB706A;
IL2CPP_EXTERN_C String_t* _stringLiteral537DCE44ECD89031F1AAD55D87498A64090B02EF;
IL2CPP_EXTERN_C String_t* _stringLiteral5674B818A84C598AD302905844F0F57B3E85B1FC;
IL2CPP_EXTERN_C String_t* _stringLiteral57B0C096BC76C2A14272B0CA02FB1542B7A062D4;
IL2CPP_EXTERN_C String_t* _stringLiteral58F56EF1C778163989CC86F225EC53D6F42EAF38;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C334DF8E3B019BAFD6F999810AC74BBD61701E0;
IL2CPP_EXTERN_C String_t* _stringLiteral626BD6414D5625772020727C7E3A76743A1C7353;
IL2CPP_EXTERN_C String_t* _stringLiteral63D91CC901D762D092AA3C0272FAD67B12955456;
IL2CPP_EXTERN_C String_t* _stringLiteral67657C4F1B8F10CE28FE667A9FC97B18921F70FC;
IL2CPP_EXTERN_C String_t* _stringLiteral68D4CB98723592275118ADD8147AD8B23271D821;
IL2CPP_EXTERN_C String_t* _stringLiteral68F0F963C02E4993D85C3AC03FBBD8380C05D1CB;
IL2CPP_EXTERN_C String_t* _stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F;
IL2CPP_EXTERN_C String_t* _stringLiteral6EBABF2AFA57499234547483D4C9347AA07DAE90;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDD3065EFD13B1C8856E99397C76A8490518392;
IL2CPP_EXTERN_C String_t* _stringLiteral757ED47D942E9A6A71748FEC5AAF9230FDDC2F97;
IL2CPP_EXTERN_C String_t* _stringLiteral764101B7160DBC377EBAF6B41B91DE5F7CDEEBE5;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7B9ECB1352368E293763D7833EE64283ACD370DD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral832B94CF33F6E5DED6AE43E3E65AB4CC7FFEF547;
IL2CPP_EXTERN_C String_t* _stringLiteral83D0D9BD8D49B321C723B024A8387FA243347596;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84BADEC5B05C73D2CCE6340D05EC49EA323FA28A;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral8A34F8DA3692071AC220CF18A87B33AAFF37CAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral8F022F1FD861D8F0D797833011CEACA8B68D6278;
IL2CPP_EXTERN_C String_t* _stringLiteral9374A095C984B79D0B67F2A2F61445D48F4110EE;
IL2CPP_EXTERN_C String_t* _stringLiteral9BAD3ACBCCBECBC692D1B13C58A5A57DA672F3FB;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0FAF3658B65273D1DC74F0E2AE442991EFD881;
IL2CPP_EXTERN_C String_t* _stringLiteral9D2C5BAAC864FF8EAB5A482091D545B7C900BEB0;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralAA98211A2DEFD406081AFEFA11109DE2B8B8FCBB;
IL2CPP_EXTERN_C String_t* _stringLiteralAD476ACE1A706D5850371865BFAD794B13476417;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C860BBF9F457108B4C299B899A9E1F495883E2;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B612FAFB5026ABFF93AFC18FDF41ED875A4A8D;
IL2CPP_EXTERN_C String_t* _stringLiteralBB04809CAEA4C98545BADDEEAF210B3BC2E683DD;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFECBD00DD90A3EB3AAD067FAFE35456CDA5EAD;
IL2CPP_EXTERN_C String_t* _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D;
IL2CPP_EXTERN_C String_t* _stringLiteralC8BD247A0DBD876062405ABFAFDFD135A1C478B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C2FCBAE0759C7ECF1390B1C66A2118E4DC2CDE;
IL2CPP_EXTERN_C String_t* _stringLiteralCD75758D19772B49DD8F613B685E0426D4C44121;
IL2CPP_EXTERN_C String_t* _stringLiteralCD826D30DAEB7EFC5FD945C16FB01FDD091BDF97;
IL2CPP_EXTERN_C String_t* _stringLiteralCE900A4791E737247188C56C6458FDB92AA0BCF7;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E3E9ED6772FFC4AF4A9FC864ACF22E5BB03F0C;
IL2CPP_EXTERN_C String_t* _stringLiteralD218455EF3FDCD4B6E5440AB419563C0D63A72B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD3269A41F619751C67FA42687D061C73E9A23E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD3383C8D690C3E5266179C6A2643D5D417456266;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C457E89DFBA2FF6ECA7FF5FBCA406118FA6CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D4A417BC8782670DB0E78C3CA7E5FE5291906B;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108;
IL2CPP_EXTERN_C String_t* _stringLiteralD8636892B786717541D27BD8F6B3B38B131E539B;
IL2CPP_EXTERN_C String_t* _stringLiteralD889B5F2870505224E30F45489ECB82516E08836;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1E252AEA8044CB211618D6ECB68836A28617FD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C8189151B7A51FA43327E4A664875AD8C28423;
IL2CPP_EXTERN_C String_t* _stringLiteralE1D2E849A7438175301D35D30C70D6D3C9502439;
IL2CPP_EXTERN_C String_t* _stringLiteralE5D71F79DA96521ED83530862D257C360270B3EA;
IL2CPP_EXTERN_C String_t* _stringLiteralE5E15B10AF7E0EA254F79B209F62465D2DB0E0F3;
IL2CPP_EXTERN_C String_t* _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralE7F5EABEF5669401003B3212A08B06B9A56CC7B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE86CDACEACDE5A2556F299FA4A3A694C0A3A9BA2;
IL2CPP_EXTERN_C String_t* _stringLiteralED44C067587F61201D81330CFBEC29A1A3FBBB05;
IL2CPP_EXTERN_C String_t* _stringLiteralEEA99AB89293A7EAB131A3DCE363E35F63E97A7E;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF7F62D97350D089C5494B6087685A72FAC799013;
IL2CPP_EXTERN_C String_t* _stringLiteralF8054C257AD61C38E40DF4BBA5D3D3DDB4875755;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C String_t* _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisAppsFlyerAdRevenueType_tADD9D565C35366CD842C32B7A23FF78C8FA91AA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8723196DE02C37C62369024E98A4926D59483C69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Converter_2__ctor_m9232D8CE8E4A9D71E3B5D10F3BA9E1D648D7BDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CconvertEnumArrToInArrU3Eb__7_0_mE5DAB7B8743F5F24535C718FDA921796F7F20CCB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4E3336F4CE99732472A3EA697D7A50BA03664F79 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
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

// AFAdRevenueEvent
struct AFAdRevenueEvent_t2A0544BC503A5C83F5BA89D25C2682778960211B  : public RuntimeObject
{
};

// AFInAppEvents
struct AFInAppEvents_tC5168E7ECBC9E205DB5A1634B0559A8856074130  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// AppsFlyerSDK.AppsFlyerAndroid
struct AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4  : public RuntimeObject
{
};

struct AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields
{
	// UnityEngine.AndroidJavaClass AppsFlyerSDK.AppsFlyerAndroid::appsFlyerAndroid
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___appsFlyerAndroid_0;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// AFMiniJSON.Json
struct Json_t95FC359AE8263F82D56355BF6743A362E9096EDF  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// AppsFlyerSDK.AppsFlyerAdRevenue/<>c
struct U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834  : public RuntimeObject
{
};

struct U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_StaticFields
{
	// AppsFlyerSDK.AppsFlyerAdRevenue/<>c AppsFlyerSDK.AppsFlyerAdRevenue/<>c::<>9
	U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834* ___U3CU3E9_0;
	// System.Converter`2<AppsFlyerSDK.AppsFlyerAdRevenueType,System.Int32> AppsFlyerSDK.AppsFlyerAdRevenue/<>c::<>9__7_0
	Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* ___U3CU3E9__7_0_1;
};

// AFMiniJSON.Json/Parser
struct Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F  : public RuntimeObject
{
	// System.IO.StringReader AFMiniJSON.Json/Parser::json
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* ___json_1;
};

// AFMiniJSON.Json/Serializer
struct Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959  : public RuntimeObject
{
	// System.Text.StringBuilder AFMiniJSON.Json/Serializer::builder
	StringBuilder_t* ___builder_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// AppsFlyerSDK.AppsFlyerRequestEventArgs
struct AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Int32 AppsFlyerSDK.AppsFlyerRequestEventArgs::<statusCode>k__BackingField
	int32_t ___U3CstatusCodeU3Ek__BackingField_1;
	// System.String AppsFlyerSDK.AppsFlyerRequestEventArgs::<errorDescription>k__BackingField
	String_t* ___U3CerrorDescriptionU3Ek__BackingField_2;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_6_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_6_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_7_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_7_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_8_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_8_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_9_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_9_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_9_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_0;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_2;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_3;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_4;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// AppsFlyerSDK.AppsFlyerAdRevenueMediationNetworkType
struct AppsFlyerAdRevenueMediationNetworkType_t9C2D0BD5F1F006EB70F1798A48E5E4B1E3592BB1 
{
	// System.Int32 AppsFlyerSDK.AppsFlyerAdRevenueMediationNetworkType::value__
	int32_t ___value___2;
};

// AppsFlyerSDK.AppsFlyerAdRevenueType
struct AppsFlyerAdRevenueType_tADD9D565C35366CD842C32B7A23FF78C8FA91AA3 
{
	// System.Int32 AppsFlyerSDK.AppsFlyerAdRevenueType::value__
	int32_t ___value___2;
};

// AppsFlyerSDK.DeepLinkError
struct DeepLinkError_tB2521D6CCA1878CA0DB1EB72BD0AE4221FAB6DB9 
{
	// System.Int32 AppsFlyerSDK.DeepLinkError::value__
	int32_t ___value___2;
};

// AppsFlyerSDK.DeepLinkStatus
struct DeepLinkStatus_tF8D154EA1E134BFB1F209A0F85F7D645FF123A13 
{
	// System.Int32 AppsFlyerSDK.DeepLinkStatus::value__
	int32_t ___value___2;
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

// AppsFlyerSDK.EmailCryptType
struct EmailCryptType_t024E24F03FA3B22C33D2E9A384F153FEEA876E78 
{
	// System.Int32 AppsFlyerSDK.EmailCryptType::value__
	int32_t ___value___2;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// AFMiniJSON.Json/Parser/TOKEN
struct TOKEN_tBDA97FA710605EFFB020E9D0642FF2FCB61D89C2 
{
	// System.Int32 AFMiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// AppsFlyerSDK.DeepLinkEventsArgs
struct DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> AppsFlyerSDK.DeepLinkEventsArgs::deepLink
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___deepLink_1;
	// AppsFlyerSDK.DeepLinkStatus AppsFlyerSDK.DeepLinkEventsArgs::<status>k__BackingField
	int32_t ___U3CstatusU3Ek__BackingField_2;
	// AppsFlyerSDK.DeepLinkError AppsFlyerSDK.DeepLinkEventsArgs::<error>k__BackingField
	int32_t ___U3CerrorU3Ek__BackingField_3;
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

// System.Converter`2<AppsFlyerSDK.AppsFlyerAdRevenueType,System.Int32>
struct Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AppsFlyerSDK.AppsFlyer
struct AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields
{
	// System.String AppsFlyerSDK.AppsFlyer::kAppsFlyerPluginVersion
	String_t* ___kAppsFlyerPluginVersion_4;
	// System.String AppsFlyerSDK.AppsFlyer::CallBackObjectName
	String_t* ___CallBackObjectName_5;
	// System.EventHandler AppsFlyerSDK.AppsFlyer::onRequestResponse
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___onRequestResponse_6;
	// System.EventHandler AppsFlyerSDK.AppsFlyer::onInAppResponse
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___onInAppResponse_7;
	// System.EventHandler AppsFlyerSDK.AppsFlyer::onDeepLinkReceived
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___onDeepLinkReceived_8;
};

// AppsFlyerSDK.AppsFlyerAdRevenue
struct AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_StaticFields
{
	// System.String AppsFlyerSDK.AppsFlyerAdRevenue::kAppsFlyerAdRevenueVersion
	String_t* ___kAppsFlyerAdRevenueVersion_4;
	// UnityEngine.AndroidJavaClass AppsFlyerSDK.AppsFlyerAdRevenue::appsFlyerAndroid
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___appsFlyerAndroid_5;
};

// AppsFlyerObjectScript
struct AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AppsFlyerObjectScript::devKey
	String_t* ___devKey_4;
	// System.String AppsFlyerObjectScript::appID
	String_t* ___appID_5;
	// System.String AppsFlyerObjectScript::UWPAppID
	String_t* ___UWPAppID_6;
	// System.Boolean AppsFlyerObjectScript::isDebug
	bool ___isDebug_7;
	// System.Boolean AppsFlyerObjectScript::getConversionData
	bool ___getConversionData_8;
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
// AppsFlyerSDK.AppsFlyerAdRevenueType[]
struct AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772  : public RuntimeArray
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
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Converter`2<System.Int32Enum,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_mB0E549E6389170FA3FBAADEDE0C466000A9CA966_gshared (Converter_2_tC119E9F871676A40D4BCD18C684FC9F24994C49A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TOutput[] System.Array::ConvertAll<System.Int32Enum,System.Int32>(TInput[],System.Converter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_ConvertAll_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36348F98803CA64257C6A9337A822FF834D0A505_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___array0, Converter_2_tC119E9F871676A40D4BCD18C684FC9F24994C49A* ___converter1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyer::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setIsDebug_mBEC0E2F4B5721ED93CE47F0FDC05FE5B146A54C0 (bool ___shouldEnable0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyer::initSDK(System.String,System.String,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_initSDK_mABB66C46656C144511CCEAB4ABA3238FDDF21275 (String_t* ___devKey0, String_t* ___appID1, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject2, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyer::startSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_startSDK_m6D902426A6A582E610A1F56B02403A2338BE42BB (const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyer::AFLog(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424 (String_t* ___methodName0, String_t* ___str1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AppsFlyerSDK.AppsFlyer::CallbackStringToDictionary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AppsFlyer_CallbackStringToDictionary_m63FF39CD79E350D62B885B1270ED172B72896849 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::initSDK(System.String,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_initSDK_mA2CC70CAB742D69FB33BC54DCF005D698533C2DD (String_t* ___devkey0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject1, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::startSDK(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_startSDK_m9EA569B6A530275E2D8103E96FD46FE39F091C28 (bool ___shouldCallback0, String_t* ___callBackObjectName1, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_sendEvent_m2AFC0888C6B1D352B7E0F60DAF41CF0CE96FA183 (String_t* ___eventName0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___eventValues1, bool ___shouldCallback2, String_t* ___callBackObjectName3, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::stopSDK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_stopSDK_m1D7E3B458E7784A41DBC57A23EFEB791035BB437 (bool ___isSDKStopped0, const RuntimeMethod* method) ;
// System.Boolean AppsFlyerSDK.AppsFlyerAndroid::isSDKStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyerAndroid_isSDKStopped_m35BB922FC1706825DCB6D2DAE92F32AEEAC3F349 (const RuntimeMethod* method) ;
// System.String AppsFlyerSDK.AppsFlyerAndroid::getSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getSdkVersion_m63C55A79F2D57CFEEC21F3B4A8446DC3F1B9B18B (const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setIsDebug_mA4223CDF1F1345415F8C6A72E22023EB2571E196 (bool ___shouldEnable0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCustomerUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCustomerUserId_mA941004396ECF79C48E9D1AEC98100FAD5CAC417 (String_t* ___id0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setAppInviteOneLinkID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setAppInviteOneLinkID_mFFC2785D19D1FEE4632BFB6BB5CB2542AC377E7A (String_t* ___oneLinkId0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setAdditionalData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setAdditionalData_m35FA8B464A3C539AD0174282CD80ED46577AE8D0 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setResolveDeepLinkURLs(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setResolveDeepLinkURLs_m88E6CC1991969B5BE228581DA7A1F7F919B8F4F7 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___urls0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setOneLinkCustomDomain(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setOneLinkCustomDomain_m898EEF3E881346A5237C6AD44E7101564D442875 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___domains0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCurrencyCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCurrencyCode_mB308982A8E0DBD64FF3087CC41063D9D60ABF874 (String_t* ___currencyCode0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::recordLocation(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_recordLocation_mE2E92F84D3D20C8C14D90BD2192EA3AB72983421 (double ___latitude0, double ___longitude1, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::anonymizeUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_anonymizeUser_mDEEEA4BA02E9F91E73054077D2AE0198C4C32D61 (bool ___isDisabled0, const RuntimeMethod* method) ;
// System.String AppsFlyerSDK.AppsFlyerAndroid::getAppsFlyerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getAppsFlyerId_mAEC123095A58B7A3545DA5166EF77318352D4EF4 (const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setMinTimeBetweenSessions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setMinTimeBetweenSessions_m989C7BC9CC74FAC73E0A7A10DF6FD10DD437CC72 (int32_t ___seconds0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setHost(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setHost_m7F3C3A669DA9D35073F4553E5D2A6BFEB95697CA (String_t* ___hostPrefixName0, String_t* ___hostName1, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setUserEmails(AppsFlyerSDK.EmailCryptType,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setUserEmails_m9009BFCD0A07830D165B30D5E3F18E50E93080FA (int32_t ___cryptMethod0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___emails1, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setPhoneNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setPhoneNumber_m2ED12BD92240946CC2A8DADE635CEB5239852544 (String_t* ___phoneNumber0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilterForAllPartners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilterForAllPartners_m1084B9CC288C232304BA455FF7497D1C5DDA8E53 (const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilter(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilter_mC49BEB59CD0C2AC546B9EA191F3D5302C262FEC6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___partners0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilterForPartners(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilterForPartners_m7374390F536C4FC21CDCB9C6905AE66DC735A246 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___partners0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::getConversionData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_getConversionData_m64722794716049730FBED33C6F6BCFA0DAD29070 (String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::attributeAndOpenStore(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_attributeAndOpenStore_m1516FFF42AE4E1A275D633A707B877868A177F43 (String_t* ___promoted_app_id0, String_t* ___campaign1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userParams2, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::recordCrossPromoteImpression(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_recordCrossPromoteImpression_m56A676DAB7325E9DB40D35A954CE5CB0F0CB3301 (String_t* ___appID0, String_t* ___campaign1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameters2, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::generateUserInviteLink(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_generateUserInviteLink_mD2CFFB25EB6ACE2314EBA86B1E7DDD9205E1DE1D (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameters0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject1, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::addPushNotificationDeepLinkPath(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_addPushNotificationDeepLinkPath_mDC399E40BE69A6ABEA3249B9B77A7DA3AD760072 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerAndroid::subscribeForDeepLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_subscribeForDeepLink_m63DFD49BA2B881EBB986DEC3B73CC4E8B6528105 (String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyer::subscribeForDeepLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_subscribeForDeepLink_mF0BA47F27BBD235459BA2F4B224E7C562AF90D92 (const RuntimeMethod* method) ;
// AppsFlyerSDK.AppsFlyerRequestEventArgs AppsFlyerSDK.AppsFlyer::parseRequestCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* AppsFlyer_parseRequestCallback_m42C2E010F1BDFB161D05A40F8122AEAE045D8253 (String_t* ___response0, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.DeepLinkEventsArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeepLinkEventsArgs__ctor_m182F51EE29A2B3759EEBF05C219B3697F862108A (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void AppsFlyerSDK.AppsFlyerRequestEventArgs::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerRequestEventArgs__ctor_m212EC7FC592599B5AB02B5B8C36DDD1F90C9448D (AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* __this, int32_t ___code0, String_t* ___description1, const RuntimeMethod* method) ;
// System.Object AFMiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_mB75FCC320D711CDF10DFFE4B709B8EDF0F5D00BA (String_t* ___json0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int32[] AppsFlyerSDK.AppsFlyerAdRevenue::convertEnumArrToInArr(AppsFlyerSDK.AppsFlyerAdRevenueType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AppsFlyerAdRevenue_convertEnumArrToInArr_m937EA2BE35EE5C9E7B31C75049D6265E1B4C2FD9 (AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* ___adRevenueType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 AppsFlyerSDK.AppsFlyerAdRevenue::setMediationNetworkTypeAndroid(AppsFlyerSDK.AppsFlyerAdRevenueMediationNetworkType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppsFlyerAdRevenue_setMediationNetworkTypeAndroid_mE59715C12D42BECADCBBFE53E4EAD5C126AD4103 (int32_t ___mediationNetwork0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAdRevenue::convertDictionaryToJavaMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AppsFlyerAdRevenue_convertDictionaryToJavaMap_m16801FF9D49E7F2DBE115A93944961F2AA5D54F2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m8C726C02456CFB02AD38F596D8F67151776D8750 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Converter`2<AppsFlyerSDK.AppsFlyerAdRevenueType,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m9232D8CE8E4A9D71E3B5D10F3BA9E1D648D7BDA2 (Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Converter_2__ctor_mB0E549E6389170FA3FBAADEDE0C466000A9CA966_gshared)(__this, ___object0, ___method1, method);
}
// TOutput[] System.Array::ConvertAll<AppsFlyerSDK.AppsFlyerAdRevenueType,System.Int32>(TInput[],System.Converter`2<TInput,TOutput>)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_ConvertAll_TisAppsFlyerAdRevenueType_tADD9D565C35366CD842C32B7A23FF78C8FA91AA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8723196DE02C37C62369024E98A4926D59483C69 (AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* ___array0, Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* ___converter1, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772*, Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C*, const RuntimeMethod*))Array_ConvertAll_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m36348F98803CA64257C6A9337A822FF834D0A505_gshared)(___array0, ___converter1, method);
}
// System.Void AppsFlyerSDK.AppsFlyerAdRevenue/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m52573D16955421FDAB2AA321B35961A7FD58BAF9 (U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAndroid::convertDictionaryToJavaMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AppsFlyerAndroid_convertDictionaryToJavaMap_mCDC5BEB9E38B2F2F567DFCA742677B91C4B43EEE (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAndroid::getEmailType(AppsFlyerSDK.EmailCryptType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AppsFlyerAndroid_getEmailType_mB8872A72DCDC0DF9B8C272C7A15F1C9F7BFAFDB5 (int32_t ___cryptType0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getDeepLinkParameter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Object AFMiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_mB5036A8D5086CCF449268FC292A71619810D85F3 (String_t* ___jsonString0, const RuntimeMethod* method) ;
// System.String AFMiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mB18A315243FCCE5034DCE9AAEDA53F7C2DFDDE01 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void AFMiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m56B10C50B6D9F48CAFAB72BA667C8AA1E11377B9 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, String_t* ___jsonString0, const RuntimeMethod* method) ;
// System.Object AFMiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m23B85C4C14D6FE6D0B8F7B3D0F10B67102B7F673 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// AFMiniJSON.Json/Parser/TOKEN AFMiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m65E3B8E7D54BE7D879C9BDCEA2ABB5953CFA852D (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.String AFMiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mC92613C6A09DBD95F6A059D0055918E4AD8A695E (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Object AFMiniJSON.Json/Parser::ParseByToken(AFMiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m908166E6984A423F8374C1EA3446C7B9AEA05677 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, int32_t ___token0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Object AFMiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mD06DAE3C91E5FB9130CA7BC22A53CCFFB10B5FDD (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AFMiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mB538E98157B0DC91D9236F52698C9A8D72EF8BD2 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> AFMiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_mC865BB331F658D39F3BA1060FBC1881965BC6965 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char AFMiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mC534434FA2E91119C94CACB241C4D392DF596425 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8881C26C9DC63CBE2186F7180F780706A10283F6 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method) ;
// System.String AFMiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m10EF311F70BAF124E8E9DF77A0853A3FBD798A98 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Char AFMiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m96A0B58CB41F42E87A0F63521E61D8B5CFF252E9 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean AFMiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mF25DAD3C6E59E7ADA31F5797D1C548945BA47D35 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void AFMiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mBC7858F9DD5A6D743DADB68F984C2CDCF397D0BA (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) ;
// System.Void AFMiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mB71885CA29F8B81508F275556118B8B72FECC53F (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, const RuntimeMethod* method) ;
// System.Void AFMiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m5DE05AC50133B752074F4AD3C42E825B56C32AD1 (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void AFMiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m85855B68E2A27784B9D278AC517B85D0BBD78CD2 (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void AFMiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m66C05B7AC0BF86EF80E388E49CD15DD3D6AAB57F (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) ;
// System.Void AFMiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m9E9C46B49DC0D43D4FD12D918F2EE3BDA23114D2 (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void AFMiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m9E450080BC2F547A253B737BFBC89B7412A475FC (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m7B23BC2572EEB2B03EDAA26D2D9232C4A00DA00C (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___format0, const RuntimeMethod* method) ;
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
// System.Void AFAdRevenueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AFAdRevenueEvent__ctor_m1433EAC732782BD2E6C7E6B5A5FCDCE84D1E8225 (AFAdRevenueEvent_t2A0544BC503A5C83F5BA89D25C2682778960211B* __this, const RuntimeMethod* method) 
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
// System.Void AFInAppEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AFInAppEvents__ctor_mD9B146D3D8EFE7872FFC2815C839F61272270D27 (AFInAppEvents_tC5168E7ECBC9E205DB5A1634B0559A8856074130* __this, const RuntimeMethod* method) 
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
// System.Void AppsFlyerObjectScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_Start_m67CB12881D29597A69886AB73D3073FB9ED42E8C (AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// AppsFlyer.setIsDebug(isDebug);
		bool L_0 = __this->___isDebug_7;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		AppsFlyer_setIsDebug_mBEC0E2F4B5721ED93CE47F0FDC05FE5B146A54C0(L_0, NULL);
		// AppsFlyer.initSDK(devKey, appID, getConversionData ? this : null);
		String_t* L_1 = __this->___devKey_4;
		String_t* L_2 = __this->___appID_5;
		bool L_3 = __this->___getConversionData_8;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = __this;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		AppsFlyer_initSDK_mABB66C46656C144511CCEAB4ABA3238FDDF21275(G_B3_2, G_B3_1, G_B3_0, NULL);
		// AppsFlyer.startSDK();
		AppsFlyer_startSDK_m6D902426A6A582E610A1F56B02403A2338BE42BB(NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_Update_mD9CE6F2E2812EECB18533CE471FF8D51CC53B57F (AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED* __this, const RuntimeMethod* method) 
{
{
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::onConversionDataSuccess(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_onConversionDataSuccess_m7A4EA50C6AE73D42F46B658E6303A3A44272ACC6 (AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED* __this, String_t* ___conversionData0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D2C5BAAC864FF8EAB5A482091D545B7C900BEB0);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyer.AFLog("didReceiveConversionData", conversionData);
		String_t* L_0 = ___conversionData0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424(_stringLiteral9D2C5BAAC864FF8EAB5A482091D545B7C900BEB0, L_0, NULL);
		// Dictionary<string, object> conversionDataDictionary = AppsFlyer.CallbackStringToDictionary(conversionData);
		String_t* L_1 = ___conversionData0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2;
		L_2 = AppsFlyer_CallbackStringToDictionary_m63FF39CD79E350D62B885B1270ED172B72896849(L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::onConversionDataFail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_onConversionDataFail_mFA9031C2A8C13B00C789DC4210B5E8325FB53325 (AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED* __this, String_t* ___error0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2195737597038930129AAB41E250EB47C49171B1);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyer.AFLog("didReceiveConversionDataWithError", error);
		String_t* L_0 = ___error0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424(_stringLiteral2195737597038930129AAB41E250EB47C49171B1, L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::onAppOpenAttribution(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_onAppOpenAttribution_m08C556CD50CA416A51D57D1549A5A59FD5FAD47A (AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED* __this, String_t* ___attributionData0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C8189151B7A51FA43327E4A664875AD8C28423);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyer.AFLog("onAppOpenAttribution", attributionData);
		String_t* L_0 = ___attributionData0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424(_stringLiteralE0C8189151B7A51FA43327E4A664875AD8C28423, L_0, NULL);
		// Dictionary<string, object> attributionDataDictionary = AppsFlyer.CallbackStringToDictionary(attributionData);
		String_t* L_1 = ___attributionData0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2;
		L_2 = AppsFlyer_CallbackStringToDictionary_m63FF39CD79E350D62B885B1270ED172B72896849(L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::onAppOpenAttributionFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_onAppOpenAttributionFailure_m89F9CE01DF7FC8871D0DB74923BA7A760A93EDD4 (AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED* __this, String_t* ___error0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C2FCBAE0759C7ECF1390B1C66A2118E4DC2CDE);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyer.AFLog("onAppOpenAttributionFailure", error);
		String_t* L_0 = ___error0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424(_stringLiteralC8C2FCBAE0759C7ECF1390B1C66A2118E4DC2CDE, L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript__ctor_m53D6A7418D9EEC7ABE987B99780A58BC2DE48F21 (AppsFlyerObjectScript_tFE8FBD7E1BA19D42C1C6DEC1AB30B7D79FFE2AED* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AppsFlyerSDK.AppsFlyer::initSDK(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_initSDK_m0404C3E90C0110EDD36EA9C65049881F7CB39008 (String_t* ___devKey0, String_t* ___appID1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// initSDK(devKey, appID, null);
		String_t* L_0 = ___devKey0;
		String_t* L_1 = ___appID1;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		AppsFlyer_initSDK_mABB66C46656C144511CCEAB4ABA3238FDDF21275(L_0, L_1, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::initSDK(System.String,System.String,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_initSDK_mABB66C46656C144511CCEAB4ABA3238FDDF21275 (String_t* ___devKey0, String_t* ___appID1, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if(gameObject != null)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___gameObject2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// CallBackObjectName = gameObject.name;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = ___gameObject2;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5), (void*)L_3);
	}

IL_0014:
	{
		// AppsFlyerAndroid.initSDK(devKey, gameObject);
		String_t* L_4 = ___devKey0;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_5 = ___gameObject2;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_initSDK_mA2CC70CAB742D69FB33BC54DCF005D698533C2DD(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::startSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_startSDK_m6D902426A6A582E610A1F56B02403A2338BE42BB (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.startSDK(onRequestResponse != null, CallBackObjectName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6;
		String_t* L_1 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_startSDK_m9EA569B6A530275E2D8103E96FD46FE39F091C28((bool)((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_sendEvent_m57D5E3E5F5E9EFCF577523888E1B60754D6E947F (String_t* ___eventName0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___eventValues1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.sendEvent(eventName, eventValues, onInAppResponse != null, CallBackObjectName);
		String_t* L_0 = ___eventName0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___eventValues1;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7;
		String_t* L_3 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_sendEvent_m2AFC0888C6B1D352B7E0F60DAF41CF0CE96FA183(L_0, L_1, (bool)((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), L_3, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::stopSDK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_stopSDK_m5015F76D1EB95E9E08AF30BC1F16B19CA27DB56D (bool ___isSDKStopped0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.stopSDK(isSDKStopped);
		bool L_0 = ___isSDKStopped0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_stopSDK_m1D7E3B458E7784A41DBC57A23EFEB791035BB437(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean AppsFlyerSDK.AppsFlyer::isSDKStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyer_isSDKStopped_m07E04D549AAA47C5CED6AFB9428A910A1F04B9DE (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// return AppsFlyerAndroid.isSDKStopped();
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppsFlyerAndroid_isSDKStopped_m35BB922FC1706825DCB6D2DAE92F32AEEAC3F349(NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.AppsFlyer::getSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyer_getSdkVersion_mE91345D6B10A5772C5E1CD1C3E85B65EDAEB9B8B (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// return AppsFlyerAndroid.getSdkVersion();
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = AppsFlyerAndroid_getSdkVersion_m63C55A79F2D57CFEEC21F3B4A8446DC3F1B9B18B(NULL);
		return L_0;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setIsDebug_mBEC0E2F4B5721ED93CE47F0FDC05FE5B146A54C0 (bool ___shouldEnable0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setIsDebug(shouldEnable);
		bool L_0 = ___shouldEnable0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setIsDebug_mA4223CDF1F1345415F8C6A72E22023EB2571E196(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCustomerUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCustomerUserId_m58503480C9AEC595753C2AD7C92F0E657C600D0E (String_t* ___id0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setCustomerUserId(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setCustomerUserId_mA941004396ECF79C48E9D1AEC98100FAD5CAC417(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setAppInviteOneLinkID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setAppInviteOneLinkID_mC4577DFBC87CBCC81CB7C1DB4F7E9CAE5366B224 (String_t* ___oneLinkId0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setAppInviteOneLinkID(oneLinkId);
		String_t* L_0 = ___oneLinkId0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setAppInviteOneLinkID_mFFC2785D19D1FEE4632BFB6BB5CB2542AC377E7A(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setAdditionalData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setAdditionalData_mA57AD3E6A33CB5C1C7EBA5445BD8FF551C6D0E35 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setAdditionalData(customData);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___customData0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setAdditionalData_m35FA8B464A3C539AD0174282CD80ED46577AE8D0(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setResolveDeepLinkURLs(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setResolveDeepLinkURLs_mEC2A4C7E2425EC9AAE4A9202EE6D5F01D8F2EAAF (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___urls0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setResolveDeepLinkURLs(urls);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___urls0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setResolveDeepLinkURLs_m88E6CC1991969B5BE228581DA7A1F7F919B8F4F7(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setOneLinkCustomDomain(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setOneLinkCustomDomain_mAC69918265389939C038CA5708B9F26CEDDF76F6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___domains0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setOneLinkCustomDomain(domains);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___domains0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setOneLinkCustomDomain_m898EEF3E881346A5237C6AD44E7101564D442875(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCurrencyCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCurrencyCode_mF147FE191C371AA72C08FB5E50F5CEC509B32641 (String_t* ___currencyCode0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setCurrencyCode(currencyCode);
		String_t* L_0 = ___currencyCode0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setCurrencyCode_mB308982A8E0DBD64FF3087CC41063D9D60ABF874(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::recordLocation(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_recordLocation_m51CC4BDAF62AEDD5212F67A56056D3E66E89E32A (double ___latitude0, double ___longitude1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.recordLocation(latitude, longitude);
		double L_0 = ___latitude0;
		double L_1 = ___longitude1;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_recordLocation_mE2E92F84D3D20C8C14D90BD2192EA3AB72983421(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::anonymizeUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_anonymizeUser_m2A85B36C00B2D18A1221772BB94D9F5B371742B8 (bool ___shouldAnonymizeUser0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.anonymizeUser(shouldAnonymizeUser);
		bool L_0 = ___shouldAnonymizeUser0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_anonymizeUser_mDEEEA4BA02E9F91E73054077D2AE0198C4C32D61(L_0, NULL);
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyer::getAppsFlyerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyer_getAppsFlyerId_m3EC4895E7A78326937D92E91E56CA485CFEA43A3 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// return AppsFlyerAndroid.getAppsFlyerId();
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = AppsFlyerAndroid_getAppsFlyerId_mAEC123095A58B7A3545DA5166EF77318352D4EF4(NULL);
		return L_0;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setMinTimeBetweenSessions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setMinTimeBetweenSessions_m43D1456DB18DB542A44A476A2DF2B1C4321DBFBE (int32_t ___seconds0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setMinTimeBetweenSessions(seconds);
		int32_t L_0 = ___seconds0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setMinTimeBetweenSessions_m989C7BC9CC74FAC73E0A7A10DF6FD10DD437CC72(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setHost(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setHost_m797C5740DFAE9B90B2600A9D9A6FC3DFC14544CD (String_t* ___hostPrefixName0, String_t* ___hostName1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setHost(hostPrefixName, hostName);
		String_t* L_0 = ___hostPrefixName0;
		String_t* L_1 = ___hostName1;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setHost_m7F3C3A669DA9D35073F4553E5D2A6BFEB95697CA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setUserEmails(AppsFlyerSDK.EmailCryptType,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setUserEmails_m9AC1E7C4611AED71B64B1D67456AD9924FB4E1B4 (int32_t ___cryptMethod0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___emails1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setUserEmails(cryptMethod, emails);
		int32_t L_0 = ___cryptMethod0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___emails1;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setUserEmails_m9009BFCD0A07830D165B30D5E3F18E50E93080FA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setPhoneNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setPhoneNumber_m0855F52CB675600131AD1CEE4F158D99A785071C (String_t* ___phoneNumber0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setPhoneNumber(phoneNumber);
		String_t* L_0 = ___phoneNumber0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setPhoneNumber_m2ED12BD92240946CC2A8DADE635CEB5239852544(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setSharingFilterForAllPartners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setSharingFilterForAllPartners_mF0A742DAA1D46E70454A915D0DBCC7FA83453AAE (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setSharingFilterForAllPartners();
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setSharingFilterForAllPartners_m1084B9CC288C232304BA455FF7497D1C5DDA8E53(NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setSharingFilter(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setSharingFilter_mF9F506C3CFB4FDFF78BB5D561EC191235314BE84 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___partners0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setSharingFilter(partners);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___partners0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setSharingFilter_mC49BEB59CD0C2AC546B9EA191F3D5302C262FEC6(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setSharingFilterForPartners(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setSharingFilterForPartners_m61D6F1FFD796BCEA59CC337C34A7F0B8CC73D29F (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___partners0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.setSharingFilterForPartners(partners);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___partners0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setSharingFilterForPartners_m7374390F536C4FC21CDCB9C6905AE66DC735A246(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::getConversionData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_getConversionData_m5F4CC4FF0105D7150C4318E44E52032DAD83AC3D (String_t* ___objectName0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.getConversionData(objectName);
		String_t* L_0 = ___objectName0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_getConversionData_m64722794716049730FBED33C6F6BCFA0DAD29070(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::attributeAndOpenStore(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_attributeAndOpenStore_mE6C1D1E15B29CB1B7AD9B362605AEA524328A1A3 (String_t* ___appID0, String_t* ___campaign1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userParams2, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.attributeAndOpenStore(appID, campaign, userParams);
		String_t* L_0 = ___appID0;
		String_t* L_1 = ___campaign1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___userParams2;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_attributeAndOpenStore_m1516FFF42AE4E1A275D633A707B877868A177F43(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::recordCrossPromoteImpression(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_recordCrossPromoteImpression_m049570A3CF78B1600B45F214CE81A52B5427B1B4 (String_t* ___appID0, String_t* ___campaign1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameters2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.recordCrossPromoteImpression(appID, campaign, parameters);
		String_t* L_0 = ___appID0;
		String_t* L_1 = ___campaign1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___parameters2;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_recordCrossPromoteImpression_m56A676DAB7325E9DB40D35A954CE5CB0F0CB3301(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::generateUserInviteLink(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_generateUserInviteLink_mB2E125A0F49A6CE29E4827CB5D682096EE01181D (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameters0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.generateUserInviteLink(parameters, gameObject);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___parameters0;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = ___gameObject1;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_generateUserInviteLink_mD2CFFB25EB6ACE2314EBA86B1E7DDD9205E1DE1D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::addPushNotificationDeepLinkPath(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_addPushNotificationDeepLinkPath_m88056E803D8B5BD74A1D0FC01B1819AD1BB45FAF (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.addPushNotificationDeepLinkPath(paths);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___paths0;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_addPushNotificationDeepLinkPath_mDC399E40BE69A6ABEA3249B9B77A7DA3AD760072(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::subscribeForDeepLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_subscribeForDeepLink_mF0BA47F27BBD235459BA2F4B224E7C562AF90D92 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// AppsFlyerAndroid.subscribeForDeepLink(CallBackObjectName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_subscribeForDeepLink_m63DFD49BA2B881EBB986DEC3B73CC4E8B6528105(L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::add_OnRequestResponse(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_add_OnRequestResponse_mC9011A3DEF1EE6B41B0907B2C87B450F698807F3 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// onRequestResponse += value;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::remove_OnRequestResponse(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_remove_OnRequestResponse_m35505A1B20F964EF89D871048C85E6BB2FF749F7 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// onRequestResponse -= value;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::add_OnInAppResponse(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_add_OnInAppResponse_m3A584628214AE582FE3668F0586B0E767AFEC0D0 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// onInAppResponse += value;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::remove_OnInAppResponse(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_remove_OnInAppResponse_mD569011DC5FC90FFB1D86438CCEE4F59A7C0E345 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// onInAppResponse -= value;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::add_OnDeepLinkReceived(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_add_OnDeepLinkReceived_m98338B766F3B2075B9F1C2E2E6B4BB0DE27E0181 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// onDeepLinkReceived += value;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onDeepLinkReceived_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onDeepLinkReceived_8 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onDeepLinkReceived_8), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// subscribeForDeepLink();
		AppsFlyer_subscribeForDeepLink_mF0BA47F27BBD235459BA2F4B224E7C562AF90D92(NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::remove_OnDeepLinkReceived(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_remove_OnDeepLinkReceived_mD643C54CD1BBC34EA879762C4B4C1F3F4A40B850 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// onDeepLinkReceived -= value;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onDeepLinkReceived_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onDeepLinkReceived_8 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onDeepLinkReceived_8), (void*)((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_2, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::inAppResponseReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_inAppResponseReceived_m715E6EC689CAFB854B719970D0987DB98DC5A05F (AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA* __this, String_t* ___response0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (onInAppResponse != null)
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// onInAppResponse.Invoke(null, parseRequestCallback(response));
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onInAppResponse_7;
		String_t* L_2 = ___response0;
		AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* L_3;
		L_3 = AppsFlyer_parseRequestCallback_m42C2E010F1BDFB161D05A40F8122AEAE045D8253(L_2, NULL);
		NullCheck(L_1);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96(L_1, NULL, L_3, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::requestResponseReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_requestResponseReceived_mD187C3D07791905162FEE069870783C2AA605FAD (AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA* __this, String_t* ___response0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (onRequestResponse != null)
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// onRequestResponse.Invoke(null, parseRequestCallback(response));
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onRequestResponse_6;
		String_t* L_2 = ___response0;
		AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* L_3;
		L_3 = AppsFlyer_parseRequestCallback_m42C2E010F1BDFB161D05A40F8122AEAE045D8253(L_2, NULL);
		NullCheck(L_1);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96(L_1, NULL, L_3, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::onDeepLinking(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_onDeepLinking_m157ED5B70F994E01E9317A485E1E0EE071CEF9C1 (AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA* __this, String_t* ___response0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* V_0 = NULL;
	{
		// DeepLinkEventsArgs args = new DeepLinkEventsArgs(response);
		String_t* L_0 = ___response0;
		DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* L_1 = (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C*)il2cpp_codegen_object_new(DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C_il2cpp_TypeInfo_var);
		DeepLinkEventsArgs__ctor_m182F51EE29A2B3759EEBF05C219B3697F862108A(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (onDeepLinkReceived != null)
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onDeepLinkReceived_8;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// onDeepLinkReceived.Invoke(null, args);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___onDeepLinkReceived_8;
		DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* L_4 = V_0;
		NullCheck(L_3);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96(L_3, NULL, L_4, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// AppsFlyerSDK.AppsFlyerRequestEventArgs AppsFlyerSDK.AppsFlyer::parseRequestCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* AppsFlyer_parseRequestCallback_m42C2E010F1BDFB161D05A40F8122AEAE045D8253 (String_t* ___response0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral441C41FF6E93EA9C63774CA4F33832FA34B8B88D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1D2E849A7438175301D35D30C70D6D3C9502439);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	RuntimeObject* G_B4_0 = NULL;
	{
		// int responseCode = 0;
		V_0 = 0;
		// string errorDescription = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0008:
	try
	{// begin try (depth: 1)
		{
			// Dictionary<string, object> dictionary = CallbackStringToDictionary(response);
			String_t* L_0 = ___response0;
			il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1;
			L_1 = AppsFlyer_CallbackStringToDictionary_m63FF39CD79E350D62B885B1270ED172B72896849(L_0, NULL);
			V_2 = L_1;
			// var errorResponse = dictionary.ContainsKey("errorDescription") ? dictionary["errorDescription"] : "";
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_2, _stringLiteralE1D2E849A7438175301D35D30C70D6D3C9502439, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0023;
			}
		}

IL_001c:
		{
			G_B4_0 = ((RuntimeObject*)(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
			goto IL_002e;
		}

IL_0023:
		{
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, _stringLiteralE1D2E849A7438175301D35D30C70D6D3C9502439, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			G_B4_0 = L_5;
		}

IL_002e:
		{
			// errorDescription = (string)errorResponse;
			V_1 = ((String_t*)CastclassSealed((RuntimeObject*)G_B4_0, String_t_il2cpp_TypeInfo_var));
			// responseCode = (int)(long) dictionary["statusCode"];
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = V_2;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, _stringLiteral441C41FF6E93EA9C63774CA4F33832FA34B8B88D, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			V_0 = ((int32_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_7, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))));
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// AFLog("parseRequestCallback", String.Format("{0} Exception caught.", e));
		Exception_t* L_8 = V_3;
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE86CDACEACDE5A2556F299FA4A3A694C0A3A9BA2)), L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var)));
		AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18FFE0A95B599D7BBDCCF1565B4C1B250799CF43)), L_9, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// return new AppsFlyerRequestEventArgs(responseCode, errorDescription);
		int32_t L_10 = V_0;
		String_t* L_11 = V_1;
		AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* L_12 = (AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71*)il2cpp_codegen_object_new(AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71_il2cpp_TypeInfo_var);
		AppsFlyerRequestEventArgs__ctor_m212EC7FC592599B5AB02B5B8C36DDD1F90C9448D(L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AppsFlyerSDK.AppsFlyer::CallbackStringToDictionary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* AppsFlyer_CallbackStringToDictionary_m63FF39CD79E350D62B885B1270ED172B72896849 (String_t* ___str0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// return AFMiniJSON.Json.Deserialize(str) as Dictionary<string, object>;
		String_t* L_0 = ___str0;
		RuntimeObject* L_1;
		L_1 = Json_Deserialize_mB75FCC320D711CDF10DFFE4B709B8EDF0F5D00BA(L_0, NULL);
		return ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::AFLog(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424 (String_t* ___methodName0, String_t* ___str1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A9361873F8DF19119260FBA14633082BF234ED);
		s_Il2CppMethodInitialized = true;
	}
{
		// Debug.Log(string.Format("AppsFlyer_Unity_v{0} {1} called with {2}", kAppsFlyerPluginVersion, methodName, str));
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___kAppsFlyerPluginVersion_4;
		String_t* L_1 = ___methodName0;
		String_t* L_2 = ___str1;
		String_t* L_3;
		L_3 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral05A9361873F8DF19119260FBA14633082BF234ED, L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer__ctor_m1716C7A77887626853D8AFA956CEB57F95914418 (AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer__cctor_mD1993F48E269EB0BFD0156E4D53B770D90210CAA (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49C83A6CB9E3D16269215815C5C23B6418F0F260);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static readonly string kAppsFlyerPluginVersion = "6.4.0";
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___kAppsFlyerPluginVersion_4 = _stringLiteral49C83A6CB9E3D16269215815C5C23B6418F0F260;
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___kAppsFlyerPluginVersion_4), (void*)_stringLiteral49C83A6CB9E3D16269215815C5C23B6418F0F260);
		// public static string CallBackObjectName = null;
		((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5), (void*)(String_t*)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppsFlyerSDK.AppsFlyerAdRevenue::start(AppsFlyerSDK.AppsFlyerAdRevenueType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAdRevenue_start_m32C3BD248CC01D798E7F9904669E57080059D8A4 (AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* ___adRevenueTypes0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C860BBF9F457108B4C299B899A9E1F495883E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	{
		// using(AndroidJavaClass cls_UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_000b:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_006a;
					}
				}

IL_0064:
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_006a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using(AndroidJavaObject cls_Activity = cls_UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity")) {
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
				NullCheck(L_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
				L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
				V_1 = L_4;
			}

IL_0017:
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0057:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
							if (!L_5)
							{
								goto IL_0060;
							}
						}

IL_005a:
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_0060:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// AndroidJavaObject cls_Application = cls_Activity.Call<AndroidJavaObject>("getApplication");
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
					L_8 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
					NullCheck(L_7);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
					L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, _stringLiteralB7C860BBF9F457108B4C299B899A9E1F495883E2, L_8, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
					V_2 = L_9;
					// appsFlyerAndroid.CallStatic("start", cls_Application, adRevenueTypes.Length, convertEnumArrToInArr(adRevenueTypes));
					il2cpp_codegen_runtime_class_init_inline(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var);
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = ((AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var))->___appsFlyerAndroid_5;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_2;
					NullCheck(L_12);
					ArrayElementTypeCheck (L_12, L_13);
					(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
					AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* L_15 = ___adRevenueTypes0;
					NullCheck(L_15);
					int32_t L_16 = ((int32_t)(((RuntimeArray*)L_15)->max_length));
					RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
					NullCheck(L_14);
					ArrayElementTypeCheck (L_14, L_17);
					(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
					AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* L_19 = ___adRevenueTypes0;
					Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20;
					L_20 = AppsFlyerAdRevenue_convertEnumArrToInArr_m937EA2BE35EE5C9E7B31C75049D6265E1B4C2FD9(L_19, NULL);
					NullCheck(L_18);
					ArrayElementTypeCheck (L_18, L_20);
					(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_20);
					NullCheck(L_10);
					AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_10, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, L_18, NULL);
					// }
					goto IL_006b;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAdRevenue::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAdRevenue_setIsDebug_mB43372144CF629528B7539816A110CF4A7ACFA60 (bool ___isDebug0, const RuntimeMethod* method) 
{
{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAdRevenue::logAdRevenue(System.String,AppsFlyerSDK.AppsFlyerAdRevenueMediationNetworkType,System.Double,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAdRevenue_logAdRevenue_mA60C5C913BA29189B7278B99655D6C184AC5C835 (String_t* ___monetizationNetwork0, int32_t ___mediationNetwork1, double ___eventRevenue2, String_t* ___revenueCurrency3, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___additionalParameters4, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5D71F79DA96521ED83530862D257C360270B3EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8054C257AD61C38E40DF4BBA5D3D3DDB4875755);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		// int mediationNetworkAndroid = setMediationNetworkTypeAndroid(mediationNetwork);
		int32_t L_0 = ___mediationNetwork1;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = AppsFlyerAdRevenue_setMediationNetworkTypeAndroid_mE59715C12D42BECADCBBFE53E4EAD5C126AD4103(L_0, NULL);
		V_0 = L_1;
		// if (mediationNetworkAndroid == -1)
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// Debug.Log("Please choose a valid mediationNetwork");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF8054C257AD61C38E40DF4BBA5D3D3DDB4875755, NULL);
		return;
	}

IL_0016:
	{
		// appsFlyerAndroid.CallStatic("logAdRevenue",
		//                             monetizationNetwork,
		//                             mediationNetworkAndroid,
		//                             revenueCurrency,
		//                             eventRevenue,
		//                             convertDictionaryToJavaMap(additionalParameters));
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = ((AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var))->___appsFlyerAndroid_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = ___monetizationNetwork0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		String_t* L_12 = ___revenueCurrency3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		double L_14 = ___eventRevenue2;
		double L_15 = L_14;
		RuntimeObject* L_16 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = ___additionalParameters4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19;
		L_19 = AppsFlyerAdRevenue_convertDictionaryToJavaMap_m16801FF9D49E7F2DBE115A93944961F2AA5D54F2(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteralE5D71F79DA96521ED83530862D257C360270B3EA, L_17, NULL);
		// }
		return;
	}
}
// System.Int32 AppsFlyerSDK.AppsFlyerAdRevenue::setMediationNetworkTypeAndroid(AppsFlyerSDK.AppsFlyerAdRevenueMediationNetworkType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppsFlyerAdRevenue_setMediationNetworkTypeAndroid_mE59715C12D42BECADCBBFE53E4EAD5C126AD4103 (int32_t ___mediationNetwork0, const RuntimeMethod* method) 
{
{
		int32_t L_0 = ___mediationNetwork0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0034;
			}
			case 4:
			{
				goto IL_003a;
			}
			case 5:
			{
				goto IL_003c;
			}
			case 6:
			{
				goto IL_003e;
			}
			case 7:
			{
				goto IL_0040;
			}
			case 8:
			{
				goto IL_0042;
			}
			case 9:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_0047;
	}

IL_0032:
	{
		// return 0;
		return 0;
	}

IL_0034:
	{
		// return 1;
		return 1;
	}

IL_0036:
	{
		// return 2;
		return 2;
	}

IL_0038:
	{
		// return 3;
		return 3;
	}

IL_003a:
	{
		// return 4;
		return 4;
	}

IL_003c:
	{
		// return 5;
		return 5;
	}

IL_003e:
	{
		// return 6;
		return 6;
	}

IL_0040:
	{
		// return 7;
		return 7;
	}

IL_0042:
	{
		// return 8;
		return 8;
	}

IL_0044:
	{
		// return 9;
		return ((int32_t)9);
	}

IL_0047:
	{
		// return -1;
		return (-1);
	}
}
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAdRevenue::convertDictionaryToJavaMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AppsFlyerAdRevenue_convertDictionaryToJavaMap_m16801FF9D49E7F2DBE115A93944961F2AA5D54F2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41AC34D8DBAF5CBA43F03167FBED01262D39AFDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEA99AB89293A7EAB131A3DCE363E35F63E97A7E);
		s_Il2CppMethodInitialized = true;
	}
AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_2 = NULL;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// AndroidJavaObject map = new AndroidJavaObject("java.util.HashMap");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral41AC34D8DBAF5CBA43F03167FBED01262D39AFDA, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr putMethod = AndroidJNIHelper.GetMethodID(map.GetRawClass(), "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_2, NULL);
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_m8C726C02456CFB02AD38F596D8F67151776D8750(L_3, _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA, _stringLiteralEEA99AB89293A7EAB131A3DCE363E35F63E97A7E, NULL);
		V_1 = L_4;
		// if (dictionary != null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ___dictionary0;
		if (!L_5)
		{
			goto IL_00a4;
		}
	}
	{
		// foreach (var entry in dictionary)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = ___dictionary0;
		NullCheck(L_6);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_7;
		L_7 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_6, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_0030:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_3), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008b;
			}

IL_0032:
			{
				// foreach (var entry in dictionary)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_8;
				L_8 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_3), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_4 = L_8;
				// val = AndroidJNIHelper.CreateJNIArgArray(new object[] { entry.Key, entry.Value });
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_4), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, L_11);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
				String_t* L_13;
				L_13 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_4), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_13);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_14;
				L_14 = AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF(L_12, NULL);
				V_2 = L_14;
				// AndroidJNI.CallObjectMethod(map.GetRawObject(), putMethod, val);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_0;
				NullCheck(L_15);
				intptr_t L_16;
				L_16 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_15, NULL);
				intptr_t L_17 = V_1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_2;
				intptr_t L_19;
				L_19 = AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3(L_16, L_17, L_18, NULL);
				// AndroidJNI.DeleteLocalRef(val[0].l);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_20 = V_2;
				NullCheck(L_20);
				intptr_t L_21 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8;
				AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD(L_21, NULL);
				// AndroidJNI.DeleteLocalRef(val[1].l);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_22 = V_2;
				NullCheck(L_22);
				intptr_t L_23 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD(L_23, NULL);
			}

IL_008b:
			{
				// foreach (var entry in dictionary)
				bool L_24;
				L_24 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_3), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0032;
				}
			}

IL_0094:
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		// return map;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_0;
		return L_25;
	}
}
// System.Int32[] AppsFlyerSDK.AppsFlyerAdRevenue::convertEnumArrToInArr(AppsFlyerSDK.AppsFlyerAdRevenueType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AppsFlyerAdRevenue_convertEnumArrToInArr_m937EA2BE35EE5C9E7B31C75049D6265E1B4C2FD9 (AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* ___adRevenueType0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_ConvertAll_TisAppsFlyerAdRevenueType_tADD9D565C35366CD842C32B7A23FF78C8FA91AA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8723196DE02C37C62369024E98A4926D59483C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2__ctor_m9232D8CE8E4A9D71E3B5D10F3BA9E1D648D7BDA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CconvertEnumArrToInArrU3Eb__7_0_mE5DAB7B8743F5F24535C718FDA921796F7F20CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* G_B2_0 = NULL;
	AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* G_B2_1 = NULL;
	Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* G_B1_0 = NULL;
	AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* G_B1_1 = NULL;
	{
		// return Array.ConvertAll<AppsFlyerAdRevenueType, int>(
		//        adRevenueType, delegate (AppsFlyerAdRevenueType value) { return (int)value; });
		AppsFlyerAdRevenueTypeU5BU5D_t91C890A8C3BD92A31A5CD9336496FCCFE33B2772* L_0 = ___adRevenueType0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var);
		Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* L_1 = ((U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var);
		U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834* L_3 = ((U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* L_4 = (Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C*)il2cpp_codegen_object_new(Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C_il2cpp_TypeInfo_var);
		Converter_2__ctor_m9232D8CE8E4A9D71E3B5D10F3BA9E1D648D7BDA2(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CconvertEnumArrToInArrU3Eb__7_0_mE5DAB7B8743F5F24535C718FDA921796F7F20CCB_RuntimeMethod_var), /*hidden argument*/Converter_2__ctor_m9232D8CE8E4A9D71E3B5D10F3BA9E1D648D7BDA2_RuntimeMethod_var);
		Converter_2_t3D61A7AA0E739609B9E0EDD8471BD0E8D4F2998C* L_5 = L_4;
		((U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = Array_ConvertAll_TisAppsFlyerAdRevenueType_tADD9D565C35366CD842C32B7A23FF78C8FA91AA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8723196DE02C37C62369024E98A4926D59483C69(G_B2_1, G_B2_0, Array_ConvertAll_TisAppsFlyerAdRevenueType_tADD9D565C35366CD842C32B7A23FF78C8FA91AA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8723196DE02C37C62369024E98A4926D59483C69_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAdRevenue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAdRevenue__ctor_m5452CDAB70C68640C6C9D568E5B933CD02499F05 (AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAdRevenue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAdRevenue__cctor_mE20E7FB16E1EEC780248916DEE79A1C0DCE4048F (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D80F5B168A09D9B0655AFB6F216B3A630520C9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA98211A2DEFD406081AFEFA11109DE2B8B8FCBB);
		s_Il2CppMethodInitialized = true;
	}
{
		// public static readonly string kAppsFlyerAdRevenueVersion = "6.4.3";
		((AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var))->___kAppsFlyerAdRevenueVersion_4 = _stringLiteral1D80F5B168A09D9B0655AFB6F216B3A630520C9D;
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var))->___kAppsFlyerAdRevenueVersion_4), (void*)_stringLiteral1D80F5B168A09D9B0655AFB6F216B3A630520C9D);
		// private static AndroidJavaClass appsFlyerAndroid = new AndroidJavaClass("com.appsflyer.unity.afunityadrevenueplugin.AdRevenueUnityWrapper");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteralAA98211A2DEFD406081AFEFA11109DE2B8B8FCBB, /*hidden argument*/NULL);
		((AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var))->___appsFlyerAndroid_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAdRevenue_tED30345898EF5D27224F33032E18524ED7560D37_il2cpp_TypeInfo_var))->___appsFlyerAndroid_5), (void*)L_0);
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
// System.Void AppsFlyerSDK.AppsFlyerAdRevenue/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7949983978EC55EA32F25C1D6DFB40DDDD67A3B1 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834* L_0 = (U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834*)il2cpp_codegen_object_new(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m52573D16955421FDAB2AA321B35961A7FD58BAF9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAdRevenue/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m52573D16955421FDAB2AA321B35961A7FD58BAF9 (U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 AppsFlyerSDK.AppsFlyerAdRevenue/<>c::<convertEnumArrToInArr>b__7_0(AppsFlyerSDK.AppsFlyerAdRevenueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CconvertEnumArrToInArrU3Eb__7_0_mE5DAB7B8743F5F24535C718FDA921796F7F20CCB (U3CU3Ec_t15B0355308F20C4913D4986D6EE05A47786BD834* __this, int32_t ___value0, const RuntimeMethod* method) 
{
{
		// adRevenueType, delegate (AppsFlyerAdRevenueType value) { return (int)value; });
		int32_t L_0 = ___value0;
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppsFlyerSDK.AppsFlyerAndroid::initSDK(System.String,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_initSDK_mA2CC70CAB742D69FB33BC54DCF005D698533C2DD (String_t* ___devkey0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE900A4791E737247188C56C6458FDB92AA0BCF7);
		s_Il2CppMethodInitialized = true;
	}
int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B3_5 = NULL;
	{
		// appsFlyerAndroid.CallStatic("initSDK", devkey, gameObject ? gameObject.name : null);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___devkey0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_5 = ___gameObject1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		G_B1_0 = 1;
		G_B1_1 = L_4;
		G_B1_2 = L_4;
		G_B1_3 = _stringLiteralCE900A4791E737247188C56C6458FDB92AA0BCF7;
		G_B1_4 = L_0;
		if (L_6)
		{
			G_B2_0 = 1;
			G_B2_1 = L_4;
			G_B2_2 = L_4;
			G_B2_3 = _stringLiteralCE900A4791E737247188C56C6458FDB92AA0BCF7;
			G_B2_4 = L_0;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0027;
	}

IL_0021:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = ___gameObject1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0027:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		NullCheck(G_B3_5);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(G_B3_5, G_B3_4, G_B3_3, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::startSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_startSDK_m5811B25DAC67A2C6695D113EA8C63876EB66CFBD (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// startSDK(false, AppsFlyer.CallBackObjectName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_startSDK_m9EA569B6A530275E2D8103E96FD46FE39F091C28((bool)0, L_0, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::startSDK(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_startSDK_m9EA569B6A530275E2D8103E96FD46FE39F091C28 (bool ___shouldCallback0, String_t* ___callBackObjectName1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2099A07A9756CE763F45096ED122941A5502F4A2);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("startTracking", shouldCallback, callBackObjectName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___shouldCallback0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		String_t* L_7 = ___callBackObjectName1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2099A07A9756CE763F45096ED122941A5502F4A2, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::stopSDK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_stopSDK_m1D7E3B458E7784A41DBC57A23EFEB791035BB437 (bool ___isSDKStopped0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD889B5F2870505224E30F45489ECB82516E08836);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("stopTracking", isSDKStopped);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___isSDKStopped0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralD889B5F2870505224E30F45489ECB82516E08836, L_2, NULL);
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getSdkVersion_m63C55A79F2D57CFEEC21F3B4A8446DC3F1B9B18B (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEFECBD00DD90A3EB3AAD067FAFE35456CDA5EAD);
		s_Il2CppMethodInitialized = true;
	}
{
		// return appsFlyerAndroid.CallStatic<string>("getSdkVersion");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralBEFECBD00DD90A3EB3AAD067FAFE35456CDA5EAD, L_1, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::updateServerUninstallToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_updateServerUninstallToken_m18DA8BC88A303BE6BCA563F8F8D777B501E6C1E4 (String_t* ___token0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral764101B7160DBC377EBAF6B41B91DE5F7CDEEBE5);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("updateServerUninstallToken", token);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___token0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral764101B7160DBC377EBAF6B41B91DE5F7CDEEBE5, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setIsDebug_mA4223CDF1F1345415F8C6A72E22023EB2571E196 (bool ___shouldEnable0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8BD247A0DBD876062405ABFAFDFD135A1C478B4);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setIsDebug", shouldEnable);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___shouldEnable0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC8BD247A0DBD876062405ABFAFDFD135A1C478B4, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setImeiData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setImeiData_m65881519BFA9D30F74267D64143BB24BE4B036A2 (String_t* ___aImei0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E144D0DB3ED32BAD9132BAD38278E7E1F94CF6);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setImeiData", aImei);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___aImei0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral02E144D0DB3ED32BAD9132BAD38278E7E1F94CF6, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setAndroidIdData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setAndroidIdData_mAC03EAA206FA5008947F4789333CB9BFB27FC39C (String_t* ___aAndroidId0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1E252AEA8044CB211618D6ECB68836A28617FD);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setAndroidIdData", aAndroidId);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___aAndroidId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralDA1E252AEA8044CB211618D6ECB68836A28617FD, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCustomerUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCustomerUserId_mA941004396ECF79C48E9D1AEC98100FAD5CAC417 (String_t* ___id0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B5A08040822A9A5BF7079E79513108DDA959E44);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setCustomerUserId", id);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2B5A08040822A9A5BF7079E79513108DDA959E44, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::waitForCustomerUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_waitForCustomerUserId_mB90F7A0BD5FF1086321611B6A5A9D3D182976E68 (bool ___wait0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C46B975D5704BA005EB63970310B3E22538994);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("waitForCustomerUserId", wait);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___wait0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral23C46B975D5704BA005EB63970310B3E22538994, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCustomerIdAndStartSDK(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCustomerIdAndStartSDK_mFFD41403188B5BB6650F6EEE5386E866375B3A33 (String_t* ___id0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED44C067587F61201D81330CFBEC29A1A3FBBB05);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setCustomerIdAndTrack", id);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralED44C067587F61201D81330CFBEC29A1A3FBBB05, L_2, NULL);
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getOutOfStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getOutOfStore_mD0B1469CC47D08DC9A1082BA22E6CA2197D32B17 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8636892B786717541D27BD8F6B3B38B131E539B);
		s_Il2CppMethodInitialized = true;
	}
{
		// return appsFlyerAndroid.CallStatic<string>("getOutOfStore");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralD8636892B786717541D27BD8F6B3B38B131E539B, L_1, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setOutOfStore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setOutOfStore_m1487B12B9B001C17E7429BA931A1E578FCC8AD4E (String_t* ___sourceName0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CDAF50098C5C8647B302AF7AF4C17AD062496E6);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setOutOfStore", sourceName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___sourceName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1CDAF50098C5C8647B302AF7AF4C17AD062496E6, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setAppInviteOneLinkID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setAppInviteOneLinkID_mFFC2785D19D1FEE4632BFB6BB5CB2542AC377E7A (String_t* ___oneLinkId0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57B0C096BC76C2A14272B0CA02FB1542B7A062D4);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setAppInviteOneLinkID", oneLinkId);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___oneLinkId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral57B0C096BC76C2A14272B0CA02FB1542B7A062D4, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setAdditionalData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setAdditionalData_m35FA8B464A3C539AD0174282CD80ED46577AE8D0 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F022F1FD861D8F0D797833011CEACA8B68D6278);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setAdditionalData", convertDictionaryToJavaMap(customData));
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___customData0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AppsFlyerAndroid_convertDictionaryToJavaMap_mCDC5BEB9E38B2F2F567DFCA742677B91C4B43EEE(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8F022F1FD861D8F0D797833011CEACA8B68D6278, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setUserEmails(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setUserEmails_mAEA9789F60EACB4C0C254BD583101AAB94A4446A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___emails0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setUserEmails", (object)emails);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___emails0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setPhoneNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setPhoneNumber_m2ED12BD92240946CC2A8DADE635CEB5239852544 (String_t* ___phoneNumber0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7F5EABEF5669401003B3212A08B06B9A56CC7B9);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setPhoneNumber", phoneNumber);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___phoneNumber0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE7F5EABEF5669401003B3212A08B06B9A56CC7B9, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setUserEmails(AppsFlyerSDK.EmailCryptType,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setUserEmails_m9009BFCD0A07830D165B30D5E3F18E50E93080FA (int32_t ___cryptMethod0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___emails1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setUserEmails", getEmailType(cryptMethod), (object)emails);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___cryptMethod0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AppsFlyerAndroid_getEmailType_mB8872A72DCDC0DF9B8C272C7A15F1C9F7BFAFDB5(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ___emails1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34, L_5, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCollectAndroidID(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCollectAndroidID_m8D7BB788C46A95D55BC18C294E5E9CC8567D0D69 (bool ___isCollect0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B612FAFB5026ABFF93AFC18FDF41ED875A4A8D);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setCollectAndroidID", isCollect);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___isCollect0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralB8B612FAFB5026ABFF93AFC18FDF41ED875A4A8D, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCollectIMEI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCollectIMEI_m0BF6718E593F24D5FDC56AE48D46F72079E1386B (bool ___isCollect0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47CA7AF3AA31AB5DEDA911EBB9D31F1B1101A251);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setCollectIMEI", isCollect);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___isCollect0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral47CA7AF3AA31AB5DEDA911EBB9D31F1B1101A251, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setResolveDeepLinkURLs(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setResolveDeepLinkURLs_m88E6CC1991969B5BE228581DA7A1F7F919B8F4F7 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___urls0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral040BC968D13C27DDE7EDD7C41E01CC04BCB1E424);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setResolveDeepLinkURLs", (object)urls);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___urls0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral040BC968D13C27DDE7EDD7C41E01CC04BCB1E424, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setOneLinkCustomDomain(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setOneLinkCustomDomain_m898EEF3E881346A5237C6AD44E7101564D442875 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___domains0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07232168B08FAFB9EEFDEE7B0ECB21C9C0464670);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setOneLinkCustomDomain", (object)domains);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___domains0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral07232168B08FAFB9EEFDEE7B0ECB21C9C0464670, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setIsUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setIsUpdate_m9F06532D06EBC0F6C469F1CA612B8805512A06B9 (bool ___isUpdate0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD218455EF3FDCD4B6E5440AB419563C0D63A72B1);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setIsUpdate", isUpdate);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___isUpdate0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralD218455EF3FDCD4B6E5440AB419563C0D63A72B1, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCurrencyCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCurrencyCode_mB308982A8E0DBD64FF3087CC41063D9D60ABF874 (String_t* ___currencyCode0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral626BD6414D5625772020727C7E3A76743A1C7353);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setCurrencyCode", currencyCode);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___currencyCode0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral626BD6414D5625772020727C7E3A76743A1C7353, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::recordLocation(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_recordLocation_mE2E92F84D3D20C8C14D90BD2192EA3AB72983421 (double ___latitude0, double ___longitude1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9374A095C984B79D0B67F2A2F61445D48F4110EE);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("trackLocation", latitude, longitude);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		double L_3 = ___latitude0;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		double L_7 = ___longitude1;
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9374A095C984B79D0B67F2A2F61445D48F4110EE, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_sendEvent_m7323DD06954130E8EAAE79FFBA4DD4341F9255DF (String_t* ___eventName0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___eventValues1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// sendEvent(eventName, eventValues, false, AppsFlyer.CallBackObjectName);
		String_t* L_0 = ___eventName0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___eventValues1;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		String_t* L_2 = ((AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var))->___CallBackObjectName_5;
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_sendEvent_m2AFC0888C6B1D352B7E0F60DAF41CF0CE96FA183(L_0, L_1, (bool)0, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_sendEvent_m2AFC0888C6B1D352B7E0F60DAF41CF0CE96FA183 (String_t* ___eventName0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___eventValues1, bool ___shouldCallback2, String_t* ___callBackObjectName3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("trackEvent", eventName, convertDictionaryToJavaMap(eventValues), shouldCallback, callBackObjectName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___eventName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ___eventValues1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AppsFlyerAndroid_convertDictionaryToJavaMap_mCDC5BEB9E38B2F2F567DFCA742677B91C4B43EEE(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		bool L_8 = ___shouldCallback2;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		String_t* L_12 = ___callBackObjectName3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06, L_11, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::anonymizeUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_anonymizeUser_mDEEEA4BA02E9F91E73054077D2AE0198C4C32D61 (bool ___isDisabled0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EBABF2AFA57499234547483D4C9347AA07DAE90);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setDeviceTrackingDisabled", isDisabled);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___isDisabled0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6EBABF2AFA57499234547483D4C9347AA07DAE90, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::enableFacebookDeferredApplinks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_enableFacebookDeferredApplinks_mDC2BE3BC88EE23D9666F59A59FDBDFE7D2195C00 (bool ___isEnabled0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB04809CAEA4C98545BADDEEAF210B3BC2E683DD);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("enableFacebookDeferredApplinks", isEnabled);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___isEnabled0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralBB04809CAEA4C98545BADDEEAF210B3BC2E683DD, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setConsumeAFDeepLinks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setConsumeAFDeepLinks_m5F0945D175242E99951CFE48593871C4C1E774C7 (bool ___doConsume0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2339F28E8BA6A6AABFB30A14CC4FD89DCC6DA2BB);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setConsumeAFDeepLinks", doConsume);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___doConsume0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2339F28E8BA6A6AABFB30A14CC4FD89DCC6DA2BB, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setPreinstallAttribution(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setPreinstallAttribution_m8C3F200301AC9161EE8A0B4508E7329B490048A6 (String_t* ___mediaSource0, String_t* ___campaign1, String_t* ___siteId2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C334DF8E3B019BAFD6F999810AC74BBD61701E0);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setPreinstallAttribution", mediaSource, campaign, siteId);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___mediaSource0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___campaign1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___siteId2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5C334DF8E3B019BAFD6F999810AC74BBD61701E0, L_6, NULL);
		// }
		return;
	}
}
// System.Boolean AppsFlyerSDK.AppsFlyerAndroid::isPreInstalledApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyerAndroid_isPreInstalledApp_m6A8D12F88A42C85DE2B45264DDA5F771A01619D8 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2A76D4105D5F7EC31FB47296BCB16C15EA1D1E);
		s_Il2CppMethodInitialized = true;
	}
{
		// return appsFlyerAndroid.CallStatic<bool>("isPreInstalledApp");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral3B2A76D4105D5F7EC31FB47296BCB16C15EA1D1E, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getAttributionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getAttributionId_m791B12A9AE3E1C4905E217599F3CDD00360428DA (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3383C8D690C3E5266179C6A2643D5D417456266);
		s_Il2CppMethodInitialized = true;
	}
{
		// return appsFlyerAndroid.CallStatic<string>("getAttributionId");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralD3383C8D690C3E5266179C6A2643D5D417456266, L_1, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getAppsFlyerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getAppsFlyerId_mAEC123095A58B7A3545DA5166EF77318352D4EF4 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F69B1250EDC34ABBA2F702081D3EDBCD393A9F);
		s_Il2CppMethodInitialized = true;
	}
{
		// return appsFlyerAndroid.CallStatic<string>("getAppsFlyerId");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteral28F69B1250EDC34ABBA2F702081D3EDBCD393A9F, L_1, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::validateAndSendInAppPurchase(System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_validateAndSendInAppPurchase_m2A175441D5BDC9ED410EF5452531FD22AD8BA090 (String_t* ___publicKey0, String_t* ___signature1, String_t* ___purchaseData2, String_t* ___price3, String_t* ___currency4, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___additionalParameters5, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject6, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1E3E9ED6772FFC4AF4A9FC864ACF22E5BB03F0C);
		s_Il2CppMethodInitialized = true;
	}
int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B3_5 = NULL;
	{
		// appsFlyerAndroid.CallStatic("validateAndTrackInAppPurchase", publicKey, signature, purchaseData, price, currency, convertDictionaryToJavaMap(additionalParameters), gameObject ? gameObject.name : null);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___publicKey0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___signature1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___purchaseData2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___price3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___currency4;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = ___additionalParameters5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AppsFlyerAndroid_convertDictionaryToJavaMap_mCDC5BEB9E38B2F2F567DFCA742677B91C4B43EEE(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_12;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_16 = ___gameObject6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_16, NULL);
		G_B1_0 = 6;
		G_B1_1 = L_15;
		G_B1_2 = L_15;
		G_B1_3 = _stringLiteralD1E3E9ED6772FFC4AF4A9FC864ACF22E5BB03F0C;
		G_B1_4 = L_0;
		if (L_17)
		{
			G_B2_0 = 6;
			G_B2_1 = L_15;
			G_B2_2 = L_15;
			G_B2_3 = _stringLiteralD1E3E9ED6772FFC4AF4A9FC864ACF22E5BB03F0C;
			G_B2_4 = L_0;
			goto IL_003d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0044;
	}

IL_003d:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_18 = ___gameObject6;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		G_B3_0 = L_19;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0044:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		NullCheck(G_B3_5);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(G_B3_5, G_B3_4, G_B3_3, NULL);
		// }
		return;
	}
}
// System.Boolean AppsFlyerSDK.AppsFlyerAndroid::isSDKStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyerAndroid_isSDKStopped_m35BB922FC1706825DCB6D2DAE92F32AEEAC3F349 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537DCE44ECD89031F1AAD55D87498A64090B02EF);
		s_Il2CppMethodInitialized = true;
	}
{
		// return appsFlyerAndroid.CallStatic<bool>("isTrackingStopped");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral537DCE44ECD89031F1AAD55D87498A64090B02EF, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setMinTimeBetweenSessions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setMinTimeBetweenSessions_m989C7BC9CC74FAC73E0A7A10DF6FD10DD437CC72 (int32_t ___seconds0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67657C4F1B8F10CE28FE667A9FC97B18921F70FC);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setMinTimeBetweenSessions", seconds);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___seconds0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral67657C4F1B8F10CE28FE667A9FC97B18921F70FC, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setHost(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setHost_m7F3C3A669DA9D35073F4553E5D2A6BFEB95697CA (String_t* ___hostPrefixName0, String_t* ___hostName1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0FAF3658B65273D1DC74F0E2AE442991EFD881);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setHost", hostPrefixName, hostName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___hostPrefixName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___hostName1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9D0FAF3658B65273D1DC74F0E2AE442991EFD881, L_4, NULL);
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getHostName_m9BED6439DB0027D44EE7AA084BFD4C44985CD1D6 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0899C0CC6437FDB854B1FD864B75D539CED816E3);
		s_Il2CppMethodInitialized = true;
	}
{
		// return appsFlyerAndroid.CallStatic<string>("getHostName");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteral0899C0CC6437FDB854B1FD864B75D539CED816E3, L_1, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getHostPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getHostPrefix_mF155F23B766A274177A6CFB4560173D191B82078 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C457E89DFBA2FF6ECA7FF5FBCA406118FA6CC7);
		s_Il2CppMethodInitialized = true;
	}
{
		// return appsFlyerAndroid.CallStatic<string>("getHostPrefix");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralD3C457E89DFBA2FF6ECA7FF5FBCA406118FA6CC7, L_1, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilterForAllPartners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilterForAllPartners_m1084B9CC288C232304BA455FF7497D1C5DDA8E53 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BADEC5B05C73D2CCE6340D05EC49EA323FA28A);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setSharingFilterForAllPartners");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral84BADEC5B05C73D2CCE6340D05EC49EA323FA28A, L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilter(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilter_mC49BEB59CD0C2AC546B9EA191F3D5302C262FEC6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___partners0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B9ECB1352368E293763D7833EE64283ACD370DD);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setSharingFilter", (object)partners);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___partners0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral7B9ECB1352368E293763D7833EE64283ACD370DD, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilterForPartners(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilterForPartners_m7374390F536C4FC21CDCB9C6905AE66DC735A246 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___partners0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2F13DB47076BB6959BB34D94AC259D426BCDF4);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setSharingFilterForPartners", (object)partners);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___partners0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral3B2F13DB47076BB6959BB34D94AC259D426BCDF4, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::getConversionData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_getConversionData_m64722794716049730FBED33C6F6BCFA0DAD29070 (String_t* ___objectName0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2095A4A05C95774A092312D4FB8B42EE93FF3DAC);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("getConversionData", objectName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___objectName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2095A4A05C95774A092312D4FB8B42EE93FF3DAC, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::initInAppPurchaseValidatorListener(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_initInAppPurchaseValidatorListener_m6B14ED98710FC270094B840462C9DE0727D83151 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D0D9BD8D49B321C723B024A8387FA243347596);
		s_Il2CppMethodInitialized = true;
	}
int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B3_5 = NULL;
	{
		// appsFlyerAndroid.CallStatic("initInAppPurchaseValidatorListener", gameObject ? gameObject.name : null);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_3 = ___gameObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		G_B1_0 = 0;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		G_B1_3 = _stringLiteral83D0D9BD8D49B321C723B024A8387FA243347596;
		G_B1_4 = L_0;
		if (L_4)
		{
			G_B2_0 = 0;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			G_B2_3 = _stringLiteral83D0D9BD8D49B321C723B024A8387FA243347596;
			G_B2_4 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0023;
	}

IL_001d:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_5 = ___gameObject0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0023:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		NullCheck(G_B3_5);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(G_B3_5, G_B3_4, G_B3_3, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCollectOaid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCollectOaid_m2423A58827E621B69427EFA6676EA3355443F13B (bool ___isCollect0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D91CC901D762D092AA3C0272FAD67B12955456);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setCollectOaid", isCollect);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___isCollect0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral63D91CC901D762D092AA3C0272FAD67B12955456, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::attributeAndOpenStore(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_attributeAndOpenStore_m1516FFF42AE4E1A275D633A707B877868A177F43 (String_t* ___promoted_app_id0, String_t* ___campaign1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___userParams2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D4A417BC8782670DB0E78C3CA7E5FE5291906B);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("attributeAndOpenStore", promoted_app_id, campaign, convertDictionaryToJavaMap(userParams));
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___promoted_app_id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___campaign1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___userParams2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AppsFlyerAndroid_convertDictionaryToJavaMap_mCDC5BEB9E38B2F2F567DFCA742677B91C4B43EEE(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralD3D4A417BC8782670DB0E78C3CA7E5FE5291906B, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::recordCrossPromoteImpression(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_recordCrossPromoteImpression_m56A676DAB7325E9DB40D35A954CE5CB0F0CB3301 (String_t* ___appID0, String_t* ___campaign1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameters2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3269A41F619751C67FA42687D061C73E9A23E7A);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("recordCrossPromoteImpression", appID, campaign, convertDictionaryToJavaMap(parameters));
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___appID0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___campaign1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___parameters2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AppsFlyerAndroid_convertDictionaryToJavaMap_mCDC5BEB9E38B2F2F567DFCA742677B91C4B43EEE(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralD3269A41F619751C67FA42687D061C73E9A23E7A, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::generateUserInviteLink(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_generateUserInviteLink_mD2CFFB25EB6ACE2314EBA86B1E7DDD9205E1DE1D (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameters0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___gameObject1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD75758D19772B49DD8F613B685E0426D4C44121);
		s_Il2CppMethodInitialized = true;
	}
int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B3_5 = NULL;
	{
		// appsFlyerAndroid.CallStatic("createOneLinkInviteListener", convertDictionaryToJavaMap(parameters), gameObject ? gameObject.name : null);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___parameters0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AppsFlyerAndroid_convertDictionaryToJavaMap_mCDC5BEB9E38B2F2F567DFCA742677B91C4B43EEE(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_2;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_6 = ___gameObject1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		G_B1_0 = 1;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		G_B1_3 = _stringLiteralCD75758D19772B49DD8F613B685E0426D4C44121;
		G_B1_4 = L_0;
		if (L_7)
		{
			G_B2_0 = 1;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			G_B2_3 = _stringLiteralCD75758D19772B49DD8F613B685E0426D4C44121;
			G_B2_4 = L_0;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_002c;
	}

IL_0026:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_8 = ___gameObject1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_002c:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		NullCheck(G_B3_5);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(G_B3_5, G_B3_4, G_B3_3, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::handlePushNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_handlePushNotifications_m27F5FCBB364E7A30B6663980789A5F938E9C976E (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5674B818A84C598AD302905844F0F57B3E85B1FC);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("handlePushNotifications");
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5674B818A84C598AD302905844F0F57B3E85B1FC, L_1, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::addPushNotificationDeepLinkPath(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_addPushNotificationDeepLinkPath_mDC399E40BE69A6ABEA3249B9B77A7DA3AD760072 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD826D30DAEB7EFC5FD945C16FB01FDD091BDF97);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("addPushNotificationDeepLinkPath", (object)paths);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___paths0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralCD826D30DAEB7EFC5FD945C16FB01FDD091BDF97, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::subscribeForDeepLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_subscribeForDeepLink_m63DFD49BA2B881EBB986DEC3B73CC4E8B6528105 (String_t* ___objectName0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CC334A1D5B52C140EA7E7E8C38E6987CF9AFEB);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("subscribeForDeepLink", objectName);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___objectName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral05CC334A1D5B52C140EA7E7E8C38E6987CF9AFEB, L_2, NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setDisableAdvertisingIdentifiers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setDisableAdvertisingIdentifiers_m7353553325C421F94EE33E59CDB4753DAF8790A1 (bool ___disable0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EDD3065EFD13B1C8856E99397C76A8490518392);
		s_Il2CppMethodInitialized = true;
	}
{
		// appsFlyerAndroid.CallStatic("setDisableAdvertisingIdentifiers", disable);
		il2cpp_codegen_runtime_class_init_inline(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___disable0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6EDD3065EFD13B1C8856E99397C76A8490518392, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAndroid::getEmailType(AppsFlyerSDK.EmailCryptType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AppsFlyerAndroid_getEmailType_mB8872A72DCDC0DF9B8C272C7A15F1C9F7BFAFDB5 (int32_t ___cryptType0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68D4CB98723592275118ADD8147AD8B23271D821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		s_Il2CppMethodInitialized = true;
	}
AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// AndroidJavaClass emailsCryptTypeEnum = new AndroidJavaClass("com.appsflyer.AppsFlyerProperties$EmailsCryptType");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral68D4CB98723592275118ADD8147AD8B23271D821, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___cryptType0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// emailsCryptType = emailsCryptTypeEnum.GetStatic<AndroidJavaObject>("SHA256");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_3;
		// break;
		goto IL_0029;
	}

IL_001d:
	{
		// emailsCryptType = emailsCryptTypeEnum.GetStatic<AndroidJavaObject>("NONE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0029:
	{
		// return emailsCryptType;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAndroid::convertDictionaryToJavaMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AppsFlyerAndroid_convertDictionaryToJavaMap_mCDC5BEB9E38B2F2F567DFCA742677B91C4B43EEE (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41AC34D8DBAF5CBA43F03167FBED01262D39AFDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEA99AB89293A7EAB131A3DCE363E35F63E97A7E);
		s_Il2CppMethodInitialized = true;
	}
AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_2 = NULL;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// AndroidJavaObject map = new AndroidJavaObject("java.util.HashMap");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral41AC34D8DBAF5CBA43F03167FBED01262D39AFDA, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr putMethod = AndroidJNIHelper.GetMethodID(map.GetRawClass(), "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_2, NULL);
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_m8C726C02456CFB02AD38F596D8F67151776D8750(L_3, _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA, _stringLiteralEEA99AB89293A7EAB131A3DCE363E35F63E97A7E, NULL);
		V_1 = L_4;
		// if (dictionary != null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ___dictionary0;
		if (!L_5)
		{
			goto IL_00a4;
		}
	}
	{
		// foreach (var entry in dictionary)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = ___dictionary0;
		NullCheck(L_6);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_7;
		L_7 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_6, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_0030:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_3), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008b;
			}

IL_0032:
			{
				// foreach (var entry in dictionary)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_8;
				L_8 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_3), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_4 = L_8;
				// val = AndroidJNIHelper.CreateJNIArgArray(new object[] { entry.Key, entry.Value });
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_4), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, L_11);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
				String_t* L_13;
				L_13 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_4), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_13);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_14;
				L_14 = AndroidJNIHelper_CreateJNIArgArray_mCA21BB6EB162E1E77E8F95812BD662EA078EDDBF(L_12, NULL);
				V_2 = L_14;
				// AndroidJNI.CallObjectMethod(map.GetRawObject(), putMethod,val);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_0;
				NullCheck(L_15);
				intptr_t L_16;
				L_16 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_15, NULL);
				intptr_t L_17 = V_1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_2;
				intptr_t L_19;
				L_19 = AndroidJNI_CallObjectMethod_m059D1BE669D486F2A26B40D6B90BF157B84A3CA3(L_16, L_17, L_18, NULL);
				// AndroidJNI.DeleteLocalRef(val[0].l);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_20 = V_2;
				NullCheck(L_20);
				intptr_t L_21 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8;
				AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD(L_21, NULL);
				// AndroidJNI.DeleteLocalRef(val[1].l);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_22 = V_2;
				NullCheck(L_22);
				intptr_t L_23 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNI_DeleteLocalRef_m2A8137D15FDE9F781B13F71348FD5FFA1F9841BD(L_23, NULL);
			}

IL_008b:
			{
				// foreach (var entry in dictionary)
				bool L_24;
				L_24 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_3), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0032;
				}
			}

IL_0094:
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		// return map;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_0;
		return L_25;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid__ctor_m2F66EBC00993D7ABE5452B6BA8A6A7DC6BCCBC4C (AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid__cctor_m69F1089BBD903E75D1FBC605B73596E76B11CD85 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BAD3ACBCCBECBC692D1B13C58A5A57DA672F3FB);
		s_Il2CppMethodInitialized = true;
	}
{
		// private static AndroidJavaClass appsFlyerAndroid = new AndroidJavaClass("com.appsflyer.unity.AppsFlyerAndroidWrapper");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral9BAD3ACBCCBECBC692D1B13C58A5A57DA672F3FB, /*hidden argument*/NULL);
		((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_tF77FBC981CEAB20E687B357100ED7F106950C0C4_il2cpp_TypeInfo_var))->___appsFlyerAndroid_0), (void*)L_0);
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
// System.Void AppsFlyerSDK.AppsFlyerRequestEventArgs::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerRequestEventArgs__ctor_m212EC7FC592599B5AB02B5B8C36DDD1F90C9448D (AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* __this, int32_t ___code0, String_t* ___description1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// public AppsFlyerRequestEventArgs(int code, string description)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// statusCode = code;
		int32_t L_0 = ___code0;
		__this->___U3CstatusCodeU3Ek__BackingField_1 = L_0;
		// errorDescription = description;
		String_t* L_1 = ___description1;
		__this->___U3CerrorDescriptionU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorDescriptionU3Ek__BackingField_2), (void*)L_1);
		// }
		return;
	}
}
// System.Int32 AppsFlyerSDK.AppsFlyerRequestEventArgs::get_statusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppsFlyerRequestEventArgs_get_statusCode_m389EEE6D41FB090E61FD07ECA8FB2C75AEE76403 (AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* __this, const RuntimeMethod* method) 
{
{
		// public int statusCode { get; }
		int32_t L_0 = __this->___U3CstatusCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String AppsFlyerSDK.AppsFlyerRequestEventArgs::get_errorDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerRequestEventArgs_get_errorDescription_m1316251430C0798712477FA7978A4400AC22065F (AppsFlyerRequestEventArgs_t80BED790099CE579BC23B5E0948F70E404845B71* __this, const RuntimeMethod* method) 
{
{
		// public string errorDescription { get; }
		String_t* L_0 = __this->___U3CerrorDescriptionU3Ek__BackingField_2;
		return L_0;
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
// AppsFlyerSDK.DeepLinkStatus AppsFlyerSDK.DeepLinkEventsArgs::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeepLinkEventsArgs_get_status_mC105A4903FF77C2214962E4E005D13ADD8493660 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
{
		// public DeepLinkStatus status { get; }
		int32_t L_0 = __this->___U3CstatusU3Ek__BackingField_2;
		return L_0;
	}
}
// AppsFlyerSDK.DeepLinkError AppsFlyerSDK.DeepLinkEventsArgs::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeepLinkEventsArgs_get_error_m7B1BF3D065EAF2609607A1978D89FC7DB1E6B111 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
{
		// public DeepLinkError error { get; }
		int32_t L_0 = __this->___U3CerrorU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getMatchType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getMatchType_m69D144AFDE4D19849178233C2517068C5ABE6B07 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D491D6C3C9342A8E0A1580F17094732F0EDC3FE);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("match_type");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral4D491D6C3C9342A8E0A1580F17094732F0EDC3FE, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getDeepLinkValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getDeepLinkValue_m51FE406852F81C249D49CEA025D8C59036399C8D (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E9F40059822C86B8AEF125F7D1AC7639E4825B2);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("deep_link_value");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral1E9F40059822C86B8AEF125F7D1AC7639E4825B2, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getClickHttpReferrer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getClickHttpReferrer_m150C883510BACEAC2A1FFB7E49AD5F0D2E52ABF7 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral757ED47D942E9A6A71748FEC5AAF9230FDDC2F97);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("click_http_referrer");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral757ED47D942E9A6A71748FEC5AAF9230FDDC2F97, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getMediaSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getMediaSource_m0C2747F58157ACD40732401AFC9129EFE571485C (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BE966B394D2DCC26589F616D3CDD4614BC8A367);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("media_source");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral1BE966B394D2DCC26589F616D3CDD4614BC8A367, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getCampaign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getCampaign_mBE3D15AD7CA66481F710689202CA4E0F9528E485 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("campaign");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getCampaignId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getCampaignId_m350A1B3D7E03E99F0CDEBB34A9B4A418323615DE (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD476ACE1A706D5850371865BFAD794B13476417);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("campaign_id");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteralAD476ACE1A706D5850371865BFAD794B13476417, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub1_m3901EEA1E22A02AD57507EE1F54817B99129DC4A (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A34F8DA3692071AC220CF18A87B33AAFF37CAB7);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("af_sub1");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral8A34F8DA3692071AC220CF18A87B33AAFF37CAB7, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub2_mB6DA245C408221510BFF50A496272B0256E5681E (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AB25F8F9A918211E403469C2C851819036CD0AA);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("af_sub2");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral1AB25F8F9A918211E403469C2C851819036CD0AA, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub3_mC5A9CAEE5D992F36CCAC61700E340C2166F86B64 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41BAF1C183A1066A16559AFAB0507F5743FF6DEB);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("af_sub3");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral41BAF1C183A1066A16559AFAB0507F5743FF6DEB, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub4_mF2EFD82DCC5EB7B90563BF37BDF84C6686734F39 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral832B94CF33F6E5DED6AE43E3E65AB4CC7FFEF547);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("af_sub4");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral832B94CF33F6E5DED6AE43E3E65AB4CC7FFEF547, NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub5_m5B15619C69FB8F387F9B56403B8675C327CF83A5 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FBCC5FD07D69F0DD3F15FD6B2E8C56BF9AB706A);
		s_Il2CppMethodInitialized = true;
	}
{
		// return getDeepLinkParameter("af_sub5");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628(__this, _stringLiteral4FBCC5FD07D69F0DD3F15FD6B2E8C56BF9AB706A, NULL);
		return L_0;
	}
}
// System.Boolean AppsFlyerSDK.DeepLinkEventsArgs::isDeferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeepLinkEventsArgs_isDeferred_m6AD2502C66CBE8EAA4982E0185F19F5BCCFDF18D (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D);
		s_Il2CppMethodInitialized = true;
	}
bool V_0 = false;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (deepLink != null && deepLink.ContainsKey("is_deferred"))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___deepLink_1;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = __this->___deepLink_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_1, _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004a;
		}
	}

IL_001a:
	try
	{// begin try (depth: 1)
		// return (bool)deepLink["is_deferred"];
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = __this->___deepLink_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		V_0 = ((*(bool*)((bool*)(bool*)UnBox(L_4, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_004c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// AppsFlyer.AFLog("DeepLinkEventsArgs.isDeferred", String.Format("{0} Exception caught.", e));
		Exception_t* L_5 = V_1;
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE86CDACEACDE5A2556F299FA4A3A694C0A3A9BA2)), L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var)));
		AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F947CE6F90CAAF1930C6E71DF2D95DC8E236CB7)), L_6, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004a;
	}// end catch (depth: 1)

IL_004a:
	{
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AppsFlyerSDK.DeepLinkEventsArgs::getDeepLinkDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* DeepLinkEventsArgs_getDeepLinkDictionary_m9DCAAEB7D4B4A313523E9DB358F85D4863DF235D (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, const RuntimeMethod* method) 
{
{
		// return deepLink;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___deepLink_1;
		return L_0;
	}
}
// System.Void AppsFlyerSDK.DeepLinkEventsArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeepLinkEventsArgs__ctor_m182F51EE29A2B3759EEBF05C219B3697F862108A (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, String_t* ___str0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E39D5D880B50D49547323043FBE1EEEEC28913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58F56EF1C778163989CC86F225EC53D6F42EAF38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68F0F963C02E4993D85C3AC03FBBD8380C05D1CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5E15B10AF7E0EA254F79B209F62465D2DB0E0F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7F62D97350D089C5494B6087685A72FAC799013);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0);
		s_Il2CppMethodInitialized = true;
	}
Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// public DeepLinkEventsArgs(string str)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
	}

IL_0006:
	try
	{// begin try (depth: 1)
		{
			// Dictionary<string, object> dictionary = AppsFlyer.CallbackStringToDictionary(str);
			String_t* L_0 = ___str0;
			il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1;
			L_1 = AppsFlyer_CallbackStringToDictionary_m63FF39CD79E350D62B885B1270ED172B72896849(L_0, NULL);
			V_0 = L_1;
			// string status = "";
			V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string error = "";
			V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// if (dictionary.ContainsKey("status") && dictionary["status"] != null)
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_0;
			NullCheck(L_2);
			bool L_3;
			L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_2, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_0044;
			}
		}

IL_0026:
		{
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0044;
			}
		}

IL_0033:
		{
			// status = dictionary["status"].ToString();
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = V_0;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
			V_1 = L_8;
		}

IL_0044:
		{
			// if (dictionary.ContainsKey("error") && dictionary["error"] != null)
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = V_0;
			NullCheck(L_9);
			bool L_10;
			L_10 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_9, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_006f;
			}
		}

IL_0051:
		{
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = V_0;
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_11, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			if (!L_12)
			{
				goto IL_006f;
			}
		}

IL_005e:
		{
			// error = dictionary["error"].ToString();
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_13, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
			V_2 = L_15;
		}

IL_006f:
		{
			// if (dictionary.ContainsKey("deepLink") && dictionary["deepLink"] != null)
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = V_0;
			NullCheck(L_16);
			bool L_17;
			L_17 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_16, _stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_00a4;
			}
		}

IL_007c:
		{
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_18 = V_0;
			NullCheck(L_18);
			RuntimeObject* L_19;
			L_19 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_18, _stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			if (!L_19)
			{
				goto IL_00a4;
			}
		}

IL_0089:
		{
			// this.deepLink = AppsFlyer.CallbackStringToDictionary(dictionary["deepLink"].ToString());
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_20 = V_0;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_20, _stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			il2cpp_codegen_runtime_class_init_inline(AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_23;
			L_23 = AppsFlyer_CallbackStringToDictionary_m63FF39CD79E350D62B885B1270ED172B72896849(L_22, NULL);
			__this->___deepLink_1 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___deepLink_1), (void*)L_23);
		}

IL_00a4:
		{
			String_t* L_24 = V_1;
			bool L_25;
			L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral68F0F963C02E4993D85C3AC03FBBD8380C05D1CB, NULL);
			if (L_25)
			{
				goto IL_00c0;
			}
		}

IL_00b1:
		{
			String_t* L_26 = V_1;
			bool L_27;
			L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral23E39D5D880B50D49547323043FBE1EEEEC28913, NULL);
			if (L_27)
			{
				goto IL_00c9;
			}
		}

IL_00be:
		{
			goto IL_00d2;
		}

IL_00c0:
		{
			// this.status = DeepLinkStatus.FOUND;
			__this->___U3CstatusU3Ek__BackingField_2 = 0;
			// break;
			goto IL_00d9;
		}

IL_00c9:
		{
			// this.status = DeepLinkStatus.NOT_FOUND;
			__this->___U3CstatusU3Ek__BackingField_2 = 1;
			// break;
			goto IL_00d9;
		}

IL_00d2:
		{
			// this.status = DeepLinkStatus.ERROR;
			__this->___U3CstatusU3Ek__BackingField_2 = 2;
		}

IL_00d9:
		{
			String_t* L_28 = V_2;
			bool L_29;
			L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral58F56EF1C778163989CC86F225EC53D6F42EAF38, NULL);
			if (L_29)
			{
				goto IL_0102;
			}
		}

IL_00e6:
		{
			String_t* L_30 = V_2;
			bool L_31;
			L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralE5E15B10AF7E0EA254F79B209F62465D2DB0E0F3, NULL);
			if (L_31)
			{
				goto IL_010b;
			}
		}

IL_00f3:
		{
			String_t* L_32 = V_2;
			bool L_33;
			L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralF7F62D97350D089C5494B6087685A72FAC799013, NULL);
			if (L_33)
			{
				goto IL_0114;
			}
		}

IL_0100:
		{
			goto IL_011d;
		}

IL_0102:
		{
			// this.error = DeepLinkError.TIMEOUT;
			__this->___U3CerrorU3Ek__BackingField_3 = 0;
			// break;
			goto IL_0124;
		}

IL_010b:
		{
			// this.error = DeepLinkError.NETWORK;
			__this->___U3CerrorU3Ek__BackingField_3 = 1;
			// break;
			goto IL_0124;
		}

IL_0114:
		{
			// this.error = DeepLinkError.HTTP_STATUS_CODE;
			__this->___U3CerrorU3Ek__BackingField_3 = 2;
			// break;
			goto IL_0124;
		}

IL_011d:
		{
			// this.error = DeepLinkError.UNEXPECTED;
			__this->___U3CerrorU3Ek__BackingField_3 = 3;
		}

IL_0124:
		{
			// }
			goto IL_013e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0126;
		}
		throw e;
	}

CATCH_0126:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// AppsFlyer.AFLog("DeepLinkEventsArgs.parseDeepLink", String.Format("{0} Exception caught.", e));
		Exception_t* L_34 = V_3;
		String_t* L_35;
		L_35 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE86CDACEACDE5A2556F299FA4A3A694C0A3A9BA2)), L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppsFlyer_tF95B943A640D95CCDDC8D49950B07727AB0046EA_il2cpp_TypeInfo_var)));
		AppsFlyer_AFLog_m0817C983D0BE45F0E4DBA5A33E2565E3FEA77424(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1300E98B4A07E137D38D108CC70CCD80E1159D31)), L_35, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013e;
	}// end catch (depth: 1)

IL_013e:
	{
		// }
		return;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getDeepLinkParameter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getDeepLinkParameter_mFD09C7FFE1273D5C58E349082D9C15282809F628 (DeepLinkEventsArgs_t274DCA360229E8B64B47B6AAEC404DD80547F78C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// if (deepLink != null && deepLink.ContainsKey(name) && deepLink[name] != null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___deepLink_1;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = __this->___deepLink_1;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_1, L_2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = __this->___deepLink_1;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, L_5, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// return deepLink[name].ToString();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = __this->___deepLink_1;
		String_t* L_8 = ___name0;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_7, L_8, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}

IL_0036:
	{
		// return null;
		return (String_t*)NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object AFMiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_mB75FCC320D711CDF10DFFE4B709B8EDF0F5D00BA (String_t* ___json0, const RuntimeMethod* method) 
{
{
		// if (json == null) {
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___json0;
		RuntimeObject* L_2;
		L_2 = Parser_Parse_mB5036A8D5086CCF449268FC292A71619810D85F3(L_1, NULL);
		return L_2;
	}
}
// System.String AFMiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m1EC1B53C3E3EA0C2F939A4D67FA38DB85462E0CF (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
{
		// return Serializer.Serialize(obj);
		RuntimeObject* L_0 = ___obj0;
		String_t* L_1;
		L_1 = Serializer_Serialize_mB18A315243FCCE5034DCE9AAEDA53F7C2DFDDE01(L_0, NULL);
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
// System.Boolean AFMiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mF25DAD3C6E59E7ADA31F5797D1C548945BA47D35 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void AFMiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m56B10C50B6D9F48CAFAB72BA667C8AA1E11377B9 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, String_t* ___jsonString0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// Parser(string jsonString) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, /*hidden argument*/NULL);
		__this->___json_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_1), (void*)L_1);
		// }
		return;
	}
}
// System.Object AFMiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_mB5036A8D5086CCF449268FC292A71619810D85F3 (String_t* ___jsonString0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// using (var instance = new Parser(jsonString)) {
		String_t* L_0 = ___jsonString0;
		Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* L_1 = (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F*)il2cpp_codegen_object_new(Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F_il2cpp_TypeInfo_var);
		Parser__ctor_m56B10C50B6D9F48CAFAB72BA667C8AA1E11377B9(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				{
					Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}

IL_0013:
				{
					Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return instance.ParseValue();
			Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Parser_ParseValue_m23B85C4C14D6FE6D0B8F7B3D0F10B67102B7F673(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		// }
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Void AFMiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m3B162B918EA8891A71545EF45DC37EF2EC4EB741 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
{
		// json.Dispose();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_0, NULL);
		// json = null;
		__this->___json_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_1), (void*)(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AFMiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mB538E98157B0DC91D9236F52698C9A8D72EF8BD2 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, /*hidden argument*/Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken) {
		int32_t L_3;
		L_3 = Parser_get_NextToken_m65E3B8E7D54BE7D879C9BDCEA2ABB5953CFA852D(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_8;
		L_8 = Parser_ParseString_mC92613C6A09DBD95F6A059D0055918E4AD8A695E(__this, NULL);
		V_1 = L_8;
		// if (name == null) {
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON) {
		int32_t L_10;
		L_10 = Parser_get_NextToken_m65E3B8E7D54BE7D879C9BDCEA2ABB5953CFA852D(__this, NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// table[name] = ParseValue();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = Parser_ParseValue_m23B85C4C14D6FE6D0B8F7B3D0F10B67102B7F673(__this, NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_13, L_14, L_15, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> AFMiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_mC865BB331F658D39F3BA1060FBC1881965BC6965 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, /*hidden argument*/List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_m65E3B8E7D54BE7D879C9BDCEA2ABB5953CFA852D(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_7 = V_2;
		RuntimeObject* L_8;
		L_8 = Parser_ParseByToken_m908166E6984A423F8374C1EA3446C7B9AEA05677(__this, L_7, NULL);
		V_3 = L_8;
		// array.Add(value);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		RuntimeObject* L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_9, L_10, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing) {
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		return L_12;
	}
}
// System.Object AFMiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m23B85C4C14D6FE6D0B8F7B3D0F10B67102B7F673 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_m65E3B8E7D54BE7D879C9BDCEA2ABB5953CFA852D(__this, NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = Parser_ParseByToken_m908166E6984A423F8374C1EA3446C7B9AEA05677(__this, L_1, NULL);
		return L_2;
	}
}
// System.Object AFMiniJSON.Json/Parser::ParseByToken(AFMiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m908166E6984A423F8374C1EA3446C7B9AEA05677 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, int32_t ___token0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1;
		L_1 = Parser_ParseString_mC92613C6A09DBD95F6A059D0055918E4AD8A695E(__this, NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject* L_2;
		L_2 = Parser_ParseNumber_mD06DAE3C91E5FB9130CA7BC22A53CCFFB10B5FDD(__this, NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3;
		L_3 = Parser_ParseObject_mB538E98157B0DC91D9236F52698C9A8D72EF8BD2(__this, NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = Parser_ParseArray_mC865BB331F658D39F3BA1060FBC1881965BC6965(__this, NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String AFMiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mC92613C6A09DBD95F6A059D0055918E4AD8A695E (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0137;
	}

IL_0019:
	{
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_3 = __this->___json_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_mC534434FA2E91119C94CACB241C4D392DF596425(__this, NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_012f;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_004b:
	{
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_8 = __this->___json_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_mC534434FA2E91119C94CACB241C4D392DF596425(__this, NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0137;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0137;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t* L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_21, NULL);
		// break;
		goto IL_0137;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, 8, NULL);
		// break;
		goto IL_0137;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, ((int32_t)12), NULL);
		// break;
		goto IL_0137;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)10), NULL);
		// break;
		goto IL_0137;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)13), NULL);
		// break;
		goto IL_0137;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)9), NULL);
		// break;
		goto IL_0137;
	}

IL_00f7:
	{
		// var hex = new char[4];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_33;
		// for (int i=0; i< 4; i++) {
		V_4 = 0;
		goto IL_0113;
	}

IL_0103:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = V_3;
		int32_t L_35 = V_4;
		Il2CppChar L_36;
		L_36 = Parser_get_NextChar_mC534434FA2E91119C94CACB241C4D392DF596425(__this, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)L_36);
		// for (int i=0; i< 4; i++) {
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0113:
	{
		// for (int i=0; i< 4; i++) {
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0103;
		}
	}
	{
		// s.Append((char) Convert.ToInt32(new string(hex), 16));
		StringBuilder_t* L_39 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_3;
		String_t* L_41;
		L_41 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_m8881C26C9DC63CBE2186F7180F780706A10283F6(L_41, ((int32_t)16), NULL);
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		// break;
		goto IL_0137;
	}

IL_012f:
	{
		// s.Append(c);
		StringBuilder_t* L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, L_45, NULL);
	}

IL_0137:
	{
		// while (parsing) {
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013d:
	{
		// return s.ToString();
		StringBuilder_t* L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object AFMiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mD06DAE3C91E5FB9130CA7BC22A53CCFFB10B5FDD (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_m10EF311F70BAF124E8E9DF77A0853A3FBD798A98(__this, NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1) {
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_1, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		// Int64.TryParse(number, out parsedInt);
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986(L_3, (&V_2), NULL);
		// return parsedInt;
		int64_t L_5 = V_2;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0022:
	{
		// Double.TryParse(number, out parsedDouble);
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9(L_8, (&V_1), NULL);
		// return parsedDouble;
		double L_10 = V_1;
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void AFMiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mBC7858F9DD5A6D743DADB68F984C2CDCF397D0BA (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = __this->___json_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar)) {
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_m96A0B58CB41F42E87A0F63521E61D8B5CFF252E9(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_4, NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char AFMiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m96A0B58CB41F42E87A0F63521E61D8B5CFF252E9 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// return Convert.ToChar(json.Peek());
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_1, NULL);
		return L_2;
	}
}
// System.Char AFMiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mC534434FA2E91119C94CACB241C4D392DF596425 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// return Convert.ToChar(json.Read());
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_1, NULL);
		return L_2;
	}
}
// System.String AFMiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m10EF311F70BAF124E8E9DF77A0853A3FBD798A98 (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
StringBuilder_t* V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t* L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_mC534434FA2E91119C94CACB241C4D392DF596425(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, L_2, NULL);
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_4 = __this->___json_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar)) {
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_m96A0B58CB41F42E87A0F63521E61D8B5CFF252E9(__this, NULL);
		bool L_7;
		L_7 = Parser_IsWordBreak_mF25DAD3C6E59E7ADA31F5797D1C548945BA47D35(L_6, NULL);
		if (!L_7)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// AFMiniJSON.Json/Parser/TOKEN AFMiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m65E3B8E7D54BE7D879C9BDCEA2ABB5953CFA852D (Parser_t26EAB7C2098A6BF3267439DE3EFD18E920E74E9F* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_mBC7858F9DD5A6D743DADB68F984C2CDCF397D0BA(__this, NULL);
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar) {
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_m96A0B58CB41F42E87A0F63521E61D8B5CFF252E9(__this, NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_9 = __this->___json_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = __this->___json_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord) {
		String_t* L_15;
		L_15 = Parser_get_NextWord_m10EF311F70BAF124E8E9DF77A0853A3FBD798A98(__this, NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_17)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_19)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_21)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void AFMiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mB71885CA29F8B81508F275556118B8B72FECC53F (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// Serializer() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, /*hidden argument*/NULL);
		__this->___builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder_0), (void*)L_0);
		// }
		return;
	}
}
// System.String AFMiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mB18A315243FCCE5034DCE9AAEDA53F7C2DFDDE01 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		// var instance = new Serializer();
		Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* L_0 = (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959*)il2cpp_codegen_object_new(Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959_il2cpp_TypeInfo_var);
		Serializer__ctor_mB71885CA29F8B81508F275556118B8B72FECC53F(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* L_1 = L_0;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m5DE05AC50133B752074F4AD3C42E825B56C32AD1(L_1, L_2, NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t* L_3 = L_1->___builder_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m5DE05AC50133B752074F4AD3C42E825B56C32AD1 (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		// if (value == null) {
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t* L_1 = __this->___builder_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		return;
	}

IL_0015:
	{
		// } else if ((asStr = value as string) != null) {
		RuntimeObject* L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_m85855B68E2A27784B9D278AC517B85D0BBD78CD2(__this, L_5, NULL);
		return;
	}

IL_0027:
	{
		// } else if (value is bool) {
		RuntimeObject* L_6 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool) value ? "true" : "false");
		StringBuilder_t* L_7 = __this->___builder_0;
		RuntimeObject* L_8 = ___value0;
		G_B6_0 = L_7;
		if (((*(bool*)((bool*)(bool*)UnBox(L_8, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_7;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_1, G_B8_0, NULL);
		return;
	}

IL_0050:
	{
		// } else if ((asList = value as IList) != null) {
		RuntimeObject* L_10 = ___value0;
		RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_12 = V_0;
		Serializer_SerializeArray_m66C05B7AC0BF86EF80E388E49CD15DD3D6AAB57F(__this, L_12, NULL);
		return;
	}

IL_0062:
	{
		// } else if ((asDict = value as IDictionary) != null) {
		RuntimeObject* L_13 = ___value0;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_15 = V_1;
		Serializer_SerializeObject_m9E9C46B49DC0D43D4FD12D918F2EE3BDA23114D2(__this, L_15, NULL);
		return;
	}

IL_0074:
	{
		// } else if (value is char) {
		RuntimeObject* L_16 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_16, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char) value, 1));
		RuntimeObject* L_17 = ___value0;
		String_t* L_18;
		L_18 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_17, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), 1, NULL);
		Serializer_SerializeString_m85855B68E2A27784B9D278AC517B85D0BBD78CD2(__this, L_18, NULL);
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject* L_19 = ___value0;
		Serializer_SerializeOther_m9E450080BC2F547A253B737BFBC89B7412A475FC(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m9E9C46B49DC0D43D4FD12D918F2EE3BDA23114D2 (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// foreach (object e in obj.Keys) {
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001c:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_0079;
					}
				}

IL_0073:
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f;
			}

IL_001e:
			{
				// foreach (object e in obj.Keys) {
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				// if (!first) {
				bool L_10 = V_0;
				if (L_10)
				{
					goto IL_0036;
				}
			}

IL_0028:
			{
				// builder.Append(',');
				StringBuilder_t* L_11 = __this->___builder_0;
				NullCheck(L_11);
				StringBuilder_t* L_12;
				L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)44), NULL);
			}

IL_0036:
			{
				// SerializeString(e.ToString());
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
				Serializer_SerializeString_m85855B68E2A27784B9D278AC517B85D0BBD78CD2(__this, L_14, NULL);
				// builder.Append(':');
				StringBuilder_t* L_15 = __this->___builder_0;
				NullCheck(L_15);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)58), NULL);
				// SerializeValue(obj[e]);
				RuntimeObject* L_17 = ___obj0;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_17, L_18);
				Serializer_SerializeValue_m5DE05AC50133B752074F4AD3C42E825B56C32AD1(__this, L_19, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_005f:
			{
				// foreach (object e in obj.Keys) {
				RuntimeObject* L_20 = V_1;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_001e;
				}
			}

IL_0067:
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t* L_22 = __this->___builder_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m66C05B7AC0BF86EF80E388E49CD15DD3D6AAB57F (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// builder.Append('[');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray) {
		RuntimeObject* L_2 = ___anArray0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0054;
					}
				}

IL_004e:
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a;
			}

IL_0019:
			{
				// foreach (object obj in anArray) {
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (!first) {
				bool L_9 = V_0;
				if (L_9)
				{
					goto IL_0031;
				}
			}

IL_0023:
			{
				// builder.Append(',');
				StringBuilder_t* L_10 = __this->___builder_0;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)44), NULL);
			}

IL_0031:
			{
				// SerializeValue(obj);
				RuntimeObject* L_12 = V_2;
				Serializer_SerializeValue_m5DE05AC50133B752074F4AD3C42E825B56C32AD1(__this, L_12, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_003a:
			{
				// foreach (object obj in anArray) {
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0019;
				}
			}

IL_0042:
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m85855B68E2A27784B9D278AC517B85D0BBD78CD2 (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, String_t* ___str0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		// foreach (var c in charArray) {
		V_0 = L_3;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// foreach (var c in charArray) {
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t* L_11 = __this->___builder_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t* L_13 = __this->___builder_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t* L_17 = __this->___builder_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t* L_19 = __this->___builder_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t* L_21 = __this->___builder_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t* L_23 = __this->___builder_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m7B23BC2572EEB2B03EDAA26D2D9232C4A00DA00C(L_25, NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126)) {
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t* L_29 = __this->___builder_0;
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, L_30, NULL);
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t* L_32 = __this->___builder_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t* L_34 = __this->___builder_0;
		String_t* L_35;
		L_35 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
	}

IL_0129:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012d:
	{
		// foreach (var c in charArray) {
		int32_t L_38 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t* L_40 = __this->___builder_0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m9E450080BC2F547A253B737BFBC89B7412A475FC (Serializer_t2B5C9266E271F2C0D6A3FA46CF88FDBEAB996959* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float) {
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// builder.Append(((float) value).ToString("R"));
		StringBuilder_t* L_1 = __this->___builder_0;
		RuntimeObject* L_2 = ___value0;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		return;
	}

IL_0028:
	{
		// } else if (value is int
		//     || value is uint
		//     || value is long
		//     || value is sbyte
		//     || value is byte
		//     || value is short
		//     || value is ushort
		//     || value is ulong) {
		RuntimeObject* L_5 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_7 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_8 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_9 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_11 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_12 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}

IL_0068:
	{
		// builder.Append(value);
		StringBuilder_t* L_13 = __this->___builder_0;
		RuntimeObject* L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_13, L_14, NULL);
		return;
	}

IL_0076:
	{
		// } else if (value is double
		//     || value is decimal) {
		RuntimeObject* L_16 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_16, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_17 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_00a6;
		}
	}

IL_0086:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R"));
		StringBuilder_t* L_18 = __this->___builder_0;
		RuntimeObject* L_19 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A(L_19, NULL);
		V_1 = L_20;
		String_t* L_21;
		L_21 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_21, NULL);
		return;
	}

IL_00a6:
	{
		// SerializeString(value.ToString());
		RuntimeObject* L_23 = ___value0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		Serializer_SerializeString_m85855B68E2A27784B9D278AC517B85D0BBD78CD2(__this, L_24, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
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
