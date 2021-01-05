#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSRewardedAdLoadListener.h"
#import "UMSRewardedAdShowListener.h"
#import "UMSAdState.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * UMSRewardedAd is used to load and show rewarded ads.
 */
@interface UMSRewardedAd : NSObject

/**
 * Constructor
 * @param gameId The ID of the game.
 * @param adUnitId The ID of the rewarded ad unit.
 * @return UMSRewardedAd object
 */
- (instancetype)initWithGameId:(NSString *)gameId
                      adUnitId:(NSString *)adUnitId;

/**
 * Load a rewarded Ad.
 * @param listener Callbacks for various rewarded ad load events.
 */
- (void)loadWithListener:(id <UMSRewardedAdLoadListener>)listener;

/**
 * Show a rewarded Ad.
 * @param viewController The view controller that the ad will be shown from.
 * @param listener Callbacks for various rewarded ad show events.
 */
- (void)showWithViewController:(UIViewController *)viewController
                      listener:(id <UMSRewardedAdShowListener>)listener;

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
