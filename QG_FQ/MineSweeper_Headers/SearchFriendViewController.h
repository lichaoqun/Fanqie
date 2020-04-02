//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLCommonTableViewController.h"

#import "UISearchBarDelegate-Protocol.h"

@class NSString, RETableViewManager;

@interface SearchFriendViewController : SLCommonTableViewController <UISearchBarDelegate>
{
    RETableViewManager *_manager;
}

@property(retain, nonatomic) RETableViewManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)toUserInfoView:(id)arg1;
- (void)scanQrCode;
- (void)addViews;
- (void)initSubviews;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

