//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMKAnnotation-Protocol.h"

@class CLHeading, CLLocation, NSString;

@interface BMKUserLocationInternal : NSObject <BMKAnnotation>
{
    _Bool _isUpdating;
    CLLocation *_location;
    CLHeading *_heading;
    NSString *_title;
    NSString *_subtitle;
}

@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

