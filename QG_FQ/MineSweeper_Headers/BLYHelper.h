//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLYHelper : NSObject
{
}

+ (id)aes256DecryptWithkey:(id)arg1 data:(id)arg2;
+ (id)aes256EncryptWithKey:(id)arg1 data:(id)arg2;
+ (id)fileSHA1:(id)arg1;
+ (id)SHA1:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;
+ (long long)currentTimeStamp;
+ (long long)fixedTimestamp:(long long)arg1;
+ (_Bool)isDebuggerAttached;
+ (id)componentInfos;
+ (id)getBuildType;
+ (_Bool)hasAppStoreReceipt;
+ (_Bool)isTestBuild;
+ (id)getReceiptUrlPath;
+ (_Bool)isSimulatorBuild;
+ (_Bool)isDebugBuild;
+ (_Bool)isTheAppStoreEnvironment;
+ (_Bool)isRunningInAppExtension;
+ (_Bool)isPreiOS8Environment;
+ (_Bool)isPreiOS7Environment;
+ (id)generateUUID;

@end

