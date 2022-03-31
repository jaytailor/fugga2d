#import <Foundation/Foundation.h>
#import "UMSShowError.h"
#import "UMSReward.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSRewardedAd;

/**
 * Protocol that an object should implement to receive events from the `-[UMSRewardedAd showWithViewController:listener:]` method.
 */
@protocol UMSRewardedAdShowDelegate <NSObject>

/**
 * Triggered by the `UMSRewardedAd` instance that `-[UMSRewardedAd showWithViewController:listener:]` was called on when an ad has started playback.
 *
 * @param rewardedAd The `UMSRewardedAd` instance that has started ad playback.
 */
- (void)onRewardedShowed:(UMSRewardedAd *)rewardedAd;

/**
 * Triggered by the `UMSRewardedAd` instance that `-[UMSRewardedAd showWithViewController:listener:]` was called on when an ad has been clicked by the user.
 *
 * @param rewardedAd The `UMSRewardedAd` instance that the user has clicked.
 */
- (void)onRewardedClicked:(UMSRewardedAd *)rewardedAd;

/**
 * Triggered by the `UMSRewardedAd` instance that `-[UMSRewardedAd showWithViewController:listener:]` was called on when an ad has closed after playback has completed.
 *
 * @param rewardedAd The `UMSRewardedAd` instance that has closed.
 */
- (void)onRewardedClosed:(UMSRewardedAd *)rewardedAd;

/**
 * Triggered by the `UMSRewardedAd` instance that `-[UMSRewardedAd showWithViewController:listener:]` was called on when an ad has a failure during playback.
 *
 * @param rewardedAd The `UMSRewardedAd` instance that has failed.
 * @param error `UMSShowError` enum with the specific failure.
 * @param message NSString error message about the failure.
 */
- (void)onRewardedFailedShow:(UMSRewardedAd *)rewardedAd
                       error:(UMSShowError)error
                     message:(NSString *)message;

/**
 * Triggered by the `UMSRewardedAd` instance that `-[UMSRewardedAd showWithViewController:listener:]` was called on when an ad should reward the user.
 *
 * @param rewardedAd The `UMSRewardedAd` instance that has failed.
 * @param reward `UMSReward` object with details about the reward.
 */
- (void)onUserRewarded:(UMSRewardedAd *)rewardedAd
                reward:(id <UMSReward>)reward;
@end

NS_ASSUME_NONNULL_END
