
// GenesysCloudBold version number: v1.8.0
//
//  BCOSSUpdateBusyNotification.h
//  VisitorSDK
//
//  Created by Viktor Fabian on 3/31/14.
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import "BCOSSNotification.h"

@class BCOSSUpdateBusyNotification;

@protocol BCOSSUpdateBusyNotificationDelegate <NSObject>
- (void)ossUpdateBusyNotification:(BCOSSUpdateBusyNotification *)updateBusyNotification position:(NSInteger)position unavailableFormEnabled:(BOOL)unavailableFormEnabled;
@end

@interface BCOSSUpdateBusyNotification : BCOSSNotification
@property(nonatomic, assign)id<BCOSSUpdateBusyNotificationDelegate> delegate;
@end
