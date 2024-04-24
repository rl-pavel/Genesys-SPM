
// GenesysCloudBold version number: v1.8.0
//
//  BCOSSResponsePreProcessor.h
//  VisitorSDK
//
//  Created by Viktor Fabian on 3/31/14.
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCOSSResponsePreProcessor : NSObject

- (NSDictionary *)preProcessResponse:(NSObject *)resonse withError:(__autoreleasing NSError **)error;

@end
