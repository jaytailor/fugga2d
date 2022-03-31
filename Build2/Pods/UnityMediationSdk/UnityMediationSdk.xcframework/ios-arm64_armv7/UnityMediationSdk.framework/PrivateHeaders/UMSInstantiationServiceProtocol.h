#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMSAdapterConfig.h"
@protocol UMSURLSessionDataTask;

NS_ASSUME_NONNULL_BEGIN

@protocol UMSInstantiationServiceProtocol <NSObject>

/**
 * Make a request to fetch the ad unit configuration from the Instantiation Service.
 * @param gameId The ID of the game.
 * @param adUnitId The ID of the ad unit.
 * @param sessionId created
 * @param bundleId  The bundle Id(bundle Id) of the game or app.
 * @param initializationId  the init id of the initialization response
 * @param adapterConfigs a list of AdapterConfiguration.
 * @param installationId Unity Core installation id passed in through the `UMSInitializationConfiguration` object.
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
