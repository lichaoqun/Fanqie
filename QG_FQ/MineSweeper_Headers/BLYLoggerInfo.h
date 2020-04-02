//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BLYLoggerDelegate, OS_dispatch_queue;

@interface BLYLoggerInfo : NSObject
{
    id <BLYLoggerDelegate> _logger;
    unsigned long long _level;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

+ (id)infoWithLogger:(id)arg1 level:(unsigned long long)arg2 queue:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) id <BLYLoggerDelegate> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)initWithLogger:(id)arg1 level:(unsigned long long)arg2 queue:(id)arg3;

@end

