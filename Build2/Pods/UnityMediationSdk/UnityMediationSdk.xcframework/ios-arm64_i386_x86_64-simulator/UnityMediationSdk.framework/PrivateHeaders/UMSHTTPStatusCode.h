#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, UMSHTTPStatusCode) {
    UMSHTTPStatusCodeSuccess             = 200,
    UMSHTTPStatusCodeInternalServerError = 500,
    UMSHTTPStatusCodeNotFound            = 404,
    UMSHTTPStatusCodeBadRequest          = 400
};
