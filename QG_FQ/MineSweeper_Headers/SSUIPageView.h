//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SSUIBaseShareActionSheet, UIPageControl, UIScrollView;

@interface SSUIPageView : UIView <UIScrollViewDelegate>
{
    NSArray *_items;
    UIPageControl *_pageCtr;
    UIScrollView *_scrollView;
    long long _pageSize;
    long long _pageNum;
    long long _totalRow;
    long long _totalColums;
    NSMutableArray *_platformArr;
    double _topIntervalH;
    double _platformItemW;
    double _pageControlH;
    SSUIBaseShareActionSheet *_shareActionSheet;
}

@property(nonatomic) __weak SSUIBaseShareActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(nonatomic) double pageControlH; // @synthesize pageControlH=_pageControlH;
@property(nonatomic) double platformItemW; // @synthesize platformItemW=_platformItemW;
@property(nonatomic) double topIntervalH; // @synthesize topIntervalH=_topIntervalH;
@property(retain, nonatomic) NSMutableArray *platformArr; // @synthesize platformArr=_platformArr;
@property(nonatomic) long long totalColums; // @synthesize totalColums=_totalColums;
@property(nonatomic) long long totalRow; // @synthesize totalRow=_totalRow;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)needRedrawRect:(struct CGRect)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)setupPageControlWithItems:(id)arg1;
- (void)setupScrollViewWithItems:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)updataPageData;
- (id)initWithItems:(id)arg1 totalColumn:(long long)arg2 totalRow:(long long)arg3 platformItemH:(double)arg4;
- (id)initWithItems:(id)arg1 totalColumn:(long long)arg2 totalRow:(long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

