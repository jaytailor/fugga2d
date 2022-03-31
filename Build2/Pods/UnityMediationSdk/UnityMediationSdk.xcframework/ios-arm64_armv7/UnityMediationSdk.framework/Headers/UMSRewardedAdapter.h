#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSRewardedAdapterAd.h"
#import "UMSAdapterConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Protocol for ad networks to fill in with logic for showing rewarded ads.
 */
@protocol UMSRewardedAdapter <NSObject>

/**
 * Returns the current adapter sdk version string.
 * @return version in string form.
 */
- (NSString *)               getVersion;

/**
 * Create a rewarded ad that can be loaded and shown
 * @param parameters `UMSAdapterConfiguration` with parameters for being able to show an ad with a specific ad network.
 * @return The rewarded ad interface implementation for a specific ad network.
 */
- (id <UMSRewardedAdapterAd>)createRewardedAd:(UMSAdapterConfiguration *)parameters;

@end

NS_ASSUME_NONNULL_END
