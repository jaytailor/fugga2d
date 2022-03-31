#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, UMSDiagnosticTokenError) {
    UMSDiagnosticTokenErrorUnknown,
    UMSDiagnosticTokenErrorNoToken,
    UMSDiagnosticTokenErrorAdNetworkError,
    UMSDiagnosticTokenErrorAdNetworkTimedOut,
    UMSDiagnosticTokenErrorAdNetworkInitializing,
    UMSDiagnosticTokenErrorAdNetworkFailedToInitialize
};

NSString * NSStringFromUMSDiagnosticTokenError(UMSDiagnosticTokenError error);
