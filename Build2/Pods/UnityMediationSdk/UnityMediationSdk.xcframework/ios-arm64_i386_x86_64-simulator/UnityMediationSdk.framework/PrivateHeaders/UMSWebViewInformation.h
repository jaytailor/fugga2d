#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UMSWebViewInformation

- (void)fetchDeviceUserAgent:(void (^)(void))completion;

- (NSString *_Nullable)deviceUserAgent;

@end

NS_ASSUME_NONNULL_END
