//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLCommonGroupListViewController.h"

@class REBoolItem, RETableViewManager;

@interface AccountSafeViewController : SLCommonGroupListViewController
{
    RETableViewManager *_manager;
    REBoolItem *_freeChipItem;
}

@property(retain, nonatomic) REBoolItem *freeChipItem; // @synthesize freeChipItem=_freeChipItem;
@property(retain, nonatomic) RETableViewManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)setFreeChip:(id)arg1;
- (void)addTableViewCell;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initSubviews;
- (id)title;

@end

