//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMKGeoFenceRegion.h"

@interface BMKGeoFencePolygonRegion : BMKGeoFenceRegion
{
    struct CLLocationCoordinate2D *_coordinates;
    long long _count;
}

@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) struct CLLocationCoordinate2D *coordinates; // @synthesize coordinates=_coordinates;
- (long long)judgeStatusWithCoor:(struct CLLocationCoordinate2D)arg1;
- (id)initWithCustomID:(id)arg1 identityID:(id)arg2 coor:(struct CLLocationCoordinate2D *)arg3 count:(long long)arg4 coor:(unsigned long long)arg5;

@end
