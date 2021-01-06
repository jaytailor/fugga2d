#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSAdapterConfiguration.h"
#import "UMSInterstitialAdapterAd.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Protocol for ad networks to fill in with logic for showing interstitial ads.
 */
@protocol UMSInterstitialAdapter <NSObject>

/**
 * Returns the current adapter sdk version string
 * @return version in string form
 */
- (NSString *)                   getVersion;

/**
 * Create an interstitial ad that can be loaded and shown.
 * @param parameters UMSAdapterConfiguration with parameters for being able to show an ad with a specific ad network.
 * @return The interstitial ad interface implementation for a specific ad network.
 */
- (id <UMSInterstitialAdapterAd>)createInterstitialAd:(UMSAdapterConfiguration *)parameters;

@end

NS_ASSUME_NONNULL_END
