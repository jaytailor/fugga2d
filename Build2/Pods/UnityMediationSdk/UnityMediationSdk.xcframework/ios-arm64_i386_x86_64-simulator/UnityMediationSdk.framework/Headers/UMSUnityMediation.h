#import <Foundation/Foundation.h>
#import "UMSInitializationState.h"
#import "UMSInitializationConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Unity Mediation class for system wide functions.
 */
@interface UMSUnityMediation : NSObject

/**
 * Initializes the Unity Mediation SDK. It is mandatory to call this method before any `UMSInterstitialAd` and `UMSRewardedAd` can load.
 *
 * @param initializationConfiguration The `UMSInitializationConfiguration` object. `UMSInitializationConfiguration.gameId` is a required field.
 */
+ (void)initializeWithConfiguration:(UMSInitializationConfiguration *)initializationConfiguration;

/**
 * Get the current initialization state.
 *
 * @return The current `UMSInitializationState`.
 */
+ (UMSInitializationState)getInitializationState;

@end

NS_ASSUME_NONNULL_END
