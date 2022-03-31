#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "UMSRewardedAdLoadDelegate.h"
#import "UMSRewardedAdShowDelegate.h"
#import "UMSAdState.h"
#import "UMSRewardedAdShowOptions.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * UMSRewardedAd is used to load and show rewarded ads.
 */
@interface UMSRewardedAd : NSObject

/**
 * Constructor
 * @param adUnitId The ID of the rewarded ad unit.
 * @return UMSRewardedAd object
 */
- (instancetype)initWithAdUnitId:(NSString *)adUnitId;

/**
 * Load a rewarded Ad.
 * @param delegate `UMSRewardedAdLoadDelegate` object to receive callbacks for load success or failure.
 */
- (void)loadWithDelegate:(id <UMSRewardedAdLoadDelegate> __weak)delegate;

/**
 * Show a rewarded Ad.
 * @param viewController The view controller that the ad will be shown from.
 * @param delegate `UMSRewardedAdShowDelegate` object to receive callbacks for various rewarded ad show events.
 */
- (void)showWithViewController:(UIViewController *)viewController
                      delegate:(id <UMSRewardedAdShowDelegate> __weak)delegate;

/**
 * Show a rewarded Ad.
 * @param viewController The view controller that the ad will be shown from.
 * @param delegate `UMSRewardedAdShowDelegate` object to receive callbacks for various rewarded ad show events.
 * @param showOptions `UMSRewardedAdShowOptions` object containing publisher set options for the rewarded ad show.
 */
- (void)showWithViewController:(UIViewController *)viewController
                      delegate:(id <UMSRewardedAdShowDelegate> __weak)delegate
                   showOptions:(UMSRewardedAdShowOptions * _Nullable)showOptions;

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
