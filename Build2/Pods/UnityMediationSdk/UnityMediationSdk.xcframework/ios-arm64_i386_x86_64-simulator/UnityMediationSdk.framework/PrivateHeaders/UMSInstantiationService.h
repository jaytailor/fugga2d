#import <Foundation/Foundation.h>
#import "UMSInstantiationServiceProtocol.h"
#import "UMSDiagnosticServiceProtocol.h"
#import "UMSHttpClient.h"
#import "UMSWebViewInformation.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Object to format requests and responses to the Instantiation Service.
 * This class uses the InstantiationService framework to construct these request and response
 * protobuf objects.
 */
@interface UMSInstantiationService : NSObject <UMSInstantiationServiceProtocol>

/**
 * Initialize an instance of this class.
 * @param baseUrl The url that requests should be sent to.
 * @param httpClient The UMSHttpClient that the network request should be made with.
 * @param diagnosticService The UMSDiagnosticServiceProtocol implementation that should be used to send diagnostic information with.
 * @return UMSInstantiationService
 */
- (instancetype)initWithBaseUrl:(NSString *)baseUrl
                     httpClient:(UMSHttpClient *)httpClient
              diagnosticService:(id <UMSDiagnosticServiceProtocol>)diagnosticService
             webviewInformation:(id <UMSWebViewInformation>)webviewInformation;

/**
 * Make a request to fetch the ad unit configuration from the Instantiation Service.
 * @param gameId The ID of the game.
 * @param adUnitId The ID of the ad unit.
 * @param sessionId created
 * @param bundleId  The bundle Id(bundle Id) of the game or app.
 * @param installationId Unity Core installation id passed in through the `UMSInitializationConfiguration` object.
 * @param adapterConfigs a list of AdapterConfiguration.
 * @param completionHandler Callback that denotes success or failure of the request. Response will be set if successful otherwise the error property will be set.
 * @return NSURLSessionDataTask
 */
- (id <UMSURLSessionDataTask> _Nullable)requestConfigurationResponseWithGameID:(NSString *)gameId
                                                                      adUnitId:(NSString *)adUnitId
                                                                     sessionId:(NSString *)sessionId
                                                                      bundleId:(NSString *)bundleId
                                                              initializationId:(NSString *_Nullable)initializationId
                                                                adapterConfigs:(NSArray<UMSAdapterConfig *> *)adapterConfigs
                                                                installationId:(NSString *_Nullable)installationId
                                                             completionHandler:(void (^)(UMISConfigurationResponse *response, NSError *error))completionHandler;

/**
 * Makes the instantiation service request to get initialization response.
 * @param gameId The ID of the game.
 * @param sessionId created
 * @param installationId Unity Core installation id passed in through the `UMSInitializationConfiguration` object.
 * @param completionHandler Callback that denotes success or failure of the request. Response will be set if successful otherwise the error property will be set.
 * @return NSURLSessionDataTask
 */
- (id <UMSURLSessionDataTask> _Nullable)requestInitializationResponseWithGameID:(NSString *)gameId
                                                                      sessionId:(NSString *)sessionId
                                                                 installationId:(NSString *_Nullable)installationId
                                                              completionHandler:(void (^)(UMISInitializationResponse *response, NSError *error))completionHandler;

@end

NS_ASSUME_NONNULL_END
