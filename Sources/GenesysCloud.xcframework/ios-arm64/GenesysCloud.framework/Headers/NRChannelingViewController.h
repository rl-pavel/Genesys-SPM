
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/ExtraData.h>

@protocol NRChannelingViewControllerDelegate <NSObject>

- (void)channelController:(UIViewController *)controller didCancel:(NSString *)channelLink;
- (void)channelController:(UIViewController *)controller didFailWithError:(NSError *)error;
- (void)channelController:(UIViewController *)controller didSend:(NSString *)channelLink;
- (void)didFetchFormData:(ExtraData *)formData;

@end

@interface NRChannelingViewController : UIViewController 
@property (nonatomic, copy) NSURL *channelURL;
@property (nonatomic, weak) id<NRChannelingViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *channelTitle;
@end
