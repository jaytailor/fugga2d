#import <Foundation/Foundation.h>
#import "UMSLoadError.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSInterstitialAd;

/**
 * Listener to notify UMSInterstitialAd.load outcomes.
 */
@protocol UMSInterstitialAdLoadListener <NSObject>

/**
 * Triggered when the interstitial ad unit is loaded with an ad.
 * @param interstitialAd The ad unit that is ready to show.
 */
- (void)onInterstitialLoaded:(UMSInterstitialAd *)interstitialAd;

/**
 * Triggered when the interstitial ad unit fails to load with an ad.
 * @param interstitialAd The ad unit that failed to load.
 * @param error Enum of possible errors.
 * @param message String error message.
 */
- (void)onInterstitialFailedLoad:(UMSInterstitialAd *)interstitialAd
                           error:(UMSLoadError)error
                         message:(NSString *)message;
@end

NS_ASSUME_NONNULL_END
