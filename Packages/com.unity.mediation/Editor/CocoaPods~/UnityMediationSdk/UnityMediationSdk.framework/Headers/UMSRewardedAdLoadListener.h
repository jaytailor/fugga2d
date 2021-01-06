#import <Foundation/Foundation.h>
#import "UMSLoadError.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSRewardedAd;

/**
 * Listener to notify UMSRewardedAd.load outcomes.
 */
@protocol UMSRewardedAdLoadListener <NSObject>

/**
 * Triggered when the rewarded ad unit is loaded with an ad.
 * @param rewardedAd The ad unit that is ready to show.
 */
- (void)onRewardedLoaded:(UMSRewardedAd *)rewardedAd;

/**
 * Triggered when the rewarded ad unit fails to load an ad.
 * @param rewardedAd The ad unit that failed to load.
 * @param error Enum of possible errors.
 * @param message String error message.
 */
- (void)onRewardedFailedLoad:(UMSRewardedAd *)rewardedAd
                       error:(UMSLoadError)error
                     message:(NSString *)message;
@end

NS_ASSUME_NONNULL_END
