#import <UnityAds/UnityAds.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSUnityAdsShowListener : NSObject <UnityAdsShowDelegate>

@property (nonatomic, copy) void (^ unityAdsShowCompleteBlock)(NSString *placementId, UnityAdsShowCompletionState state);
@property (nonatomic, copy) void (^ unityAdsShowFailedBlock)(NSString *placementId, UnityAdsShowError error, NSString *message);
@property (nonatomic, copy) void (^ unityAdsShowStartBlock)(NSString *placementId);
@property (nonatomic, copy) void (^ unityAdsShowClickBlock)(NSString *placementId);

@end
