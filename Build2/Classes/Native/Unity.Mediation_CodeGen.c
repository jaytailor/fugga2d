#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* IosImpressionListener_Impression_m14336805D817FC4964DB510431A42BDC6A2809DF_RuntimeMethod_var;
extern const RuntimeMethod* IosInterstitialLoadListener_LoadFail_m560420328DC82443357172CB8AA472B89017296E_RuntimeMethod_var;
extern const RuntimeMethod* IosInterstitialLoadListener_LoadSuccess_m3B2162F7E66751B49E6FAF77224E835E2619CB72_RuntimeMethod_var;
extern const RuntimeMethod* IosInterstitialShowListener_Clicked_m0AEF652CD5169536F84BBA40991CF61BB2CD0D72_RuntimeMethod_var;
extern const RuntimeMethod* IosInterstitialShowListener_FailedShow_m8CB913517836795A7938913666286F4976E120B5_RuntimeMethod_var;
extern const RuntimeMethod* IosInterstitialShowListener_Finished_m57ADE89826039F1ECCFC834768D5C575BED4B38B_RuntimeMethod_var;
extern const RuntimeMethod* IosInterstitialShowListener_Started_m74A8E59155E7F4B6E54C7E53BD9C843321056314_RuntimeMethod_var;
extern const RuntimeMethod* IosMediationService_InitializationFailed_mD516FFAD6A54A83BC975EABB00C512F36471A433_RuntimeMethod_var;
extern const RuntimeMethod* IosMediationService_InitializationSuccess_m3B29138D470738432E8BA2CA209B80E72DD62C67_RuntimeMethod_var;
extern const RuntimeMethod* IosRewardedLoadListener_LoadFail_m806FF60C7EBAEB50875D61D4B058AE7B8E57AE8A_RuntimeMethod_var;
extern const RuntimeMethod* IosRewardedLoadListener_LoadSuccess_m905ADB16BAEC1AFA687E686F372A457031541763_RuntimeMethod_var;
extern const RuntimeMethod* IosRewardedShowListener_Clicked_m0654C1FF992EA80564FD66BB7BB1E8F0C4978682_RuntimeMethod_var;
extern const RuntimeMethod* IosRewardedShowListener_Closed_mBF6C3C9556BEE2066F838742425CDCE2506ED248_RuntimeMethod_var;
extern const RuntimeMethod* IosRewardedShowListener_FailedShow_m4B72450DB896C5CDBC866FD91A7D30D664CF1A7C_RuntimeMethod_var;
extern const RuntimeMethod* IosRewardedShowListener_Shown_m12AE718620DAA7D577059580AF1B855DA43FDD05_RuntimeMethod_var;
extern const RuntimeMethod* IosRewardedShowListener_UserRewarded_mE055F696D61FE6BABD9EB88E9B2C669A6D2FB6BD_RuntimeMethod_var;



// 0x00000001 System.Threading.Tasks.Task Unity.Services.Mediation.IMediationServiceImpl::Initialize(System.String,System.String)
// 0x00000002 Unity.Services.Mediation.InitializationState Unity.Services.Mediation.IMediationServiceImpl::get_InitializationState()
// 0x00000003 Unity.Services.Mediation.SdkInitializationError Unity.Services.Mediation.InitializationErrorEventArgs::get_Error()
extern void InitializationErrorEventArgs_get_Error_mA5F34C6453F7239A19BFFE9F92B34F4E9E255EF0 (void);
// 0x00000004 System.String Unity.Services.Mediation.InitializationErrorEventArgs::get_Message()
extern void InitializationErrorEventArgs_get_Message_mD6AA82B0F10727F35F9AFC1A52CABCC1F435034D (void);
// 0x00000005 System.Void Unity.Services.Mediation.InitializationErrorEventArgs::.ctor(Unity.Services.Mediation.SdkInitializationError,System.String)
extern void InitializationErrorEventArgs__ctor_mE3C8B8C28B321053593AB98CC8258EB98CD9AE3D (void);
// 0x00000006 System.Void Unity.Services.Mediation.MediationServiceImpl::.ctor()
extern void MediationServiceImpl__ctor_m7CCA633363D0568B0093AD78E2D507158FF06A4D (void);
// 0x00000007 Unity.Services.Mediation.InitializationState Unity.Services.Mediation.MediationServiceImpl::Unity.Services.Mediation.IMediationServiceImpl.get_InitializationState()
extern void MediationServiceImpl_Unity_Services_Mediation_IMediationServiceImpl_get_InitializationState_m883A047C0D1855284B01B8EE59F3B8F531D5D671 (void);
// 0x00000008 System.Threading.Tasks.Task Unity.Services.Mediation.MediationServiceImpl::Unity.Services.Mediation.IMediationServiceImpl.Initialize(System.String,System.String)
extern void MediationServiceImpl_Unity_Services_Mediation_IMediationServiceImpl_Initialize_m6BA8E4C34E1843FC440786F86C8A13A069C7C061 (void);
// 0x00000009 System.Boolean Unity.Services.Mediation.MediationServiceImpl::HasRequestedInitialization()
extern void MediationServiceImpl_HasRequestedInitialization_m19B12B6D7F0E5A396898594F9CFE00C277338E02 (void);
// 0x0000000A System.Boolean Unity.Services.Mediation.MediationServiceImpl::HasInitializationFailed()
extern void MediationServiceImpl_HasInitializationFailed_mC11EF21C81E712399D1ED2E4574493CD509E35FB (void);
// 0x0000000B System.Void Unity.Services.Mediation.MediationServiceImpl::CreateInitialization()
extern void MediationServiceImpl_CreateInitialization_m45F503048DE063EA4948D2B1D608054BE066C4BE (void);
// 0x0000000C System.Void Unity.Services.Mediation.MediationServiceImpl::InitializationComplete(System.Object,System.EventArgs)
extern void MediationServiceImpl_InitializationComplete_mAA1D23AF17BD03003F12036C23D4603F3A3CFC5C (void);
// 0x0000000D System.Void Unity.Services.Mediation.MediationServiceImpl::InitializationFailed(System.Object,Unity.Services.Mediation.InitializationErrorEventArgs)
extern void MediationServiceImpl_InitializationFailed_m81AD672912FC35D4A94A996CE660FE45C3A8621E (void);
// 0x0000000E System.Void Unity.Services.Mediation.MediationServiceImpl::UnsubscribeEventHandlers()
extern void MediationServiceImpl_UnsubscribeEventHandlers_mEF685E2DD02C2207FBB04AACF591F853014B9922 (void);
// 0x0000000F Unity.Services.Mediation.IInterstitialAd Unity.Services.Mediation.MediationServiceImpl::CreateInterstitialAd(System.String)
extern void MediationServiceImpl_CreateInterstitialAd_m37FAA5064872874DECAB2C82D578122A7326228B (void);
// 0x00000010 Unity.Services.Mediation.IRewardedAd Unity.Services.Mediation.MediationServiceImpl::CreateRewardedAd(System.String)
extern void MediationServiceImpl_CreateRewardedAd_m01D4CEB5C6447C8209AF838BE1B48F71B0BCF1EE (void);
// 0x00000011 System.String Unity.Services.Mediation.MediationServiceImpl::get_SdkVersion()
extern void MediationServiceImpl_get_SdkVersion_m945F9D7F6BA8832E382ADDFA91ECC13FED6820CB (void);
// 0x00000012 Unity.Services.Mediation.IDataPrivacy Unity.Services.Mediation.MediationServiceImpl::get_DataPrivacy()
extern void MediationServiceImpl_get_DataPrivacy_m30BF6B6B4F02171EF9BB5CE8F604C6EE83EB173D (void);
// 0x00000013 Unity.Services.Mediation.IImpressionEventPublisher Unity.Services.Mediation.MediationServiceImpl::get_ImpressionEventPublisher()
extern void MediationServiceImpl_get_ImpressionEventPublisher_m14E0ADB61995E66FFB7C939E2CF40E61099EDE17 (void);
// 0x00000014 System.Void Unity.Services.Mediation.MediationServiceInitializer::Register()
extern void MediationServiceInitializer_Register_m08794547D22FBC3C1309348AD06A5B952473B346 (void);
// 0x00000015 System.Threading.Tasks.Task Unity.Services.Mediation.MediationServiceInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
extern void MediationServiceInitializer_Initialize_m62D298808739D93BA6189528BF0C4459CEFE305C (void);
// 0x00000016 System.Threading.Tasks.Task Unity.Services.Mediation.MediationServiceInitializer::Initialize(Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
extern void MediationServiceInitializer_Initialize_mD5C0CB5BF9628D8978A849B6278F64FCC648218A (void);
// 0x00000017 System.Void Unity.Services.Mediation.MediationServiceInitializer::.ctor()
extern void MediationServiceInitializer__ctor_m78929116140A96951AE8DAFE4FAEA2704ED4EDBE (void);
// 0x00000018 System.Void Unity.Services.Mediation.MediationServiceInitializer/<Initialize>d__2::MoveNext()
extern void U3CInitializeU3Ed__2_MoveNext_mD06DA778D437EE9C2BD70EA500E9A24F3645465C (void);
// 0x00000019 System.Void Unity.Services.Mediation.MediationServiceInitializer/<Initialize>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeU3Ed__2_SetStateMachine_mD39C1B75253C313A1D0FC60F2F57875C70DF806F (void);
// 0x0000001A System.Void Unity.Services.Mediation.MediationServiceInitializer/<Initialize>d__3::MoveNext()
extern void U3CInitializeU3Ed__3_MoveNext_m4F7B3C93AC9F5B0B3274FEF033B9F3F624D000C1 (void);
// 0x0000001B System.Void Unity.Services.Mediation.MediationServiceInitializer/<Initialize>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeU3Ed__3_SetStateMachine_m8B62B12EE19AA1AE5B13D23165F2AF18114FE88B (void);
// 0x0000001C System.Void Unity.Services.Mediation.IDataPrivacy::UserGaveConsent(Unity.Services.Mediation.ConsentStatus,Unity.Services.Mediation.DataPrivacyLaw)
// 0x0000001D Unity.Services.Mediation.ConsentStatus Unity.Services.Mediation.IDataPrivacy::GetConsentStatusForLaw(Unity.Services.Mediation.DataPrivacyLaw)
// 0x0000001E System.Void Unity.Services.Mediation.IImpressionEventPublisher::add_OnImpression(System.EventHandler`1<Unity.Services.Mediation.ImpressionEventArgs>)
// 0x0000001F System.Void Unity.Services.Mediation.IImpressionEventPublisher::remove_OnImpression(System.EventHandler`1<Unity.Services.Mediation.ImpressionEventArgs>)
// 0x00000020 System.Void Unity.Services.Mediation.IInterstitialAd::add_OnLoaded(System.EventHandler)
// 0x00000021 System.Void Unity.Services.Mediation.IInterstitialAd::remove_OnLoaded(System.EventHandler)
// 0x00000022 System.Void Unity.Services.Mediation.IInterstitialAd::add_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
// 0x00000023 System.Void Unity.Services.Mediation.IInterstitialAd::remove_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
// 0x00000024 System.Void Unity.Services.Mediation.IInterstitialAd::add_OnShowed(System.EventHandler)
// 0x00000025 System.Void Unity.Services.Mediation.IInterstitialAd::remove_OnShowed(System.EventHandler)
// 0x00000026 System.Void Unity.Services.Mediation.IInterstitialAd::add_OnClicked(System.EventHandler)
// 0x00000027 System.Void Unity.Services.Mediation.IInterstitialAd::remove_OnClicked(System.EventHandler)
// 0x00000028 System.Void Unity.Services.Mediation.IInterstitialAd::add_OnClosed(System.EventHandler)
// 0x00000029 System.Void Unity.Services.Mediation.IInterstitialAd::remove_OnClosed(System.EventHandler)
// 0x0000002A System.Void Unity.Services.Mediation.IInterstitialAd::add_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
// 0x0000002B System.Void Unity.Services.Mediation.IInterstitialAd::remove_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
// 0x0000002C Unity.Services.Mediation.AdState Unity.Services.Mediation.IInterstitialAd::get_AdState()
// 0x0000002D System.String Unity.Services.Mediation.IInterstitialAd::get_AdUnitId()
// 0x0000002E System.Void Unity.Services.Mediation.IInterstitialAd::Load()
// 0x0000002F System.Void Unity.Services.Mediation.IInterstitialAd::Show()
// 0x00000030 Unity.Services.Mediation.IInterstitialAd Unity.Services.Mediation.IMediationService::CreateInterstitialAd(System.String)
// 0x00000031 Unity.Services.Mediation.IRewardedAd Unity.Services.Mediation.IMediationService::CreateRewardedAd(System.String)
// 0x00000032 Unity.Services.Mediation.IDataPrivacy Unity.Services.Mediation.IMediationService::get_DataPrivacy()
// 0x00000033 Unity.Services.Mediation.IImpressionEventPublisher Unity.Services.Mediation.IMediationService::get_ImpressionEventPublisher()
// 0x00000034 System.String Unity.Services.Mediation.IMediationService::get_SdkVersion()
// 0x00000035 System.Void Unity.Services.Mediation.ImpressionData::.ctor()
extern void ImpressionData__ctor_m2CECE763AC0926A642B2DF8002F81BE0721ACECE (void);
// 0x00000036 System.String Unity.Services.Mediation.ImpressionEventArgs::get_AdUnitId()
extern void ImpressionEventArgs_get_AdUnitId_m063D3642424D74363F2261FA63DE8C24CB10C6E2 (void);
// 0x00000037 Unity.Services.Mediation.ImpressionData Unity.Services.Mediation.ImpressionEventArgs::get_ImpressionData()
extern void ImpressionEventArgs_get_ImpressionData_mC16185D0F7E353797CE0B047BF1EFF0246B6CEAF (void);
// 0x00000038 System.Void Unity.Services.Mediation.ImpressionEventArgs::.ctor(System.String,Unity.Services.Mediation.ImpressionData)
extern void ImpressionEventArgs__ctor_m1E0B5B69B333267F2B429EF1A253A05161D98F65 (void);
// 0x00000039 System.String Unity.Services.Mediation.InitializationOptionsExtensions::get_GameIdKey()
extern void InitializationOptionsExtensions_get_GameIdKey_m46C12035919A90D80F6EAEE969A38B49CAC1215A (void);
// 0x0000003A Unity.Services.Core.InitializationOptions Unity.Services.Mediation.InitializationOptionsExtensions::SetGameId(Unity.Services.Core.InitializationOptions,System.String)
extern void InitializationOptionsExtensions_SetGameId_m9C4E2792296EF2BACE0B65DD0D4F6E01321A63B3 (void);
// 0x0000003B System.Void Unity.Services.Mediation.InitializeFailedException::.ctor(Unity.Services.Mediation.SdkInitializationError,System.String)
extern void InitializeFailedException__ctor_mD110AB9D4C59478D47CA8977029E3D7A3629C2D1 (void);
// 0x0000003C System.Void Unity.Services.Mediation.InterstitialAd::add_OnLoaded(System.EventHandler)
extern void InterstitialAd_add_OnLoaded_m4F037C41080E3EA2BF1EEDA32200E2BEC910779B (void);
// 0x0000003D System.Void Unity.Services.Mediation.InterstitialAd::remove_OnLoaded(System.EventHandler)
extern void InterstitialAd_remove_OnLoaded_m7B022B3057CD0C964140ED61B128C35AFE47D389 (void);
// 0x0000003E System.Void Unity.Services.Mediation.InterstitialAd::add_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
extern void InterstitialAd_add_OnFailedLoad_mBC3F0594B7A5DCF95E23999D65A68D0D40AB5E22 (void);
// 0x0000003F System.Void Unity.Services.Mediation.InterstitialAd::remove_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
extern void InterstitialAd_remove_OnFailedLoad_m3F2C86CDB23C37595953833D1AD8FD15F7045A37 (void);
// 0x00000040 System.Void Unity.Services.Mediation.InterstitialAd::add_OnShowed(System.EventHandler)
extern void InterstitialAd_add_OnShowed_m83F8B3CC1AFCB6E0F3698084A889DBC9ADC13E2A (void);
// 0x00000041 System.Void Unity.Services.Mediation.InterstitialAd::remove_OnShowed(System.EventHandler)
extern void InterstitialAd_remove_OnShowed_mF32C923A103CF2E48A9833F423BBA8C868949EC3 (void);
// 0x00000042 System.Void Unity.Services.Mediation.InterstitialAd::add_OnClicked(System.EventHandler)
extern void InterstitialAd_add_OnClicked_mF532791E20910025E9CD95837B8F6C3FA25F92A1 (void);
// 0x00000043 System.Void Unity.Services.Mediation.InterstitialAd::remove_OnClicked(System.EventHandler)
extern void InterstitialAd_remove_OnClicked_m86061DD9792B1F0EA7730310B1604A770EDB7F8C (void);
// 0x00000044 System.Void Unity.Services.Mediation.InterstitialAd::add_OnClosed(System.EventHandler)
extern void InterstitialAd_add_OnClosed_mA2D45F2371205E54C7396BFA1FEFBA2B783B1CC4 (void);
// 0x00000045 System.Void Unity.Services.Mediation.InterstitialAd::remove_OnClosed(System.EventHandler)
extern void InterstitialAd_remove_OnClosed_m1AC107C48376B532254749B6EDE2148F2DF0C9C8 (void);
// 0x00000046 System.Void Unity.Services.Mediation.InterstitialAd::add_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
extern void InterstitialAd_add_OnFailedShow_mA27CF72CA7C02A14BFADF78F797EBDA24D4A2091 (void);
// 0x00000047 System.Void Unity.Services.Mediation.InterstitialAd::remove_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
extern void InterstitialAd_remove_OnFailedShow_m48DBF589F179F66DE09392EE023568E1CD019052 (void);
// 0x00000048 Unity.Services.Mediation.AdState Unity.Services.Mediation.InterstitialAd::get_AdState()
extern void InterstitialAd_get_AdState_m2EB31D8BC3314BD8176F86AD09E737B6CA1135FA (void);
// 0x00000049 System.String Unity.Services.Mediation.InterstitialAd::get_AdUnitId()
extern void InterstitialAd_get_AdUnitId_m3A5C2708F2B2F5485EA15BC4947C981EB36FC3A4 (void);
// 0x0000004A System.Void Unity.Services.Mediation.InterstitialAd::.ctor(System.String)
extern void InterstitialAd__ctor_mEC7E42044879271D78F8C9216DCCFFA58C5B0AA4 (void);
// 0x0000004B System.Void Unity.Services.Mediation.InterstitialAd::.ctor(Unity.Services.Mediation.IInterstitialAd)
extern void InterstitialAd__ctor_m31F0AF99FDF50A22426972E9F83C74EAAEC08C96 (void);
// 0x0000004C System.Void Unity.Services.Mediation.InterstitialAd::InitializeCallbacks()
extern void InterstitialAd_InitializeCallbacks_mAFC11D512E67BC745006EC2448C4F08D6C85FF78 (void);
// 0x0000004D System.Void Unity.Services.Mediation.InterstitialAd::Load()
extern void InterstitialAd_Load_m899E7191562F69F56A96CF2BF849E1F0EF7B5DB8 (void);
// 0x0000004E System.Void Unity.Services.Mediation.InterstitialAd::Show()
extern void InterstitialAd_Show_mA85EED4F224D567B66476900CE328BC4C79722DC (void);
// 0x0000004F System.Void Unity.Services.Mediation.InterstitialAd::Dispose()
extern void InterstitialAd_Dispose_mF78BB99B691F5F7350B8BA1E51FF0BCD9D0754F9 (void);
// 0x00000050 System.Void Unity.Services.Mediation.InterstitialAd::<InitializeCallbacks>b__25_0(System.Object,System.EventArgs)
extern void InterstitialAd_U3CInitializeCallbacksU3Eb__25_0_m2F302BCAF962F2AC133F284D352E08C3D1DB3469 (void);
// 0x00000051 System.Void Unity.Services.Mediation.InterstitialAd::<InitializeCallbacks>b__25_1(System.Object,Unity.Services.Mediation.LoadErrorEventArgs)
extern void InterstitialAd_U3CInitializeCallbacksU3Eb__25_1_mDC2DBE27E5D98F6DF9C7340C1AE6999D0E5E59A0 (void);
// 0x00000052 System.Void Unity.Services.Mediation.InterstitialAd::<InitializeCallbacks>b__25_2(System.Object,System.EventArgs)
extern void InterstitialAd_U3CInitializeCallbacksU3Eb__25_2_m23FE522D23834F0722637BA2039FE8488306485C (void);
// 0x00000053 System.Void Unity.Services.Mediation.InterstitialAd::<InitializeCallbacks>b__25_3(System.Object,System.EventArgs)
extern void InterstitialAd_U3CInitializeCallbacksU3Eb__25_3_m2FB42A354D6C0580CDDCCA86DF4B86004BDBED1A (void);
// 0x00000054 System.Void Unity.Services.Mediation.InterstitialAd::<InitializeCallbacks>b__25_4(System.Object,System.EventArgs)
extern void InterstitialAd_U3CInitializeCallbacksU3Eb__25_4_m0A1F57A6870D03268B138B472499D14F234688D7 (void);
// 0x00000055 System.Void Unity.Services.Mediation.InterstitialAd::<InitializeCallbacks>b__25_5(System.Object,Unity.Services.Mediation.ShowErrorEventArgs)
extern void InterstitialAd_U3CInitializeCallbacksU3Eb__25_5_m0DD7153F8B06644D11348E4C47A83B47FBAEF5DC (void);
// 0x00000056 System.Void Unity.Services.Mediation.IRewardedAd::add_OnLoaded(System.EventHandler)
// 0x00000057 System.Void Unity.Services.Mediation.IRewardedAd::remove_OnLoaded(System.EventHandler)
// 0x00000058 System.Void Unity.Services.Mediation.IRewardedAd::add_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
// 0x00000059 System.Void Unity.Services.Mediation.IRewardedAd::remove_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
// 0x0000005A System.Void Unity.Services.Mediation.IRewardedAd::add_OnShowed(System.EventHandler)
// 0x0000005B System.Void Unity.Services.Mediation.IRewardedAd::remove_OnShowed(System.EventHandler)
// 0x0000005C System.Void Unity.Services.Mediation.IRewardedAd::add_OnClicked(System.EventHandler)
// 0x0000005D System.Void Unity.Services.Mediation.IRewardedAd::remove_OnClicked(System.EventHandler)
// 0x0000005E System.Void Unity.Services.Mediation.IRewardedAd::add_OnClosed(System.EventHandler)
// 0x0000005F System.Void Unity.Services.Mediation.IRewardedAd::remove_OnClosed(System.EventHandler)
// 0x00000060 System.Void Unity.Services.Mediation.IRewardedAd::add_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
// 0x00000061 System.Void Unity.Services.Mediation.IRewardedAd::remove_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
// 0x00000062 System.Void Unity.Services.Mediation.IRewardedAd::add_OnUserRewarded(System.EventHandler`1<Unity.Services.Mediation.RewardEventArgs>)
// 0x00000063 System.Void Unity.Services.Mediation.IRewardedAd::remove_OnUserRewarded(System.EventHandler`1<Unity.Services.Mediation.RewardEventArgs>)
// 0x00000064 Unity.Services.Mediation.AdState Unity.Services.Mediation.IRewardedAd::get_AdState()
// 0x00000065 System.String Unity.Services.Mediation.IRewardedAd::get_AdUnitId()
// 0x00000066 System.Void Unity.Services.Mediation.IRewardedAd::Load()
// 0x00000067 System.Void Unity.Services.Mediation.IRewardedAd::Show(Unity.Services.Mediation.RewardedAdShowOptions)
// 0x00000068 Unity.Services.Mediation.S2SRedeemData Unity.Services.Mediation.RewardedAdShowOptions::get_S2SData()
extern void RewardedAdShowOptions_get_S2SData_mA9FF2F4761662A798B08FE31DBE275120387A48E (void);
// 0x00000069 System.Void Unity.Services.Mediation.RewardedAdShowOptions::set_S2SData(Unity.Services.Mediation.S2SRedeemData)
extern void RewardedAdShowOptions_set_S2SData_m7A9A1F950E02D0601828F9C033E474D436C63A27 (void);
// 0x0000006A System.Void Unity.Services.Mediation.RewardedAdShowOptions::.ctor()
extern void RewardedAdShowOptions__ctor_mC79ABB051D1C3E37FFE97A93D42A27A2529EA795 (void);
// 0x0000006B Unity.Services.Mediation.LoadError Unity.Services.Mediation.LoadErrorEventArgs::get_Error()
extern void LoadErrorEventArgs_get_Error_mB83C93BF1D23944E0C9654C9A4FEF15F7DD80539 (void);
// 0x0000006C System.String Unity.Services.Mediation.LoadErrorEventArgs::get_Message()
extern void LoadErrorEventArgs_get_Message_mD52A147C6FD416A44E6B9BDA871DD7CDCFDBBCC5 (void);
// 0x0000006D System.Void Unity.Services.Mediation.LoadErrorEventArgs::.ctor(Unity.Services.Mediation.LoadError,System.String)
extern void LoadErrorEventArgs__ctor_mCA8295AEA2D0C5DA3E6EF5C441A346FA61E2C2F3 (void);
// 0x0000006E Unity.Services.Mediation.IMediationService Unity.Services.Mediation.MediationService::get_Instance()
extern void MediationService_get_Instance_mC88D52B1DC403D79ACB4336F89154D6C642B66F6 (void);
// 0x0000006F Unity.Services.Mediation.InitializationState Unity.Services.Mediation.MediationService::get_InitializationState()
extern void MediationService_get_InitializationState_m62626C59BD88FCBC09D45DC47F0BC037AA5FA22B (void);
// 0x00000070 System.Threading.Tasks.Task Unity.Services.Mediation.MediationService::Initialize(System.String,System.String)
extern void MediationService_Initialize_mFAA290C9B8DBBE5A9A969DA13B10E54D4C030F9A (void);
// 0x00000071 System.Void Unity.Services.Mediation.RewardedAd::add_OnLoaded(System.EventHandler)
extern void RewardedAd_add_OnLoaded_m41B6B0A94D81BA08D7BB4602AAFFFC6264DA3EAD (void);
// 0x00000072 System.Void Unity.Services.Mediation.RewardedAd::remove_OnLoaded(System.EventHandler)
extern void RewardedAd_remove_OnLoaded_m5747FBB9236E0C79D8312E8DDBB221FE79462008 (void);
// 0x00000073 System.Void Unity.Services.Mediation.RewardedAd::add_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
extern void RewardedAd_add_OnFailedLoad_m236498AFE276FBA5B2765888BF042070C3098B8F (void);
// 0x00000074 System.Void Unity.Services.Mediation.RewardedAd::remove_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
extern void RewardedAd_remove_OnFailedLoad_mB794FA8C6C2888F5320432A46AC02A0941142CA1 (void);
// 0x00000075 System.Void Unity.Services.Mediation.RewardedAd::add_OnShowed(System.EventHandler)
extern void RewardedAd_add_OnShowed_m6B36A6814A02AF826250C27B54A67DC3A147FA81 (void);
// 0x00000076 System.Void Unity.Services.Mediation.RewardedAd::remove_OnShowed(System.EventHandler)
extern void RewardedAd_remove_OnShowed_mD79ADB2B572B50BD94DD7261EF9EE8CAB7E8C8FA (void);
// 0x00000077 System.Void Unity.Services.Mediation.RewardedAd::add_OnClicked(System.EventHandler)
extern void RewardedAd_add_OnClicked_m09906E7D464BEC2C8795FDCF7FE23126563DA862 (void);
// 0x00000078 System.Void Unity.Services.Mediation.RewardedAd::remove_OnClicked(System.EventHandler)
extern void RewardedAd_remove_OnClicked_mA9E5C7F4A071EDD09D21757ED812E0129035B9A0 (void);
// 0x00000079 System.Void Unity.Services.Mediation.RewardedAd::add_OnClosed(System.EventHandler)
extern void RewardedAd_add_OnClosed_m83FC45D38F732EEF23EC1449DA250AE4A56E3BE7 (void);
// 0x0000007A System.Void Unity.Services.Mediation.RewardedAd::remove_OnClosed(System.EventHandler)
extern void RewardedAd_remove_OnClosed_m928A1E2C54A7495D55CD339DAE2DE2E4EAF8C67C (void);
// 0x0000007B System.Void Unity.Services.Mediation.RewardedAd::add_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
extern void RewardedAd_add_OnFailedShow_m79C01C7CC172ABADB92621A3D229DC386789F287 (void);
// 0x0000007C System.Void Unity.Services.Mediation.RewardedAd::remove_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
extern void RewardedAd_remove_OnFailedShow_m524E9C38C16CFBD5A8C53AD6ED677B05316EBE37 (void);
// 0x0000007D System.Void Unity.Services.Mediation.RewardedAd::add_OnUserRewarded(System.EventHandler`1<Unity.Services.Mediation.RewardEventArgs>)
extern void RewardedAd_add_OnUserRewarded_mFFF41135E1C4224A06EDD5D091E9B9135DD1921B (void);
// 0x0000007E System.Void Unity.Services.Mediation.RewardedAd::remove_OnUserRewarded(System.EventHandler`1<Unity.Services.Mediation.RewardEventArgs>)
extern void RewardedAd_remove_OnUserRewarded_mDB78B154AF926568A690912C105983A6A0658C3E (void);
// 0x0000007F Unity.Services.Mediation.AdState Unity.Services.Mediation.RewardedAd::get_AdState()
extern void RewardedAd_get_AdState_mF250D73BFC7EB65AC1B93BC08A3A67B12F7EF489 (void);
// 0x00000080 System.String Unity.Services.Mediation.RewardedAd::get_AdUnitId()
extern void RewardedAd_get_AdUnitId_m8A1D4226D5EB139C4FA38C4FB9435E9CFDE3D59B (void);
// 0x00000081 System.Void Unity.Services.Mediation.RewardedAd::.ctor(System.String)
extern void RewardedAd__ctor_mCC82AEC193E86599C5D9C167D78551DDD3331490 (void);
// 0x00000082 System.Void Unity.Services.Mediation.RewardedAd::.ctor(Unity.Services.Mediation.IRewardedAd)
extern void RewardedAd__ctor_mCF624E498EE973D9F140846F15D5FC092F312E92 (void);
// 0x00000083 System.Void Unity.Services.Mediation.RewardedAd::InitializeCallbacks()
extern void RewardedAd_InitializeCallbacks_m85519E318CE6A47AD7BA16D27F419662C2660EC5 (void);
// 0x00000084 System.Void Unity.Services.Mediation.RewardedAd::Load()
extern void RewardedAd_Load_m2C7D2DE31AA2BEEA41F8A93376AE2487D0D16FCD (void);
// 0x00000085 System.Void Unity.Services.Mediation.RewardedAd::Show(Unity.Services.Mediation.RewardedAdShowOptions)
extern void RewardedAd_Show_m581F223FCED27DD1A58040358751C5B7416D092A (void);
// 0x00000086 System.Void Unity.Services.Mediation.RewardedAd::Dispose()
extern void RewardedAd_Dispose_m845EEE51DEB5F2E2FFE582197763E565D40975F6 (void);
// 0x00000087 System.Void Unity.Services.Mediation.RewardedAd::<InitializeCallbacks>b__28_0(System.Object,System.EventArgs)
extern void RewardedAd_U3CInitializeCallbacksU3Eb__28_0_mF30E8B68279C389EF4391795742DB5E5BB490906 (void);
// 0x00000088 System.Void Unity.Services.Mediation.RewardedAd::<InitializeCallbacks>b__28_1(System.Object,Unity.Services.Mediation.LoadErrorEventArgs)
extern void RewardedAd_U3CInitializeCallbacksU3Eb__28_1_mB0F88A60340C3E178670E72333F1FE3F23BCBA18 (void);
// 0x00000089 System.Void Unity.Services.Mediation.RewardedAd::<InitializeCallbacks>b__28_2(System.Object,System.EventArgs)
extern void RewardedAd_U3CInitializeCallbacksU3Eb__28_2_m708DAB33F00D327AD9AFFEC56997DC2B494C20E4 (void);
// 0x0000008A System.Void Unity.Services.Mediation.RewardedAd::<InitializeCallbacks>b__28_3(System.Object,System.EventArgs)
extern void RewardedAd_U3CInitializeCallbacksU3Eb__28_3_m8819E960332421A4CD22E9AD99F7ADE3C0183B6E (void);
// 0x0000008B System.Void Unity.Services.Mediation.RewardedAd::<InitializeCallbacks>b__28_4(System.Object,System.EventArgs)
extern void RewardedAd_U3CInitializeCallbacksU3Eb__28_4_m8BB36361C49B2551CD9ED097700BACE898E6C887 (void);
// 0x0000008C System.Void Unity.Services.Mediation.RewardedAd::<InitializeCallbacks>b__28_5(System.Object,Unity.Services.Mediation.ShowErrorEventArgs)
extern void RewardedAd_U3CInitializeCallbacksU3Eb__28_5_m2D5EA4378A25F8348834CA122022AD2065564E01 (void);
// 0x0000008D System.Void Unity.Services.Mediation.RewardedAd::<InitializeCallbacks>b__28_6(System.Object,Unity.Services.Mediation.RewardEventArgs)
extern void RewardedAd_U3CInitializeCallbacksU3Eb__28_6_mDBF4A5C30DF9CE2EEBE8E9BED75116BD6B55BC0D (void);
// 0x0000008E System.String Unity.Services.Mediation.RewardEventArgs::get_Type()
extern void RewardEventArgs_get_Type_m679CBD4BF79412151C61B70855F67FB0554037B6 (void);
// 0x0000008F System.String Unity.Services.Mediation.RewardEventArgs::get_Amount()
extern void RewardEventArgs_get_Amount_mC7D34157ACDDF72C9A7A07F45238A9593B3FCCA0 (void);
// 0x00000090 System.Void Unity.Services.Mediation.RewardEventArgs::.ctor(System.String,System.String)
extern void RewardEventArgs__ctor_m4A6636169DCE7F4A6F721592C1C9AADD4DABD263 (void);
// 0x00000091 Unity.Services.Mediation.ShowError Unity.Services.Mediation.ShowErrorEventArgs::get_Error()
extern void ShowErrorEventArgs_get_Error_m78371018E5432EFA86406C6DCE2D64B902559F93 (void);
// 0x00000092 System.String Unity.Services.Mediation.ShowErrorEventArgs::get_Message()
extern void ShowErrorEventArgs_get_Message_mF4EDEFAEFAF44993AA63D946402E1C6EF027EAE7 (void);
// 0x00000093 System.Void Unity.Services.Mediation.ShowErrorEventArgs::.ctor(Unity.Services.Mediation.ShowError,System.String)
extern void ShowErrorEventArgs__ctor_m1EC5FD976754874A5386644656D2B98B55E75B42 (void);
// 0x00000094 System.Void Unity.Services.Mediation.Platform.IExternallyInvokableEventPublisher::InvokeOnImpressionEvent(System.Object,Unity.Services.Mediation.ImpressionEventArgs)
// 0x00000095 System.Void Unity.Services.Mediation.Platform.IosDataPrivacy::.ctor()
extern void IosDataPrivacy__ctor_m9F16BA65C610ADFCBC89FF03672164773BE87388 (void);
// 0x00000096 System.Void Unity.Services.Mediation.Platform.IosDataPrivacy::Dispose()
extern void IosDataPrivacy_Dispose_m2FD474646435BA74CFDC4C1230E71060B4B4386A (void);
// 0x00000097 System.Void Unity.Services.Mediation.Platform.IosDataPrivacy::Finalize()
extern void IosDataPrivacy_Finalize_m7E5707C9F9DA68F9B7CA2B83D1CCF29091555F98 (void);
// 0x00000098 System.Void Unity.Services.Mediation.Platform.IosDataPrivacy::UserGaveConsent(Unity.Services.Mediation.ConsentStatus,Unity.Services.Mediation.DataPrivacyLaw)
extern void IosDataPrivacy_UserGaveConsent_mD0E624D543D992A0D50C8915766C9911CF12B327 (void);
// 0x00000099 Unity.Services.Mediation.ConsentStatus Unity.Services.Mediation.Platform.IosDataPrivacy::GetConsentStatusForLaw(Unity.Services.Mediation.DataPrivacyLaw)
extern void IosDataPrivacy_GetConsentStatusForLaw_m1FE4981F9F32A196E3CB30F24A280353FF4457D4 (void);
// 0x0000009A System.Void Unity.Services.Mediation.Platform.IosDataPrivacy::UnityDataPrivacyUserGaveConsent(Unity.Services.Mediation.ConsentStatus,Unity.Services.Mediation.DataPrivacyLaw)
extern void IosDataPrivacy_UnityDataPrivacyUserGaveConsent_m6F1BD149EB2A1171C8637A32F5DB9E10AECFB37A (void);
// 0x0000009B Unity.Services.Mediation.ConsentStatus Unity.Services.Mediation.Platform.IosDataPrivacy::UnityDataPrivacyGetConsentStatusForLaw(Unity.Services.Mediation.DataPrivacyLaw)
extern void IosDataPrivacy_UnityDataPrivacyGetConsentStatusForLaw_mA810DE8839853CE437FEDC6105A5D3FFD4F3B972 (void);
// 0x0000009C Unity.Services.Mediation.ImpressionData Unity.Services.Mediation.Platform.IosImpressionData::ToImpressionData()
extern void IosImpressionData_ToImpressionData_mB35501F0FFA27812065D887AC7D11DF9FC1F5FC7 (void);
// 0x0000009D System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher::add_OnImpression(System.EventHandler`1<Unity.Services.Mediation.ImpressionEventArgs>)
extern void IosImpressionEventPublisher_add_OnImpression_m73E0E15E5D43BF65D0981CC73D29C4605C38F914 (void);
// 0x0000009E System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher::remove_OnImpression(System.EventHandler`1<Unity.Services.Mediation.ImpressionEventArgs>)
extern void IosImpressionEventPublisher_remove_OnImpression_mCF82B29A6A8B6951A7DC43E4097441D5F091ED6E (void);
// 0x0000009F System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher::.ctor()
extern void IosImpressionEventPublisher__ctor_m78E9EF783903C7CD6E20FBBE6476F30FDA626333 (void);
// 0x000000A0 System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher::Dispose()
extern void IosImpressionEventPublisher_Dispose_mECD7F6D3547F8DF54580B44EB13A3788D1377BAE (void);
// 0x000000A1 System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher::Finalize()
extern void IosImpressionEventPublisher_Finalize_m8F9936291DE76BF4095D673AD1C80A010BA0A7AB (void);
// 0x000000A2 System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher::InvokeImpressionEvent(Unity.Services.Mediation.ImpressionEventArgs)
extern void IosImpressionEventPublisher_InvokeImpressionEvent_mC38C018262A3F1B48F601E6CE322C8F6D3A5FABE (void);
// 0x000000A3 System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher::ImpressionEventPublisherSubscribe(System.IntPtr)
extern void IosImpressionEventPublisher_ImpressionEventPublisherSubscribe_mDAB67B9FC81B5077FD95230C2B3F41AE186312A8 (void);
// 0x000000A4 System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher::ImpressionEventPublisherUnsubscribe(System.IntPtr)
extern void IosImpressionEventPublisher_ImpressionEventPublisherUnsubscribe_m115BBBED68BD2F7B01CD60C9B9193D5CE8948A84 (void);
// 0x000000A5 System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m155958F220B66E64C7BC1AE58A3F43EB692EFAF8 (void);
// 0x000000A6 System.Void Unity.Services.Mediation.Platform.IosImpressionEventPublisher/<>c__DisplayClass8_0::<InvokeImpressionEvent>b__0(System.Object)
extern void U3CU3Ec__DisplayClass8_0_U3CInvokeImpressionEventU3Eb__0_mDB6A07E8FCF4FDAAEC9B7AEDAF7DBD36A430F33B (void);
// 0x000000A7 System.Void Unity.Services.Mediation.Platform.IosImpressionListener::.ctor()
extern void IosImpressionListener__ctor_mD9B7A4F6749998BD36E8B8860D0B574E2FFB9C01 (void);
// 0x000000A8 System.Void Unity.Services.Mediation.Platform.IosImpressionListener::Dispose()
extern void IosImpressionListener_Dispose_mE28511CC8B5CD54FEB0F524473435BEDA89CF912 (void);
// 0x000000A9 System.Void Unity.Services.Mediation.Platform.IosImpressionListener::Finalize()
extern void IosImpressionListener_Finalize_mB64FD17F407CBEFA2977B987DCE0E43AC389E06D (void);
// 0x000000AA System.IntPtr Unity.Services.Mediation.Platform.IosImpressionListener::ImpressionDelegateCreate(Unity.Services.Mediation.Platform.IosImpressionListener/ImpressionCallback)
extern void IosImpressionListener_ImpressionDelegateCreate_m12C678077308DD06FD86C12289E4498A412956EE (void);
// 0x000000AB System.Void Unity.Services.Mediation.Platform.IosImpressionListener::ImpressionDelegateDestroy(System.IntPtr)
extern void IosImpressionListener_ImpressionDelegateDestroy_mB6A99C10A49224687FEFEDCC9E59E8941F00CE66 (void);
// 0x000000AC System.Void Unity.Services.Mediation.Platform.IosImpressionListener::Impression(System.String,System.IntPtr)
extern void IosImpressionListener_Impression_m14336805D817FC4964DB510431A42BDC6A2809DF (void);
// 0x000000AD System.Void Unity.Services.Mediation.Platform.IosImpressionListener/ImpressionCallback::.ctor(System.Object,System.IntPtr)
extern void ImpressionCallback__ctor_m0738353E05AB0F3DE39990244D0447A958FBB2D2 (void);
// 0x000000AE System.Void Unity.Services.Mediation.Platform.IosImpressionListener/ImpressionCallback::Invoke(System.String,System.IntPtr)
extern void ImpressionCallback_Invoke_m484EBAD8167D5F3B56104D594DFD4C47EC465609 (void);
// 0x000000AF System.IAsyncResult Unity.Services.Mediation.Platform.IosImpressionListener/ImpressionCallback::BeginInvoke(System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void ImpressionCallback_BeginInvoke_m47A818FE86F2CBC4DD3F2490F044CE04BDD43728 (void);
// 0x000000B0 System.Void Unity.Services.Mediation.Platform.IosImpressionListener/ImpressionCallback::EndInvoke(System.IAsyncResult)
extern void ImpressionCallback_EndInvoke_mF445F3EB34BFE7B88B961FA1A6C251C27EDB491B (void);
// 0x000000B1 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::add_OnLoaded(System.EventHandler)
extern void IosInterstitialAd_add_OnLoaded_m66102CA709A86FFFA81C16447B19BC6277328D56 (void);
// 0x000000B2 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::remove_OnLoaded(System.EventHandler)
extern void IosInterstitialAd_remove_OnLoaded_m13857FF6F762777993C01611E6736B474B51D1C4 (void);
// 0x000000B3 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::add_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
extern void IosInterstitialAd_add_OnFailedLoad_m50A0849A7B84C2E82D16F1B9D6BD15E13926B0D1 (void);
// 0x000000B4 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::remove_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
extern void IosInterstitialAd_remove_OnFailedLoad_mC2E2F4A7FEB96628C01D72AAD77FB8B3045D2858 (void);
// 0x000000B5 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::add_OnShowed(System.EventHandler)
extern void IosInterstitialAd_add_OnShowed_m148C9D04EC799C66EE3401A9A410AE004DC791D6 (void);
// 0x000000B6 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::remove_OnShowed(System.EventHandler)
extern void IosInterstitialAd_remove_OnShowed_mCE17820B9C1ECCA2C897A1327F83DD1B2B0340C9 (void);
// 0x000000B7 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::add_OnClicked(System.EventHandler)
extern void IosInterstitialAd_add_OnClicked_m529D21884191F0BE6FD4D2A50AB8E39037EC9237 (void);
// 0x000000B8 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::remove_OnClicked(System.EventHandler)
extern void IosInterstitialAd_remove_OnClicked_m0CC111021A8E1AA24534D5C7FFE2BEE026FB61A9 (void);
// 0x000000B9 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::add_OnClosed(System.EventHandler)
extern void IosInterstitialAd_add_OnClosed_mB5556BEA6EAFC72837AAC19B5DDBA9D553C4412E (void);
// 0x000000BA System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::remove_OnClosed(System.EventHandler)
extern void IosInterstitialAd_remove_OnClosed_m63FF2597484CB6937431C432845D485BFF618238 (void);
// 0x000000BB System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::add_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
extern void IosInterstitialAd_add_OnFailedShow_m91B5EB445DFD1DB946A45F2EAEC8A2F78A693897 (void);
// 0x000000BC System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::remove_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
extern void IosInterstitialAd_remove_OnFailedShow_m095FB7C1235D881681CD5A451975CE7B210C31FF (void);
// 0x000000BD Unity.Services.Mediation.AdState Unity.Services.Mediation.Platform.IosInterstitialAd::get_AdState()
extern void IosInterstitialAd_get_AdState_m9BE6D71225089821B1700291EC7B0B69717B8F22 (void);
// 0x000000BE System.String Unity.Services.Mediation.Platform.IosInterstitialAd::get_AdUnitId()
extern void IosInterstitialAd_get_AdUnitId_m4C199485F49DDE0C2CDC749ED84FE8A14132FCFD (void);
// 0x000000BF System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::.ctor(System.String)
extern void IosInterstitialAd__ctor_m2ED9867B3DCFE16AB729E315DD9CCB227B266887 (void);
// 0x000000C0 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::Load()
extern void IosInterstitialAd_Load_m922ADB2D2F5AC30AA15615D8F76442E67310B4E3 (void);
// 0x000000C1 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::Show()
extern void IosInterstitialAd_Show_mB8B9032C23EF32C432E559F93BD1C519C42060DE (void);
// 0x000000C2 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::Dispose()
extern void IosInterstitialAd_Dispose_m749A54E0B9E5427D074DD1529FDE3D0DF9843CAE (void);
// 0x000000C3 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::Finalize()
extern void IosInterstitialAd_Finalize_m2E3F44997CFA8F6158F4E8465352BD5D852E874F (void);
// 0x000000C4 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::InvokeLoadedEvent()
extern void IosInterstitialAd_InvokeLoadedEvent_m86E7BC99AE254A5842FEA080830CB0CC2902FC70 (void);
// 0x000000C5 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::InvokeFailedLoadEvent(Unity.Services.Mediation.LoadErrorEventArgs)
extern void IosInterstitialAd_InvokeFailedLoadEvent_m7D413B424DFB97386164657F0A6D2E0BF2578E95 (void);
// 0x000000C6 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::InvokeStartedEvent()
extern void IosInterstitialAd_InvokeStartedEvent_m0E94B35E368D465716C028634BBA0A2C9138BB79 (void);
// 0x000000C7 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::InvokeClickedEvent()
extern void IosInterstitialAd_InvokeClickedEvent_m95A3D8B9FA086593909DDD749BE623A657240DE5 (void);
// 0x000000C8 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::InvokeFinishedEvent()
extern void IosInterstitialAd_InvokeFinishedEvent_m7C38BD4379EAE0D4E8A780EF8D04C8F189D278D2 (void);
// 0x000000C9 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::InvokeFailedShowEvent(Unity.Services.Mediation.ShowErrorEventArgs)
extern void IosInterstitialAd_InvokeFailedShowEvent_m2F8A3B7D9C9BD07992158BE13C3B6AC21C3A23F0 (void);
// 0x000000CA System.IntPtr Unity.Services.Mediation.Platform.IosInterstitialAd::InterstitialAdCreate(System.String)
extern void IosInterstitialAd_InterstitialAdCreate_m195BEE56DEE11E096E485F242DCB370561ECC0CE (void);
// 0x000000CB System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::InterstitialAdLoad(System.IntPtr,System.IntPtr)
extern void IosInterstitialAd_InterstitialAdLoad_mE8858F8DFE0A3D2B0080A41A8DFBFA8F2831A052 (void);
// 0x000000CC System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::InterstitialAdShow(System.IntPtr,System.IntPtr)
extern void IosInterstitialAd_InterstitialAdShow_m9D77C2FC203DD19F9EF0E9BF1B34C0F4D77BA424 (void);
// 0x000000CD System.String Unity.Services.Mediation.Platform.IosInterstitialAd::InterstitialAdGetAdUnitId(System.IntPtr)
extern void IosInterstitialAd_InterstitialAdGetAdUnitId_m7C14AF20EE8D5BB5385520EB20B0A84C4173BE59 (void);
// 0x000000CE System.Int32 Unity.Services.Mediation.Platform.IosInterstitialAd::InterstitialAdGetAdState(System.IntPtr)
extern void IosInterstitialAd_InterstitialAdGetAdState_mE2F142651C6AD2904AD983F4FBF29FB9AA354FBC (void);
// 0x000000CF System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::<InvokeLoadedEvent>b__29_0(System.Object)
extern void IosInterstitialAd_U3CInvokeLoadedEventU3Eb__29_0_m6D3C456FD67BDEA25B0658C1AB7E3E26A9E82F95 (void);
// 0x000000D0 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::<InvokeStartedEvent>b__31_0(System.Object)
extern void IosInterstitialAd_U3CInvokeStartedEventU3Eb__31_0_mFF9B4EA93F7D368402DCA9575401CD217B54505B (void);
// 0x000000D1 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::<InvokeClickedEvent>b__32_0(System.Object)
extern void IosInterstitialAd_U3CInvokeClickedEventU3Eb__32_0_m0B6B7A6A56A22A776C5569FEF4D47CCC68DA20E0 (void);
// 0x000000D2 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd::<InvokeFinishedEvent>b__33_0(System.Object)
extern void IosInterstitialAd_U3CInvokeFinishedEventU3Eb__33_0_m303AE8C34EE49F18792B50BEC5269B8D8F3645FC (void);
// 0x000000D3 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd/<>c__DisplayClass30_0::.ctor()
extern void U3CU3Ec__DisplayClass30_0__ctor_m1C98F57CBACF9F292F90913CA0AE6BDB23402CA2 (void);
// 0x000000D4 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd/<>c__DisplayClass30_0::<InvokeFailedLoadEvent>b__0(System.Object)
extern void U3CU3Ec__DisplayClass30_0_U3CInvokeFailedLoadEventU3Eb__0_m548C983C2617339E4EE3D2DB0E3FAC3FA703A006 (void);
// 0x000000D5 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd/<>c__DisplayClass34_0::.ctor()
extern void U3CU3Ec__DisplayClass34_0__ctor_m43C29BFDC9485601A2EB6A0B50D532CA780CF11F (void);
// 0x000000D6 System.Void Unity.Services.Mediation.Platform.IosInterstitialAd/<>c__DisplayClass34_0::<InvokeFailedShowEvent>b__0(System.Object)
extern void U3CU3Ec__DisplayClass34_0_U3CInvokeFailedShowEventU3Eb__0_m8C58E4D8888892B1A4E1C65872A15A046CF7A151 (void);
// 0x000000D7 System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener::.ctor()
extern void IosInterstitialLoadListener__ctor_m6682B0ACF7831849979586466F6AE9949331C3B0 (void);
// 0x000000D8 System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener::Dispose()
extern void IosInterstitialLoadListener_Dispose_m4B9E5CAACDD61CC3A4E8720A486111A9116A369A (void);
// 0x000000D9 System.IntPtr Unity.Services.Mediation.Platform.IosInterstitialLoadListener::InterstitialAdLoadDelegateCreate(Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadSuccessCallback,Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadFailCallback)
extern void IosInterstitialLoadListener_InterstitialAdLoadDelegateCreate_mCA949D1699BE2820DD18A8F982DC61B4F9C3868B (void);
// 0x000000DA System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener::InterstitialAdLoadDelegateDestroy(System.IntPtr)
extern void IosInterstitialLoadListener_InterstitialAdLoadDelegateDestroy_m871D9326473BFD37E0BB47568EF7B7420869947B (void);
// 0x000000DB System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener::LoadSuccess(System.IntPtr)
extern void IosInterstitialLoadListener_LoadSuccess_m3B2162F7E66751B49E6FAF77224E835E2619CB72 (void);
// 0x000000DC System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener::LoadFail(System.IntPtr,System.Int32,System.String)
extern void IosInterstitialLoadListener_LoadFail_m560420328DC82443357172CB8AA472B89017296E (void);
// 0x000000DD System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadSuccessCallback::.ctor(System.Object,System.IntPtr)
extern void LoadSuccessCallback__ctor_mA51E3130276490B858A757E2BD59FDBC316B1C8B (void);
// 0x000000DE System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadSuccessCallback::Invoke(System.IntPtr)
extern void LoadSuccessCallback_Invoke_m2C5E6446B41F3E7737B1B58D50AE34D144F63D86 (void);
// 0x000000DF System.IAsyncResult Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadSuccessCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void LoadSuccessCallback_BeginInvoke_m050DB7D2446D5ECDE80D427DAF7F49838ADE14C8 (void);
// 0x000000E0 System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadSuccessCallback::EndInvoke(System.IAsyncResult)
extern void LoadSuccessCallback_EndInvoke_m8678D7CBBBA45D9EC41FB8908C7B95687AE2E00E (void);
// 0x000000E1 System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadFailCallback::.ctor(System.Object,System.IntPtr)
extern void LoadFailCallback__ctor_m911984A46EEBB90BD352FEC68EDAD9114B4529B2 (void);
// 0x000000E2 System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadFailCallback::Invoke(System.IntPtr,System.Int32,System.String)
extern void LoadFailCallback_Invoke_mA760935A93F8413D180027DD57C1086B4632B866 (void);
// 0x000000E3 System.IAsyncResult Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadFailCallback::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
extern void LoadFailCallback_BeginInvoke_m2E12134EB1E3EC3B4B86860EDF0860DBE673F047 (void);
// 0x000000E4 System.Void Unity.Services.Mediation.Platform.IosInterstitialLoadListener/LoadFailCallback::EndInvoke(System.IAsyncResult)
extern void LoadFailCallback_EndInvoke_m18EF5CAA93FC0A8FFC9E62FFE7478699E03E0FC2 (void);
// 0x000000E5 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener::.ctor()
extern void IosInterstitialShowListener__ctor_mCCA0A28D95C950AFCE413C77634EBA8893C4BD75 (void);
// 0x000000E6 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener::Dispose()
extern void IosInterstitialShowListener_Dispose_m6404F7500F8038094235DCD3881A3AAAFAFDE817 (void);
// 0x000000E7 System.IntPtr Unity.Services.Mediation.Platform.IosInterstitialShowListener::InterstitialAdShowDelegateCreate(Unity.Services.Mediation.Platform.IosInterstitialShowListener/StartedCallback,Unity.Services.Mediation.Platform.IosInterstitialShowListener/ClickedCallback,Unity.Services.Mediation.Platform.IosInterstitialShowListener/FinishedCallback,Unity.Services.Mediation.Platform.IosInterstitialShowListener/FailedShowCallback)
extern void IosInterstitialShowListener_InterstitialAdShowDelegateCreate_mE294BFCAE09F41ACD2B1F28FE0EC890849CE4B56 (void);
// 0x000000E8 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener::InterstitialAdShowDelegateDestroy(System.IntPtr)
extern void IosInterstitialShowListener_InterstitialAdShowDelegateDestroy_m9FBFB94A738376B809CE918236C0CB908E0F067A (void);
// 0x000000E9 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener::Started(System.IntPtr)
extern void IosInterstitialShowListener_Started_m74A8E59155E7F4B6E54C7E53BD9C843321056314 (void);
// 0x000000EA System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener::Clicked(System.IntPtr)
extern void IosInterstitialShowListener_Clicked_m0AEF652CD5169536F84BBA40991CF61BB2CD0D72 (void);
// 0x000000EB System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener::Finished(System.IntPtr)
extern void IosInterstitialShowListener_Finished_m57ADE89826039F1ECCFC834768D5C575BED4B38B (void);
// 0x000000EC System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener::FailedShow(System.IntPtr,System.Int32,System.String)
extern void IosInterstitialShowListener_FailedShow_m8CB913517836795A7938913666286F4976E120B5 (void);
// 0x000000ED System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/StartedCallback::.ctor(System.Object,System.IntPtr)
extern void StartedCallback__ctor_mA0DF577D8779EE911601CF7D1A45F5BEFA85A41C (void);
// 0x000000EE System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/StartedCallback::Invoke(System.IntPtr)
extern void StartedCallback_Invoke_m9196A1169A7D6A217F59E402A560FB462C6C91B1 (void);
// 0x000000EF System.IAsyncResult Unity.Services.Mediation.Platform.IosInterstitialShowListener/StartedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void StartedCallback_BeginInvoke_m718950BCB73B1B9368E8881086770CB072DE5C61 (void);
// 0x000000F0 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/StartedCallback::EndInvoke(System.IAsyncResult)
extern void StartedCallback_EndInvoke_m9729CE3E991F4382D9803100A0F936A968ECEC63 (void);
// 0x000000F1 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/ClickedCallback::.ctor(System.Object,System.IntPtr)
extern void ClickedCallback__ctor_m50269824FD0F245B3DFBEEF55047A89635AD1FCF (void);
// 0x000000F2 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/ClickedCallback::Invoke(System.IntPtr)
extern void ClickedCallback_Invoke_m2F236365016A5F20A0EE0F799B53F2C8C70AB983 (void);
// 0x000000F3 System.IAsyncResult Unity.Services.Mediation.Platform.IosInterstitialShowListener/ClickedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ClickedCallback_BeginInvoke_m8E5BEB91BFA95CC966FA812B132D94043E2EB974 (void);
// 0x000000F4 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/ClickedCallback::EndInvoke(System.IAsyncResult)
extern void ClickedCallback_EndInvoke_m72A7A273A2149F0655B3C4EB183449C0F95D79B0 (void);
// 0x000000F5 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/FinishedCallback::.ctor(System.Object,System.IntPtr)
extern void FinishedCallback__ctor_mA3581F795881A92DF2A783C0E5F5632EEC65F671 (void);
// 0x000000F6 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/FinishedCallback::Invoke(System.IntPtr)
extern void FinishedCallback_Invoke_m75DB9C0BCEF35BE0167AEAAA82C46E384617FD66 (void);
// 0x000000F7 System.IAsyncResult Unity.Services.Mediation.Platform.IosInterstitialShowListener/FinishedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void FinishedCallback_BeginInvoke_m78CF80F8F1F06E104369D94B31A2CE336738A9BF (void);
// 0x000000F8 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/FinishedCallback::EndInvoke(System.IAsyncResult)
extern void FinishedCallback_EndInvoke_mFE1822714641E89D182B326158B1EA3A146BE09E (void);
// 0x000000F9 System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/FailedShowCallback::.ctor(System.Object,System.IntPtr)
extern void FailedShowCallback__ctor_mF4A1E55A67106D2B71ED7366D1C6782F9DF72CA1 (void);
// 0x000000FA System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/FailedShowCallback::Invoke(System.IntPtr,System.Int32,System.String)
extern void FailedShowCallback_Invoke_m9EDDC7AA29787B343B7D0A500F4E62C21EC3C6AC (void);
// 0x000000FB System.IAsyncResult Unity.Services.Mediation.Platform.IosInterstitialShowListener/FailedShowCallback::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
extern void FailedShowCallback_BeginInvoke_mDD987D2486F409A66E93CE7FBE83F745482406A4 (void);
// 0x000000FC System.Void Unity.Services.Mediation.Platform.IosInterstitialShowListener/FailedShowCallback::EndInvoke(System.IAsyncResult)
extern void FailedShowCallback_EndInvoke_mB95D27EA5F5265EDC367045AADA69EBE84D6702C (void);
// 0x000000FD System.Void Unity.Services.Mediation.Platform.IosMediationService::add_OnInitializationComplete(System.EventHandler)
extern void IosMediationService_add_OnInitializationComplete_mC7A0732209C08BE706CBDD15DEF9C0AEC88B8A5D (void);
// 0x000000FE System.Void Unity.Services.Mediation.Platform.IosMediationService::remove_OnInitializationComplete(System.EventHandler)
extern void IosMediationService_remove_OnInitializationComplete_mCF1F1BDF4658C5785C4985B7A2A4C85F2385354E (void);
// 0x000000FF System.Void Unity.Services.Mediation.Platform.IosMediationService::add_OnInitializationFailed(System.EventHandler`1<Unity.Services.Mediation.InitializationErrorEventArgs>)
extern void IosMediationService_add_OnInitializationFailed_m52113EFE3F933E730F80FB610923725E89C24870 (void);
// 0x00000100 System.Void Unity.Services.Mediation.Platform.IosMediationService::remove_OnInitializationFailed(System.EventHandler`1<Unity.Services.Mediation.InitializationErrorEventArgs>)
extern void IosMediationService_remove_OnInitializationFailed_m51560FA70B204DEB8B68A346ADB600FC45C68F5D (void);
// 0x00000101 Unity.Services.Mediation.InitializationState Unity.Services.Mediation.Platform.IosMediationService::get_InitializationState()
extern void IosMediationService_get_InitializationState_m71146C5CE483FF5BF2AF7CCD3307B2AA94CEAF9C (void);
// 0x00000102 System.String Unity.Services.Mediation.Platform.IosMediationService::get_SdkVersion()
extern void IosMediationService_get_SdkVersion_m959A273C9BC278F31FCDB6AAC5E9750C0F056419 (void);
// 0x00000103 System.Void Unity.Services.Mediation.Platform.IosMediationService::Initialize(System.String,System.String)
extern void IosMediationService_Initialize_mF478FB2B7B4F3BBF8EAB794969B94FCF0C327AE8 (void);
// 0x00000104 System.String Unity.Services.Mediation.Platform.IosMediationService::UnityMediationGetSdkVersion()
extern void IosMediationService_UnityMediationGetSdkVersion_m0EFE10544A7835FB24BE93AC6203065EEC906E13 (void);
// 0x00000105 Unity.Services.Mediation.InitializationState Unity.Services.Mediation.Platform.IosMediationService::UnityMediationGetInitializationState()
extern void IosMediationService_UnityMediationGetInitializationState_m90AB8FE5BD7DC7711DB670691A039FF34C979183 (void);
// 0x00000106 System.Void Unity.Services.Mediation.Platform.IosMediationService::UnityMediationInitialize(System.String,Unity.Services.Mediation.Platform.IosMediationService/InitializeSuccessCallback,Unity.Services.Mediation.Platform.IosMediationService/InitializeFailCallback,System.String)
extern void IosMediationService_UnityMediationInitialize_m202D7025A7091284605555D715277673D023012E (void);
// 0x00000107 System.Void Unity.Services.Mediation.Platform.IosMediationService::InitializationSuccess()
extern void IosMediationService_InitializationSuccess_m3B29138D470738432E8BA2CA209B80E72DD62C67 (void);
// 0x00000108 System.Void Unity.Services.Mediation.Platform.IosMediationService::InitializationFailed(System.Int32,System.String)
extern void IosMediationService_InitializationFailed_mD516FFAD6A54A83BC975EABB00C512F36471A433 (void);
// 0x00000109 System.Void Unity.Services.Mediation.Platform.IosMediationService::.ctor()
extern void IosMediationService__ctor_m5C66C86C336E61FFDE3BA5E594E2D9DEB8011370 (void);
// 0x0000010A System.Void Unity.Services.Mediation.Platform.IosMediationService/InitializeSuccessCallback::.ctor(System.Object,System.IntPtr)
extern void InitializeSuccessCallback__ctor_mDA3B651DAA7E9C4AC89D6279355B3CB6940EA7EF (void);
// 0x0000010B System.Void Unity.Services.Mediation.Platform.IosMediationService/InitializeSuccessCallback::Invoke()
extern void InitializeSuccessCallback_Invoke_mFB763C99AC57B617F489153B66E85FACB21719E7 (void);
// 0x0000010C System.IAsyncResult Unity.Services.Mediation.Platform.IosMediationService/InitializeSuccessCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern void InitializeSuccessCallback_BeginInvoke_m47DDA8F693BC43716942B6324E8D07387CB007DC (void);
// 0x0000010D System.Void Unity.Services.Mediation.Platform.IosMediationService/InitializeSuccessCallback::EndInvoke(System.IAsyncResult)
extern void InitializeSuccessCallback_EndInvoke_m78CAD48EB2FDACA9B361FDA0885787741C0E8C6A (void);
// 0x0000010E System.Void Unity.Services.Mediation.Platform.IosMediationService/InitializeFailCallback::.ctor(System.Object,System.IntPtr)
extern void InitializeFailCallback__ctor_mFF8A68468380816C42453751E172D8276E6AABA1 (void);
// 0x0000010F System.Void Unity.Services.Mediation.Platform.IosMediationService/InitializeFailCallback::Invoke(System.Int32,System.String)
extern void InitializeFailCallback_Invoke_m928C641268B51B54A64304969AF6933C4AFA8687 (void);
// 0x00000110 System.IAsyncResult Unity.Services.Mediation.Platform.IosMediationService/InitializeFailCallback::BeginInvoke(System.Int32,System.String,System.AsyncCallback,System.Object)
extern void InitializeFailCallback_BeginInvoke_m148E996FFE2ECF9A31001A77E5FDB66BEF8DDDA4 (void);
// 0x00000111 System.Void Unity.Services.Mediation.Platform.IosMediationService/InitializeFailCallback::EndInvoke(System.IAsyncResult)
extern void InitializeFailCallback_EndInvoke_mA62C4A260815663F7A10BFCA69213AC9C666D88E (void);
// 0x00000112 System.Void Unity.Services.Mediation.Platform.IosMediationService/<>c::.cctor()
extern void U3CU3Ec__cctor_mD20227AA040C83E3FEE03482FCD1778D15F7D9E2 (void);
// 0x00000113 System.Void Unity.Services.Mediation.Platform.IosMediationService/<>c::.ctor()
extern void U3CU3Ec__ctor_m89A9EE1A6C0EC7633262E83DF45C8BF538974F8C (void);
// 0x00000114 System.Void Unity.Services.Mediation.Platform.IosMediationService/<>c::<InitializationSuccess>b__17_0(System.Object)
extern void U3CU3Ec_U3CInitializationSuccessU3Eb__17_0_m4886D8F566AAF86CD3FE53611B8EEA144C850B1F (void);
// 0x00000115 System.Void Unity.Services.Mediation.Platform.IosMediationService/<>c__DisplayClass18_0::.ctor()
extern void U3CU3Ec__DisplayClass18_0__ctor_mABE649B1E488089FEE407513DCAF27A1D6A3DC9B (void);
// 0x00000116 System.Void Unity.Services.Mediation.Platform.IosMediationService/<>c__DisplayClass18_0::<InitializationFailed>b__0(System.Object)
extern void U3CU3Ec__DisplayClass18_0_U3CInitializationFailedU3Eb__0_mA4EA55143BA32C2966743F888346DFFC2C101D73 (void);
// 0x00000117 System.Void Unity.Services.Mediation.Platform.IosNativeObject::.ctor(System.Boolean)
extern void IosNativeObject__ctor_m585739E4CD1CF58ACB4A7E581DC70DDC2C45498A (void);
// 0x00000118 System.IntPtr Unity.Services.Mediation.Platform.IosNativeObject::get_NativePtr()
extern void IosNativeObject_get_NativePtr_mF42A588B95EEE0A22FA7F37778C6C7F979042591 (void);
// 0x00000119 System.Void Unity.Services.Mediation.Platform.IosNativeObject::set_NativePtr(System.IntPtr)
extern void IosNativeObject_set_NativePtr_m3A96D6A4B1EC78A8624CFC9EF4AFEDFDD5615F16 (void);
// 0x0000011A T Unity.Services.Mediation.Platform.IosNativeObject::Get(System.IntPtr)
// 0x0000011B System.Void Unity.Services.Mediation.Platform.IosNativeObject::Dispose()
extern void IosNativeObject_Dispose_m7131A5272E7E4D7F1D7FB8E77A42F78F20419BC0 (void);
// 0x0000011C System.Boolean Unity.Services.Mediation.Platform.IosNativeObject::CheckDisposedAndLogError(System.String)
extern void IosNativeObject_CheckDisposedAndLogError_m1CA64BD98CCFB7F7A81E244520D3803347F3F9E3 (void);
// 0x0000011D System.Void Unity.Services.Mediation.Platform.IosNativeObject::BridgeTransfer(System.IntPtr)
extern void IosNativeObject_BridgeTransfer_mB2D5A5A1D96BDB6FF07896968DED65A28B70C2CE (void);
// 0x0000011E System.Void Unity.Services.Mediation.Platform.IosNativeObject::.cctor()
extern void IosNativeObject__cctor_mC61E9AC887EB8E2AE2239E181F66F3875E1CF66A (void);
// 0x0000011F System.Void Unity.Services.Mediation.Platform.IosRewardedAd::add_OnLoaded(System.EventHandler)
extern void IosRewardedAd_add_OnLoaded_m5D8CDE6F1DACE782B02160D8B9D5E2058F9C4E43 (void);
// 0x00000120 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::remove_OnLoaded(System.EventHandler)
extern void IosRewardedAd_remove_OnLoaded_mD09304767527DBEDFAA6BC1A6FAF39935D326196 (void);
// 0x00000121 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::add_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
extern void IosRewardedAd_add_OnFailedLoad_mBED7F550674C501455BEB7A2DCE93DBC60A901A0 (void);
// 0x00000122 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::remove_OnFailedLoad(System.EventHandler`1<Unity.Services.Mediation.LoadErrorEventArgs>)
extern void IosRewardedAd_remove_OnFailedLoad_m0FEA31E45337A2FD902372E5B09C3B3537C7EE5D (void);
// 0x00000123 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::add_OnShowed(System.EventHandler)
extern void IosRewardedAd_add_OnShowed_m918470186055DDA7C2F01B1E918840D602D95F1D (void);
// 0x00000124 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::remove_OnShowed(System.EventHandler)
extern void IosRewardedAd_remove_OnShowed_m943D24CC1D5E80787BF55CFB005CF68D228EDF51 (void);
// 0x00000125 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::add_OnClicked(System.EventHandler)
extern void IosRewardedAd_add_OnClicked_mABE5C6CCE4C4D4C60E35549CCE75197DAAE74F31 (void);
// 0x00000126 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::remove_OnClicked(System.EventHandler)
extern void IosRewardedAd_remove_OnClicked_mCE6B8C1EA0B91CB75F00D5E05D5BE4D9334BB937 (void);
// 0x00000127 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::add_OnClosed(System.EventHandler)
extern void IosRewardedAd_add_OnClosed_mEC6AA33C7BBD9156258B1F1581644055FA42D358 (void);
// 0x00000128 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::remove_OnClosed(System.EventHandler)
extern void IosRewardedAd_remove_OnClosed_m07896AEF416BD3ECDFBD2038AC2E92F342422DDB (void);
// 0x00000129 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::add_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
extern void IosRewardedAd_add_OnFailedShow_mE439804E25B4435BCD8F0E9F89B12559A210D3D0 (void);
// 0x0000012A System.Void Unity.Services.Mediation.Platform.IosRewardedAd::remove_OnFailedShow(System.EventHandler`1<Unity.Services.Mediation.ShowErrorEventArgs>)
extern void IosRewardedAd_remove_OnFailedShow_m98E3DEF8366957C635655B65D9A1D36805C25095 (void);
// 0x0000012B System.Void Unity.Services.Mediation.Platform.IosRewardedAd::add_OnUserRewarded(System.EventHandler`1<Unity.Services.Mediation.RewardEventArgs>)
extern void IosRewardedAd_add_OnUserRewarded_m370E2267EC7BC712F197DD6C47C4B70C36DDA304 (void);
// 0x0000012C System.Void Unity.Services.Mediation.Platform.IosRewardedAd::remove_OnUserRewarded(System.EventHandler`1<Unity.Services.Mediation.RewardEventArgs>)
extern void IosRewardedAd_remove_OnUserRewarded_mBD8AC2BA4145C1F10779F933DA2D64C2A2FBBA85 (void);
// 0x0000012D Unity.Services.Mediation.AdState Unity.Services.Mediation.Platform.IosRewardedAd::get_AdState()
extern void IosRewardedAd_get_AdState_m939D97C2120EFD611B7679BBC82667BF04CDDBEA (void);
// 0x0000012E System.String Unity.Services.Mediation.Platform.IosRewardedAd::get_AdUnitId()
extern void IosRewardedAd_get_AdUnitId_m16C2901CDE38BD46D1D605FA0DB499A1D77AD1E6 (void);
// 0x0000012F System.Void Unity.Services.Mediation.Platform.IosRewardedAd::.ctor(System.String)
extern void IosRewardedAd__ctor_m9B185B84E8AE6193DD2DE4ECD3B9BFE8033C138C (void);
// 0x00000130 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::Load()
extern void IosRewardedAd_Load_m863D6C0D41FB7FD58EC1C3174DFBBC5DC9964D26 (void);
// 0x00000131 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::Show(Unity.Services.Mediation.RewardedAdShowOptions)
extern void IosRewardedAd_Show_m42E8A4AD7AFC1D9534385D4B4CBEB4E039574966 (void);
// 0x00000132 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::Dispose()
extern void IosRewardedAd_Dispose_m2AF3526626100946F92E5F5EACBA174DD6FAA158 (void);
// 0x00000133 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::Finalize()
extern void IosRewardedAd_Finalize_m9AF2AE4C52C785FBB60FA5C676186645EF9C8CDF (void);
// 0x00000134 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::InvokeLoadedEvent()
extern void IosRewardedAd_InvokeLoadedEvent_m71AA7A43CC5E9D5684DFAF53A16CEC23ABA0DC77 (void);
// 0x00000135 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::InvokeFailedLoadEvent(Unity.Services.Mediation.LoadErrorEventArgs)
extern void IosRewardedAd_InvokeFailedLoadEvent_m57D2E61E17054B981050EEC9B9D43F7A3E5E4A0B (void);
// 0x00000136 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::InvokeShownEvent()
extern void IosRewardedAd_InvokeShownEvent_m22F4FA5834CFA86431AA9CCCFA4C24FA1B1F57B3 (void);
// 0x00000137 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::InvokeUserRewardedEvent(Unity.Services.Mediation.RewardEventArgs)
extern void IosRewardedAd_InvokeUserRewardedEvent_m724D00250FBFAAB339574235F5E1A3744B4CDFF3 (void);
// 0x00000138 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::InvokeClickedEvent()
extern void IosRewardedAd_InvokeClickedEvent_mDD6F64D7E318F1F3FA37FFD41A0B96398D43E96A (void);
// 0x00000139 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::InvokeClosedEvent()
extern void IosRewardedAd_InvokeClosedEvent_mFF08C5E72C7AC0B60857A2357B69C19FA5A7D37F (void);
// 0x0000013A System.Void Unity.Services.Mediation.Platform.IosRewardedAd::InvokeFailedShowEvent(Unity.Services.Mediation.ShowErrorEventArgs)
extern void IosRewardedAd_InvokeFailedShowEvent_m4E7E068493544F47D102A6462184980C4D62660C (void);
// 0x0000013B System.IntPtr Unity.Services.Mediation.Platform.IosRewardedAd::RewardedAdCreate(System.String)
extern void IosRewardedAd_RewardedAdCreate_mF6A37787B76B887122B2ACBAD519E7D05A5EA99A (void);
// 0x0000013C System.Void Unity.Services.Mediation.Platform.IosRewardedAd::RewardedAdLoad(System.IntPtr,System.IntPtr)
extern void IosRewardedAd_RewardedAdLoad_m1B2555498E7CB3A865C1D991B73BE8FBFD5E216B (void);
// 0x0000013D System.Void Unity.Services.Mediation.Platform.IosRewardedAd::RewardedAdShow(System.IntPtr,System.IntPtr,Unity.Services.Mediation.S2SRedeemData)
extern void IosRewardedAd_RewardedAdShow_m6DADF63B2AC225C2FA2C807D95AD8A2FBE7DF978 (void);
// 0x0000013E System.String Unity.Services.Mediation.Platform.IosRewardedAd::RewardedAdGetAdUnitId(System.IntPtr)
extern void IosRewardedAd_RewardedAdGetAdUnitId_mB90B3E389A38C4122540E6C199FFD63092890AA9 (void);
// 0x0000013F System.Int32 Unity.Services.Mediation.Platform.IosRewardedAd::RewardedAdGetAdState(System.IntPtr)
extern void IosRewardedAd_RewardedAdGetAdState_mB0AF953097A11ABB3061E46208BF6A2C753C2E51 (void);
// 0x00000140 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::<InvokeLoadedEvent>b__32_0(System.Object)
extern void IosRewardedAd_U3CInvokeLoadedEventU3Eb__32_0_mFCC43283B7AF0E4549EFE1D9DCFA4BA5F3A096B5 (void);
// 0x00000141 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::<InvokeShownEvent>b__34_0(System.Object)
extern void IosRewardedAd_U3CInvokeShownEventU3Eb__34_0_mCE3F1A2BD0F754B7945A02C59BEEDC1C1840ADFD (void);
// 0x00000142 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::<InvokeClickedEvent>b__36_0(System.Object)
extern void IosRewardedAd_U3CInvokeClickedEventU3Eb__36_0_m7350EDAEAEC7576269731D5641752BB51354C7D1 (void);
// 0x00000143 System.Void Unity.Services.Mediation.Platform.IosRewardedAd::<InvokeClosedEvent>b__37_0(System.Object)
extern void IosRewardedAd_U3CInvokeClosedEventU3Eb__37_0_m83E12FDA631444EF82BF14B436480157F7515585 (void);
// 0x00000144 System.Void Unity.Services.Mediation.Platform.IosRewardedAd/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_m3B10A9D1C2421426002F52CBAC37DBE2576A6D8B (void);
// 0x00000145 System.Void Unity.Services.Mediation.Platform.IosRewardedAd/<>c__DisplayClass33_0::<InvokeFailedLoadEvent>b__0(System.Object)
extern void U3CU3Ec__DisplayClass33_0_U3CInvokeFailedLoadEventU3Eb__0_m265B247B3E539FBBD5C77EDCE6073B0BBA59C70C (void);
// 0x00000146 System.Void Unity.Services.Mediation.Platform.IosRewardedAd/<>c__DisplayClass35_0::.ctor()
extern void U3CU3Ec__DisplayClass35_0__ctor_mC5BD97F3DBC8273871403D5658839670018812F9 (void);
// 0x00000147 System.Void Unity.Services.Mediation.Platform.IosRewardedAd/<>c__DisplayClass35_0::<InvokeUserRewardedEvent>b__0(System.Object)
extern void U3CU3Ec__DisplayClass35_0_U3CInvokeUserRewardedEventU3Eb__0_m2D5CB2B72546CA41815F4A11FE3474E3E50C3074 (void);
// 0x00000148 System.Void Unity.Services.Mediation.Platform.IosRewardedAd/<>c__DisplayClass38_0::.ctor()
extern void U3CU3Ec__DisplayClass38_0__ctor_mE288DD1FFC4F09D52B076645E9074A82F9D36EEC (void);
// 0x00000149 System.Void Unity.Services.Mediation.Platform.IosRewardedAd/<>c__DisplayClass38_0::<InvokeFailedShowEvent>b__0(System.Object)
extern void U3CU3Ec__DisplayClass38_0_U3CInvokeFailedShowEventU3Eb__0_mB395E591E20242F86CBE60794297FE3D9B09DE66 (void);
// 0x0000014A System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener::.ctor()
extern void IosRewardedLoadListener__ctor_m382DB6AA735369E1EC3C7B492B6697FC3704310C (void);
// 0x0000014B System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener::Dispose()
extern void IosRewardedLoadListener_Dispose_mCD3C4CCF6980376D322D91FAC39455A739B48CE7 (void);
// 0x0000014C System.IntPtr Unity.Services.Mediation.Platform.IosRewardedLoadListener::RewardedAdLoadDelegateCreate(Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadSuccessCallback,Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadFailCallback)
extern void IosRewardedLoadListener_RewardedAdLoadDelegateCreate_mA140AC9DB558023409EA41483C3BEC667224541A (void);
// 0x0000014D System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener::RewardedAdLoadDelegateDestroy(System.IntPtr)
extern void IosRewardedLoadListener_RewardedAdLoadDelegateDestroy_mE32742D8E30B6FA0F9EC34DBBF54F9B7635A1176 (void);
// 0x0000014E System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener::LoadSuccess(System.IntPtr)
extern void IosRewardedLoadListener_LoadSuccess_m905ADB16BAEC1AFA687E686F372A457031541763 (void);
// 0x0000014F System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener::LoadFail(System.IntPtr,System.Int32,System.String)
extern void IosRewardedLoadListener_LoadFail_m806FF60C7EBAEB50875D61D4B058AE7B8E57AE8A (void);
// 0x00000150 System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadSuccessCallback::.ctor(System.Object,System.IntPtr)
extern void LoadSuccessCallback__ctor_mAEFB52BEA0794029B11E437DD043817DB802E81C (void);
// 0x00000151 System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadSuccessCallback::Invoke(System.IntPtr)
extern void LoadSuccessCallback_Invoke_m4B72F74EC3F0A753AB454B5E52DBFD7E88687273 (void);
// 0x00000152 System.IAsyncResult Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadSuccessCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void LoadSuccessCallback_BeginInvoke_mBEE840628F22FE0EF3295203B51DBCD23BA115E2 (void);
// 0x00000153 System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadSuccessCallback::EndInvoke(System.IAsyncResult)
extern void LoadSuccessCallback_EndInvoke_mDC371B7344A692DDA6775289E1947AE18D70D264 (void);
// 0x00000154 System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadFailCallback::.ctor(System.Object,System.IntPtr)
extern void LoadFailCallback__ctor_mE00F284E3E1FA0EADA2F7A087732A23EF89400B6 (void);
// 0x00000155 System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadFailCallback::Invoke(System.IntPtr,System.Int32,System.String)
extern void LoadFailCallback_Invoke_m788A11311404965AA112CF659A2815FA0F3184E0 (void);
// 0x00000156 System.IAsyncResult Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadFailCallback::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
extern void LoadFailCallback_BeginInvoke_m45107D21C64F063C36091C9BF70FB237487BCCC1 (void);
// 0x00000157 System.Void Unity.Services.Mediation.Platform.IosRewardedLoadListener/LoadFailCallback::EndInvoke(System.IAsyncResult)
extern void LoadFailCallback_EndInvoke_m39E771C9DA57EE5ADD0EF95591816B141DB6FAEF (void);
// 0x00000158 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener::.ctor()
extern void IosRewardedShowListener__ctor_m344E5BAA0E170649D040F79E350D8049542CF48E (void);
// 0x00000159 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener::Dispose()
extern void IosRewardedShowListener_Dispose_m33307ABE895CF9D3DFA6FE96B390AEA51CB8043B (void);
// 0x0000015A System.IntPtr Unity.Services.Mediation.Platform.IosRewardedShowListener::RewardedAdShowDelegateCreate(Unity.Services.Mediation.Platform.IosRewardedShowListener/ShownCallback,Unity.Services.Mediation.Platform.IosRewardedShowListener/ClickedCallback,Unity.Services.Mediation.Platform.IosRewardedShowListener/ClosedCallback,Unity.Services.Mediation.Platform.IosRewardedShowListener/FailedShowCallback,Unity.Services.Mediation.Platform.IosRewardedShowListener/UserRewardedCallback)
extern void IosRewardedShowListener_RewardedAdShowDelegateCreate_m8A6D69B7EE43C9998F7FCC22C66FEFAC1F053FEF (void);
// 0x0000015B System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener::RewardedAdShowDelegateDestroy(System.IntPtr)
extern void IosRewardedShowListener_RewardedAdShowDelegateDestroy_m46F3FC9716136E92D95455D29CA09C18F8ADD9CA (void);
// 0x0000015C System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener::Shown(System.IntPtr)
extern void IosRewardedShowListener_Shown_m12AE718620DAA7D577059580AF1B855DA43FDD05 (void);
// 0x0000015D System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener::Clicked(System.IntPtr)
extern void IosRewardedShowListener_Clicked_m0654C1FF992EA80564FD66BB7BB1E8F0C4978682 (void);
// 0x0000015E System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener::Closed(System.IntPtr)
extern void IosRewardedShowListener_Closed_mBF6C3C9556BEE2066F838742425CDCE2506ED248 (void);
// 0x0000015F System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener::FailedShow(System.IntPtr,System.Int32,System.String)
extern void IosRewardedShowListener_FailedShow_m4B72450DB896C5CDBC866FD91A7D30D664CF1A7C (void);
// 0x00000160 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener::UserRewarded(System.IntPtr,System.String,System.String)
extern void IosRewardedShowListener_UserRewarded_mE055F696D61FE6BABD9EB88E9B2C669A6D2FB6BD (void);
// 0x00000161 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ShownCallback::.ctor(System.Object,System.IntPtr)
extern void ShownCallback__ctor_mEC40CD7A379A70A5A049A4E28424CD2E3F3C59C5 (void);
// 0x00000162 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ShownCallback::Invoke(System.IntPtr)
extern void ShownCallback_Invoke_mF66ED6B958DC27B6B768D4E08F799CB3CA6A3E63 (void);
// 0x00000163 System.IAsyncResult Unity.Services.Mediation.Platform.IosRewardedShowListener/ShownCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ShownCallback_BeginInvoke_m9D38B35BA1C4DCB47D04AF99DC3761531B4C009C (void);
// 0x00000164 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ShownCallback::EndInvoke(System.IAsyncResult)
extern void ShownCallback_EndInvoke_mF207BDA4E59B31E1AD0EF2B7ECB83D1BB7718622 (void);
// 0x00000165 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ClickedCallback::.ctor(System.Object,System.IntPtr)
extern void ClickedCallback__ctor_mD498366975C832E43E7801F6B1B4E3E6207BA603 (void);
// 0x00000166 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ClickedCallback::Invoke(System.IntPtr)
extern void ClickedCallback_Invoke_m01DB0809A4451759452F3A2A95E99EEDA39CC016 (void);
// 0x00000167 System.IAsyncResult Unity.Services.Mediation.Platform.IosRewardedShowListener/ClickedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ClickedCallback_BeginInvoke_mBE4B0A9ECFE7761BE5DF8BD5A035F9D6053790EF (void);
// 0x00000168 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ClickedCallback::EndInvoke(System.IAsyncResult)
extern void ClickedCallback_EndInvoke_mDC1C5ED66A69973473B4C0D3CC0C9AFF7EF26A78 (void);
// 0x00000169 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ClosedCallback::.ctor(System.Object,System.IntPtr)
extern void ClosedCallback__ctor_m0EE24A23ECDF6A29451F90C50E6D85F023C4B0C3 (void);
// 0x0000016A System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ClosedCallback::Invoke(System.IntPtr)
extern void ClosedCallback_Invoke_m5E5F522EEAE177C4FE3323B14A51DA9BCF3DD0E1 (void);
// 0x0000016B System.IAsyncResult Unity.Services.Mediation.Platform.IosRewardedShowListener/ClosedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ClosedCallback_BeginInvoke_m6CE79B1F40E907C95C7575DEFA83CDE2CEADB638 (void);
// 0x0000016C System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/ClosedCallback::EndInvoke(System.IAsyncResult)
extern void ClosedCallback_EndInvoke_m5127E27BBC6BFA1F04F524B86F1BED8B8B6E0DEB (void);
// 0x0000016D System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/FailedShowCallback::.ctor(System.Object,System.IntPtr)
extern void FailedShowCallback__ctor_m0C955B8A73C6BF5183D9E6C0409492C384459FCD (void);
// 0x0000016E System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/FailedShowCallback::Invoke(System.IntPtr,System.Int32,System.String)
extern void FailedShowCallback_Invoke_mBE57326A4742520F8CE0125986E03DA55DB39DEB (void);
// 0x0000016F System.IAsyncResult Unity.Services.Mediation.Platform.IosRewardedShowListener/FailedShowCallback::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
extern void FailedShowCallback_BeginInvoke_mF0CE2281C7664CDA1DC50BA7B3D006E5870CDC2A (void);
// 0x00000170 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/FailedShowCallback::EndInvoke(System.IAsyncResult)
extern void FailedShowCallback_EndInvoke_mD9885536A85D7E6575355D1BB8256BF949177B3D (void);
// 0x00000171 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/UserRewardedCallback::.ctor(System.Object,System.IntPtr)
extern void UserRewardedCallback__ctor_mFC9206E0B034807BA73DE079E51C440B07075913 (void);
// 0x00000172 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/UserRewardedCallback::Invoke(System.IntPtr,System.String,System.String)
extern void UserRewardedCallback_Invoke_m6B84CDDDD199DEFA8888748BCC3A9A4D24693EB8 (void);
// 0x00000173 System.IAsyncResult Unity.Services.Mediation.Platform.IosRewardedShowListener/UserRewardedCallback::BeginInvoke(System.IntPtr,System.String,System.String,System.AsyncCallback,System.Object)
extern void UserRewardedCallback_BeginInvoke_m8AEC5B953AD3D3DCA26A4CAE9255A0F32EE1F193 (void);
// 0x00000174 System.Void Unity.Services.Mediation.Platform.IosRewardedShowListener/UserRewardedCallback::EndInvoke(System.IAsyncResult)
extern void UserRewardedCallback_EndInvoke_m2C28F48C7DB9CD604DA818DB4891271290DCAD91 (void);
// 0x00000175 System.Void Unity.Services.Mediation.Platform.IPlatformMediationService::add_OnInitializationComplete(System.EventHandler)
// 0x00000176 System.Void Unity.Services.Mediation.Platform.IPlatformMediationService::remove_OnInitializationComplete(System.EventHandler)
// 0x00000177 System.Void Unity.Services.Mediation.Platform.IPlatformMediationService::add_OnInitializationFailed(System.EventHandler`1<Unity.Services.Mediation.InitializationErrorEventArgs>)
// 0x00000178 System.Void Unity.Services.Mediation.Platform.IPlatformMediationService::remove_OnInitializationFailed(System.EventHandler`1<Unity.Services.Mediation.InitializationErrorEventArgs>)
// 0x00000179 Unity.Services.Mediation.InitializationState Unity.Services.Mediation.Platform.IPlatformMediationService::get_InitializationState()
// 0x0000017A System.String Unity.Services.Mediation.Platform.IPlatformMediationService::get_SdkVersion()
// 0x0000017B System.Void Unity.Services.Mediation.Platform.IPlatformMediationService::Initialize(System.String,System.String)
// 0x0000017C System.Void Unity.Services.Mediation.Platform.ThreadUtil::Init()
extern void ThreadUtil_Init_m7A3BD04AC584D94AFE0F66E5065E3D5F2A76A5C3 (void);
// 0x0000017D System.Void Unity.Services.Mediation.Platform.ThreadUtil::Post(System.Threading.SendOrPostCallback,System.Object)
extern void ThreadUtil_Post_m8E0CEAFCD06EDD1A44BA93AF2FECCDDC1846421F (void);
// 0x0000017E System.Void Unity.Services.Mediation.Platform.ThreadUtil::Send(System.Threading.SendOrPostCallback,System.Object)
extern void ThreadUtil_Send_mC3AC5B5B0C8D48D4413D0DC6438C79A1FFFC0703 (void);
static Il2CppMethodPointer s_methodPointers[382] = 
{
	NULL,
	NULL,
	InitializationErrorEventArgs_get_Error_mA5F34C6453F7239A19BFFE9F92B34F4E9E255EF0,
	InitializationErrorEventArgs_get_Message_mD6AA82B0F10727F35F9AFC1A52CABCC1F435034D,
	InitializationErrorEventArgs__ctor_mE3C8B8C28B321053593AB98CC8258EB98CD9AE3D,
	MediationServiceImpl__ctor_m7CCA633363D0568B0093AD78E2D507158FF06A4D,
	MediationServiceImpl_Unity_Services_Mediation_IMediationServiceImpl_get_InitializationState_m883A047C0D1855284B01B8EE59F3B8F531D5D671,
	MediationServiceImpl_Unity_Services_Mediation_IMediationServiceImpl_Initialize_m6BA8E4C34E1843FC440786F86C8A13A069C7C061,
	MediationServiceImpl_HasRequestedInitialization_m19B12B6D7F0E5A396898594F9CFE00C277338E02,
	MediationServiceImpl_HasInitializationFailed_mC11EF21C81E712399D1ED2E4574493CD509E35FB,
	MediationServiceImpl_CreateInitialization_m45F503048DE063EA4948D2B1D608054BE066C4BE,
	MediationServiceImpl_InitializationComplete_mAA1D23AF17BD03003F12036C23D4603F3A3CFC5C,
	MediationServiceImpl_InitializationFailed_m81AD672912FC35D4A94A996CE660FE45C3A8621E,
	MediationServiceImpl_UnsubscribeEventHandlers_mEF685E2DD02C2207FBB04AACF591F853014B9922,
	MediationServiceImpl_CreateInterstitialAd_m37FAA5064872874DECAB2C82D578122A7326228B,
	MediationServiceImpl_CreateRewardedAd_m01D4CEB5C6447C8209AF838BE1B48F71B0BCF1EE,
	MediationServiceImpl_get_SdkVersion_m945F9D7F6BA8832E382ADDFA91ECC13FED6820CB,
	MediationServiceImpl_get_DataPrivacy_m30BF6B6B4F02171EF9BB5CE8F604C6EE83EB173D,
	MediationServiceImpl_get_ImpressionEventPublisher_m14E0ADB61995E66FFB7C939E2CF40E61099EDE17,
	MediationServiceInitializer_Register_m08794547D22FBC3C1309348AD06A5B952473B346,
	MediationServiceInitializer_Initialize_m62D298808739D93BA6189528BF0C4459CEFE305C,
	MediationServiceInitializer_Initialize_mD5C0CB5BF9628D8978A849B6278F64FCC648218A,
	MediationServiceInitializer__ctor_m78929116140A96951AE8DAFE4FAEA2704ED4EDBE,
	U3CInitializeU3Ed__2_MoveNext_mD06DA778D437EE9C2BD70EA500E9A24F3645465C,
	U3CInitializeU3Ed__2_SetStateMachine_mD39C1B75253C313A1D0FC60F2F57875C70DF806F,
	U3CInitializeU3Ed__3_MoveNext_m4F7B3C93AC9F5B0B3274FEF033B9F3F624D000C1,
	U3CInitializeU3Ed__3_SetStateMachine_m8B62B12EE19AA1AE5B13D23165F2AF18114FE88B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ImpressionData__ctor_m2CECE763AC0926A642B2DF8002F81BE0721ACECE,
	ImpressionEventArgs_get_AdUnitId_m063D3642424D74363F2261FA63DE8C24CB10C6E2,
	ImpressionEventArgs_get_ImpressionData_mC16185D0F7E353797CE0B047BF1EFF0246B6CEAF,
	ImpressionEventArgs__ctor_m1E0B5B69B333267F2B429EF1A253A05161D98F65,
	InitializationOptionsExtensions_get_GameIdKey_m46C12035919A90D80F6EAEE969A38B49CAC1215A,
	InitializationOptionsExtensions_SetGameId_m9C4E2792296EF2BACE0B65DD0D4F6E01321A63B3,
	InitializeFailedException__ctor_mD110AB9D4C59478D47CA8977029E3D7A3629C2D1,
	InterstitialAd_add_OnLoaded_m4F037C41080E3EA2BF1EEDA32200E2BEC910779B,
	InterstitialAd_remove_OnLoaded_m7B022B3057CD0C964140ED61B128C35AFE47D389,
	InterstitialAd_add_OnFailedLoad_mBC3F0594B7A5DCF95E23999D65A68D0D40AB5E22,
	InterstitialAd_remove_OnFailedLoad_m3F2C86CDB23C37595953833D1AD8FD15F7045A37,
	InterstitialAd_add_OnShowed_m83F8B3CC1AFCB6E0F3698084A889DBC9ADC13E2A,
	InterstitialAd_remove_OnShowed_mF32C923A103CF2E48A9833F423BBA8C868949EC3,
	InterstitialAd_add_OnClicked_mF532791E20910025E9CD95837B8F6C3FA25F92A1,
	InterstitialAd_remove_OnClicked_m86061DD9792B1F0EA7730310B1604A770EDB7F8C,
	InterstitialAd_add_OnClosed_mA2D45F2371205E54C7396BFA1FEFBA2B783B1CC4,
	InterstitialAd_remove_OnClosed_m1AC107C48376B532254749B6EDE2148F2DF0C9C8,
	InterstitialAd_add_OnFailedShow_mA27CF72CA7C02A14BFADF78F797EBDA24D4A2091,
	InterstitialAd_remove_OnFailedShow_m48DBF589F179F66DE09392EE023568E1CD019052,
	InterstitialAd_get_AdState_m2EB31D8BC3314BD8176F86AD09E737B6CA1135FA,
	InterstitialAd_get_AdUnitId_m3A5C2708F2B2F5485EA15BC4947C981EB36FC3A4,
	InterstitialAd__ctor_mEC7E42044879271D78F8C9216DCCFFA58C5B0AA4,
	InterstitialAd__ctor_m31F0AF99FDF50A22426972E9F83C74EAAEC08C96,
	InterstitialAd_InitializeCallbacks_mAFC11D512E67BC745006EC2448C4F08D6C85FF78,
	InterstitialAd_Load_m899E7191562F69F56A96CF2BF849E1F0EF7B5DB8,
	InterstitialAd_Show_mA85EED4F224D567B66476900CE328BC4C79722DC,
	InterstitialAd_Dispose_mF78BB99B691F5F7350B8BA1E51FF0BCD9D0754F9,
	InterstitialAd_U3CInitializeCallbacksU3Eb__25_0_m2F302BCAF962F2AC133F284D352E08C3D1DB3469,
	InterstitialAd_U3CInitializeCallbacksU3Eb__25_1_mDC2DBE27E5D98F6DF9C7340C1AE6999D0E5E59A0,
	InterstitialAd_U3CInitializeCallbacksU3Eb__25_2_m23FE522D23834F0722637BA2039FE8488306485C,
	InterstitialAd_U3CInitializeCallbacksU3Eb__25_3_m2FB42A354D6C0580CDDCCA86DF4B86004BDBED1A,
	InterstitialAd_U3CInitializeCallbacksU3Eb__25_4_m0A1F57A6870D03268B138B472499D14F234688D7,
	InterstitialAd_U3CInitializeCallbacksU3Eb__25_5_m0DD7153F8B06644D11348E4C47A83B47FBAEF5DC,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RewardedAdShowOptions_get_S2SData_mA9FF2F4761662A798B08FE31DBE275120387A48E,
	RewardedAdShowOptions_set_S2SData_m7A9A1F950E02D0601828F9C033E474D436C63A27,
	RewardedAdShowOptions__ctor_mC79ABB051D1C3E37FFE97A93D42A27A2529EA795,
	LoadErrorEventArgs_get_Error_mB83C93BF1D23944E0C9654C9A4FEF15F7DD80539,
	LoadErrorEventArgs_get_Message_mD52A147C6FD416A44E6B9BDA871DD7CDCFDBBCC5,
	LoadErrorEventArgs__ctor_mCA8295AEA2D0C5DA3E6EF5C441A346FA61E2C2F3,
	MediationService_get_Instance_mC88D52B1DC403D79ACB4336F89154D6C642B66F6,
	MediationService_get_InitializationState_m62626C59BD88FCBC09D45DC47F0BC037AA5FA22B,
	MediationService_Initialize_mFAA290C9B8DBBE5A9A969DA13B10E54D4C030F9A,
	RewardedAd_add_OnLoaded_m41B6B0A94D81BA08D7BB4602AAFFFC6264DA3EAD,
	RewardedAd_remove_OnLoaded_m5747FBB9236E0C79D8312E8DDBB221FE79462008,
	RewardedAd_add_OnFailedLoad_m236498AFE276FBA5B2765888BF042070C3098B8F,
	RewardedAd_remove_OnFailedLoad_mB794FA8C6C2888F5320432A46AC02A0941142CA1,
	RewardedAd_add_OnShowed_m6B36A6814A02AF826250C27B54A67DC3A147FA81,
	RewardedAd_remove_OnShowed_mD79ADB2B572B50BD94DD7261EF9EE8CAB7E8C8FA,
	RewardedAd_add_OnClicked_m09906E7D464BEC2C8795FDCF7FE23126563DA862,
	RewardedAd_remove_OnClicked_mA9E5C7F4A071EDD09D21757ED812E0129035B9A0,
	RewardedAd_add_OnClosed_m83FC45D38F732EEF23EC1449DA250AE4A56E3BE7,
	RewardedAd_remove_OnClosed_m928A1E2C54A7495D55CD339DAE2DE2E4EAF8C67C,
	RewardedAd_add_OnFailedShow_m79C01C7CC172ABADB92621A3D229DC386789F287,
	RewardedAd_remove_OnFailedShow_m524E9C38C16CFBD5A8C53AD6ED677B05316EBE37,
	RewardedAd_add_OnUserRewarded_mFFF41135E1C4224A06EDD5D091E9B9135DD1921B,
	RewardedAd_remove_OnUserRewarded_mDB78B154AF926568A690912C105983A6A0658C3E,
	RewardedAd_get_AdState_mF250D73BFC7EB65AC1B93BC08A3A67B12F7EF489,
	RewardedAd_get_AdUnitId_m8A1D4226D5EB139C4FA38C4FB9435E9CFDE3D59B,
	RewardedAd__ctor_mCC82AEC193E86599C5D9C167D78551DDD3331490,
	RewardedAd__ctor_mCF624E498EE973D9F140846F15D5FC092F312E92,
	RewardedAd_InitializeCallbacks_m85519E318CE6A47AD7BA16D27F419662C2660EC5,
	RewardedAd_Load_m2C7D2DE31AA2BEEA41F8A93376AE2487D0D16FCD,
	RewardedAd_Show_m581F223FCED27DD1A58040358751C5B7416D092A,
	RewardedAd_Dispose_m845EEE51DEB5F2E2FFE582197763E565D40975F6,
	RewardedAd_U3CInitializeCallbacksU3Eb__28_0_mF30E8B68279C389EF4391795742DB5E5BB490906,
	RewardedAd_U3CInitializeCallbacksU3Eb__28_1_mB0F88A60340C3E178670E72333F1FE3F23BCBA18,
	RewardedAd_U3CInitializeCallbacksU3Eb__28_2_m708DAB33F00D327AD9AFFEC56997DC2B494C20E4,
	RewardedAd_U3CInitializeCallbacksU3Eb__28_3_m8819E960332421A4CD22E9AD99F7ADE3C0183B6E,
	RewardedAd_U3CInitializeCallbacksU3Eb__28_4_m8BB36361C49B2551CD9ED097700BACE898E6C887,
	RewardedAd_U3CInitializeCallbacksU3Eb__28_5_m2D5EA4378A25F8348834CA122022AD2065564E01,
	RewardedAd_U3CInitializeCallbacksU3Eb__28_6_mDBF4A5C30DF9CE2EEBE8E9BED75116BD6B55BC0D,
	RewardEventArgs_get_Type_m679CBD4BF79412151C61B70855F67FB0554037B6,
	RewardEventArgs_get_Amount_mC7D34157ACDDF72C9A7A07F45238A9593B3FCCA0,
	RewardEventArgs__ctor_m4A6636169DCE7F4A6F721592C1C9AADD4DABD263,
	ShowErrorEventArgs_get_Error_m78371018E5432EFA86406C6DCE2D64B902559F93,
	ShowErrorEventArgs_get_Message_mF4EDEFAEFAF44993AA63D946402E1C6EF027EAE7,
	ShowErrorEventArgs__ctor_m1EC5FD976754874A5386644656D2B98B55E75B42,
	NULL,
	IosDataPrivacy__ctor_m9F16BA65C610ADFCBC89FF03672164773BE87388,
	IosDataPrivacy_Dispose_m2FD474646435BA74CFDC4C1230E71060B4B4386A,
	IosDataPrivacy_Finalize_m7E5707C9F9DA68F9B7CA2B83D1CCF29091555F98,
	IosDataPrivacy_UserGaveConsent_mD0E624D543D992A0D50C8915766C9911CF12B327,
	IosDataPrivacy_GetConsentStatusForLaw_m1FE4981F9F32A196E3CB30F24A280353FF4457D4,
	IosDataPrivacy_UnityDataPrivacyUserGaveConsent_m6F1BD149EB2A1171C8637A32F5DB9E10AECFB37A,
	IosDataPrivacy_UnityDataPrivacyGetConsentStatusForLaw_mA810DE8839853CE437FEDC6105A5D3FFD4F3B972,
	IosImpressionData_ToImpressionData_mB35501F0FFA27812065D887AC7D11DF9FC1F5FC7,
	IosImpressionEventPublisher_add_OnImpression_m73E0E15E5D43BF65D0981CC73D29C4605C38F914,
	IosImpressionEventPublisher_remove_OnImpression_mCF82B29A6A8B6951A7DC43E4097441D5F091ED6E,
	IosImpressionEventPublisher__ctor_m78E9EF783903C7CD6E20FBBE6476F30FDA626333,
	IosImpressionEventPublisher_Dispose_mECD7F6D3547F8DF54580B44EB13A3788D1377BAE,
	IosImpressionEventPublisher_Finalize_m8F9936291DE76BF4095D673AD1C80A010BA0A7AB,
	IosImpressionEventPublisher_InvokeImpressionEvent_mC38C018262A3F1B48F601E6CE322C8F6D3A5FABE,
	IosImpressionEventPublisher_ImpressionEventPublisherSubscribe_mDAB67B9FC81B5077FD95230C2B3F41AE186312A8,
	IosImpressionEventPublisher_ImpressionEventPublisherUnsubscribe_m115BBBED68BD2F7B01CD60C9B9193D5CE8948A84,
	U3CU3Ec__DisplayClass8_0__ctor_m155958F220B66E64C7BC1AE58A3F43EB692EFAF8,
	U3CU3Ec__DisplayClass8_0_U3CInvokeImpressionEventU3Eb__0_mDB6A07E8FCF4FDAAEC9B7AEDAF7DBD36A430F33B,
	IosImpressionListener__ctor_mD9B7A4F6749998BD36E8B8860D0B574E2FFB9C01,
	IosImpressionListener_Dispose_mE28511CC8B5CD54FEB0F524473435BEDA89CF912,
	IosImpressionListener_Finalize_mB64FD17F407CBEFA2977B987DCE0E43AC389E06D,
	IosImpressionListener_ImpressionDelegateCreate_m12C678077308DD06FD86C12289E4498A412956EE,
	IosImpressionListener_ImpressionDelegateDestroy_mB6A99C10A49224687FEFEDCC9E59E8941F00CE66,
	IosImpressionListener_Impression_m14336805D817FC4964DB510431A42BDC6A2809DF,
	ImpressionCallback__ctor_m0738353E05AB0F3DE39990244D0447A958FBB2D2,
	ImpressionCallback_Invoke_m484EBAD8167D5F3B56104D594DFD4C47EC465609,
	ImpressionCallback_BeginInvoke_m47A818FE86F2CBC4DD3F2490F044CE04BDD43728,
	ImpressionCallback_EndInvoke_mF445F3EB34BFE7B88B961FA1A6C251C27EDB491B,
	IosInterstitialAd_add_OnLoaded_m66102CA709A86FFFA81C16447B19BC6277328D56,
	IosInterstitialAd_remove_OnLoaded_m13857FF6F762777993C01611E6736B474B51D1C4,
	IosInterstitialAd_add_OnFailedLoad_m50A0849A7B84C2E82D16F1B9D6BD15E13926B0D1,
	IosInterstitialAd_remove_OnFailedLoad_mC2E2F4A7FEB96628C01D72AAD77FB8B3045D2858,
	IosInterstitialAd_add_OnShowed_m148C9D04EC799C66EE3401A9A410AE004DC791D6,
	IosInterstitialAd_remove_OnShowed_mCE17820B9C1ECCA2C897A1327F83DD1B2B0340C9,
	IosInterstitialAd_add_OnClicked_m529D21884191F0BE6FD4D2A50AB8E39037EC9237,
	IosInterstitialAd_remove_OnClicked_m0CC111021A8E1AA24534D5C7FFE2BEE026FB61A9,
	IosInterstitialAd_add_OnClosed_mB5556BEA6EAFC72837AAC19B5DDBA9D553C4412E,
	IosInterstitialAd_remove_OnClosed_m63FF2597484CB6937431C432845D485BFF618238,
	IosInterstitialAd_add_OnFailedShow_m91B5EB445DFD1DB946A45F2EAEC8A2F78A693897,
	IosInterstitialAd_remove_OnFailedShow_m095FB7C1235D881681CD5A451975CE7B210C31FF,
	IosInterstitialAd_get_AdState_m9BE6D71225089821B1700291EC7B0B69717B8F22,
	IosInterstitialAd_get_AdUnitId_m4C199485F49DDE0C2CDC749ED84FE8A14132FCFD,
	IosInterstitialAd__ctor_m2ED9867B3DCFE16AB729E315DD9CCB227B266887,
	IosInterstitialAd_Load_m922ADB2D2F5AC30AA15615D8F76442E67310B4E3,
	IosInterstitialAd_Show_mB8B9032C23EF32C432E559F93BD1C519C42060DE,
	IosInterstitialAd_Dispose_m749A54E0B9E5427D074DD1529FDE3D0DF9843CAE,
	IosInterstitialAd_Finalize_m2E3F44997CFA8F6158F4E8465352BD5D852E874F,
	IosInterstitialAd_InvokeLoadedEvent_m86E7BC99AE254A5842FEA080830CB0CC2902FC70,
	IosInterstitialAd_InvokeFailedLoadEvent_m7D413B424DFB97386164657F0A6D2E0BF2578E95,
	IosInterstitialAd_InvokeStartedEvent_m0E94B35E368D465716C028634BBA0A2C9138BB79,
	IosInterstitialAd_InvokeClickedEvent_m95A3D8B9FA086593909DDD749BE623A657240DE5,
	IosInterstitialAd_InvokeFinishedEvent_m7C38BD4379EAE0D4E8A780EF8D04C8F189D278D2,
	IosInterstitialAd_InvokeFailedShowEvent_m2F8A3B7D9C9BD07992158BE13C3B6AC21C3A23F0,
	IosInterstitialAd_InterstitialAdCreate_m195BEE56DEE11E096E485F242DCB370561ECC0CE,
	IosInterstitialAd_InterstitialAdLoad_mE8858F8DFE0A3D2B0080A41A8DFBFA8F2831A052,
	IosInterstitialAd_InterstitialAdShow_m9D77C2FC203DD19F9EF0E9BF1B34C0F4D77BA424,
	IosInterstitialAd_InterstitialAdGetAdUnitId_m7C14AF20EE8D5BB5385520EB20B0A84C4173BE59,
	IosInterstitialAd_InterstitialAdGetAdState_mE2F142651C6AD2904AD983F4FBF29FB9AA354FBC,
	IosInterstitialAd_U3CInvokeLoadedEventU3Eb__29_0_m6D3C456FD67BDEA25B0658C1AB7E3E26A9E82F95,
	IosInterstitialAd_U3CInvokeStartedEventU3Eb__31_0_mFF9B4EA93F7D368402DCA9575401CD217B54505B,
	IosInterstitialAd_U3CInvokeClickedEventU3Eb__32_0_m0B6B7A6A56A22A776C5569FEF4D47CCC68DA20E0,
	IosInterstitialAd_U3CInvokeFinishedEventU3Eb__33_0_m303AE8C34EE49F18792B50BEC5269B8D8F3645FC,
	U3CU3Ec__DisplayClass30_0__ctor_m1C98F57CBACF9F292F90913CA0AE6BDB23402CA2,
	U3CU3Ec__DisplayClass30_0_U3CInvokeFailedLoadEventU3Eb__0_m548C983C2617339E4EE3D2DB0E3FAC3FA703A006,
	U3CU3Ec__DisplayClass34_0__ctor_m43C29BFDC9485601A2EB6A0B50D532CA780CF11F,
	U3CU3Ec__DisplayClass34_0_U3CInvokeFailedShowEventU3Eb__0_m8C58E4D8888892B1A4E1C65872A15A046CF7A151,
	IosInterstitialLoadListener__ctor_m6682B0ACF7831849979586466F6AE9949331C3B0,
	IosInterstitialLoadListener_Dispose_m4B9E5CAACDD61CC3A4E8720A486111A9116A369A,
	IosInterstitialLoadListener_InterstitialAdLoadDelegateCreate_mCA949D1699BE2820DD18A8F982DC61B4F9C3868B,
	IosInterstitialLoadListener_InterstitialAdLoadDelegateDestroy_m871D9326473BFD37E0BB47568EF7B7420869947B,
	IosInterstitialLoadListener_LoadSuccess_m3B2162F7E66751B49E6FAF77224E835E2619CB72,
	IosInterstitialLoadListener_LoadFail_m560420328DC82443357172CB8AA472B89017296E,
	LoadSuccessCallback__ctor_mA51E3130276490B858A757E2BD59FDBC316B1C8B,
	LoadSuccessCallback_Invoke_m2C5E6446B41F3E7737B1B58D50AE34D144F63D86,
	LoadSuccessCallback_BeginInvoke_m050DB7D2446D5ECDE80D427DAF7F49838ADE14C8,
	LoadSuccessCallback_EndInvoke_m8678D7CBBBA45D9EC41FB8908C7B95687AE2E00E,
	LoadFailCallback__ctor_m911984A46EEBB90BD352FEC68EDAD9114B4529B2,
	LoadFailCallback_Invoke_mA760935A93F8413D180027DD57C1086B4632B866,
	LoadFailCallback_BeginInvoke_m2E12134EB1E3EC3B4B86860EDF0860DBE673F047,
	LoadFailCallback_EndInvoke_m18EF5CAA93FC0A8FFC9E62FFE7478699E03E0FC2,
	IosInterstitialShowListener__ctor_mCCA0A28D95C950AFCE413C77634EBA8893C4BD75,
	IosInterstitialShowListener_Dispose_m6404F7500F8038094235DCD3881A3AAAFAFDE817,
	IosInterstitialShowListener_InterstitialAdShowDelegateCreate_mE294BFCAE09F41ACD2B1F28FE0EC890849CE4B56,
	IosInterstitialShowListener_InterstitialAdShowDelegateDestroy_m9FBFB94A738376B809CE918236C0CB908E0F067A,
	IosInterstitialShowListener_Started_m74A8E59155E7F4B6E54C7E53BD9C843321056314,
	IosInterstitialShowListener_Clicked_m0AEF652CD5169536F84BBA40991CF61BB2CD0D72,
	IosInterstitialShowListener_Finished_m57ADE89826039F1ECCFC834768D5C575BED4B38B,
	IosInterstitialShowListener_FailedShow_m8CB913517836795A7938913666286F4976E120B5,
	StartedCallback__ctor_mA0DF577D8779EE911601CF7D1A45F5BEFA85A41C,
	StartedCallback_Invoke_m9196A1169A7D6A217F59E402A560FB462C6C91B1,
	StartedCallback_BeginInvoke_m718950BCB73B1B9368E8881086770CB072DE5C61,
	StartedCallback_EndInvoke_m9729CE3E991F4382D9803100A0F936A968ECEC63,
	ClickedCallback__ctor_m50269824FD0F245B3DFBEEF55047A89635AD1FCF,
	ClickedCallback_Invoke_m2F236365016A5F20A0EE0F799B53F2C8C70AB983,
	ClickedCallback_BeginInvoke_m8E5BEB91BFA95CC966FA812B132D94043E2EB974,
	ClickedCallback_EndInvoke_m72A7A273A2149F0655B3C4EB183449C0F95D79B0,
	FinishedCallback__ctor_mA3581F795881A92DF2A783C0E5F5632EEC65F671,
	FinishedCallback_Invoke_m75DB9C0BCEF35BE0167AEAAA82C46E384617FD66,
	FinishedCallback_BeginInvoke_m78CF80F8F1F06E104369D94B31A2CE336738A9BF,
	FinishedCallback_EndInvoke_mFE1822714641E89D182B326158B1EA3A146BE09E,
	FailedShowCallback__ctor_mF4A1E55A67106D2B71ED7366D1C6782F9DF72CA1,
	FailedShowCallback_Invoke_m9EDDC7AA29787B343B7D0A500F4E62C21EC3C6AC,
	FailedShowCallback_BeginInvoke_mDD987D2486F409A66E93CE7FBE83F745482406A4,
	FailedShowCallback_EndInvoke_mB95D27EA5F5265EDC367045AADA69EBE84D6702C,
	IosMediationService_add_OnInitializationComplete_mC7A0732209C08BE706CBDD15DEF9C0AEC88B8A5D,
	IosMediationService_remove_OnInitializationComplete_mCF1F1BDF4658C5785C4985B7A2A4C85F2385354E,
	IosMediationService_add_OnInitializationFailed_m52113EFE3F933E730F80FB610923725E89C24870,
	IosMediationService_remove_OnInitializationFailed_m51560FA70B204DEB8B68A346ADB600FC45C68F5D,
	IosMediationService_get_InitializationState_m71146C5CE483FF5BF2AF7CCD3307B2AA94CEAF9C,
	IosMediationService_get_SdkVersion_m959A273C9BC278F31FCDB6AAC5E9750C0F056419,
	IosMediationService_Initialize_mF478FB2B7B4F3BBF8EAB794969B94FCF0C327AE8,
	IosMediationService_UnityMediationGetSdkVersion_m0EFE10544A7835FB24BE93AC6203065EEC906E13,
	IosMediationService_UnityMediationGetInitializationState_m90AB8FE5BD7DC7711DB670691A039FF34C979183,
	IosMediationService_UnityMediationInitialize_m202D7025A7091284605555D715277673D023012E,
	IosMediationService_InitializationSuccess_m3B29138D470738432E8BA2CA209B80E72DD62C67,
	IosMediationService_InitializationFailed_mD516FFAD6A54A83BC975EABB00C512F36471A433,
	IosMediationService__ctor_m5C66C86C336E61FFDE3BA5E594E2D9DEB8011370,
	InitializeSuccessCallback__ctor_mDA3B651DAA7E9C4AC89D6279355B3CB6940EA7EF,
	InitializeSuccessCallback_Invoke_mFB763C99AC57B617F489153B66E85FACB21719E7,
	InitializeSuccessCallback_BeginInvoke_m47DDA8F693BC43716942B6324E8D07387CB007DC,
	InitializeSuccessCallback_EndInvoke_m78CAD48EB2FDACA9B361FDA0885787741C0E8C6A,
	InitializeFailCallback__ctor_mFF8A68468380816C42453751E172D8276E6AABA1,
	InitializeFailCallback_Invoke_m928C641268B51B54A64304969AF6933C4AFA8687,
	InitializeFailCallback_BeginInvoke_m148E996FFE2ECF9A31001A77E5FDB66BEF8DDDA4,
	InitializeFailCallback_EndInvoke_mA62C4A260815663F7A10BFCA69213AC9C666D88E,
	U3CU3Ec__cctor_mD20227AA040C83E3FEE03482FCD1778D15F7D9E2,
	U3CU3Ec__ctor_m89A9EE1A6C0EC7633262E83DF45C8BF538974F8C,
	U3CU3Ec_U3CInitializationSuccessU3Eb__17_0_m4886D8F566AAF86CD3FE53611B8EEA144C850B1F,
	U3CU3Ec__DisplayClass18_0__ctor_mABE649B1E488089FEE407513DCAF27A1D6A3DC9B,
	U3CU3Ec__DisplayClass18_0_U3CInitializationFailedU3Eb__0_mA4EA55143BA32C2966743F888346DFFC2C101D73,
	IosNativeObject__ctor_m585739E4CD1CF58ACB4A7E581DC70DDC2C45498A,
	IosNativeObject_get_NativePtr_mF42A588B95EEE0A22FA7F37778C6C7F979042591,
	IosNativeObject_set_NativePtr_m3A96D6A4B1EC78A8624CFC9EF4AFEDFDD5615F16,
	NULL,
	IosNativeObject_Dispose_m7131A5272E7E4D7F1D7FB8E77A42F78F20419BC0,
	IosNativeObject_CheckDisposedAndLogError_m1CA64BD98CCFB7F7A81E244520D3803347F3F9E3,
	IosNativeObject_BridgeTransfer_mB2D5A5A1D96BDB6FF07896968DED65A28B70C2CE,
	IosNativeObject__cctor_mC61E9AC887EB8E2AE2239E181F66F3875E1CF66A,
	IosRewardedAd_add_OnLoaded_m5D8CDE6F1DACE782B02160D8B9D5E2058F9C4E43,
	IosRewardedAd_remove_OnLoaded_mD09304767527DBEDFAA6BC1A6FAF39935D326196,
	IosRewardedAd_add_OnFailedLoad_mBED7F550674C501455BEB7A2DCE93DBC60A901A0,
	IosRewardedAd_remove_OnFailedLoad_m0FEA31E45337A2FD902372E5B09C3B3537C7EE5D,
	IosRewardedAd_add_OnShowed_m918470186055DDA7C2F01B1E918840D602D95F1D,
	IosRewardedAd_remove_OnShowed_m943D24CC1D5E80787BF55CFB005CF68D228EDF51,
	IosRewardedAd_add_OnClicked_mABE5C6CCE4C4D4C60E35549CCE75197DAAE74F31,
	IosRewardedAd_remove_OnClicked_mCE6B8C1EA0B91CB75F00D5E05D5BE4D9334BB937,
	IosRewardedAd_add_OnClosed_mEC6AA33C7BBD9156258B1F1581644055FA42D358,
	IosRewardedAd_remove_OnClosed_m07896AEF416BD3ECDFBD2038AC2E92F342422DDB,
	IosRewardedAd_add_OnFailedShow_mE439804E25B4435BCD8F0E9F89B12559A210D3D0,
	IosRewardedAd_remove_OnFailedShow_m98E3DEF8366957C635655B65D9A1D36805C25095,
	IosRewardedAd_add_OnUserRewarded_m370E2267EC7BC712F197DD6C47C4B70C36DDA304,
	IosRewardedAd_remove_OnUserRewarded_mBD8AC2BA4145C1F10779F933DA2D64C2A2FBBA85,
	IosRewardedAd_get_AdState_m939D97C2120EFD611B7679BBC82667BF04CDDBEA,
	IosRewardedAd_get_AdUnitId_m16C2901CDE38BD46D1D605FA0DB499A1D77AD1E6,
	IosRewardedAd__ctor_m9B185B84E8AE6193DD2DE4ECD3B9BFE8033C138C,
	IosRewardedAd_Load_m863D6C0D41FB7FD58EC1C3174DFBBC5DC9964D26,
	IosRewardedAd_Show_m42E8A4AD7AFC1D9534385D4B4CBEB4E039574966,
	IosRewardedAd_Dispose_m2AF3526626100946F92E5F5EACBA174DD6FAA158,
	IosRewardedAd_Finalize_m9AF2AE4C52C785FBB60FA5C676186645EF9C8CDF,
	IosRewardedAd_InvokeLoadedEvent_m71AA7A43CC5E9D5684DFAF53A16CEC23ABA0DC77,
	IosRewardedAd_InvokeFailedLoadEvent_m57D2E61E17054B981050EEC9B9D43F7A3E5E4A0B,
	IosRewardedAd_InvokeShownEvent_m22F4FA5834CFA86431AA9CCCFA4C24FA1B1F57B3,
	IosRewardedAd_InvokeUserRewardedEvent_m724D00250FBFAAB339574235F5E1A3744B4CDFF3,
	IosRewardedAd_InvokeClickedEvent_mDD6F64D7E318F1F3FA37FFD41A0B96398D43E96A,
	IosRewardedAd_InvokeClosedEvent_mFF08C5E72C7AC0B60857A2357B69C19FA5A7D37F,
	IosRewardedAd_InvokeFailedShowEvent_m4E7E068493544F47D102A6462184980C4D62660C,
	IosRewardedAd_RewardedAdCreate_mF6A37787B76B887122B2ACBAD519E7D05A5EA99A,
	IosRewardedAd_RewardedAdLoad_m1B2555498E7CB3A865C1D991B73BE8FBFD5E216B,
	IosRewardedAd_RewardedAdShow_m6DADF63B2AC225C2FA2C807D95AD8A2FBE7DF978,
	IosRewardedAd_RewardedAdGetAdUnitId_mB90B3E389A38C4122540E6C199FFD63092890AA9,
	IosRewardedAd_RewardedAdGetAdState_mB0AF953097A11ABB3061E46208BF6A2C753C2E51,
	IosRewardedAd_U3CInvokeLoadedEventU3Eb__32_0_mFCC43283B7AF0E4549EFE1D9DCFA4BA5F3A096B5,
	IosRewardedAd_U3CInvokeShownEventU3Eb__34_0_mCE3F1A2BD0F754B7945A02C59BEEDC1C1840ADFD,
	IosRewardedAd_U3CInvokeClickedEventU3Eb__36_0_m7350EDAEAEC7576269731D5641752BB51354C7D1,
	IosRewardedAd_U3CInvokeClosedEventU3Eb__37_0_m83E12FDA631444EF82BF14B436480157F7515585,
	U3CU3Ec__DisplayClass33_0__ctor_m3B10A9D1C2421426002F52CBAC37DBE2576A6D8B,
	U3CU3Ec__DisplayClass33_0_U3CInvokeFailedLoadEventU3Eb__0_m265B247B3E539FBBD5C77EDCE6073B0BBA59C70C,
	U3CU3Ec__DisplayClass35_0__ctor_mC5BD97F3DBC8273871403D5658839670018812F9,
	U3CU3Ec__DisplayClass35_0_U3CInvokeUserRewardedEventU3Eb__0_m2D5CB2B72546CA41815F4A11FE3474E3E50C3074,
	U3CU3Ec__DisplayClass38_0__ctor_mE288DD1FFC4F09D52B076645E9074A82F9D36EEC,
	U3CU3Ec__DisplayClass38_0_U3CInvokeFailedShowEventU3Eb__0_mB395E591E20242F86CBE60794297FE3D9B09DE66,
	IosRewardedLoadListener__ctor_m382DB6AA735369E1EC3C7B492B6697FC3704310C,
	IosRewardedLoadListener_Dispose_mCD3C4CCF6980376D322D91FAC39455A739B48CE7,
	IosRewardedLoadListener_RewardedAdLoadDelegateCreate_mA140AC9DB558023409EA41483C3BEC667224541A,
	IosRewardedLoadListener_RewardedAdLoadDelegateDestroy_mE32742D8E30B6FA0F9EC34DBBF54F9B7635A1176,
	IosRewardedLoadListener_LoadSuccess_m905ADB16BAEC1AFA687E686F372A457031541763,
	IosRewardedLoadListener_LoadFail_m806FF60C7EBAEB50875D61D4B058AE7B8E57AE8A,
	LoadSuccessCallback__ctor_mAEFB52BEA0794029B11E437DD043817DB802E81C,
	LoadSuccessCallback_Invoke_m4B72F74EC3F0A753AB454B5E52DBFD7E88687273,
	LoadSuccessCallback_BeginInvoke_mBEE840628F22FE0EF3295203B51DBCD23BA115E2,
	LoadSuccessCallback_EndInvoke_mDC371B7344A692DDA6775289E1947AE18D70D264,
	LoadFailCallback__ctor_mE00F284E3E1FA0EADA2F7A087732A23EF89400B6,
	LoadFailCallback_Invoke_m788A11311404965AA112CF659A2815FA0F3184E0,
	LoadFailCallback_BeginInvoke_m45107D21C64F063C36091C9BF70FB237487BCCC1,
	LoadFailCallback_EndInvoke_m39E771C9DA57EE5ADD0EF95591816B141DB6FAEF,
	IosRewardedShowListener__ctor_m344E5BAA0E170649D040F79E350D8049542CF48E,
	IosRewardedShowListener_Dispose_m33307ABE895CF9D3DFA6FE96B390AEA51CB8043B,
	IosRewardedShowListener_RewardedAdShowDelegateCreate_m8A6D69B7EE43C9998F7FCC22C66FEFAC1F053FEF,
	IosRewardedShowListener_RewardedAdShowDelegateDestroy_m46F3FC9716136E92D95455D29CA09C18F8ADD9CA,
	IosRewardedShowListener_Shown_m12AE718620DAA7D577059580AF1B855DA43FDD05,
	IosRewardedShowListener_Clicked_m0654C1FF992EA80564FD66BB7BB1E8F0C4978682,
	IosRewardedShowListener_Closed_mBF6C3C9556BEE2066F838742425CDCE2506ED248,
	IosRewardedShowListener_FailedShow_m4B72450DB896C5CDBC866FD91A7D30D664CF1A7C,
	IosRewardedShowListener_UserRewarded_mE055F696D61FE6BABD9EB88E9B2C669A6D2FB6BD,
	ShownCallback__ctor_mEC40CD7A379A70A5A049A4E28424CD2E3F3C59C5,
	ShownCallback_Invoke_mF66ED6B958DC27B6B768D4E08F799CB3CA6A3E63,
	ShownCallback_BeginInvoke_m9D38B35BA1C4DCB47D04AF99DC3761531B4C009C,
	ShownCallback_EndInvoke_mF207BDA4E59B31E1AD0EF2B7ECB83D1BB7718622,
	ClickedCallback__ctor_mD498366975C832E43E7801F6B1B4E3E6207BA603,
	ClickedCallback_Invoke_m01DB0809A4451759452F3A2A95E99EEDA39CC016,
	ClickedCallback_BeginInvoke_mBE4B0A9ECFE7761BE5DF8BD5A035F9D6053790EF,
	ClickedCallback_EndInvoke_mDC1C5ED66A69973473B4C0D3CC0C9AFF7EF26A78,
	ClosedCallback__ctor_m0EE24A23ECDF6A29451F90C50E6D85F023C4B0C3,
	ClosedCallback_Invoke_m5E5F522EEAE177C4FE3323B14A51DA9BCF3DD0E1,
	ClosedCallback_BeginInvoke_m6CE79B1F40E907C95C7575DEFA83CDE2CEADB638,
	ClosedCallback_EndInvoke_m5127E27BBC6BFA1F04F524B86F1BED8B8B6E0DEB,
	FailedShowCallback__ctor_m0C955B8A73C6BF5183D9E6C0409492C384459FCD,
	FailedShowCallback_Invoke_mBE57326A4742520F8CE0125986E03DA55DB39DEB,
	FailedShowCallback_BeginInvoke_mF0CE2281C7664CDA1DC50BA7B3D006E5870CDC2A,
	FailedShowCallback_EndInvoke_mD9885536A85D7E6575355D1BB8256BF949177B3D,
	UserRewardedCallback__ctor_mFC9206E0B034807BA73DE079E51C440B07075913,
	UserRewardedCallback_Invoke_m6B84CDDDD199DEFA8888748BCC3A9A4D24693EB8,
	UserRewardedCallback_BeginInvoke_m8AEC5B953AD3D3DCA26A4CAE9255A0F32EE1F193,
	UserRewardedCallback_EndInvoke_m2C28F48C7DB9CD604DA818DB4891271290DCAD91,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ThreadUtil_Init_m7A3BD04AC584D94AFE0F66E5065E3D5F2A76A5C3,
	ThreadUtil_Post_m8E0CEAFCD06EDD1A44BA93AF2FECCDDC1846421F,
	ThreadUtil_Send_mC3AC5B5B0C8D48D4413D0DC6438C79A1FFFC0703,
};
extern void U3CInitializeU3Ed__2_MoveNext_mD06DA778D437EE9C2BD70EA500E9A24F3645465C_AdjustorThunk (void);
extern void U3CInitializeU3Ed__2_SetStateMachine_mD39C1B75253C313A1D0FC60F2F57875C70DF806F_AdjustorThunk (void);
extern void U3CInitializeU3Ed__3_MoveNext_m4F7B3C93AC9F5B0B3274FEF033B9F3F624D000C1_AdjustorThunk (void);
extern void U3CInitializeU3Ed__3_SetStateMachine_m8B62B12EE19AA1AE5B13D23165F2AF18114FE88B_AdjustorThunk (void);
extern void IosImpressionData_ToImpressionData_mB35501F0FFA27812065D887AC7D11DF9FC1F5FC7_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[5] = 
{
	{ 0x06000018, U3CInitializeU3Ed__2_MoveNext_mD06DA778D437EE9C2BD70EA500E9A24F3645465C_AdjustorThunk },
	{ 0x06000019, U3CInitializeU3Ed__2_SetStateMachine_mD39C1B75253C313A1D0FC60F2F57875C70DF806F_AdjustorThunk },
	{ 0x0600001A, U3CInitializeU3Ed__3_MoveNext_m4F7B3C93AC9F5B0B3274FEF033B9F3F624D000C1_AdjustorThunk },
	{ 0x0600001B, U3CInitializeU3Ed__3_SetStateMachine_m8B62B12EE19AA1AE5B13D23165F2AF18114FE88B_AdjustorThunk },
	{ 0x0600009C, IosImpressionData_ToImpressionData_mB35501F0FFA27812065D887AC7D11DF9FC1F5FC7_AdjustorThunk },
};
static const int32_t s_InvokerIndices[382] = 
{
	1543,
	4427,
	4427,
	4450,
	1983,
	4552,
	4427,
	1543,
	4486,
	4486,
	4552,
	2143,
	2143,
	4552,
	2864,
	2864,
	4450,
	4450,
	4450,
	6797,
	2864,
	1543,
	4552,
	4552,
	3703,
	4552,
	3703,
	1965,
	2658,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	4427,
	4450,
	4552,
	4552,
	2864,
	2864,
	4450,
	4450,
	4450,
	4552,
	4450,
	4450,
	2143,
	6773,
	5936,
	1983,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	4427,
	4450,
	3703,
	3703,
	4552,
	4552,
	4552,
	4552,
	2143,
	2143,
	2143,
	2143,
	2143,
	2143,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	4427,
	4450,
	4552,
	3703,
	4485,
	3733,
	4552,
	4427,
	4450,
	1983,
	6773,
	6766,
	5936,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	4427,
	4450,
	3703,
	3703,
	4552,
	4552,
	3703,
	4552,
	2143,
	2143,
	2143,
	2143,
	2143,
	2143,
	2143,
	4450,
	4450,
	2143,
	4427,
	4450,
	1983,
	2143,
	4552,
	4552,
	4552,
	1965,
	2658,
	6179,
	6398,
	4450,
	3703,
	3703,
	4552,
	4552,
	4552,
	3703,
	6664,
	6664,
	4552,
	3703,
	4552,
	4552,
	4552,
	6424,
	6664,
	6199,
	2141,
	2141,
	709,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	4427,
	4450,
	3703,
	4552,
	4552,
	4552,
	4552,
	4552,
	3703,
	4552,
	4552,
	4552,
	3703,
	6424,
	6190,
	6190,
	6486,
	6400,
	3703,
	3703,
	3703,
	3703,
	4552,
	3703,
	4552,
	3703,
	4552,
	4552,
	5896,
	6664,
	6664,
	5713,
	2141,
	3686,
	997,
	3703,
	2141,
	1192,
	379,
	3703,
	4552,
	4552,
	5189,
	6664,
	6664,
	6664,
	6664,
	5713,
	2141,
	3686,
	997,
	3703,
	2141,
	3686,
	997,
	3703,
	2141,
	3686,
	997,
	3703,
	2141,
	1192,
	379,
	3703,
	3703,
	3703,
	3703,
	3703,
	4427,
	4450,
	2143,
	6773,
	6766,
	5369,
	6797,
	6181,
	4552,
	2141,
	4552,
	1543,
	3703,
	2141,
	1983,
	697,
	3703,
	6797,
	4552,
	3703,
	4552,
	3703,
	3734,
	4429,
	3686,
	-1,
	4552,
	3188,
	6664,
	6797,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	3703,
	4427,
	4450,
	3703,
	4552,
	3703,
	4552,
	4552,
	4552,
	3703,
	4552,
	3703,
	4552,
	4552,
	3703,
	6424,
	6190,
	5722,
	6486,
	6400,
	3703,
	3703,
	3703,
	3703,
	4552,
	3703,
	4552,
	3703,
	4552,
	3703,
	4552,
	4552,
	5896,
	6664,
	6664,
	5713,
	2141,
	3686,
	997,
	3703,
	2141,
	1192,
	379,
	3703,
	4552,
	4552,
	4931,
	6664,
	6664,
	6664,
	6664,
	5713,
	5726,
	2141,
	3686,
	997,
	3703,
	2141,
	3686,
	997,
	3703,
	2141,
	3686,
	997,
	3703,
	2141,
	1192,
	379,
	3703,
	2141,
	1194,
	380,
	3703,
	3703,
	3703,
	3703,
	3703,
	4427,
	4450,
	2143,
	6797,
	6201,
	6201,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[16] = 
{
	{ 0x060000AC, 2,  (void**)&IosImpressionListener_Impression_m14336805D817FC4964DB510431A42BDC6A2809DF_RuntimeMethod_var, 0 },
	{ 0x060000DB, 4,  (void**)&IosInterstitialLoadListener_LoadSuccess_m3B2162F7E66751B49E6FAF77224E835E2619CB72_RuntimeMethod_var, 0 },
	{ 0x060000DC, 3,  (void**)&IosInterstitialLoadListener_LoadFail_m560420328DC82443357172CB8AA472B89017296E_RuntimeMethod_var, 0 },
	{ 0x060000E9, 8,  (void**)&IosInterstitialShowListener_Started_m74A8E59155E7F4B6E54C7E53BD9C843321056314_RuntimeMethod_var, 0 },
	{ 0x060000EA, 5,  (void**)&IosInterstitialShowListener_Clicked_m0AEF652CD5169536F84BBA40991CF61BB2CD0D72_RuntimeMethod_var, 0 },
	{ 0x060000EB, 7,  (void**)&IosInterstitialShowListener_Finished_m57ADE89826039F1ECCFC834768D5C575BED4B38B_RuntimeMethod_var, 0 },
	{ 0x060000EC, 6,  (void**)&IosInterstitialShowListener_FailedShow_m8CB913517836795A7938913666286F4976E120B5_RuntimeMethod_var, 0 },
	{ 0x06000107, 10,  (void**)&IosMediationService_InitializationSuccess_m3B29138D470738432E8BA2CA209B80E72DD62C67_RuntimeMethod_var, 0 },
	{ 0x06000108, 9,  (void**)&IosMediationService_InitializationFailed_mD516FFAD6A54A83BC975EABB00C512F36471A433_RuntimeMethod_var, 0 },
	{ 0x0600014E, 12,  (void**)&IosRewardedLoadListener_LoadSuccess_m905ADB16BAEC1AFA687E686F372A457031541763_RuntimeMethod_var, 0 },
	{ 0x0600014F, 11,  (void**)&IosRewardedLoadListener_LoadFail_m806FF60C7EBAEB50875D61D4B058AE7B8E57AE8A_RuntimeMethod_var, 0 },
	{ 0x0600015C, 16,  (void**)&IosRewardedShowListener_Shown_m12AE718620DAA7D577059580AF1B855DA43FDD05_RuntimeMethod_var, 0 },
	{ 0x0600015D, 13,  (void**)&IosRewardedShowListener_Clicked_m0654C1FF992EA80564FD66BB7BB1E8F0C4978682_RuntimeMethod_var, 0 },
	{ 0x0600015E, 14,  (void**)&IosRewardedShowListener_Closed_mBF6C3C9556BEE2066F838742425CDCE2506ED248_RuntimeMethod_var, 0 },
	{ 0x0600015F, 15,  (void**)&IosRewardedShowListener_FailedShow_m4B72450DB896C5CDBC866FD91A7D30D664CF1A7C_RuntimeMethod_var, 0 },
	{ 0x06000160, 17,  (void**)&IosRewardedShowListener_UserRewarded_mE055F696D61FE6BABD9EB88E9B2C669A6D2FB6BD_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x0600011A, { 0, 1 } },
};
extern const uint32_t g_rgctx_T_tF70B8F759148C0502554DE24EE367AE37BC8854E;
static const Il2CppRGCTXDefinition s_rgctxValues[1] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF70B8F759148C0502554DE24EE367AE37BC8854E },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Mediation_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Mediation_CodeGenModule = 
{
	"Unity.Mediation.dll",
	382,
	s_methodPointers,
	5,
	s_adjustorThunks,
	s_InvokerIndices,
	16,
	s_reversePInvokeIndices,
	1,
	s_rgctxIndices,
	1,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
