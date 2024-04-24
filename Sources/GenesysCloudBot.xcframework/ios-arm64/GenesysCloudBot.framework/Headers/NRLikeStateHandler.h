
// GenesysCloudBot version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface NRLikeStateHandler : NSObject
- (void)updateLikeState:(BOOL)likeState ForId:(NSString *)articleId;
- (NSNumber *)likeStateWithId:(NSString *)articleId;
- (void)clear;
@end
