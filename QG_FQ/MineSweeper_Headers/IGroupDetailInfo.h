//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface IGroupDetailInfo : NSObject
{
    NSString *_groupId;
    NSString *_title;
    NSString *_image;
    NSString *__uid;
    NSNumber *_type;
    NSNumber *_is_exist;
    NSString *_remark;
    NSString *_is_disable;
    NSString *_is_top;
    NSString *_notice;
    NSString *_notice_time;
    NSString *_not_disturb;
    NSString *_activity_id;
    NSArray *_member_list;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *member_list; // @synthesize member_list=_member_list;
@property(copy, nonatomic) NSString *activity_id; // @synthesize activity_id=_activity_id;
@property(copy, nonatomic) NSString *not_disturb; // @synthesize not_disturb=_not_disturb;
@property(copy, nonatomic) NSString *notice_time; // @synthesize notice_time=_notice_time;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *is_top; // @synthesize is_top=_is_top;
@property(copy, nonatomic) NSString *is_disable; // @synthesize is_disable=_is_disable;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSNumber *is_exist; // @synthesize is_exist=_is_exist;
@property(copy, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *_uid; // @synthesize _uid=__uid;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

