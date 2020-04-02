//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageContent.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface RCPublicServiceCommandMessage : RCMessageContent <NSCoding>
{
    NSString *_command;
    NSString *_data;
    NSString *_extra;
}

+ (id)getObjectName;
+ (unsigned long long)persistentFlag;
+ (id)messageWithCommand:(id)arg1 data:(id)arg2;
+ (id)messageFromMenuItem:(id)arg1;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (void)decodeWithData:(id)arg1;
- (id)encode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

