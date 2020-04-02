//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewCell.h"

@class IFriendModel, IFriendRequestModel, IGameGroupModel, IMyRedPacketModel, IRedPacektMemberModel, RCSearchConversationResult;

@interface BaseImageTableViewCell : BaseTableViewCell
{
    _Bool _showBadge;
    IFriendModel *_friendModel;
    IGameGroupModel *_groupModel;
    IFriendRequestModel *_friendRequestModel;
    IRedPacektMemberModel *_redPacketMemberModel;
    IMyRedPacketModel *_myRedPacketModel;
    RCSearchConversationResult *_conversationResult;
}

@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(retain, nonatomic) RCSearchConversationResult *conversationResult; // @synthesize conversationResult=_conversationResult;
@property(retain, nonatomic) IMyRedPacketModel *myRedPacketModel; // @synthesize myRedPacketModel=_myRedPacketModel;
@property(retain, nonatomic) IRedPacektMemberModel *redPacketMemberModel; // @synthesize redPacketMemberModel=_redPacketMemberModel;
@property(retain, nonatomic) IFriendRequestModel *friendRequestModel; // @synthesize friendRequestModel=_friendRequestModel;
@property(retain, nonatomic) IGameGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) IFriendModel *friendModel; // @synthesize friendModel=_friendModel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

