#import <Foundation/Foundation.h>
#import "UMSShowError.h"
#import "UMSReward.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSRewardedAd;

/**
 * Listener to notify UMSRewardedAd.show outcomes.
 */
@protocol UMSRewardedAdShowListener <NSObject>

/**
 * Triggered when the ad begins showing.
 * @param rewardedAd The ad that triggered the event.
 */
- (void)onRewardedShowed:(UMSRewardedAd *)rewardedAd;

/**
 * Triggered when the ad is clicked on.
 * @param rewardedAd The ad that triggered the event.
 */
- (void)onRewardedClicked:(UMSRewardedAd *)rewardedAd;

/**
 * Triggered when the ad is closed.
 * @param rewardedAd The ad that triggered the event.
 */
- (void)onRewardedClosed:(UMSRewardedAd *)rewardedAd;

/**
 * Triggered when the ad has a failure during playback.
 * @param rewardedAd The ad unit that failed to show.
 * @param error Enum of possible errors.
 * @param message String error message.
 */
- (void)onRewardedFailedShow:(UMSRewardedAd *)rewardedAd
                       error:(UMSShowError)error
                     message:(NSString *)message;

/**
 * Triggered when the user should be rewarded.
 * @param rewardedAd The ad that triggered the event.
 * @param reward UMSReward object with details about the reward.
 */
- (void)onUserRewarded:(UMSRewardedAd *)rewardedAd
                reward:(id <UMSReward>)reward;
@end

NS_ASSUME_NONNULL_END
