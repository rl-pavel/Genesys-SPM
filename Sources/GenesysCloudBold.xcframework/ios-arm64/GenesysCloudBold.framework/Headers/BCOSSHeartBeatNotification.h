
// GenesysCloudBold version number: v1.8.0
//
//  BCOSSHeartBeatNotification.h
//  VisitorSDK
//
//  Created by Viktor Fabian on 3/31/14.
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import "BCOSSNotification.h"

@class BCOSSHeartBeatNotification;

@protocol BCOSSHeartBeatNotificationDelegate <NSObject>
- (void)ossHeartBeatNotification:(BCOSSHeartBeatNotification *)notification didReceiveWithId:(NSString *)ID;
@end


@interface BCOSSHeartBeatNotification : BCOSSNotification

@property(nonatomic, assign)id<BCOSSHeartBeatNotificationDelegate> delegate;

@end
