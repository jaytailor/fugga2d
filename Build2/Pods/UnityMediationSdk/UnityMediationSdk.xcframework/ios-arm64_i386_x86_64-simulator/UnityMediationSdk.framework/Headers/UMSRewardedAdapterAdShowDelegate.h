#import <Foundation/Foundation.h>
#import "UMSShowError.h"
#import "UMSReward.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface for receiving events describing the show call outcomes.
 */
@protocol UMSRewardedAdapterAdShowDelegate <NSObject>
/**
 * Method triggered when the ad has started showing.
 */
- (void)onRewardedAdapterShowed;

/**
 * Method triggered when the impression has been logged.
 */
- (void)onRewardedAdapterImpression;

/**
 * Method triggered when the user clicks on the ad.
 */
- (void)onRewardedAdapterClicked;

/**
 * Method triggered when the ad has been closed.
 */
- (void)onRewardedAdapterClosed;

/**
 * Method triggered when an error has occurred during ad playback.
 *
 * @param error `UMSShowError` that best describes the failure.
 * @param message NSString message detailing the failure.
 */
- (void)onRewardedAdapterFailedShow:(UMSShowError)error
                            message:(NSString *)message;

/**
 * Method to trigger when the user should be rewarded.
 *
 * @param reward `UMSReward` with details about the reward.
 */
- (void)onRewardedAdapterUserRewarded:(id <UMSReward>)reward;

@end

NS_ASSUME_NONNULL_END
