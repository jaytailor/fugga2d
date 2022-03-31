#import <AppLovinSDK/AppLovinSDK.h>

@interface UMSAppLovinRewardedListener : NSObject <ALAdLoadDelegate, ALAdDisplayDelegate, ALAdRewardDelegate, ALAdVideoPlaybackDelegate>

@property (nonatomic, copy) void (^ rewardedAdDidLoadAdBlock)(ALAd *ad);
@property (nonatomic, copy) void (^ rewardedAdDidFailLoadWithErrorBlock)(int code);
@property (nonatomic, copy) void (^ rewardedAdWillPresentScreenBlock)(void);
@property (nonatomic, copy) void (^ rewardedAdDidClickBlock)(void);
@property (nonatomic, copy) void (^ rewardedAdDidReceiveRewardBlock)(NSDictionary *rewardResponse);
@property (nonatomic, copy) void (^ rewardedAdWillCloseBlock)(void);
@property (nonatomic, copy) void (^ rewardedAdvideoPlaybackEndedBlock)(void);

@end
