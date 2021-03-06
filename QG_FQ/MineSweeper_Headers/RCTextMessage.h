//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageContent.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface RCTextMessage : RCMessageContent <NSCoding>
{
    NSString *_content;
    NSString *_extra;
}

+ (id)getObjectName;
+ (unsigned long long)persistentFlag;
+ (id)messageWithContent:(id)arg1;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)conversationDigest;
- (id)getSearchableWords;
- (void)decodeWithData:(id)arg1;
- (id)encode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

