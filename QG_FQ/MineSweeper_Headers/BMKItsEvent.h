//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMKGeoElement, NSString;

@interface BMKItsEvent : NSObject
{
    BMKGeoElement *_geo;
    struct tm *_startTime;
    struct tm *_endTime;
    NSString *_strDetail;
    unsigned long long _timeStart;
    unsigned long long _timeEnd;
}

@property(nonatomic) unsigned long long timeEnd; // @synthesize timeEnd=_timeEnd;
@property(nonatomic) unsigned long long timeStart; // @synthesize timeStart=_timeStart;
@property(retain, nonatomic) NSString *strDetail; // @synthesize strDetail=_strDetail;
@property(nonatomic) struct tm *endTime; // @synthesize endTime=_endTime;
@property(nonatomic) struct tm *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) BMKGeoElement *geo; // @synthesize geo=_geo;
- (void).cxx_destruct;
- (void)dealloc;

@end

