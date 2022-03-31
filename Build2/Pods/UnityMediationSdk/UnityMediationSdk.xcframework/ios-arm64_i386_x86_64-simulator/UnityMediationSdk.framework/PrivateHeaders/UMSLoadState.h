#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, UMSLoadState) {
    UMSLoadStateUnloaded,
    UMSLoadStateLoading,
    UMSLoadStateLoaded,
    UMSLoadStateFailed
};
