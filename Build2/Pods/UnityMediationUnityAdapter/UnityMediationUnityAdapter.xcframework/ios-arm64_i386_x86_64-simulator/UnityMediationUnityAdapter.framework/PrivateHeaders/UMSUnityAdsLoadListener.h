#import <UnityAds/UnityAds.h>

@interface UMSUnityAdsLoadListener : NSObject <UnityAdsLoadDelegate>

@property (nonatomic, copy) void (^ unityAdsAdLoadedBlock)(NSString *placementId);
@property (nonatomic, copy) void (^ unityAdsAdFailedToLoadBlock)(NSString *placementId, UnityAdsLoadError error, NSString *message);

@end
