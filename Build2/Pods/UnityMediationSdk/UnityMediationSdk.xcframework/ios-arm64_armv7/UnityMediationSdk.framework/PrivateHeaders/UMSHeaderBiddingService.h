#import <Foundation/Foundation.h>
#import "UMSAdapterConfig.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSLoadableAd;

@protocol UMSHeaderBiddingService <NSObject>

- (NSOperationQueue *)requestAdapterConfigList:(id <UMSLoadableAd>)loadableAd
                                    completion:(void (^)(NSArray<UMSAdapterConfig *> *))completion;

- (void)setTokenFetchTimeoutInMilliseconds:(NSNumber *_Nullable)timeout;

@end

NS_ASSUME_NONNULL_END
