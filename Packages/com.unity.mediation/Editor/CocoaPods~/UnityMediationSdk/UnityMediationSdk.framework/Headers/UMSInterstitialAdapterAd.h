#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSInterstitialAdapterAdLoadListener.h"
#import "UMSInterstitialAdapterAdShowListener.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSInterstitialAdapterAdLoadListener;

/**
 * Interface to be implemented for loading and showing an Interstitial ad.
 */
@protocol UMSInterstitialAdapterAd <NSObject>

/**
 * Load an interstitial ad.
 * @param listener UMSInterstitialAdapterAdLoadListener for receiving events about the outcome of the load call.
 */
- (void)load:(id <UMSInterstitialAdapterAdLoadListener>)listener;

/**
 * Show an interstitial ad if it has been loaded.
 * @param viewController UMSInterstitialAdapterAdShowListener for receiving events about the outcome of the show call.
 * @param listener UMSInterstitialAdapterAdShowListener for receiving events about the outcome of the show call.
 */
- (void)show:(UIViewController *)viewController
    listener:(id <UMSInterstitialAdapterAdShowListener>)listener;

/**
 * get the interstitial ad Instance Id
 */
- (NSString *)getAdSourceInstance;

@end

NS_ASSUME_NONNULL_END
