//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISSPPlatformConnector-Protocol.h"

@class NSString;

@interface WeChatConnector : NSObject <ISSPPlatformConnector>
{
}

+ (void)connect:(Class)arg1 delegate:(id)arg2;
+ (void)connect:(Class)arg1;
+ (void)load;
+ (_Bool)isConnected;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

