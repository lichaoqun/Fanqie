//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BMKBaseView;

@interface BMKOverlayViewInternal : NSObject
{
    int _zoomLevel;
    id <BMKBaseView> _mapView;
}

@property(nonatomic) __weak id <BMKBaseView> mapView; // @synthesize mapView=_mapView;
@property(nonatomic) int zoomLevel; // @synthesize zoomLevel=_zoomLevel;
- (void).cxx_destruct;
- (id)init;

@end

