#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSInterstitialAdLoadListener.h"
#import "UMSInterstitialAdShowListener.h"
#import "UMSAdState.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * UMSInterstitialAd is used to load and show interstitial ads.
 */
@interface UMSInterstitialAd : NSObject

/**
 * Constructor
 * @param gameId The ID of the game.
 * @param adUnitId The ID of the interstitial ad unit.
 * @return UMSInterstitialAd object.
 */
- (instancetype)initWithGameId:(NSString *)gameId
                      adUnitId:(NSString *)adUnitId;

/**
 * Load an interstitial Ad.
 * @param listener Callbacks for loading failed or succeeded.
 */
- (void)loadWithListener:(id <UMSInterstitialAdLoadListener>)listener;

/**
 * Show an interstitial Ad
 * @param viewController The view controller that the ad will be shown from.
 * @param listener Callbacks for various interstitial ad events.
 */
- (void)showWithViewController:(UIViewController *)viewController
                      listener:(id <UMSInterstitialAdShowListener>)listener;

/**
 * Getter for the current ad state.
 * @return The ad state.
 */
- (UMSAdState)  getAdState;

/**
 * Getter for the configured ad unit ID.
 * @return The current ad unit ID.
 */
- (NSString *)  getAdUnitId;

@end

NS_ASSUME_NONNULL_END
