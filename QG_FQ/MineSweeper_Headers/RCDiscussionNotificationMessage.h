//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageContent.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface RCDiscussionNotificationMessage : RCMessageContent <NSCoding>
{
    long long _type;
    NSString *_operatorId;
    NSString *_extension;
}

+ (id)getObjectName;
+ (unsigned long long)persistentFlag;
+ (id)notificationWithType:(long long)arg1 operator:(id)arg2 extension:(id)arg3;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString *operatorId; // @synthesize operatorId=_operatorId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encode;
- (void)decodeWithData:(id)arg1;

@end

