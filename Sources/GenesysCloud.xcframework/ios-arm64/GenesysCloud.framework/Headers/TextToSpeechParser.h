
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/StorableChatElement.h>
NS_ASSUME_NONNULL_BEGIN

@interface TextToSpeechParser : NSObject
/**
Parse article text.

@return returns a parsed string.
*/
- (NSString *)parseArticleText:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
