
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/NRTitleTableViewCell.h>
#import <GenesysCloud/BaseViewController.h>

@class NRResultsView;
@protocol NRResultsViewDelegate <NSObject>

- (void)didSelectResult:(NRQueryResult *)queryResult;

@end

@interface NRResultsView : UIView
@property (nonatomic, copy) NSArray<NRResult *> *results;
@property (nonatomic, weak) id<NRResultsViewDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, readonly) CGRect selectedRect;
@property (nonatomic, readonly) NRResult *selectedResult;
@property (nonatomic, copy) NSString *searchQuery;
@property (nonatomic) NRAnimationType animationType;
@property (nonatomic, copy) NSString *faqTitle;
- (void)allowSelection;
@property (nonatomic, strong, readonly) BaseViewController *attachController;

@end
