//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface RCGroup : NSObject <NSCoding>
{
    NSString *_groupId;
    NSString *_groupName;
    NSString *_portraitUri;
}

@property(retain, nonatomic) NSString *portraitUri; // @synthesize portraitUri=_portraitUri;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupId:(id)arg1 groupName:(id)arg2 portraitUri:(id)arg3;

@end

