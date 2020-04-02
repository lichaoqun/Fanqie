//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSTimer, RCCountlyEventQueue;

@interface RCCountly : NSObject
{
    double unsentSessionLength;
    NSTimer *timer;
    long long startTime;
    double lastTime;
    _Bool isSuspended;
    RCCountlyEventQueue *eventQueue;
    NSString *_statisticServer;
    NSMutableDictionary *_messageInfos;
    NSDictionary *_crashCustom;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *crashCustom; // @synthesize crashCustom=_crashCustom;
@property(retain, nonatomic) NSMutableDictionary *messageInfos; // @synthesize messageInfos=_messageInfos;
- (void).cxx_destruct;
- (void)endBackgroundSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isInBackground;
- (_Bool)isJailbroken;
- (long long)timeSinceLaunch;
- (float)OpenGLESversion;
- (unsigned long long)connectionType;
- (id)orientation;
- (long long)batteryLevel;
- (unsigned long long)totalDisk;
- (unsigned long long)freeDisk;
- (unsigned long long)totalRAM;
- (unsigned long long)freeRAM;
- (void)recordHandledException:(id)arg1;
- (void)startCrashReportingWithSegments:(id)arg1;
- (void)startCrashReporting;
- (void)didFailToRegisterForRemoteNotifications;
- (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)recordPushActionForCountlyDictionary:(id)arg1;
- (void)recordPushOpenForCountlyDictionary:(id)arg1;
- (void)withAppStoreId:(CDUnknownBlockType)arg1;
- (_Bool)handleRemoteNotification:(id)arg1 displayingMessage:(_Bool)arg2 withButtonTitles:(id)arg3;
- (_Bool)handleRemoteNotification:(id)arg1 displayingMessage:(_Bool)arg2;
- (_Bool)handleRemoteNotification:(id)arg1;
- (_Bool)handleRemoteNotification:(id)arg1 withButtonTitles:(id)arg2;
- (void)willTerminateCallBack:(id)arg1;
- (void)willEnterForegroundCallBack:(id)arg1;
- (void)didEnterBackgroundCallBack:(id)arg1;
- (void)dealloc;
- (void)exit;
- (void)resume;
- (void)suspend;
- (void)onTimer:(id)arg1;
- (void)setLocation:(double)arg1 longitude:(double)arg2;
- (void)postPrivateCloudInfo:(id)arg1 customId:(id)arg2 code:(id)arg3 naviIP:(id)arg4 cmpIP:(id)arg5;
- (void)postLocalNotificationEvent:(id)arg1;
- (void)postRemoteNotificationEvent:(id)arg1;
- (void)recordUserDetails:(id)arg1;
- (void)recordEvent:(id)arg1 segmentation:(id)arg2 count:(int)arg3 sum:(double)arg4;
- (void)recordEvent:(id)arg1 segmentation:(id)arg2 count:(int)arg3;
- (void)recordEvent:(id)arg1 count:(int)arg2 sum:(double)arg3;
- (void)recordEvent:(id)arg1 count:(int)arg2;
- (id)countlyNotificationCategoriesWithActionTitles:(id)arg1;
- (id)countlyNotificationCategories;
- (void)startWithTestMessagingUsing:(id)arg1 withHost:(id)arg2 andOptions:(id)arg3;
- (void)startWithMessagingUsing:(id)arg1 withHost:(id)arg2 andOptions:(id)arg3;
- (void)startRCCountlyWithAppKey:(id)arg1;
- (void)updateDeviceToken;
- (void)start:(id)arg1 withHost:(id)arg2;
- (_Bool)isStatisticEnabled;
@property(copy, nonatomic) NSString *statisticServer; // @synthesize statisticServer=_statisticServer;
- (id)init;

@end

