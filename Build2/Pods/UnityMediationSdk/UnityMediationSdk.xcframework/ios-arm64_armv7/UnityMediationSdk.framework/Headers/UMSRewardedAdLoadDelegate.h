#import <Foundation/Foundation.h>
#import "UMSLoadError.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSRewardedAd;

/**
 * Protocol that an object should implement to receive events from the `-[UMSRewardedAd loadWithDelegate:]` method.
 */
@protocol UMSRewardedAdLoadDelegate <NSObject>

/**
 * Triggered by the `UMSRewardedAd` instance that `-[UMSRewardedAd loadWithDelegate:]` was called on when an ad is ready for playback.
 *
 * @param rewardedAd The `UMSRewardedAd` instance that is ready to show.
 */
- (void)onRewardedLoaded:(UMSRewardedAd *)rewardedAd;

/**
 * Triggered by the `UMSRewardedAd` instance that `-[UMSRewardedAd loadWithDelegate:]` was called on when no ads could be loaded.
 *
 * @param rewardedAd The `UMSRewardedAd` instance that failed to load.
 * @param error `UMSLoadError` enum with the specific failure.
 * @param message NSString error message about the failure.
 */
- (void)onRewardedFailedLoad:(UMSRewardedAd *)rewardedAd
                       error:(UMSLoadError)error
                     message:(NSString *)message;
@end

NS_ASSUME_NONNULL_END
