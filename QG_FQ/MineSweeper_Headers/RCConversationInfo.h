//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RCConversationInfo : NSObject
{
    NSString *_targetId;
    unsigned long long _conversationType;
    NSString *_name;
    NSString *_portraitUri;
}

+ (id)getConversationGUID:(unsigned long long)arg1 targetId:(id)arg2;
@property(retain, nonatomic) NSString *portraitUri; // @synthesize portraitUri=_portraitUri;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)translateToGroupInfo;
- (id)initWithGroupInfo:(id)arg1;
- (id)initWithConversationId:(id)arg1 conversationType:(unsigned long long)arg2 name:(id)arg3 portraitUri:(id)arg4;

@end

