#import <Foundation/Foundation.h>
#import "UMSSdkInitializable.h"
#import "UMSInstantiationServiceProtocol.h"
#import "UMSTrackingServiceProtocol.h"
#import "UMSDiagnosticServiceProtocol.h"
#import "UMSAdNetworkInitializationService.h"
#import "UMSUserSessionProtocol.h"
#import "UMSInitializeResult.h"
#import "UMSMediationAdapterFactoryRegistry.h"
#import "UMSWebViewInformation.h"
#import "UMSHeaderBiddingService.h"
#import "UMSSdkConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSInitializationService : NSObject <UMSSdkInitializable>

@property (readonly, nonatomic, assign) UMSInitializationState initializationState;

- (instancetype)initWithInstantiationService:(id <UMSInstantiationServiceProtocol>)instantiationService
                             trackingService:(id <UMSTrackingServiceProtocol>)trackingService
                           diagnosticService:(id <UMSDiagnosticServiceProtocol>)diagnosticService
                                 userSession:(id <UMSUserSessionProtocol>)userSession
              adNetworkInitializationService:(id <UMSAdNetworkInitializationService>)adNetworkInitializationService
                        headerBiddingService:(id <UMSHeaderBiddingService>)headerBiddingService
             mediationAdapterFactoryRegistry:(id <UMSMediationAdapterFactoryRegistry>)mediationAdapterFactoryRegistry
                          webviewInformation:(id <UMSWebViewInformation>)webviewInformation
                            sdkConfiguration:(id <UMSSdkConfiguration>)sdkConfiguration;

- (void)requestInitializeResult:(UMSRequestInitializeResultBlock)callback;

@end

NS_ASSUME_NONNULL_END
