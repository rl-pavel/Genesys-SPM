
// GenesysCloudBold version number: v1.8.0
//
//  BCOSSLongPollLink.h
//  VisitorSDK
//
//  Created by Viktor Fabian on 3/28/14.
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import "BCOSSLink.h"

@class BCConnectivityManager;

@interface BCOSSLongPollLink : BCOSSLink

@property(nonatomic, strong)NSString *longPollUrl;

@end
