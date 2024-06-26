
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface FileUtil : NSObject
@property (nonatomic,assign)BOOL debug;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)shared;
- (void)write:(NSData *)data forKey:(NSString *)key;
-(NSData *)readForKey:(NSString *)key;
- (void)clearCacheFolder;
@end
