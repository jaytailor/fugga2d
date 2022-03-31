#import <Foundation/Foundation.h>
#import "UMSAdUnitActionData.h"
#import "UMSWaterfallActionData.h"
#import "UMSInitializationActionData.h"
#import "UMSLineItemActionData.h"

@protocol UMSTrackingServiceProtocol <NSObject>

- (void)sendLineItemActionAdRequested:(id <UMSLineItemActionData>)lineItemActionData
                  waterfallActionData:(id <UMSWaterfallActionData>)waterfallActionData
                     adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendLineItemActionAdRequestFailed:(id <UMSLineItemActionData>)lineItemActionData
                      waterfallActionData:(id <UMSWaterfallActionData>)waterfallActionData
                         adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendLineItemActionAdReceived:(id <UMSLineItemActionData>)lineItemActionData
                 waterfallActionData:(id <UMSWaterfallActionData>)waterfallActionData
                    adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendLineItemActionAdShown:(id <UMSLineItemActionData>)lineItemActionData
              waterfallActionData:(id <UMSWaterfallActionData>)waterfallActionData
                 adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendLineItemActionAdImpression:(id <UMSLineItemActionData>)lineItemActionData
                   waterfallActionData:(id <UMSWaterfallActionData>)waterfallActionData
                      adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendLineItemActionAdClick:(id <UMSLineItemActionData>)lineItemActionData
              waterfallActionData:(id <UMSWaterfallActionData>)waterfallActionData
                 adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendLineItemActionAdComplete:(id <UMSLineItemActionData>)lineItemActionData
                 waterfallActionData:(id <UMSWaterfallActionData>)waterfallActionData
                    adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendLineItemActionRewardCallback:(id <UMSLineItemActionData>)lineItemActionData
                     waterfallActionData:(id <UMSWaterfallActionData>)waterfallActionData
                        adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendWaterfallActionAdRequested:(id <UMSWaterfallActionData>)waterfallActionData
                      adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendWaterfallActionAdRequestFailed:(id <UMSWaterfallActionData>)waterfallActionData
                          adUnitActionData:(id <UMSAdUnitActionData>)adUnitActionData;

- (void)sendAdUnitActionLoadCalled:(id<UMSAdUnitActionData>)adUnitActionData;

- (void)sendAdUnitActionShowCalled:(id<UMSAdUnitActionData>)adUnitActionData;

- (void)sendAdUnitActionConfigurationRequested:(id<UMSAdUnitActionData>)adUnitActionData;

- (void)sendAdUnitActionConfigurationRequestSuccess:(id<UMSAdUnitActionData>)adUnitActionData;

- (void)sendAdUnitActionConfigurationRequestFailed:(id<UMSAdUnitActionData>)adUnitActionData;

- (void)sendMediationInitializeCalled:(id <UMSInitializationActionData>)initializationActionData;

- (void)sendMediationInitializeSuccess:(id <UMSInitializationActionData>)initializationAcionData;

- (void)sendMediationInitializeFailed:(id <UMSInitializationActionData>)initializationActionData;

@end
