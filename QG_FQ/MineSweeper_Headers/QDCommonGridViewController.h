//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDCommonViewController.h"

@class QMUIGridView, QMUIOrderedDictionary, UIScrollView;

@interface QDCommonGridViewController : QDCommonViewController
{
    QMUIOrderedDictionary *_dataSource;
    QMUIGridView *_gridView;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) QMUIGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) QMUIOrderedDictionary *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)themeBeforeChanged:(id)arg1 afterChanged:(id)arg2;
- (void)handleGirdButtonEvent:(id)arg1;
- (id)generateButtonAtIndex:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)didInitialize;
- (void)didSelectCellWithTitle:(id)arg1;
- (void)initDataSource;

@end
