
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface Value : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) id value;
@end

@interface ExtraData : NSObject
@property (nonatomic, copy) NSString *postUrl;
@property (nonatomic, copy) NSArray<Value *> *values;
@property (nonatomic, copy) NSDictionary<NSString *, NSObject *> *fileInfos;
@end
