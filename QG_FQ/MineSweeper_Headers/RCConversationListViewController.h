//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCBaseViewController.h"

#import "RCConversationCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, RCNetworkIndicatorView, UIColor, UITableView, UIView;
@protocol OS_dispatch_queue;

@interface RCConversationListViewController : RCBaseViewController <RCConversationCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isEnteredToCollectionViewController;
    _Bool _isShowNetworkIndicatorView;
    _Bool _showConnectingStatusOnNavigatorBar;
    _Bool _showConversationListWhileLogOut;
    _Bool _isConverstaionListAppear;
    _Bool _isWaitingForForceRefresh;
    UIView *_emptyConversationView;
    NSArray *_displayConversationTypeArray;
    NSArray *_collectionConversationTypeArray;
    NSMutableArray *_conversationListDataSource;
    UITableView *_conversationListTableView;
    UIColor *_cellBackgroundColor;
    UIColor *_topCellBackgroundColor;
    RCNetworkIndicatorView *_networkIndicatorView;
    UIView *_connectionStatusView;
    UIView *_navigationTitleView;
    NSObject<OS_dispatch_queue> *_updateEventQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateEventQueue; // @synthesize updateEventQueue=_updateEventQueue;
@property(retain, nonatomic) UIView *navigationTitleView; // @synthesize navigationTitleView=_navigationTitleView;
@property(retain, nonatomic) UIView *connectionStatusView; // @synthesize connectionStatusView=_connectionStatusView;
@property(nonatomic) _Bool isWaitingForForceRefresh; // @synthesize isWaitingForForceRefresh=_isWaitingForForceRefresh;
@property(nonatomic) _Bool isConverstaionListAppear; // @synthesize isConverstaionListAppear=_isConverstaionListAppear;
@property(retain, nonatomic) RCNetworkIndicatorView *networkIndicatorView; // @synthesize networkIndicatorView=_networkIndicatorView;
@property(nonatomic) _Bool showConversationListWhileLogOut; // @synthesize showConversationListWhileLogOut=_showConversationListWhileLogOut;
@property(retain, nonatomic) UIColor *topCellBackgroundColor; // @synthesize topCellBackgroundColor=_topCellBackgroundColor;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(nonatomic) _Bool showConnectingStatusOnNavigatorBar; // @synthesize showConnectingStatusOnNavigatorBar=_showConnectingStatusOnNavigatorBar;
@property(nonatomic) _Bool isShowNetworkIndicatorView; // @synthesize isShowNetworkIndicatorView=_isShowNetworkIndicatorView;
@property(retain, nonatomic) UITableView *conversationListTableView; // @synthesize conversationListTableView=_conversationListTableView;
@property(retain, nonatomic) NSMutableArray *conversationListDataSource; // @synthesize conversationListDataSource=_conversationListDataSource;
@property(nonatomic) _Bool isEnteredToCollectionViewController; // @synthesize isEnteredToCollectionViewController=_isEnteredToCollectionViewController;
@property(retain, nonatomic) NSArray *collectionConversationTypeArray; // @synthesize collectionConversationTypeArray=_collectionConversationTypeArray;
@property(retain, nonatomic) NSArray *displayConversationTypeArray; // @synthesize displayConversationTypeArray=_displayConversationTypeArray;
- (void).cxx_destruct;
- (void)onMessageSentStatusUpdate:(id)arg1;
- (void)refreshConversationTableViewWithConversationModel:(id)arg1;
- (void)setConversationPortraitSize:(struct CGSize)arg1;
- (void)setConversationAvatarStyle:(long long)arg1;
- (void)setCollectionConversationType:(id)arg1;
- (void)setDisplayConversationTypes:(id)arg1;
- (void)setNavigationItemTitleView;
- (void)updateConnectionStatusOnNavigatorBar;
- (void)resetConversationListBackgroundViewIfNeeded;
- (double)rcConversationListTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)rcConversationListTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)rcConversationListTableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)didDeleteConversationCell:(id)arg1;
- (void)onSelectedTableRow:(unsigned long long)arg1 conversationModel:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCellAtIndexPath:(id)arg1;
- (void)willDisplayConversationTableCell:(id)arg1 atIndexPath:(id)arg2;
- (id)willReloadTableData:(id)arg1;
- (void)didLongPressCellPortrait:(id)arg1;
- (void)didTapCellPortrait:(id)arg1;
- (void)notifyUpdateUnreadMessageCount;
- (void)updateEmptyConversationView;
- (void)hideConnectingView;
- (void)showConnectingView;
- (void)updateConnectionStatusView;
- (void)updateNetworkIndicatorView;
@property(retain, nonatomic) UIView *emptyConversationView; // @synthesize emptyConversationView=_emptyConversationView;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned long long)getFirstModelIndex:(_Bool)arg1 sentTime:(long long)arg2;
- (id)collectConversation:(id)arg1 collectionTypes:(id)arg2;
- (void)forceLoadConversationModelList:(CDUnknownBlockType)arg1;
- (void)refreshConversationTableViewIfNeeded;
- (void)didReceiveRecallMessageNotification:(id)arg1;
- (void)didReceiveReadReceiptNotification:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)onConnectionStatusChangedNotification:(id)arg1;
- (void)updateCellIfNeed:(id)arg1;
- (void)registerObserver;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)rcinit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayConversationTypes:(id)arg1 collectionConversationType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
