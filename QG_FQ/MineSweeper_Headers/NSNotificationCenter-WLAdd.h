//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (WLAdd)
- (void)wl_postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(_Bool)arg4;
- (void)wl_postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)wl_postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2;
- (void)wl_postNotificationOnMainThread:(id)arg1 waitUntilDone:(_Bool)arg2;
- (void)wl_postNotificationOnMainThread:(id)arg1;
@end

