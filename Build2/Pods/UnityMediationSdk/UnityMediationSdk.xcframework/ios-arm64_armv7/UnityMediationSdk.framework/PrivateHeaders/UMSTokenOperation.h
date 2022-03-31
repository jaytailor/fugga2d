#import <Foundation/Foundation.h>
#import "UMSAdNetworkInitializationAdapterProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSTokenOperation : NSOperation

@property (nonatomic, strong, readonly) id <UMSAdNetworkInitializationAdapterProtocol> adapter;

- (instancetype)initWithInitializationAdapter:(id <UMSAdNetworkInitializationAdapterProtocol>)adapter
                                   completion:(void (^)(NSString *_Nullable token, NSError *_Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
