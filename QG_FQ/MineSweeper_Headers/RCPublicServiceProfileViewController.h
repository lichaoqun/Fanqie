//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "RCPublicServiceProfileActionDelegate-Protocol.h"
#import "RCPublicServiceProfileViewUrlDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSString, RCPublicServiceProfile, RCPublicServiceProfileActionCell, RCPublicServiceProfileRcvdMsgCell;

@interface RCPublicServiceProfileViewController : UITableViewController <UITableViewDataSource, UIActionSheetDelegate, RCPublicServiceProfileViewUrlDelegate, RCPublicServiceProfileActionDelegate>
{
    _Bool _fromConversation;
    RCPublicServiceProfile *_serviceProfile;
    long long _portraitStyle;
    NSArray *_cellCollections;
    RCPublicServiceProfileActionCell *_actionCell;
    RCPublicServiceProfileRcvdMsgCell *_rcvdMsgCell;
}

@property(retain, nonatomic) RCPublicServiceProfileRcvdMsgCell *rcvdMsgCell; // @synthesize rcvdMsgCell=_rcvdMsgCell;
@property(retain, nonatomic) RCPublicServiceProfileActionCell *actionCell; // @synthesize actionCell=_actionCell;
@property(retain, nonatomic) NSArray *cellCollections; // @synthesize cellCollections=_cellCollections;
@property(nonatomic) _Bool fromConversation; // @synthesize fromConversation=_fromConversation;
@property(nonatomic) long long portraitStyle; // @synthesize portraitStyle=_portraitStyle;
@property(retain, nonatomic) RCPublicServiceProfile *serviceProfile; // @synthesize serviceProfile=_serviceProfile;
- (void).cxx_destruct;
- (void)gotoUrl:(id)arg1;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)enterPublicServiceConversation;
- (void)unsubscribePublicService;
- (void)subscribePublicService;
- (id)getTableViewHeader;
- (void)onOptionButtonPressed;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setup;
- (void)onAction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
