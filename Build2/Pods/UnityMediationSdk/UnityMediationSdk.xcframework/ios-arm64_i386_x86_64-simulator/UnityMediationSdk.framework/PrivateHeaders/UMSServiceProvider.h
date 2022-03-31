#import <Foundation/Foundation.h>
#import "UMSTrackingService.h"
#import "UMSDiagnosticServiceProtocol.h"
#import "UMSTrackingServiceProtocol.h"
#import "UMSInstantiationServiceProtocol.h"
#import "UMSImpressionEventPublisherProtocol.h"
#import "UMSUserSessionProtocol.h"
#import "UMSSdkInitializable.h"
#import "UMSAdNetworkInitializationService.h"
#import "UMSMediationAdapterFactoryRegistry.h"
#import "UMSWebViewInformation.h"
#import "UMSHeaderBiddingService.h"
#import "UMSS2SRedeemAction.h"
#import "UMSSdkConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSServiceProvider <NSObject>

@property (readonly, strong, nonatomic) id <UMSUserSessionProtocol> userSession;
@property (readonly, strong, nonatomic) id <UMSInstantiationServiceProtocol> instantiationService;
@property (readonly, strong, nonatomic) id <UMSTrackingServiceProtocol> trackingService;
@property (readonly, strong, nonatomic) id <UMSDiagnosticServiceProtocol> diagnosticService;
@property (readonly, strong, nonatomic) id <UMSImpressionEventPublisherProtocol> impressionEventPublisher;
@property (readonly, strong, nonatomic) id <UMSSdkInitializable> initializationService;
@property (readonly, strong, nonatomic) id <UMSAdNetworkInitializationService> adNetworkInitializationService;
@property (readonly, strong, nonatomic) id <UMSHeaderBiddingService> headerBiddingService;
@property (readonly, strong, nonatomic) id <UMSMediationAdapterFactoryRegistry> mediationAdapterFactoryRegistry;
@property (readonly, strong, nonatomic) id <UMSWebViewInformation> webviewInformation;
@property (readonly, strong, nonatomic) id <UMSS2SRedeemAction> s2sRedeemAction;
@property (readonly, strong, nonatomic) id <UMSSdkConfiguration> sdkConfiguration;

@end

NS_ASSUME_NONNULL_END
