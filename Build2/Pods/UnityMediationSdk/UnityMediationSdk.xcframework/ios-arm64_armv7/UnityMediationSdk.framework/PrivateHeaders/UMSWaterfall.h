#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMSLoadError.h"
#import "UMSAdapterLoadError.h"
#import "UMSAdapterConfiguration.h"
#import "UMSMediationAdapterFactoryRegistry.h"

@protocol UMSWaterfallAdapterLoadDelegate <NSObject>
// Generic id is used here so that this class can be used by various UMSWaterfallAdapterFactory
- (void)onLineItemLoaded:(UMISConfigurationResponse_LineItem *)lineItem
                      ad:(id)ad;

- (void)onLineItemFailedToLoad:(UMISConfigurationResponse_LineItem *)lineItem
                         error:(UMSAdapterLoadError)loadError
                       message:(NSString *)message;
@end

@interface UMSWaterfallAdapterLoadDelegateWithBlocks<ObjectType> : NSObject <UMSWaterfallAdapterLoadDelegate>
@property (nonatomic, copy) void (^ onLineItemLoadedBlock)(UMISConfigurationResponse_LineItem *lineItem, ObjectType);
@property (nonatomic, copy) void (^ onLineItemFailedToLoadBlock)(UMISConfigurationResponse_LineItem *lineItem, UMSAdapterLoadError error, NSString *message);

// Generic id is used here so that this class can be used by various UMSWaterfallAdapterFactory
- (void)onLineItemLoaded:(UMISConfigurationResponse_LineItem *)lineItem
                      ad:(id)ad;

- (void)onLineItemFailedToLoad:(UMISConfigurationResponse_LineItem *)lineItem
                         error:(UMSAdapterLoadError)loadError
                       message:(NSString *)message;
@end

@protocol UMSWaterfallLoadDelegate <NSObject>
// Generic id is used here so that this class can be used by various UMSWaterfallAdapterFactory
- (void)onLineItemRequested:(UMISConfigurationResponse_LineItem *)lineItem;

- (void)onLineItemLoaded:(UMISConfigurationResponse_LineItem *)lineItem
                      ad:(id)ad;

- (void)onLineItemFailedToLoad:(UMISConfigurationResponse_LineItem *)lineItem
                         error:(UMSAdapterLoadError)loadError
                       message:(NSString *)message;

- (void)onWaterFallFailedWithError:(NSError *)error;
@end

@interface UMSWaterfallLoadDelegateWithBlocks<ObjectType> : NSObject <UMSWaterfallLoadDelegate>
@property (nonatomic, copy) void (^ onLineItemRequestedBlock)(NSString *lineItemId, NSString *adNetworkId);
@property (nonatomic, copy) void (^ onLineItemLoadedBlock)(UMISConfigurationResponse_LineItem *lineItem, ObjectType);
@property (nonatomic, copy) void (^ onLineItemFailedToLoadBlock)(UMISConfigurationResponse_LineItem *lineItem, UMSAdapterLoadError error, NSString *message);
@property (nonatomic, copy) void (^ onWaterFallFailedBlock)(NSError *error);

@end

@protocol UMSWaterfallAdapter <NSObject>

- (void)loadWithDelegate:(id <UMSWaterfallAdapterLoadDelegate> __weak)delegate;

@end

@protocol UMSWaterfallAdapterFactory <NSObject>

- (id <UMSWaterfallAdapter>)createAdapterWithConfiguration:(UMISConfigurationResponse_LineItem *)lineItem
                           mediationAdapterFactoryRegistry:(id <UMSMediationAdapterFactoryRegistry>)mediationAdapterFactoryRegistry;

@end

@interface UMSWaterfall<ObjectType> : NSObject

// Don't set timeout to be 0 seconds, the behavior can end up being inconsistent between whether
// the timer is triggered before the callback is triggered.
- (instancetype)initWithConfigurationResponse:(UMISConfigurationResponse *)configurationResponse
                               adapterFactory:(id <UMSWaterfallAdapterFactory>)adapterFactory
                             timeoutInSeconds:(NSNumber *)timeoutInSeconds
              mediationAdapterFactoryRegistry:(id <UMSMediationAdapterFactoryRegistry>)mediationAdapterFactoryRegistry;

- (void)loadWithDelegate:(id <UMSWaterfallLoadDelegate>)delegate;

@end
