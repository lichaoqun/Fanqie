//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMyRedPacketModel : NSObject
{
    NSString *_packet_id;
    NSString *_money;
    NSString *_from_member_id;
    NSString *_from_nickname;
    NSString *_avatar;
    NSString *_is_thunder;
    NSString *_is_optimum;
    NSString *_update_time;
}

@property(copy, nonatomic) NSString *update_time; // @synthesize update_time=_update_time;
@property(copy, nonatomic) NSString *is_optimum; // @synthesize is_optimum=_is_optimum;
@property(copy, nonatomic) NSString *is_thunder; // @synthesize is_thunder=_is_thunder;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *from_nickname; // @synthesize from_nickname=_from_nickname;
@property(copy, nonatomic) NSString *from_member_id; // @synthesize from_member_id=_from_member_id;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(copy, nonatomic) NSString *packet_id; // @synthesize packet_id=_packet_id;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

