//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageContent.h"

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface RCVoiceMessage : RCMessageContent <NSCoding>
{
    NSData *_wavAudioData;
    long long _duration;
    NSString *_extra;
    NSString *_amrBase64Content;
}

+ (unsigned long long)persistentFlag;
+ (id)getObjectName;
+ (id)messageWithAudio:(id)arg1 duration:(long long)arg2;
@property(retain, nonatomic) NSString *amrBase64Content; // @synthesize amrBase64Content=_amrBase64Content;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSData *wavAudioData; // @synthesize wavAudioData=_wavAudioData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)decodeWithData:(id)arg1;
- (id)encode;

@end
