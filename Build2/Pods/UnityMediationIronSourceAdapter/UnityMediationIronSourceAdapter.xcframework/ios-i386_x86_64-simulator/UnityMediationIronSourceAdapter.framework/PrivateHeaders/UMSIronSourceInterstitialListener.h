#import <IronSource/IronSource.h>

@interface UMSIronSourceInterstitialListener : NSObject <ISDemandOnlyInterstitialDelegate>

@property (nonatomic, copy) void (^ interstitialAdDidReceiveAdBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdDidFailLoadWithErrorBlock)(NSError *error);
@property (nonatomic, copy) void (^ interstitialAdDidFailShowWithErrorBlock)(NSError *error);
@property (nonatomic, copy) void (^ interstitialAdWillPresentScreenBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdDidClickBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdWillCloseBlock)(void);

@end
