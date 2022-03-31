#import <Foundation/Foundation.h>
#import <os/log.h>
#import "UMSLog.h"

@interface UMSOSLog : NSObject <UMSLog>

- (instancetype)initWithOsLog:(os_log_t)osLog;

@end
