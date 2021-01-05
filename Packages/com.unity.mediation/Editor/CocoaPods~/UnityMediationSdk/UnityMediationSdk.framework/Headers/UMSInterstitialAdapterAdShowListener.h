#import <Foundation/Foundation.h>
#import "UMSShowError.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface for receiving events describing the show call outcomes.
 */
@protocol UMSInterstitialAdapterAdShowListener <NSObject>
/**
 * Method triggered when the ad has started showing.
 */
- (void)onInterstitialAdapterShowed;

/**
 * Method triggered when the impression has been logged
 */
- (void)onInterstitialAdapterImpression;

/**
 * Method triggered when the user clicks on the ad.
 */
- (void)onInterstitialAdapterClicked;

/**
 * Method triggered when the ad has been closed.
 */
- (void)onInterstitialAdapterClosed;

/**
 * Method triggered when an error has occurred during ad playback.
 * @param error UMSShowError that best describes the failure.
 * @param message String message detailing the failure.
 */
- (void)onInterstitialAdapterFailedShow:(UMSShowError)error
                                message:(NSString *)message;
@end

NS_ASSUME_NONNULL_END
