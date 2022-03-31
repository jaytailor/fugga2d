#import <Foundation/Foundation.h>

@protocol UMSLog

- (void)logWithString:(NSString *)logString;

- (void)logInfoWithString:(NSString *)logString;

- (void)logDebugWithString:(NSString *)logString;

- (void)logErrorWithString:(NSString *)logString;

- (void)logFaultWithString:(NSString *)logString;

@end
