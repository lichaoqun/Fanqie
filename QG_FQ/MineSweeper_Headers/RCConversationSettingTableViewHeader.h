//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "RCConversationSettingTableViewHeaderItemDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString;
@protocol RCConversationSettingTableViewHeaderDelegate;

@interface RCConversationSettingTableViewHeader : UICollectionView <RCConversationSettingTableViewHeaderItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _showDeleteTip;
    _Bool _isAllowedDeleteMember;
    _Bool _isAllowedInviteMember;
    id <RCConversationSettingTableViewHeaderDelegate> _settingTableViewHeaderDelegate;
    NSMutableArray *_users;
}

@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property(nonatomic) __weak id <RCConversationSettingTableViewHeaderDelegate> settingTableViewHeaderDelegate; // @synthesize settingTableViewHeaderDelegate=_settingTableViewHeaderDelegate;
@property(nonatomic) _Bool isAllowedInviteMember; // @synthesize isAllowedInviteMember=_isAllowedInviteMember;
@property(nonatomic) _Bool isAllowedDeleteMember; // @synthesize isAllowedDeleteMember=_isAllowedDeleteMember;
@property(nonatomic) _Bool showDeleteTip; // @synthesize showDeleteTip=_showDeleteTip;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)hidesDeleteTip:(id)arg1;
- (void)showDeleteTip:(id)arg1;
- (void)deleteTipButtonClicked:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
