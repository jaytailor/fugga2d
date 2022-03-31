#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSRewardedAdapterAdLoadDelegate.h"
#import "UMSRewardedAdapterAdShowDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface to be implemented for loading and showing a Rewarded ad.
 */
@protocol UMSRewardedAdapterAd <NSObject>

/**
 * Load a Rewarded ad.
 * @param delegate `UMSRewardedAdapterAdLoadDelegate` for receiving events about the outcome of the load call.
 */
- (void)load:(id <UMSRewardedAdapterAdLoadDelegate> __weak)delegate;

/**
 * Show a Rewarded ad if it has been loaded.
 * @param delegate `UMSRewardedAdapterAdShowDelegate` for receiving events about the outcome of the show call.
 */
- (void)show:(UIViewController *)viewController
    delegate:(id<UMSRewardedAdapterAdShowDelegate> __weak)delegate;

/**
 * Returns the ID of the Ad Network's ad unit ID / placement ID / zone ID.
 *
 * @return NSString
 */
- (NSString *)getAdSourceInstance;

@end

NS_ASSUME_NONNULL_END
