
// GenesysCloudBot version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "NREntity.h"
#import "NRPersonalInfo.h"
#import "NRConversationMissingEntity.h"
#import "NRTokenizer.h"
#import "NRConversationCarousel.h"
#import "InstantFeedbackData.h"
#import "ReadoutMessage.h"

@interface NRConversationalResponse : NSObject <ReadoutMessage>
- (instancetype _Nullable)initWithJSON:(NSString *_Nullable)jsonString;
- (instancetype _Nullable )initWithData:(NSData *_Nullable)data;
- (instancetype _Nullable )initWithDictionary:(NSDictionary *_Nullable)dictionary;

- (void)addAction:(NRAction *_Nullable)action;
@property (nonatomic, readonly) NSInteger status;
@property (nonatomic, copy) NSString * _Nullable statement;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, readonly, copy) NRPersonalInfo * _Nullable personalInfo;
@property (nonatomic, readonly, copy) NSNumber * _Nullable articleId;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable missingEntities;
@property (nonatomic, readonly, copy) NSArray<NREntity *> * _Nullable entities;
@property (nonatomic, copy) NSArray<NRConversationQuickOption *> * _Nullable quickOptions;
@property (nonatomic, copy) NSArray<NRConversationQuickOption *> * _Nullable persistentOptions;
@property (nonatomic, copy) NSArray<NRConversationCarousel *> * _Nullable multiAnswers;
@property (nonatomic, readonly, copy) NSString * _Nullable inJSON;
@property (nonatomic, readonly, copy) NSArray<NRAction *> * _Nullable actions;
@property (nonatomic, copy) NSNumber * _Nullable isReadMore;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly, copy) NRQueryResult * _Nullable inNRQueryResult;


/// The meta data about article.
@property (nonatomic, readonly, strong) ArticleMeta * _Nullable articleMeta;
/// The instant feedback data.
@property (nonatomic, readonly, strong) InstantFeedbackData * _Nullable instantFeedbackData;
@end
