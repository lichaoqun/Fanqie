//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMKOpenRoute : NSObject
{
}

+ (id)getStringFromPlanNode:(id)arg1 isStartNode:(_Bool)arg2;
+ (int)setRouteWebURLString:(id)arg1 option:(id)arg2 routeType:(int)arg3;
+ (int)setRouteSchemeString:(id)arg1 option:(id)arg2 routeType:(int)arg3;
+ (int)openBaiduMapDrivingRoute:(id)arg1;
+ (int)openBaiduMapTransitRoute:(id)arg1;
+ (int)openBaiduMapWalkingRoute:(id)arg1;
+ (void)initialize;

@end

