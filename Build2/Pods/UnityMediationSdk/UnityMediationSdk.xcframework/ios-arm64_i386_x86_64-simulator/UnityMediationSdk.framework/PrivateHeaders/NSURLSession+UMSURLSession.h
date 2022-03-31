#import <Foundation/Foundation.h>
#import "UMSHttpClient.h"

/**
 * Extension of the NSURLSession class so that it "conforms" to the UMSURLSessionProtocol.
 */
@interface NSURLSession (UMSURLSessionProtocol) <UMSURLSession>

@end
