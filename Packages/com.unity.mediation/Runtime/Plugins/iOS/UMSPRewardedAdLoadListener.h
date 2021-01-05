#import <UnityMediationSdk/UnityMediationSdk.h>

typedef void (*LoadSuccessCallback)(void *rewardedAd);
typedef void (*LoadFailCallback)(void *rewardedAd, int error, const char *message);

@interface UMSPRewardedAdLoadListener : NSObject <UMSRewardedAdLoadListener>
@property (assign) LoadSuccessCallback loadSuccess;
@property (assign) LoadFailCallback loadFail;
- (id)initWithSuccessCallback:(LoadSuccessCallback)loadSuccess failCallback:(LoadFailCallback)loadFail;
@end
