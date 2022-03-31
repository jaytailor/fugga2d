#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, UMSInitializationRunState) {
    UMSInitializationRunStateUninitialized,
    UMSInitializationRunStateInitializing,
    UMSInitializationRunStateInitialized,
    UMSInitializationRunStateInitializeFailed
};
