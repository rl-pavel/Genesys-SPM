
// GenesysCloudBold version number: v1.8.0
//
//  BCGetUnavailableFormCallResult.h
//  VisitorSDK
//
//  Created by Viktor Fabian on 4/10/14.
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCRESTCallResult.h"

@interface BCGetUnavailableFormCallResult : BCRESTCallResult

@property(nonatomic, strong)NSArray *unavailableForm;

@end
