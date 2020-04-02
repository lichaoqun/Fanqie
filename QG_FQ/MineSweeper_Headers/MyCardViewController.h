//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLCommonGroupListViewController.h"

@class NSArray;

@interface MyCardViewController : SLCommonGroupListViewController
{
    CDUnknownBlockType _cardSelectBlock;
    NSArray *_datasource;
}

@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(copy, nonatomic) CDUnknownBlockType cardSelectBlock; // @synthesize cardSelectBlock=_cardSelectBlock;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)delBankCardWithIndexPath:(id)arg1;
- (void)addCardBtnClicked:(id)arg1;
- (void)initData;
- (void)addSubViews;
- (void)initSubviews;
- (id)title;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

