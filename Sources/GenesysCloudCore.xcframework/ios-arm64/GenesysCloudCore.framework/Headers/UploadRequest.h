
// GenesysCloudCore version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, UploadFileType) {
    UploadFileTypeExcel  = 0,
    UploadFileTypeArchive = 1,
    UploadFileTypePicture = 2,
    UploadFileTypeDefault = 3,

    UploadFileTypeCount // keep track of the enum size automatically
} ;

extern NSString * _Nonnull const UploadFileTypeName[UploadFileTypeCount];

@interface UploadRequest : NSMutableURLRequest
@property (nonatomic, copy) NSString *boundary;
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, assign) UploadFileType fileType;
@property (nonatomic, copy) NSData *fileData;
@end

NS_ASSUME_NONNULL_END
