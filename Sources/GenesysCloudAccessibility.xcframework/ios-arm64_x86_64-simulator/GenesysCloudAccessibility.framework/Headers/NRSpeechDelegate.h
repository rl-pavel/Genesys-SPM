
// GenesysCloudAccessibility version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@protocol NRSpeechDelegate <NSObject>
- (void)recordDidEnd;
- (void)speechDetected:(NSString *)text;
@end
