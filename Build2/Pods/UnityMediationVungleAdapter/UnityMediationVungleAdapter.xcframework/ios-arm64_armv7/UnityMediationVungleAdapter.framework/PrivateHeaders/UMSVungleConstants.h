#import <Foundation/Foundation.h>

#pragma mark - Parameters

static NSString *const UMSVungleAppIdParameter = @"appId";
static NSString *const UMSVunglePlacementIdParameter = @"placementId";
static NSString *const UMSVungleGDPRConsentVersion = @"1.0";//TBD
static NSString *const UMSVungleADMParameter = @"adm";

#pragma mark - Error Messages

static NSString *const UMSVungleAppIdNull = @"appId was null!";
static NSString *const UMSVunglePlacementIdNull = @"PlacementId was null!";
static NSString *const UMSVungleInvalidAppID = @"Adapter Vungle App ID error";
static NSString *const UMSVungleNoLoadAd = @"Adapter Vungle: show was called before the ad was loaded";
static NSString *const UMSVungleErrorReasonPlacementIdInUse = @"Vungle placementId(%@) is already in use! Only one delegate for each placementId is allowed to be in use at a time.";
static NSString *const UMSVungleErrorReasonPlacementIdAndAdMarkupInUse = @"Vungle placementId(%@) and adMarkup(%@) are already in use! Only one header bidding delegate for each placementId+adMarkup is allowed to be in use at a time.";
static NSString *const UMSVungleErrorReasonMissingAdMarkup = @"Vungle header bidded ad is missing ad markup!";

//static NSString *const UMSVunglePluginName = @"UnityMediationSDK"; //Pending
