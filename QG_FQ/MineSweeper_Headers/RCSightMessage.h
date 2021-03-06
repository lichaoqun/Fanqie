//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageContent.h"

#import "NSCoding-Protocol.h"

@class NSString, UIImage;

@interface RCSightMessage : RCMessageContent <NSCoding>
{
    NSString *_name;
    NSString *_sightUrl;
    unsigned long long _duration;
    long long _size;
    NSString *_extra;
    NSString *_thumbnailBase64String;
    NSString *_localPath;
    UIImage *_thumbnailImage;
}

+ (id)getObjectName;
+ (unsigned long long)persistentFlag;
+ (id)messageWithLocalPath:(id)arg1 thumbnail:(id)arg2 duration:(unsigned long long)arg3;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) NSString *thumbnailBase64String; // @synthesize thumbnailBase64String=_thumbnailBase64String;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *sightUrl; // @synthesize sightUrl=_sightUrl;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)decodeWithData:(id)arg1;
- (id)encode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUrl:(id)arg1 thumbnail:(id)arg2 duration:(unsigned long long)arg3;

@end

