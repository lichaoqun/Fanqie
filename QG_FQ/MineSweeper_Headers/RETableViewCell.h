//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "REActionBarDelegate-Protocol.h"

@class NSIndexPath, NSString, REActionBar, RETableViewItem, RETableViewManager, RETableViewSection, UIImageView, UIResponder, UITableView, UIView;

@interface RETableViewCell : UITableViewCell <REActionBarDelegate>
{
    _Bool _loaded;
    UITableView *_parentTableView;
    RETableViewManager *_tableViewManager;
    UIImageView *_backgroundImageView;
    UIImageView *_selectedBackgroundImageView;
    REActionBar *_actionBar;
    long long _rowIndex;
    long long _sectionIndex;
    RETableViewSection *_section;
    RETableViewItem *_item;
    UIView *_lineView;
    UIImageView *_logoImageView;
}

+ (double)heightWithItem:(id)arg1 tableViewManager:(id)arg2;
+ (_Bool)canFocusWithItem:(id)arg1;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) RETableViewItem *item; // @synthesize item=_item;
@property(nonatomic) __weak RETableViewSection *section; // @synthesize section=_section;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(retain, nonatomic) REActionBar *actionBar; // @synthesize actionBar=_actionBar;
@property(retain, nonatomic) UIImageView *selectedBackgroundImageView; // @synthesize selectedBackgroundImageView=_selectedBackgroundImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak RETableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) __weak UITableView *parentTableView; // @synthesize parentTableView=_parentTableView;
- (void).cxx_destruct;
- (void)actionBar:(id)arg1 doneButtonPressed:(id)arg2;
- (void)actionBar:(id)arg1 navigationControlValueChanged:(id)arg2;
@property(readonly, nonatomic) NSIndexPath *indexPathForNextResponder;
- (id)indexPathForNextResponderInSectionIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSIndexPath *indexPathForPreviousResponder;
- (id)indexPathForPreviousResponderInSectionIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIResponder *responder;
- (void)updateActionBarNavigationControl;
@property(readonly, nonatomic) long long type;
- (void)layoutDetailView:(id)arg1 minimumWidth:(double)arg2;
- (void)layoutSubviews;
- (void)cellDidDisappear;
- (void)cellWillAppear;
- (void)cellDidLoad;
- (void)addSelectedBackgroundImage;
- (void)addBackgroundImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

