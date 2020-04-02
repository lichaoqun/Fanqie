//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageCell.h"

#import "RCVoicePlayerObserver-Protocol.h"

@class NSString, NSTimer, RCVoicePlayer, UIImageView, UILabel;

@interface RCVoiceMessageCell : RCMessageCell <RCVoicePlayerObserver>
{
    int _animationIndex;
    UIImageView *_bubbleBackgroundView;
    UIImageView *_playVoiceView;
    UIImageView *_voiceUnreadTagView;
    UILabel *_voiceDurationLabel;
    long long _duration;
    NSTimer *_animationTimer;
    RCVoicePlayer *_voicePlayer;
    struct CGSize _voiceViewSize;
}

+ (struct CGSize)sizeForMessageModel:(id)arg1 withCollectionViewWidth:(double)arg2 referenceExtraHeight:(double)arg3;
@property(retain, nonatomic) RCVoicePlayer *voicePlayer; // @synthesize voicePlayer=_voicePlayer;
@property(nonatomic) int animationIndex; // @synthesize animationIndex=_animationIndex;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) struct CGSize voiceViewSize; // @synthesize voiceViewSize=_voiceViewSize;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UILabel *voiceDurationLabel; // @synthesize voiceDurationLabel=_voiceDurationLabel;
@property(retain, nonatomic) UIImageView *voiceUnreadTagView; // @synthesize voiceUnreadTagView=_voiceUnreadTagView;
@property(retain, nonatomic) UIImageView *playVoiceView; // @synthesize playVoiceView=_playVoiceView;
@property(retain, nonatomic) UIImageView *bubbleBackgroundView; // @synthesize bubbleBackgroundView=_bubbleBackgroundView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)longPressed:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1;
- (void)PlayerDidFinishPlaying:(_Bool)arg1;
- (void)disablePreviousAnimationTimer;
- (void)disableCurrentAnimationTimer;
- (void)scheduleAnimationOperation;
- (void)enableCurrentAnimationTimer;
- (void)stopPlayingVoiceData;
- (void)startPlayingVoiceData;
- (void)msgStatusViewTapEventHandler:(id)arg1;
- (void)stopPlayingVoice;
- (void)playVoice;
- (void)tapBubbleBackgroundViewEvent:(id)arg1;
- (void)stopPlayingVoiceDataIfNeed:(id)arg1;
- (void)resetActiveEventInBackgroundMode;
- (void)resetByExtensionModelEvents;
- (void)setDataModel:(id)arg1;
- (void)playVoiceNotification:(id)arg1;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

