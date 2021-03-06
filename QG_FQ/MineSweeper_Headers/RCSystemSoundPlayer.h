//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RCSystemSoundPlayer : NSObject
{
    _Bool _isPlaying;
    unsigned int _soundId;
    NSString *_soundFilePath;
    NSString *_targetId;
    unsigned long long _conversationType;
}

+ (id)defaultPlayer;
@property _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *soundFilePath; // @synthesize soundFilePath=_soundFilePath;
@property(nonatomic) unsigned int soundId; // @synthesize soundId=_soundId;
- (void).cxx_destruct;
- (void)needPlaySoundByMessage:(id)arg1;
- (void)playSoundByMessage:(id)arg1;
- (void)setSystemSoundPath:(id)arg1;
- (void)resetIgnoreConversation;
- (void)setIgnoreConversationType:(unsigned long long)arg1 targetId:(id)arg2;

@end

