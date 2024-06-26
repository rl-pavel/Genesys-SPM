
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChatElement.h>

NS_ASSUME_NONNULL_BEGIN

/************************************************************/
// MARK: - ProactiveChatElement
/************************************************************/

@interface ProactiveChatElement : NSObject

/// The chat element content text.
@property (nonatomic, copy) NSString *text;

/// The chat element type.
@property (nonatomic) ChatElementType type;

/// Defines if chat element is posted to backend or not.
@property (nonatomic) BOOL withPost;

/************************************************************/
// MARK: - Initializer
/************************************************************/

- (instancetype)initWithText:(NSString *)text
                           type:(ChatElementType)type;
@end

NS_ASSUME_NONNULL_END
