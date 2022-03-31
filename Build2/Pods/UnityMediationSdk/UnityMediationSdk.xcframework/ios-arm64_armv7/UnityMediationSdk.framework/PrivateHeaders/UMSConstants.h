#import <Foundation/Foundation.h>
#import <limits.h>

// Example App instantiation string constants.
static NSString *const kUMSDefaultConfigurationResponseInstanceId = @"00000000-0000-0000-0000-000000000000";
static NSString *const kUMSDefaultAdUnitId = @"00000000-0000-0000-0000-000000000000";
static NSString *const kUMSDeviceMake = @"Apple";
static NSString *const kUMSBundleVersion = @"CFBundleVersion";
static NSString *const kUMSUnityAppController = @"UnityAppController";
static NSString *const kUserAgent = @"navigator.userAgent";
static NSString *const kUMSAppTransportSecurityKey = @"NSAppTransportSecurity";
static NSString *const kUMSAllowsArbitraryLoadsKey = @"NSAllowsArbitraryLoads";
static NSString *const kUMSAllowsArbitraryLoadsInWebContentKey = @"NSAllowsArbitraryLoadsInWebContent";
static NSString *const kUMSAllowsArbitraryLoadsForMediaKey = @"NSAllowsArbitraryLoadsForMedia";

#pragma mark - URLs

static NSString *const kUMSInstantiationURL = @"https://mediation-instantiation.prd.mz.internal.unity3d.com/v1";
static NSString *const kUMSTrackingURL = @"https://mediation-tracking.prd.mz.internal.unity3d.com";
static NSString *const kUMSDiagnosticURL = @"https://mediation-tracking.prd.mz.internal.unity3d.com/api/v2/diagnostic";
static NSString *const kUMSTrackingAdUnitEventPath = @"/api/v1/adunitevent";
static NSString *const kUMSTrackingWaterfallEventPath = @"/api/v1/waterfallevent";
static NSString *const kUMSTrackingLineItemEventPath = @"/api/v1/lineitemevent";
static NSString *const kUMSTrackingInitializationEventPath = @"/api/v1/initializationevent";
static NSString *const kUMSInstantiationWaterfallPath = @"/waterfall";
static NSString *const kUMSInstantiationInitializePath = @"/initialize";

#pragma mark - Http request constants

static NSString *const kUMSHTTPContentType = @"Content-Type";
static NSString *const kUMSHTTPHttpVersion = @"HTTP/1.1";
static int const kUMSHTTPTimeoutStartWaterfall = 30;
static int64_t const kUMSRequestMaximumRetryAttemptFallbackCount = 5;

#pragma mark - UMISAdUnitFormat constants

static NSString *const kUMISAdUnitFormatInterstitial = @"INTERSTITIAL";
static NSString *const kUMISAdUnitFormatRewarded = @"REWARDED";
static NSString *const kUMISAdUnitFormatBanner = @"BANNER";
static NSString *const kUMISAdUnitFormatUnknown = @"UNKNOWN";

#pragma mark - UMSInitializationConfigurationOptions constants

static NSString *const kUMSInitializationConfigurationOptionInstallationIdKey = @"installation_id";

#pragma mark - UMTSAdNetworkName constants

static NSString *const kUMSAdNetworkAdmob = @"ADMOB";
static NSString *const kUMSAdNetworkFacebook = @"FACEBOOK";
static NSString *const kUMSAdNetworkUnity = @"UNITY";
static NSString *const kUMSAdNetworkAdColony = @"ADCOLONY";
static NSString *const kUMSAdNetworkIronSource = @"IRONSOURCE";
static NSString *const kUMSAdNetworkAppLovin = @"APPLOVIN";
static NSString *const kUMSAdNetworkVungle = @"VUNGLE";
static NSString *const kUMSAdNetworkUnknown = @"UNKNOWN";

#pragma mark - UMSHTTPMimeType constants

static NSString *const kUMSHTTPMimeTypeProtobuf = @"application/protobuf; charset=utf-8";
static NSString *const kUMSHTTPMimeTypeJSON = @"application/json";

#pragma mark - UMSHTTPRequestMethod constants

static NSString *const kUMSHTTPRequestMethodPOST = @"POST";
static NSString *const kUMSHTTPRequestMethodGET = @"GET";
