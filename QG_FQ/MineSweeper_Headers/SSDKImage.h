//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MOBFImageGetter, MOBFImageObserver, NSURL;

@interface SSDKImage : NSObject
{
    NSURL *_URL;
    MOBFImageGetter *_theGetter;
    MOBFImageObserver *_theObserver;
}

+ (id)imageWithObject:(id)arg1;
+ (id)checkThumbImageSize:(id)arg1;
+ (void)getImage:(id)arg1 onResult:(CDUnknownBlockType)arg2;
+ (void)getImage:(id)arg1 thumbImagePath:(id)arg2 result:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) MOBFImageObserver *theObserver; // @synthesize theObserver=_theObserver;
@property(retain, nonatomic) MOBFImageGetter *theGetter; // @synthesize theGetter=_theGetter;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)getNativeImage:(CDUnknownBlockType)arg1;
- (id)initWithImage:(id)arg1 format:(id)arg2 settings:(id)arg3;
- (id)initWithURL:(id)arg1;

@end
