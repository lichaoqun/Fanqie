//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageContent.h"

#import "RCMessageContentView-Protocol.h"

@class NSNumber, NSString;

@interface RCRedPacketMessage : RCMessageContent <RCMessageContentView>
{
    NSString *_pack_id;
    NSString *_title;
    NSString *_total_money;
    NSString *_num;
    NSString *_thunder;
    NSString *_drawed;
    NSString *_money;
    NSString *_drawUid;
    NSString *_drawName;
    NSNumber *_isLook;
    NSString *_avatar;
    NSString *_name;
    NSNumber *_uid;
    NSNumber *_sorted;
}

+ (id)getObjectName;
+ (unsigned long long)persistentFlag;
@property(retain, nonatomic) NSNumber *sorted; // @synthesize sorted=_sorted;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSNumber *isLook; // @synthesize isLook=_isLook;
@property(retain, nonatomic) NSString *drawName; // @synthesize drawName=_drawName;
@property(retain, nonatomic) NSString *drawUid; // @synthesize drawUid=_drawUid;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *drawed; // @synthesize drawed=_drawed;
@property(retain, nonatomic) NSString *thunder; // @synthesize thunder=_thunder;
@property(retain, nonatomic) NSString *num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *total_money; // @synthesize total_money=_total_money;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pack_id; // @synthesize pack_id=_pack_id;
- (void).cxx_destruct;
- (id)conversationDigest;
- (void)decodeWithData:(id)arg1;
- (id)encode;

@end

