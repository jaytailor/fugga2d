#import <Foundation/Foundation.h>
@protocol UMSURLSessionDataTask;

typedef void (^UMSHttpClientCompletionHandler)(NSData *data, NSURLResponse *response, NSError *error);

/**
 * Wrapper protocol for a URLSession.
 */
@protocol UMSURLSession <NSObject>

- (id <UMSURLSessionDataTask>)dataTaskWithRequest:(NSURLRequest *)request
                                completionHandler:(UMSHttpClientCompletionHandler)completionHandler;

@end
