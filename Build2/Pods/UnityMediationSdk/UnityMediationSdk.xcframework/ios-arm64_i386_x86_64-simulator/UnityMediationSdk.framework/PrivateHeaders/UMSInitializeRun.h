#import <Foundation/Foundation.h>
#import "UMSSdkInitializationError.h"
#import "UMSInstantiationServiceProtocol.h"
#import "UMSTrackingServiceProtocol.h"
#import "UMSDiagnosticServiceProtocol.h"
#import "UMSUserSessionProtocol.h"
#import "UMSInitializationRunState.h"
#import "UMSInitializationConfiguration.h"
#import "UMSInitializeResult.h"
#import "UMSInitializationActionData.h"
#import "UMSAdNetworkInitializationService.h"
#import "UMSWebViewInformation.h"
#import "UMSHeaderBiddingService.h"
#import "UMSSdkConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@class UMSInitializeRun;

@protocol UMSInitializeRunDelegate
- (void)onInitializeRunComplete:(UMSInitializeRun *)initializeRun;
@end

@interface UMSInitializeRun : NSObject <UMSInitializeResult, UMSInitializationActionData>

// UMSInitializeResult Properties
@property (readonly, nonatomic, strong) NSString *_Nullable gameId;
@property (readonly, nonatomic, strong) NSString *_Nullable initializationId;
@property (readonly, nonatomic, strong) NSString *_Nullable installationId;

@property (readonly, nonatomic, assign) UMSInitializationRunState initializationRunState;
@property (readonly, nonatomic, assign) UMSSdkInitializationError initializationError;
@property (readonly, nonatomic, strong) NSString *_Nullable errorMessage;
@property (readonly, nonatomic, strong) UMISInitializationResponse *_Nullable response;
@property (nonatomic, weak) id <UMSInitializeRunDelegate> _Nullable delegate;

- (instancetype)initWithInitializationConfiguration:(UMSInitializationConfiguration *)initializationConfiguration
                               instantiationService:(id <UMSInstantiationServiceProtocol>)instantiationService
                                    trackingService:(id <UMSTrackingServiceProtocol>)trackingService
                                  diagnosticService:(id <UMSDiagnosticServiceProtocol>)diagnosticService
                                        userSession:(id <UMSUserSessionProtocol>)userSession
                     adNetworkInitializationService:(id <UMSAdNetworkInitializationService>)adNetworkInitializationService
                               headerBiddingService:(id <UMSHeaderBiddingService>)headerBiddingService
                                 webviewInformation:(id <UMSWebViewInformation>)webviewInformation
                                   sdkConfiguration:(id <UMSSdkConfiguration>)sdkConfiguration;

- (void)        run;

@end

NS_ASSUME_NONNULL_END
