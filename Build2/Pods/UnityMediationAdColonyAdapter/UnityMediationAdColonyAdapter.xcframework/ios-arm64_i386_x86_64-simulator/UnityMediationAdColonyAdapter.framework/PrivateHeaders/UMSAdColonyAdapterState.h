#import <Foundation/Foundation.h>
#import <AdColony/AdColony.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSAdColonyAdapterState : NSObject

- (void)configureWithAppID:(NSString *)appID
                   zoneIDs:(NSArray<NSString *> *)zoneIDs
                   options:(nullable AdColonyAppOptions *)options
                completion:(nullable void (^)(NSArray<AdColonyZone *> *zones))completion;

@end

NS_ASSUME_NONNULL_END
