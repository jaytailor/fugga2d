#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSRewardedAdapterAdLoadListener.h"
#import "UMSRewardedAdapterAdShowListener.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface to be implemented for loading and showing a Rewarded ad.
 */
@protocol UMSRewardedAdapterAd <NSObject>

/**
 * Load a Rewarded ad.
 * @param listener UMSRewardedAdapterAdLoadListener for receiving events about the outcome of the load call.
 */
- (void)load:(id <UMSRewardedAdapterAdLoadListener>)listener;

/**
 * Show a Rewarded ad if it has been loaded.
 * @param listener UMSRewardedAdapterAdShowListener for receiving events about the outcome of the show call.
 */
- (void)show:(UIViewController *)viewController listener:(id<UMSRewardedAdapterAdShowListener>)listener;

/**
 * get the rewarded ad Instance Id
 */
- (NSString *)getAdSourceInstance;

@end

NS_ASSUME_NONNULL_END
