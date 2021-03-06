//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RCMessageContent, RCReadReceiptInfo, RCUserInfo;

@interface RCMessageModel : NSObject
{
    _Bool _isDisplayMessageTime;
    _Bool _isDisplayNickname;
    _Bool _isCanSendReadReceipt;
    RCUserInfo *_userInfo;
    unsigned long long _conversationType;
    NSString *_targetId;
    long long _messageId;
    unsigned long long _messageDirection;
    NSString *_senderUserId;
    unsigned long long _receivedStatus;
    unsigned long long _sentStatus;
    long long _receivedTime;
    long long _sentTime;
    NSString *_objectName;
    RCMessageContent *_content;
    RCReadReceiptInfo *_readReceiptInfo;
    NSString *_extra;
    NSString *_messageUId;
    long long _readReceiptCount;
    struct CGSize _cellSize;
}

+ (id)modelWithMessage:(id)arg1;
@property(nonatomic) long long readReceiptCount; // @synthesize readReceiptCount=_readReceiptCount;
@property(nonatomic) _Bool isCanSendReadReceipt; // @synthesize isCanSendReadReceipt=_isCanSendReadReceipt;
@property(retain, nonatomic) NSString *messageUId; // @synthesize messageUId=_messageUId;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) RCReadReceiptInfo *readReceiptInfo; // @synthesize readReceiptInfo=_readReceiptInfo;
@property(retain, nonatomic) RCMessageContent *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *objectName; // @synthesize objectName=_objectName;
@property(nonatomic) long long sentTime; // @synthesize sentTime=_sentTime;
@property(nonatomic) long long receivedTime; // @synthesize receivedTime=_receivedTime;
@property(nonatomic) unsigned long long sentStatus; // @synthesize sentStatus=_sentStatus;
@property(nonatomic) unsigned long long receivedStatus; // @synthesize receivedStatus=_receivedStatus;
@property(retain, nonatomic) NSString *senderUserId; // @synthesize senderUserId=_senderUserId;
@property(nonatomic) unsigned long long messageDirection; // @synthesize messageDirection=_messageDirection;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(nonatomic) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
@property(retain, nonatomic) RCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool isDisplayNickname; // @synthesize isDisplayNickname=_isDisplayNickname;
@property(nonatomic) _Bool isDisplayMessageTime; // @synthesize isDisplayMessageTime=_isDisplayMessageTime;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1;

@end

