#import <Foundation/Foundation.h>

/**
 * Enum containing initialization states.
 */
typedef NS_ENUM (NSInteger, UMSInitializationState) {
    UMSInitializationStateUninitialized,
    UMSInitializationStateInitializing,
    UMSInitializationStateInitialized,
};
