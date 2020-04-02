//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface BMKLocationViewDisplayParam : NSObject
{
    _Bool _isAccuracyCircleShow;
    _Bool _isRotateAngleValid;
    _Bool _canShowCallOut;
    double _locationViewOffsetX;
    double _locationViewOffsetY;
    NSString *_locationViewImgName;
    UIColor *_accuracyCircleFillColor;
    UIColor *_accuracyCircleStrokeColor;
    unsigned long long _locationViewHierarchy;
}

@property(nonatomic) unsigned long long locationViewHierarchy; // @synthesize locationViewHierarchy=_locationViewHierarchy;
@property(nonatomic) _Bool canShowCallOut; // @synthesize canShowCallOut=_canShowCallOut;
@property(retain, nonatomic) UIColor *accuracyCircleStrokeColor; // @synthesize accuracyCircleStrokeColor=_accuracyCircleStrokeColor;
@property(retain, nonatomic) UIColor *accuracyCircleFillColor; // @synthesize accuracyCircleFillColor=_accuracyCircleFillColor;
@property(retain, nonatomic) NSString *locationViewImgName; // @synthesize locationViewImgName=_locationViewImgName;
@property(nonatomic) _Bool isRotateAngleValid; // @synthesize isRotateAngleValid=_isRotateAngleValid;
@property(nonatomic) _Bool isAccuracyCircleShow; // @synthesize isAccuracyCircleShow=_isAccuracyCircleShow;
@property(nonatomic) double locationViewOffsetY; // @synthesize locationViewOffsetY=_locationViewOffsetY;
@property(nonatomic) double locationViewOffsetX; // @synthesize locationViewOffsetX=_locationViewOffsetX;
- (void).cxx_destruct;
- (id)init;

@end

