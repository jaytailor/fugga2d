#import <FBAudienceNetwork/FBAudienceNetwork.h>

@interface UMSFacebookInterstitialListener : NSObject <FBInterstitialAdDelegate>

@property (nonatomic, copy) void (^ interstitialAdDidLoadBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdDidFailWithErrorBlock)(NSError *error);
@property (nonatomic, copy) void (^ interstitialAdWillLogImpressionBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdDidClickBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdWillCloseBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdDidCloseBlock)(void);

@end
