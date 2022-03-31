#import <IronSource/IronSource.h>

@interface UMSIronSourceRewardedListener : NSObject <ISDemandOnlyRewardedVideoDelegate>

@property (nonatomic, copy) void (^ rewardedVideoDidLoadBlock)(void);
@property (nonatomic, copy) void (^ rewardedVideoDidFailToShowWithErrorBlock)(NSError *error);
@property (nonatomic, copy) void (^ rewardedVideoDidFailToLoadWithErrorBlock)(NSError *error);
@property (nonatomic, copy) void (^ rewardedVideoDidOpenBlock)(void);
@property (nonatomic, copy) void (^ rewardedVideoDidClickBlock)(void);
@property (nonatomic, copy) void (^ rewardedVideoAdRewardedBlock)(NSString *instanceId);
@property (nonatomic, copy) void (^ rewardedVideoDidCloseBlock)(void);

@end
