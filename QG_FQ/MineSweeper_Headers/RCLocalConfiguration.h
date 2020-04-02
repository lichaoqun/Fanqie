//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RCLocalConfiguration : NSObject
{
    _Bool _forceKeepAlive;
    _Bool _messageReadReceiptEnabled;
    _Bool _csSuspendWhenLeave;
    _Bool _rlsEnable;
    int _voiceEncodeBitRate;
    float _imageQuality;
    float _thumbnailQuality;
    unsigned long long _thumbnailWidth;
    unsigned long long _thumbnailHeight;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
    unsigned long long _maxOriginalImageSize;
    unsigned long long _maxReconnectTimer;
    unsigned long long _minMessageReceiveInterval;
    NSString *_fileMessageRelativePath;
    long long _maxRangeUnit;
    unsigned long long _rlsMaxParticipants;
    NSArray *_rlsSupportConverationTypes;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *rlsSupportConverationTypes; // @synthesize rlsSupportConverationTypes=_rlsSupportConverationTypes;
@property(nonatomic) unsigned long long rlsMaxParticipants; // @synthesize rlsMaxParticipants=_rlsMaxParticipants;
@property(nonatomic) _Bool rlsEnable; // @synthesize rlsEnable=_rlsEnable;
@property(nonatomic) long long maxRangeUnit; // @synthesize maxRangeUnit=_maxRangeUnit;
@property(retain, nonatomic) NSString *fileMessageRelativePath; // @synthesize fileMessageRelativePath=_fileMessageRelativePath;
@property(nonatomic) unsigned long long minMessageReceiveInterval; // @synthesize minMessageReceiveInterval=_minMessageReceiveInterval;
@property(nonatomic) _Bool csSuspendWhenLeave; // @synthesize csSuspendWhenLeave=_csSuspendWhenLeave;
@property(nonatomic) _Bool messageReadReceiptEnabled; // @synthesize messageReadReceiptEnabled=_messageReadReceiptEnabled;
@property(nonatomic) unsigned long long maxReconnectTimer; // @synthesize maxReconnectTimer=_maxReconnectTimer;
@property(nonatomic) _Bool forceKeepAlive; // @synthesize forceKeepAlive=_forceKeepAlive;
@property(nonatomic) float thumbnailQuality; // @synthesize thumbnailQuality=_thumbnailQuality;
@property(nonatomic) float imageQuality; // @synthesize imageQuality=_imageQuality;
@property(nonatomic) unsigned long long maxOriginalImageSize; // @synthesize maxOriginalImageSize=_maxOriginalImageSize;
@property(nonatomic) unsigned long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) unsigned long long thumbnailHeight; // @synthesize thumbnailHeight=_thumbnailHeight;
@property(nonatomic) unsigned long long thumbnailWidth; // @synthesize thumbnailWidth=_thumbnailWidth;
@property(nonatomic) int voiceEncodeBitRate; // @synthesize voiceEncodeBitRate=_voiceEncodeBitRate;
- (void).cxx_destruct;
- (id)init;

@end

