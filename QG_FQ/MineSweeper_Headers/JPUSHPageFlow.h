//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JPUSHJSONProtocol-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface JPUSHPageFlow : NSObject <JPUSHJSONProtocol, NSCopying, NSCoding>
{
    NSMutableArray *_pageFlow;
    NSMutableArray *_tempFlow;
    double _duration;
    NSString *_reportDays;
    NSString *_reportTime;
}

@property(retain, nonatomic) NSString *reportTime; // @synthesize reportTime=_reportTime;
@property(retain, nonatomic) NSString *reportDays; // @synthesize reportDays=_reportDays;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain) NSMutableArray *tempFlow; // @synthesize tempFlow=_tempFlow;
@property(retain) NSMutableArray *pageFlow; // @synthesize pageFlow=_pageFlow;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jpush_jsonClassType;
- (void)jpush_fromJSONValue:(id)arg1;
- (id)jpush_toJSON;
- (void)p_clearTempFlow;
- (void)p_clearPageFlow;
- (void)clearFlow;
- (_Bool)readFromFile;
- (void)writeToFile;
- (void)p_addNewPage:(id)arg1;
- (void)p_saveTempFlow:(id)arg1;
- (void)AddPage:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

