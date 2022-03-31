#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSInterstitialAdapterAdLoadDelegate.h"
#import "UMSInterstitialAdapterAdShowDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSInterstitialAdapterAdLoadDelegate;

/**
 * Interface to be implemented for loading and showing an Interstitial ad.
 */
@protocol UMSInterstitialAdapterAd <NSObject>

/**
 * Load an interstitial ad.
 * @param delegate `UMSInterstitialAdapterAdLoadDelegate` for receiving events about the outcome of the load call.
 */
- (void)load:(id<UMSInterstitialAdapterAdLoadDelegate> __weak)delegate;

/**
 * Show an interstitial ad if it has been loaded.
 * @param viewController `UMSInterstitialAdapterAdShowDelegate` for receiving events about the outcome of the show call.
 * @param delegate `UMSInterstitialAdapterAdShowDelegate` for receiving events about the outcome of the show call.
 */
- (void)show:(UIViewController *)viewController
    delegate:(id<UMSInterstitialAdapterAdShowDelegate> __weak)delegate;

/**
 * Returns the ID of the Ad Network's ad unit ID / placement ID / zone ID.
 *
 * @return NSString
 */
- (NSString *)getAdSourceInstance;

@end

NS_ASSUME_NONNULL_END
