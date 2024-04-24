
// GenesysCloudAccessibility version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "NRSpeechDelegate.h"
#import "NRSpeechRecognizerAuthorizationStatus.h"

@protocol NRSpeech <NSObject>
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, weak) id<NRSpeechDelegate> delegate;
@property (nonatomic, readonly) BOOL isRecording;
- (void)record API_AVAILABLE(ios(10.0));
- (void)stop;
- (void)requestAuthorization:(void(^)(NRSpeechRecognizerAuthorizationStatus status))handler;
@end
