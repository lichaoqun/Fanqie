//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMKAppTools : NSObject
{
}

+ (_Bool)Md5AndBase64Encode:(struct CVString *)arg1 withOutPut:(struct CVString *)arg2;
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (struct CLLocationCoordinate2D)Baidu09LLEncrypt:(double)arg1 Latitude:(double)arg2 CoorType:(int)arg3;
+ (struct BMKPoint)CoordinateEncrypt:(double)arg1 Latitude:(double)arg2 CoorType:(int)arg3;
+ (_Bool)TransGeoToPointsArray:(struct CVString *)arg1 pointsArray:(id)arg2;
+ (_Bool)TransGeoToPoints:(struct CVString *)arg1 points:(id)arg2;
+ (_Bool)TransPointToGeo:(struct BMKPoint)arg1 outputGeo:(struct CVString *)arg2;
+ (_Bool)TransGeoToPoint:(struct CVString *)arg1 point:(struct BMKPoint *)arg2;

@end
