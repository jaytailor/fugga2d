#import <Foundation/Foundation.h>
#import "UMSInitializationState.h"
#import "UMSInitializationDelegate.h"
#import "UMSInitializationConfiguration.h"
#import "UMSInitializeResult.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^UMSRequestInitializeResultBlock)(id <UMSInitializeResult> _Nullable);

@protocol UMSSdkInitializable <NSObject>

@property (readonly, nonatomic, assign) UMSInitializationState initializationState;

- (void)initializeWithConfiguration:(UMSInitializationConfiguration *)initializationConfiguration;

- (void)requestInitializeResult:(UMSRequestInitializeResultBlock)callback;

@end

NS_ASSUME_NONNULL_END
