#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// Wrapper implementation of the functionality in <os/log.h>.
// This is done in case we need to swap out logging functionality
// in the future it can be done rather easily.
@interface UMSLogger : NSObject

+ (void)logWithString:(NSString *)logString;

+ (void)logInfoWithString:(NSString *)logString;

+ (void)logDebugWithString:(NSString *)logString;

+ (void)logErrorWithString:(NSString *)logString;

+ (void)logFaultWithString:(NSString *)logString;

@end

NS_ASSUME_NONNULL_END
