//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSArray, NSString;
@protocol RCRealTimeLocationObserver;

@protocol RCRealTimeLocationProxy <NSObject>
- (CLLocation *)getLocation:(NSString *)arg1;
- (long long)getStatus;
- (NSArray *)getParticipants;
- (void)removeRealTimeLocationObserver:(id <RCRealTimeLocationObserver>)arg1;
- (void)addRealTimeLocationObserver:(id <RCRealTimeLocationObserver>)arg1;
- (void)quitRealTimeLocation;
- (void)joinRealTimeLocation;
- (void)startRealTimeLocation;
@end

