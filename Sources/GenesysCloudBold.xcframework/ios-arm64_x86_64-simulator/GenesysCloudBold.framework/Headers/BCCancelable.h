
// GenesysCloudBold version number: v1.8.0
//
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * @brief A protocol for canceling asynchronous requests.
 * @since Version 1.0
 */
@protocol BCCancelable <NSObject>

/**
 * @brief Cancel the ongoing asynchronous request.
 * @since Version 1.0
 */
- (void)cancel;

@end
