
// GenesysCloudBold version number: v1.8.0
//
//  BCChangeLanguageCallResult.h
//  VisitorSDK
//
//  Created by Viktor Fabian on 4/17/14.
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import "BCRESTCallResult.h"

@interface BCChangeLanguageCallResult : BCRESTCallResult

@property(nonatomic, strong)NSString *language;
@property(nonatomic, strong)NSDictionary *brandings;

@end
