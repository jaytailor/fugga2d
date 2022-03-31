#import <FBAudienceNetwork/FBAudienceNetwork.h>

@interface UMSFacebookRewardedListener : NSObject <FBRewardedVideoAdDelegate>

@property (nonatomic, copy) void (^ rewardedVideoAdDidLoadBlock) (void);
@property (nonatomic, copy) void (^ rewardedVideoAdDidFailWithErrorBlock) (NSError *error);
@property (nonatomic, copy) void (^ rewardedVideoAdWillLogImpressionBlock) (void);
@property (nonatomic, copy) void (^ rewardedVideoAdVideoCompleteBlock) (void);
@property (nonatomic, copy) void (^ rewardedVideoAdDidClickBlock) (void);
@property (nonatomic, copy) void (^ rewardedVideoAdWillCloseBlock) (void);
@property (nonatomic, copy) void (^ rewardedVideoAdDidCloseBlock) (void);

@end
