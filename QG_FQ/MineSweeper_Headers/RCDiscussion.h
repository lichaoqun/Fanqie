//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RCDiscussion : NSObject
{
    int _inviteStatus;
    int _conversationType;
    int _pushMessageNotificationStatus;
    NSString *_discussionId;
    NSString *_discussionName;
    NSString *_creatorId;
    NSArray *_memberIdList;
}

@property(nonatomic) int pushMessageNotificationStatus; // @synthesize pushMessageNotificationStatus=_pushMessageNotificationStatus;
@property(nonatomic) int conversationType; // @synthesize conversationType=_conversationType;
@property(nonatomic) int inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(retain, nonatomic) NSArray *memberIdList; // @synthesize memberIdList=_memberIdList;
@property(retain, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
@property(retain, nonatomic) NSString *discussionName; // @synthesize discussionName=_discussionName;
@property(retain, nonatomic) NSString *discussionId; // @synthesize discussionId=_discussionId;
- (void).cxx_destruct;
- (id)initWithDiscussionId:(id)arg1 discussionName:(id)arg2 creatorId:(id)arg3 conversationType:(int)arg4 memberIdList:(id)arg5 inviteStatus:(int)arg6 msgNotificationStatus:(int)arg7;

@end

