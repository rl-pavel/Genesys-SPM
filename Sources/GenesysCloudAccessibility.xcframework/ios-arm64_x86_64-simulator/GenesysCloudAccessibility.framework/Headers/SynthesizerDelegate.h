
// GenesysCloudAccessibility version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SynthesizerDelegate <NSObject>
- (void)didFinishReadout:(BOOL)state;
@end

NS_ASSUME_NONNULL_END
