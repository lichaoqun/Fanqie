//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLCommonGroupListViewController.h"

#import "SGAdvertScrollViewDelegate-Protocol.h"
#import "_TtP11FSPagerView19FSPagerViewDelegate_-Protocol.h"
#import "_TtP11FSPagerView21FSPagerViewDataSource_-Protocol.h"

@class NSArray, NSString, RETableViewManager, SGAdvertScrollView, UIView, _TtC11FSPagerView11FSPagerView, _TtC11FSPagerView13FSPageControl;

@interface HomeViewController : SLCommonGroupListViewController <_TtP11FSPagerView21FSPagerViewDataSource_, _TtP11FSPagerView19FSPagerViewDelegate_, SGAdvertScrollViewDelegate>
{
    _Bool _isFristIn;
    RETableViewManager *_manager;
    UIView *_headerView;
    SGAdvertScrollView *_noteView;
    NSArray *_noticeArray;
    NSArray *_bannerImageArray;
    _TtC11FSPagerView11FSPagerView *_pagerView;
    _TtC11FSPagerView13FSPageControl *_pageControl;
}

@property(nonatomic) _Bool isFristIn; // @synthesize isFristIn=_isFristIn;
@property(retain, nonatomic) _TtC11FSPagerView13FSPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) _TtC11FSPagerView11FSPagerView *pagerView; // @synthesize pagerView=_pagerView;
@property(retain, nonatomic) NSArray *bannerImageArray; // @synthesize bannerImageArray=_bannerImageArray;
@property(retain, nonatomic) NSArray *noticeArray; // @synthesize noticeArray=_noticeArray;
@property(retain, nonatomic) SGAdvertScrollView *noteView; // @synthesize noteView=_noteView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) RETableViewManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)loadData;
- (void)beginPullUpRefreshingNew;
- (void)beginPullDownRefreshingNew;
- (void)leftBtnItemClicked;
- (id)generateLabelWithText:(id)arg1;
- (void)noteBtnClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)pagerViewWillEndDragging:(id)arg1 targetIndex:(long long)arg2;
- (void)pagerView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)pagerViewDidScroll:(id)arg1;
- (id)pagerView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInPagerView:(id)arg1;
- (void)advertScrollView:(id)arg1 didSelectedItemAtIndex:(long long)arg2;
- (void)updateNoticeUI;
- (void)loadNotice;
- (void)loadBanerUi;
- (void)loadBannerData;
- (void)getLoginUserInfo;
- (void)addViews;
- (void)reloadData;
- (void)loadNoticeToShowNoticeAlert;
- (void)noticeMessageAlert;
- (void)initSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

