#import <Foundation/Foundation.h>
#import "UMSHttpClient.h"
#import "UMSDiagnosticServiceProtocol.h"
#import "UMSUserSessionProtocol.h"
#import "UMSAdapterLoadError.h"
#import "UMSMediationAdapterFactoryRegistry.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSDiagnosticService : NSObject <UMSDiagnosticServiceProtocol>

@property (nonatomic, assign) BOOL enabled;

- (instancetype)    initWithBaseUrl:(NSString *)baseUrl
                        userSession:(id <UMSUserSessionProtocol>)userSession
                         httpClient:(UMSHttpClient *)httpClient
    mediationAdapterFactoryRegistry:(id <UMSMediationAdapterFactoryRegistry>)mediationAdapterFactoryRegistry;

@end

NS_ASSUME_NONNULL_END
