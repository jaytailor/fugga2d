#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMISConfigurationResponse_LineItem+Helper.h"
#import "UMSLoadState.h"
#import "UMSLoadableAd.h"
#import "UMSAdUnitActionData.h"

@protocol UMSAdapterAd;

typedef void (^UMSAdLoadCompletionHandler)(id _Nullable ad, NSError *_Nullable error);

NS_ASSUME_NONNULL_BEGIN

@interface UMSAdLoad<AdapterAdType>: NSObject
@property (nonatomic, assign) UMSLoadState loadState;
@property (nonatomic, strong) AdapterAdType adapterAd;
@property (nonatomic, strong) NSString *loadCallId;
@property (nonatomic, strong) NSDate *loadEndTimestamp;
@property (nonatomic, strong) UMISConfigurationResponse_LineItem *loadedLineItem;
@property (nonatomic, assign) UMISConfigurationResponse *configurationResponse;

- (instancetype)initWithLoadableAd:(id <UMSLoadableAd, UMSAdUnitActionData>)loadableAd;

- (void)loadWithCompletionHandler:(UMSAdLoadCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
