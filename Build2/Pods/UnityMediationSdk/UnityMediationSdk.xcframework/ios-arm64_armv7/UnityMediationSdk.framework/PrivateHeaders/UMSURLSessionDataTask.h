#import <Foundation/Foundation.h>

@protocol UMSURLSessionDataTask <NSObject>

@property (nullable, readonly, copy) NSURLResponse *response;

@property (readonly) NSURLSessionTaskState state;

- (void)cancel;

- (void)resume;

@end
