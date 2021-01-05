#import <Foundation/Foundation.h>

/**
 * The different states that an ad unit can be in.
 */
typedef NS_ENUM (NSInteger, UMSAdState) {
    UMSAdStateUnloaded,
    UMSAdStateLoading,
    UMSAdStateLoaded,
    UMSAdStateShowing
};
