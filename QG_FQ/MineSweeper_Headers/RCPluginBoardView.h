//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, RCEmojiPageControl, RCPluginBoardHorizontalCollectionViewLayout, UICollectionView;
@protocol RCPluginBoardViewDelegate;

@interface RCPluginBoardView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    RCEmojiPageControl *pageCtrl;
    NSMutableArray *_allItems;
    UICollectionView *_contentView;
    UIView *_extensionView;
    id <RCPluginBoardViewDelegate> _pluginBoardDelegate;
    RCPluginBoardHorizontalCollectionViewLayout *_layout;
}

@property(retain, nonatomic) RCPluginBoardHorizontalCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <RCPluginBoardViewDelegate> pluginBoardDelegate; // @synthesize pluginBoardDelegate=_pluginBoardDelegate;
@property(retain, nonatomic) UIView *extensionView; // @synthesize extensionView=_extensionView;
@property(retain, nonatomic) UICollectionView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableArray *allItems; // @synthesize allItems=_allItems;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (float)getBoardViewBottonOriginY;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setPageTips:(long long)arg1;
- (void)removeAllItems;
- (void)removeItemAtIndex:(long long)arg1;
- (void)removeItemWithTag:(long long)arg1;
- (void)updateItemWithTag:(long long)arg1 image:(id)arg2 title:(id)arg3;
- (void)updateItemAtIndex:(long long)arg1 image:(id)arg2 title:(id)arg3;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
- (void)insertItemWithImage:(id)arg1 title:(id)arg2 tag:(long long)arg3;
- (void)insertItemWithImage:(id)arg1 title:(id)arg2 atIndex:(long long)arg3 tag:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

