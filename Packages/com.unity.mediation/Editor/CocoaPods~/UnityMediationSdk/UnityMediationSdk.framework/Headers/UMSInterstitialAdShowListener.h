#import <Foundation/Foundation.h>
#import "UMSShowError.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSInterstitialAd;

/**
 * Listener to notify UMSInterstitialAd.show outcomes.
 */
@protocol UMSInterstitialAdShowListener <NSObject>

/**
 * Triggered when the ad begins showing.
 * @param interstitialAd The ad that triggered the event.
 */
- (void)onInterstitialShowed:(UMSInterstitialAd *)interstitialAd;

/**
 * Triggered when the ad is clicked on.
 * @param interstitialAd The ad that triggered the event.
 */
- (void)onInterstitialClicked:(UMSInterstitialAd *)interstitialAd;

/**
 * Triggered when the ad finishes showing.
 * @param interstitialAd The ad that triggered the event.
 */
- (void)onInterstitialClosed:(UMSInterstitialAd *)interstitialAd;

/**
 * Triggered when the ad has a failure during playback.
 * @param interstitialAd The ad unit that failed to show.
 * @param error Enum of possible errors.
 * @param message String error message.
 */
- (void)onInterstitialFailedShow:(UMSInterstitialAd *)interstitialAd
                           error:(UMSShowError)error
                         message:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
