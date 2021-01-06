#import <Foundation/Foundation.h>
#import "UMSAdapterLoadError.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface for receiving events describing the load call outcome.
 */
@protocol UMSInterstitialAdapterAdLoadListener <NSObject>

/**
 * Method that is triggered when an ad is successfully loaded.
 */
- (void)onInterstitialAdapterLoaded;

/**
 * Method that is triggered when an ad failed to load.
 * @param error The UMSAdapterLoadError that best describes the failure.
 * @param message An error message with more details about why the ad failed to load.
 */
- (void)onInterstitialAdapterFailedLoad:(UMSAdapterLoadError)error
                                message:(NSString *)message;
@end

NS_ASSUME_NONNULL_END
