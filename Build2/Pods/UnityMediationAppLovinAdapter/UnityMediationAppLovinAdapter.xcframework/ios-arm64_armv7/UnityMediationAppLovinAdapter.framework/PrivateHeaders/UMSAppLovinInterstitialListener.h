#import <AppLovinSDK/AppLovinSDK.h>

@interface UMSAppLovinInterstitialListener : NSObject <ALAdLoadDelegate, ALAdDisplayDelegate>

@property (nonatomic, copy) void (^ interstitialAdDidLoadAdBlock)(ALAd *ad);
@property (nonatomic, copy) void (^ interstitialAdDidFailLoadWithErrorBlock)(int code);
@property (nonatomic, copy) void (^ interstitialAdWillPresentScreenBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdDidClickBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdWillCloseBlock)(void);

@end
