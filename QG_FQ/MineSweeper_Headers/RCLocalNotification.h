//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UILocalNotification;

@interface RCLocalNotification : NSObject
{
    _Bool _haveLocationSound;
    UILocalNotification *_localNotification;
}

+ (id)defaultCenter;
@property(nonatomic) _Bool haveLocationSound; // @synthesize haveLocationSound=_haveLocationSound;
@property(retain, nonatomic) UILocalNotification *localNotification; // @synthesize localNotification=_localNotification;
- (void).cxx_destruct;
- (void)postLocalNotification:(id)arg1 userInfo:(id)arg2;

@end

