
// GenesysCloudBold version number: v1.8.0
//
//  BCOSSAutoMessageNotification.h
//  VisitorSDK
//
//  Created by vfabian on 04/06/14.
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import "BCOSSNotification.h"

@class BCOSSAutoMessageNotification;

@protocol BCOSSAutoMessageNotificationDelegate <NSObject>
- (void)ossAutoMessageNotification:(BCOSSAutoMessageNotification *)autoMessageNotification text:(NSString *)text;
@end


@interface BCOSSAutoMessageNotification : BCOSSNotification
@property(nonatomic, assign)id<BCOSSAutoMessageNotificationDelegate> delegate;
@end
