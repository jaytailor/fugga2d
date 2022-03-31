#import <Foundation/Foundation.h>
#import "UMSLog.h"

@interface UMSLoggerInternal : NSObject

+ (id)          sharedInstance;

- (instancetype)initWithLog:(id <UMSLog>)log;

- (void)logWithString:(NSString *)logString;

- (void)logInfoWithString:(NSString *)logString;

- (void)logDebugWithString:(NSString *)logString;

- (void)logErrorWithString:(NSString *)logString;

- (void)logFaultWithString:(NSString *)logString;

- (void)        disable;

- (void)        enable;

- (void)setLog:(id <UMSLog>)log;

@end
