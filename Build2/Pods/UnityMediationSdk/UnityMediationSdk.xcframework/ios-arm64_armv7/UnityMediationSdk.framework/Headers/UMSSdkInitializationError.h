#import <Foundation/Foundation.h>

/**
 * Enum containing initialization error states.
 */
typedef NS_ENUM (NSInteger, UMSSdkInitializationError) {
    /**
     * Default unknown error.
     */
    UMSSdkInitializationErrorUnknown,
    /**
     * An internal error.
     */
    UMSSdkInitializationErrorNetworkError
};
