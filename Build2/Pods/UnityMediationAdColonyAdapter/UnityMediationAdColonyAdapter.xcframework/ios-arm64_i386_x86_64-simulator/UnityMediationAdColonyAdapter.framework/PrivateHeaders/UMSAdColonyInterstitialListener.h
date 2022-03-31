#import <Foundation/Foundation.h>
#import <AdColony/AdColony.h>

@interface UMSAdColonyInterstitialListener : NSObject <AdColonyInterstitialDelegate>

@property (nonatomic, copy) void (^ interstitialAdDidReceiveAdBlock)(AdColonyInterstitial *interstitial);
@property (nonatomic, copy) void (^ interstitialAdDidFailWithErrorBlock)(AdColonyAdRequestError *error);
@property (nonatomic, copy) void (^ interstitialAdWillPresentScreenBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdDidClickBlock)(void);
@property (nonatomic, copy) void (^ interstitialAdWillCloseBlock)(void);

@end
