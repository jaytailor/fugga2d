#import <Foundation/Foundation.h>
#import "UMSURLSessionDataTask.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSRetryableDataTask : NSObject <UMSURLSessionDataTask>

@property (nonatomic, strong) id<UMSURLSessionDataTask> currentDataTask;

@end

NS_ASSUME_NONNULL_END
