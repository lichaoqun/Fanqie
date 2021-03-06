//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLCommonGroupListViewController.h"

@class NSMutableArray, QMUILabel;

@interface MyRecommendViewController : SLCommonGroupListViewController
{
    QMUILabel *_momeyLabel;
    QMUILabel *_todayMomeyLabel;
    NSMutableArray *_datasource;
    long long _page;
}

@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) QMUILabel *todayMomeyLabel; // @synthesize todayMomeyLabel=_todayMomeyLabel;
@property(retain, nonatomic) QMUILabel *momeyLabel; // @synthesize momeyLabel=_momeyLabel;
- (void).cxx_destruct;
- (void)beginPullUpRefreshingNew;
- (void)beginPullDownRefreshingNew;
- (void)rightBarButtonItemClicked;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)titleViewTintColor;
- (id)navigationBarTintColor;
- (id)navigationBarShadowImage;
- (id)navigationBarBackgroundImage;
- (_Bool)shouldSetStatusBarStyleLight;
- (void)didReceiveMemoryWarning;
- (void)addHeaderView;
- (void)loadUI:(id)arg1;
- (void)loadData;
- (void)viewDidLoad;
- (void)initSubviews;
- (id)title;

@end

