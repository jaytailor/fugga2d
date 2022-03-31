#import <Foundation/Foundation.h>

/**
 * Enum containing initialization states.
 */
typedef NS_ENUM (NSInteger, UMSInitializationState) {
    /**
     * The SDK is not initialized. `+[UMSUnityMediation initializeWithConfiguration:]` should be called to try to initialize.
     */
    UMSInitializationStateUninitialized,
    /**
     * The SDK is in the process of initializing.
     */
    UMSInitializationStateInitializing,
    /**
     * The SDK has successfully initialized.
     */
    UMSInitializationStateInitialized
};
