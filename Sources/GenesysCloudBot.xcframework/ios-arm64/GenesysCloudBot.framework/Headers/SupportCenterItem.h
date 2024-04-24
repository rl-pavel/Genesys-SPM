
// GenesysCloudBot version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SupportCenterItem<NSObject>

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString * _Nullable iconUrl;
@property (nonatomic, copy) NSMutableArray *children;

@end

NS_ASSUME_NONNULL_END
