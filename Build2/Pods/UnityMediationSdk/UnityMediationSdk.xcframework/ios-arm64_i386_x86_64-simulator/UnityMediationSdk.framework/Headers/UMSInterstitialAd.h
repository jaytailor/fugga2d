#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSInterstitialAdLoadDelegate.h"
#import "UMSInterstitialAdShowDelegate.h"
#import "UMSAdState.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * UMSInterstitialAd is used to load and show interstitial ads.
 */
@interface UMSInterstitialAd : NSObject

/**
 * Constructor
 * @param adUnitId The ID of the interstitial ad unit.
 * @return UMSInterstitialAd object.
 */
- (instancetype)initWithAdUnitId:(NSString *)adUnitId;

/**
 * Load an interstitial Ad.
 * @param delegate `UMSInterstitialAdLoadDelegate` object to receive callbacks for load success or failure.
 */
- (void)loadWithDelegate:(id <UMSInterstitialAdLoadDelegate> __weak)delegate;

/**
 * Show an interstitial Ad
 * @param viewController The view controller that the ad will be shown from.
 * @param delegate `UMSInterstitialAdShowDelegate` object to receive callbacks for various interstitial ad show events.
 */
- (void)showWithViewController:(UIViewController *)viewController
                      delegate:(id <UMSInterstitialAdShowDelegate> __weak)delegate;

/**
 * Getter for the current ad state.
 * @return `UMSAdState` The ad state.
 */
- (UMSAdState)  getAdState;

/**
 * Getter for the configured ad unit ID.
 * @return NSString The current ad unit ID.
 */
- (NSString *)  getAdUnitId;

@end

NS_ASSUME_NONNULL_END
