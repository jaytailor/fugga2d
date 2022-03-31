#import <Foundation/Foundation.h>
#import <UnityMediationTrackingService/UnityMediationTrackingService.h>
#import "UMSServiceProvider.h"
#import "UMSWaterfall.h"

@protocol UMSLoadableAd

@property (nonatomic, strong, readonly) NSString *gameId;

@property (nonatomic, strong, readonly) NSString *adUnitId;

@property (nonatomic, strong, readonly) NSString *initializationId;

@property (nonatomic, strong, readonly) NSString *installationId;

@property (nonatomic, strong, readonly) id <UMSServiceProvider> serviceProvider;

@property (nonatomic, strong, readonly) NSDate *adUnitCreatedTimestamp;

@property (nonatomic, assign, readonly) UMTSAdUnitFormat adType;

@property (nonatomic, strong) NSString *loadCallId;

@property (nonatomic, strong) NSDate *adUnitLoadedTimestamp;

- (id <UMSWaterfallAdapterFactory>)createWaterfallAdapterFactory;

@end
