//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RCPushProfile : NSObject
{
}

- (void)updateMultiDevicePushStatus:(_Bool)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updateShowPushContentStatus:(_Bool)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updatePushLauguage:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool enableMultiDevicePush;
@property(readonly, nonatomic) _Bool isShowPushContent;
@property(readonly, nonatomic) unsigned long long pushLauguage;

@end

