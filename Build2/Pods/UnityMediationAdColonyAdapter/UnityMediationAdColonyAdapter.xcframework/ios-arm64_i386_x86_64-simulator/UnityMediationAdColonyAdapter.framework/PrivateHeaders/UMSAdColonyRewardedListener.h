#import <Foundation/Foundation.h>
#import <AdColony/AdColony.h>

@interface UMSAdColonyRewardedListener : NSObject <AdColonyInterstitialDelegate>

@property (nonatomic, copy) void (^ rewardedAdDidLoadBlock)(AdColonyInterstitial *adColonyRewardedAd);
@property (nonatomic, copy) void (^ rewardedAdDidFailToPresentWithErrorBlock)(AdColonyAdRequestError *error);
@property (nonatomic, copy) void (^ rewardedAdDidPresentBlock)(void);
@property (nonatomic, copy) void (^ rewardedAdDidDismissBlock)(void);
@property (nonatomic, copy) void (^ rewardedAdDidClickBlock)(void);

@end
