//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageContent.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface RCReadReceiptMessage : RCMessageContent <NSCoding>
{
    long long _lastMessageSendTime;
    NSString *_messageUId;
    unsigned long long _type;
}

+ (id)getObjectName;
+ (unsigned long long)persistentFlag;
+ (id)notificationWithLastMessageSendTime:(long long)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *messageUId; // @synthesize messageUId=_messageUId;
@property(nonatomic) long long lastMessageSendTime; // @synthesize lastMessageSendTime=_lastMessageSendTime;
- (void).cxx_destruct;
- (id)encode;
- (void)decodeWithData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
