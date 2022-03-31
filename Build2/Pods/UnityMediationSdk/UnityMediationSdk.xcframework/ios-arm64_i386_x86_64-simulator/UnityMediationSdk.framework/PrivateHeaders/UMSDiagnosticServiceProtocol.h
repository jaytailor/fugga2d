#import <Foundation/Foundation.h>
#import <UnityMediationTrackingService/UnityMediationTrackingService.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMSHttpClient.h"
#import "UMSLoadError.h"
#import "UMSShowError.h"
#import "UMSAdapterLoadError.h"
#import "UMSAdNetwork.h"
#import "UMSDiagnosticTokenError.h"
#import "UMSAdNetworkInitializationInformation.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSDiagnosticServiceProtocol <NSObject>

@property (nonatomic, assign) BOOL enabled;

- (void) sendAdUnitCreated:(NSString *)gameId
    adUnitCreatedTimestamp:(NSDate *)adUnitCreatedTimestamp
                    adType:(UMTSAdUnitFormat)adType
                  adUnitId:(NSString *)adUnitId
            installationId:(NSString *_Nullable)installationId;

- (void)sendAdUnitLoad:(NSString *)gameId
                adType:(UMTSAdUnitFormat)adType
              adUnitId:(NSString *)adUnitId
        installationId:(NSString *_Nullable)installationId;

- (void)       sendAdUnitLoadFailed:(NSString *)gameId
                             adType:(UMTSAdUnitFormat)adType
                           adUnitId:(NSString *)adUnitId
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                              error:(UMSLoadError)error
                adUnitLoadTimestamp:(NSDate *)adUnitLoadTimestamp
                     installationId:(NSString *_Nullable)installationId;

- (void)           sendAdUnitLoaded:(NSString *)gameId
                             adType:(UMTSAdUnitFormat)adType
                           adUnitId:(NSString *)adUnitId
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                          usageType:(UMISUsageType)usageType
                         lineItemId:(NSString *)lineItemId
                adUnitLoadTimestamp:(NSDate *)adUnitLoadTimestamp
                     installationId:(NSString *_Nullable)installationId
                          adNetwork:(UMSAdNetwork)adNetwork;

- (void)      sendAdapterLoadFailed:(NSString *)gameId
                             adType:(UMTSAdUnitFormat)adType
                           adUnitId:(NSString *)adUnitId
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                         lineItemId:(NSString *)lineItemId
                          adNetwork:(UMSAdNetwork)adNetwork
                              error:(UMSAdapterLoadError)error
                            message:(NSString *)message
                adUnitLoadTimestamp:(NSDate *)adUnitLoadTimestamp
                     installationId:(NSString *_Nullable)installationId;

- (void)             sendAdUnitShow:(NSString *)gameId
                             adType:(UMTSAdUnitFormat)adType
                           adUnitId:(NSString *)adUnitId
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                          usageType:(UMISUsageType)usageType
              adUnitLoadedTimestamp:(NSDate *)adUnitLoadedTimestamp
                     installationId:(NSString *_Nullable)installationId
                          adNetwork:(UMSAdNetwork)adNetwork;

- (void)       sendAdUnitShowFailed:(NSString *)gameId
                             adType:(UMTSAdUnitFormat)adType
                           adUnitId:(NSString *)adUnitId
                         lineItemId:(NSString *)lineItemId
                          adNetwork:(UMSAdNetwork)adNetwork
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                          usageType:(UMISUsageType)usageType
                              error:(UMSShowError)error
                       errorMessage:(NSString *)errorMessage
                     installationId:(NSString *_Nullable)installationId;

- (void)     sendAdUnitUserRewarded:(NSString *)gameId
                           adUnitId:(NSString *)adUnitId
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                         rewardType:(NSString *)rewardType
                       rewardAmount:(NSString *)rewardAmount
                     installationId:(NSString *_Nullable)installationId
                          adNetwork:(UMSAdNetwork)adNetwork;

- (void)sendInstantiationServiceHttpError:(NSString *)gameId
                                 adUnitId:(NSString *)adUnitId
                                      url:(NSString *)url
                               statusCode:(int)statusCode
                           installationId:(NSString *_Nullable)installationId;

- (void)sendInstantiationServiceProtoFailedToParse:(NSString *)gameId
                                          adUnitId:(NSString *)adUnitId
                                    installationId:(NSString *_Nullable)installationId;

- (void)sendTrackingServiceHttpError:(NSString *)gameId
                            adUnitId:(NSString *)adUnitId
     configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                                 url:(NSString *)url
                            errorMsg:(NSString *)errorMsg
                          statusCode:(int)statusCode
                      installationId:(NSString *_Nullable)installationId;

- (void)sendDiagnosticServiceHttpError:(NSString *)gameId
                        installationId:(NSString *_Nullable)installationId;

- (void)    sendFailedToFindAdapter:(NSString *)gameId
                             adType:(UMTSAdUnitFormat)adType
                           adUnitId:(NSString *)adUnitId
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                          adNetwork:(UMSAdNetwork)adNetwork
                     installationId:(NSString *_Nullable)installationId;

- (void)    sendWaterfallTotalDepth:(NSString *)gameId
                           adUnitId:(NSString *)adUnitId
                        waterfallId:(NSString *)waterfallId
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                              depth:(int)depth
                     installationId:(NSString *_Nullable)installationId;

- (void)   sendWaterfallLoadedDepth:(NSString *)gameId
                           adUnitId:(NSString *)adUnitId
                        waterfallId:(NSString *)waterfallId
    configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                         totalDepth:(int)totalDepth
                        loadedDepth:(int)loadedDepth
                     installationId:(NSString *_Nullable)installationId;

- (void)sendAdUnitShowFailedNullView:(NSString *)gameId
                              adType:(UMTSAdUnitFormat)adType
                            adUnitId:(NSString *)adUnitId
     configurationResponseInstanceId:(NSString *)configurationResponseInstanceId
                        errorMessage:(NSString *)errorMessage
                      installationId:(NSString *_Nullable)installationId;

- (void)sendFailedToInitializeMediationSdk:(NSString *)gameId
                                  errorMsg:(NSString *)errorMsg
                            installationId:(NSString *_Nullable)installationId;

- (void)sendMediationInitializeCalled:(NSString *)gameId
                       installationId:(NSString *_Nullable)installationId;

- (void)sendAdNetworkSdkInitializeCalled:(NSString *)gameId
                               adNetwork:(UMSAdNetwork)adNetwork
                              parameters:(NSDictionary<NSString *, NSString *> *)parameters
                               usageType:(UMISUsageType)usageType
                          installationId:(NSString *_Nullable)installationId;

- (void)sendAdNetworkSdkInitializedSuccess:(NSString *)gameId
                                 adNetwork:(UMSAdNetwork)adNetwork
                                parameters:(NSDictionary<NSString *, NSString *> *)parameters
                             initStartTime:(NSDate *)initStartTime
                            installationId:(NSString *_Nullable)installationId;

- (void)sendAdNetworkSdkInitializeFailed:(NSString *)gameId
                               adNetwork:(UMSAdNetwork)adNetwork
                              parameters:(NSDictionary<NSString *, NSString *> *)parameters
                           initStartTime:(NSDate *)initStartTime
                            errorMessage:(NSString *)errorMessage
                          installationId:(NSString *_Nullable)installationId;

- (void)sendGetHeaderBiddingTokenFailed:(NSString *)gameId
                               adUnitId:(NSString *)adUnitId
                              adNetwork:(UMSAdNetwork)adNetwork
                         installationId:(NSString *_Nullable)installationId
                                  error:(NSError *_Nullable)error
                   diagnosticTokenError:(UMSDiagnosticTokenError)diagnosticTokenError
                    tokenFetchStartTime:(NSDate *)tokenFetchStartTime
                    initializationState:(UMSAdNetworkInitializationState)initializationState;

- (void)sendGetHeaderBiddingTokenSuccess:(NSString *)gameId
                                adUnitId:(NSString *)adUnitId
                               adNetwork:(UMSAdNetwork)adNetwork
                          installationId:(NSString *_Nullable)installationId
                     tokenFetchStartTime:(NSDate *)tokenFetchStartTime
                     initializationState:(UMSAdNetworkInitializationState)initializationState;

@end

NS_ASSUME_NONNULL_END
