#import <Foundation/Foundation.h>
#import <UnityMediationTrackingService/UnityMediationTrackingService.h>
#import "UMSHttpClient.h"
#import "UMSDiagnosticService.h"
#import "UMSTrackingServiceProtocol.h"
#import "UMSUserSessionProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSTrackingService : NSObject <UMSTrackingServiceProtocol>

- (instancetype)initWithBaseUrl:(NSString *)baseUrl
                    userSession:(id <UMSUserSessionProtocol>)userSession
              diagnosticService:(id <UMSDiagnosticServiceProtocol>)diagnosticService
                     urlSession:(id <UMSURLSession>)urlSession;

@end

NS_ASSUME_NONNULL_END
