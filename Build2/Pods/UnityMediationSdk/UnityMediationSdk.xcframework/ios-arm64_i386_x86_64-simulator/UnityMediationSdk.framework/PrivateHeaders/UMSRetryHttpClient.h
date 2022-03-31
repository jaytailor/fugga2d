#import <Foundation/Foundation.h>
#import "UMSURLSession.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSRetryHttpClient : NSObject <UMSURLSession>

+ (void)setRequestMaximumRetryAttemptCount:(int64_t)requestMaximumRetryAttemptCount;

+ (int64_t)     getRequestMaximumRetryAttemptCount;

- (instancetype)initWithHttpClient:(id <UMSURLSession>)httpClient;

@end

NS_ASSUME_NONNULL_END
