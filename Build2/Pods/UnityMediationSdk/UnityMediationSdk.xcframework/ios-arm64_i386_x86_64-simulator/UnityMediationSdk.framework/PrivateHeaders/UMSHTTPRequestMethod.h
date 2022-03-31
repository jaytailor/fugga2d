#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, UMSHTTPRequestMethod) {
    UMSHTTPRequestMethodUnknown,
    UMSHTTPRequestMethodPOST,
    UMSHTTPRequestMethodGET
};

NSString * NSStringFromUMSHTTPRequestMethod(UMSHTTPRequestMethod method);
