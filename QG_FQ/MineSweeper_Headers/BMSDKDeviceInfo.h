//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMSDKDeviceInfo : NSObject
{
}

+ (id)getBundleID;
+ (id)getSystemTimeStamp;
+ (long long)getSystemTime;
+ (id)getChannelID;
+ (struct CGSize)getScreenSize;
+ (id)getSystemVersion;
+ (double)retinaScreenScale;
+ (id)returnDeviceName:(_Bool)arg1;
+ (unsigned int)detectDevice;
+ (int)detectModel;
+ (id)platform;
+ (_Bool)isEmulator;
+ (_Bool)isOS4;
+ (_Bool)isIPodTouch;

@end
