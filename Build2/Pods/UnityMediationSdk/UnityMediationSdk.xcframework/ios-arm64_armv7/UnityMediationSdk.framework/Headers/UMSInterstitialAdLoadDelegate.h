#import <Foundation/Foundation.h>
#import "UMSLoadError.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSInterstitialAd;

/**
 * Protocol that an object should implement to receive events from the `-[UMSInterstitialAd loadWithDelegate:]` method.
 */
@protocol UMSInterstitialAdLoadDelegate <NSObject>

/**
 * Triggered by the `UMSInterstitialAd` instance that `-[UMSInterstitialAd loadWithDelegate:]` was called on when an ad is ready for playback.
 *
 * @param interstitialAd The `UMSInterstitialAd` instance that is ready to show.
 */
- (void)onInterstitialLoaded:(UMSInterstitialAd *)interstitialAd;

/**
 * Triggered by the `UMSInterstitialAd` instance that `-[UMSInterstitialAd loadWithDelegate:]` was called on when no ads could be loaded.
 *
 * @param interstitialAd The `UMSInterstitialAd` instance that failed to load.
 * @param error `UMSLoadError` enum with the specific failure.
 * @param message NSString error message about the failure.
 */
- (void)onInterstitialFailedLoad:(UMSInterstitialAd *)interstitialAd
                           error:(UMSLoadError)error
                         message:(NSString *)message;
@end

NS_ASSUME_NONNULL_END
