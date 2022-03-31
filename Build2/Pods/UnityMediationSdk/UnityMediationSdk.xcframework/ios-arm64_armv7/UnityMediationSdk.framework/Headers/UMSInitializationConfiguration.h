#import <Foundation/Foundation.h>
#import "UMSInitializationDelegate.h"
#import "UMSInitializationConfigurationBuilder.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Initialization configuration object for holding Unity Mediation properties needed during initialization.
 */
@interface UMSInitializationConfiguration : NSObject

/**
 * The iOS game ID listed in your publisher [dashboard](https://dashboard.unity3d.com).
 */
@property (nonatomic, strong, readonly) NSString *gameId;

/**
 * The `UMSInitializationDelegate` object that will receive initialize events.
 */
@property (nonatomic, weak, readonly) id<UMSInitializationDelegate> _Nullable delegate;

/**
 * A dictionary containing initialization options.
 */
@property (nonatomic, strong, readonly) NSDictionary<NSString *, NSString *> *options;

@end

NS_ASSUME_NONNULL_END
