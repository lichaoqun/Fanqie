//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMKFavPoiInfo : NSObject
{
    NSString *favId;
    NSString *poiName;
    NSString *poiUid;
    NSString *cityName;
    NSString *address;
    unsigned long long timeStamp;
    struct CLLocationCoordinate2D pt;
}

@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName;
@property(retain, nonatomic) NSString *poiUid; // @synthesize poiUid;
@property(nonatomic) struct CLLocationCoordinate2D pt; // @synthesize pt;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName;
@property(retain, nonatomic) NSString *favId; // @synthesize favId;
- (void).cxx_destruct;

@end
