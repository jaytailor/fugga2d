#import <Foundation/Foundation.h>
#import "UMSSdkInitializationError.h"

/**
 * Protocol that an object should implement to receive events from the `+[UMSUnityMediation initializeWithConfiguration:]` method.
 */
@protocol UMSInitializationDelegate <NSObject>

/**
 * Called by the UnityMediationSdk when initialization has completed successfully.
 */
- (void)onInitializationComplete;

/**
 * Called by the UnityMediationSdk when initialization has failed.
 *
 * @param errorCode `UMSInitializationError` enum specifying the failure.
 * @param message NSString message specific to the failure.
 */
- (void)onInitializationFailed:(UMSSdkInitializationError)errorCode message:(NSString *)message;

@end
