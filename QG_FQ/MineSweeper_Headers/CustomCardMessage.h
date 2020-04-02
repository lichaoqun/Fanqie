//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageContent.h"

#import "RCMessageContentView-Protocol.h"

@class NSDictionary, NSString;

@interface CustomCardMessage : RCMessageContent <RCMessageContentView>
{
    NSDictionary *_fromuser;
    NSDictionary *_card;
    NSString *_touser;
    NSString *_msg;
    NSString *_system_notice_content;
}

+ (id)getObjectName;
+ (unsigned long long)persistentFlag;
@property(retain, nonatomic) NSString *system_notice_content; // @synthesize system_notice_content=_system_notice_content;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *touser; // @synthesize touser=_touser;
@property(retain, nonatomic) NSDictionary *card; // @synthesize card=_card;
@property(retain, nonatomic) NSDictionary *fromuser; // @synthesize fromuser=_fromuser;
- (void).cxx_destruct;
- (id)conversationDigest;
- (void)decodeWithData:(id)arg1;
- (id)encode;

@end

