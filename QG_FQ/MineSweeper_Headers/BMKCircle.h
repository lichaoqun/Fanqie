//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMKMultiPoint.h"

#import "BMKOverlay-Protocol.h"

@class NSString;

@interface BMKCircle : BMKMultiPoint <BMKOverlay>
{
    _Bool _invalidate;
    struct CLLocationCoordinate2D _coordinate;
    double _radius;
    CDStruct_02837cd9 _boundingMapRect;
}

+ (id)circleWithMapRect:(CDStruct_02837cd9)arg1;
+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (int)getStepsWithRadius:(double)arg1;
- (void)updateCircle;
- (id)initWithMapRect:(CDStruct_02837cd9)arg1;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (_Bool)setCircleWithMapRect:(CDStruct_02837cd9)arg1;
- (_Bool)setCircleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (CDStruct_c3b9c2ee *)points;
@property(nonatomic) double radius;
@property(nonatomic) struct CLLocationCoordinate2D coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

