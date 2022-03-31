#import <Foundation/Foundation.h>
#import "UMSServiceProvider.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSServiceConfigurator : NSObject <UMSServiceProvider>

+ (id)sharedInstance;

@end

NS_ASSUME_NONNULL_END
