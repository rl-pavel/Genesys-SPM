
// GenesysCloudCore version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@protocol NRConnectionHandler<NSObject>

- (void)open:(nonnull NSURLRequest *)request
  completion:(nonnull void (^)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error))completion;

- (void)open:(nonnull NSURLRequest *)request
    progress:(void (^_Nullable)(float))progress
  completion:(void(^_Nullable)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error))completion;

- (nullable NSData *)fetchDataAtRequest:(nonnull NSURLRequest *)request
                                  error:(NSError *_Nullable*_Nullable)error;
@end
