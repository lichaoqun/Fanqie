//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLCommonGroupListViewController.h"

#import "DSectionIndexViewDataSource-Protocol.h"
#import "DSectionIndexViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class DSectionIndexView, IGroupDetailInfo, NSArray, NSMutableArray, NSMutableDictionary, NSString, QMUILabel, QMUIPopupMenuView, QMUISearchBar, UIBarButtonItem;

@interface FriendListViewController : SLCommonGroupListViewController <DSectionIndexViewDelegate, DSectionIndexViewDataSource, UISearchBarDelegate>
{
    _Bool _firstIn;
    long long _frindListType;
    IGroupDetailInfo *_groupDetailInfo;
    QMUISearchBar *_searchBar;
    DSectionIndexView *_sectionIndexView;
    NSArray *_iconArray;
    NSArray *_iconTitleArray;
    UIBarButtonItem *_rightBtnItem;
    NSArray *_datasouce;
    NSArray *_allKeys;
    NSMutableDictionary *_friendDict;
    NSMutableArray *_filterArray;
    NSArray *_filterAllKeys;
    NSMutableDictionary *_filterFriendDict;
    NSString *_groupName;
    NSMutableArray *_selectChatArray;
    QMUIPopupMenuView *_popupByWindow;
    QMUILabel *_noteLabel;
}

@property(nonatomic) _Bool firstIn; // @synthesize firstIn=_firstIn;
@property(retain, nonatomic) QMUILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) QMUIPopupMenuView *popupByWindow; // @synthesize popupByWindow=_popupByWindow;
@property(retain, nonatomic) NSMutableArray *selectChatArray; // @synthesize selectChatArray=_selectChatArray;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSMutableDictionary *filterFriendDict; // @synthesize filterFriendDict=_filterFriendDict;
@property(retain, nonatomic) NSArray *filterAllKeys; // @synthesize filterAllKeys=_filterAllKeys;
@property(retain, nonatomic) NSMutableArray *filterArray; // @synthesize filterArray=_filterArray;
@property(retain, nonatomic) NSMutableDictionary *friendDict; // @synthesize friendDict=_friendDict;
@property(retain, nonatomic) NSArray *allKeys; // @synthesize allKeys=_allKeys;
@property(retain, nonatomic) NSArray *datasouce; // @synthesize datasouce=_datasouce;
@property(retain, nonatomic) UIBarButtonItem *rightBtnItem; // @synthesize rightBtnItem=_rightBtnItem;
@property(retain, nonatomic) NSArray *iconTitleArray; // @synthesize iconTitleArray=_iconTitleArray;
@property(retain, nonatomic) NSArray *iconArray; // @synthesize iconArray=_iconArray;
@property(retain, nonatomic) DSectionIndexView *sectionIndexView; // @synthesize sectionIndexView=_sectionIndexView;
@property(retain, nonatomic) QMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) IGroupDetailInfo *groupDetailInfo; // @synthesize groupDetailInfo=_groupDetailInfo;
@property(nonatomic) long long frindListType; // @synthesize frindListType=_frindListType;
- (void).cxx_destruct;
- (void)beginPullDownRefreshingNew;
- (void)createGroup;
- (void)searchFriendToAdd;
- (void)rightBtnItemClicked;
- (void)leftBtnItemClicked;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)filterContentForSearchText:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updateDataWithTableview:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sectionIndexView:(id)arg1 didSelectSection:(long long)arg2;
- (id)sectionIndexView:(id)arg1 titleForSection:(long long)arg2;
- (id)sectionIndexView:(id)arg1 itemViewForSection:(long long)arg2;
- (long long)numberOfItemViewForSectionIndexView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)makeUserArrayDic;
- (void)loadData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)addViews;
- (void)viewDidLayoutSubviews;
- (void)updateNewFriendBadge;
- (void)initSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFriendListType:(long long)arg1;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
