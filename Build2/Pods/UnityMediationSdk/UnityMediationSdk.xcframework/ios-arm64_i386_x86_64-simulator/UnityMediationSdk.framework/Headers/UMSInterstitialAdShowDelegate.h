#import <Foundation/Foundation.h>
#import "UMSShowError.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSInterstitialAd;

/**
 * Protocol that an object should implement to receive events from the `-[UMSInterstitialAd showWithViewController:delegate:]` method.
 */
@protocol UMSInterstitialAdShowDelegate <NSObject>

/**
 * Triggered by the `UMSInterstitialAd` instance that `-[UMSInterstitialAd showWithViewController:delegate:]` was called on when an ad has started playback.
 *
 * @param interstitialAd The `UMSInterstitialAd` instance that has started ad playback.
 */
- (void)onInterstitialShowed:(UMSInterstitialAd *)interstitialAd;

/**
 * Triggered by the `UMSInterstitialAd` instance that `-[UMSInterstitialAd showWithViewController:delegate:]` was called on when an ad has been clicked by the user.
 *
 * @param interstitialAd The `UMSInterstitialAd` instance that the user has clicked.
 */
- (void)onInterstitialClicked:(UMSInterstitialAd *)interstitialAd;

/**
 * Triggered by the `UMSInterstitialAd` instance that `-[UMSInterstitialAd showWithViewController:delegate:]` was called on when an ad has closed after playback has completed.
 *
 * @param interstitialAd The `UMSInterstitialAd` instance that has closed.
 */
- (void)onInterstitialClosed:(UMSInterstitialAd *)interstitialAd;

/**
 * Triggered by the `UMSInterstitialAd` instance that `-[UMSInterstitialAd showWithViewController:delegate:]` was called on when an ad has a failure during playback.
 *
 * @param interstitialAd The `UMSInterstitialAd` instance that has failed.
 * @param error `UMSShowError` enum with the specific failure.
 * @param message NSString error message about the failure.
 */
- (void)onInterstitialFailedShow:(UMSInterstitialAd *)interstitialAd
                           error:(UMSShowError)error
                         message:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
