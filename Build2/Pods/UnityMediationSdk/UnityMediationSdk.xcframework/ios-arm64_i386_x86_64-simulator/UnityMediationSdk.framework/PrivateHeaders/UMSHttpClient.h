#import <Foundation/Foundation.h>
#import "UMSURLSession.h"

/**
 * Http Client for managing requests.
 *
 * This is uses the UMSURLSessionProtocol so that we can mock network requests.
 */
@interface UMSHttpClient : NSObject <UMSURLSession>

- (instancetype)initWithSession:(id <UMSURLSession>)session;

@end
