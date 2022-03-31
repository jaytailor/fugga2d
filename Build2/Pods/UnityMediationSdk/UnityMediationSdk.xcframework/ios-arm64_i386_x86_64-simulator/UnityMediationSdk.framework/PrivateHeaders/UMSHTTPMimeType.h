#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, UMSHTTPMimeType) {
    UMSHTTPMimeTypeUnknown,
    UMSHTTPMimeTypeProtobuf,
    UMSHTTPMimeTypeJSON
};

NSString * NSStringFromUMSHTTPMimeType(UMSHTTPMimeType type);
