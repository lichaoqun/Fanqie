//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, NSString, UIImage, UIView;

@protocol RCLocationPickerViewControllerDataSource <NSObject>

@optional
- (UIImage *)mapViewScreenShot;
- (void)beginFetchPoisOfCurrentLocation;
- (void)setOnPoiSearchResult:(void (^)(NSArray *, _Bool, _Bool, NSError *))arg1;
- (struct CLLocationCoordinate2D)mapViewCenter;
- (void)userSelectPlaceMark:(id)arg1;
- (void)setMapViewCoordinateRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
- (void)setMapViewCenter:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (struct CLLocationCoordinate2D)locationCoordinate2DOfPlaceMark:(id)arg1;
- (NSString *)titleOfPlaceMark:(id)arg1;
- (CALayer *)annotationLayer;
- (UIView *)mapView;
@end

