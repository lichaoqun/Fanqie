//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCConversationBaseCell.h"

@class RCConversationDetailContentView, RCConversationHeaderView, RCConversationStatusView, RCMessageBubbleTipView, RCloudImageView, UIColor, UIImageView, UILabel, UIView;
@protocol RCConversationCellDelegate;

@interface RCConversationCell : RCConversationBaseCell
{
    _Bool _hideSenderName;
    id <RCConversationCellDelegate> _delegate;
    UILabel *_conversationTitle;
    UIView *_conversationTagView;
    UILabel *_messageCreatedTimeLabel;
    long long _portraitStyle;
    UIColor *_cellBackgroundColor;
    UIColor *_topCellBackgroundColor;
    RCConversationDetailContentView *_detailContentView;
    RCConversationStatusView *_statusView;
    RCConversationHeaderView *_headerView;
}

@property(retain, nonatomic) RCConversationHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) RCConversationStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) RCConversationDetailContentView *detailContentView; // @synthesize detailContentView=_detailContentView;
@property(retain, nonatomic) UIColor *topCellBackgroundColor; // @synthesize topCellBackgroundColor=_topCellBackgroundColor;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(nonatomic) _Bool hideSenderName; // @synthesize hideSenderName=_hideSenderName;
@property(nonatomic) long long portraitStyle; // @synthesize portraitStyle=_portraitStyle;
@property(retain, nonatomic) UILabel *messageCreatedTimeLabel; // @synthesize messageCreatedTimeLabel=_messageCreatedTimeLabel;
@property(retain, nonatomic) UIView *conversationTagView; // @synthesize conversationTagView=_conversationTagView;
@property(retain, nonatomic) UILabel *conversationTitle; // @synthesize conversationTitle=_conversationTitle;
@property(nonatomic) __weak id <RCConversationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowNotificationNumber;
- (void)setHeaderImagePortraitStyle:(long long)arg1;
@property(nonatomic) _Bool enableNotification;
@property(retain, nonatomic) UILabel *messageContentLabel;
@property(retain, nonatomic) UIImageView *lastSendMessageStatusView;
@property(retain, nonatomic) UIImageView *conversationStatusImageView;
@property(retain, nonatomic) RCMessageBubbleTipView *bubbleTipView;
@property(retain, nonatomic) RCloudImageView *headerImageView;
@property(retain, nonatomic) UIView *headerImageViewBackgroundView;
- (void)headerImageDidLongPress;
- (void)headerImageDidTap;
- (void)updatePublicServiceIfNeed:(id)arg1;
- (void)updateCellIfNeed:(id)arg1;
- (void)onGroupInfoUpdate:(id)arg1;
- (void)onGroupUserInfoUpdate:(id)arg1;
- (void)onUserInfoUpdate:(id)arg1;
- (_Bool)hideSenderNameForDefault:(id)arg1;
- (void)updateConversationTitle:(id)arg1;
- (void)resetDefaultLayout:(id)arg1;
- (void)setDataModel:(id)arg1;
- (void)dealloc;
- (void)registerObserver;
- (void)initCellLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
