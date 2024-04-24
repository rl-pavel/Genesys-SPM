
// GenesysCloudBot version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, NRErrorSource) {
    NRErrorSourceNoConnection,
    NRErrorSourceTimeOut,
    NRErrorSourceServerError
};

@protocol NRErrorHandlerDelegate <NSObject>

- (void)didFailWithSource:(NRErrorSource)errorSource;
- (void)didRecover;

@end

@interface NRErrorHandler : NSObject
+ (NRErrorHandler *)shared;


@property (nonatomic, strong) NSError *error;
@property (nonatomic) BOOL errorState;

@property (nonatomic, weak) id<NRErrorHandlerDelegate> delegate;
@end
