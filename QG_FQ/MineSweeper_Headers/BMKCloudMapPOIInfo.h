//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMKCloudMapPOIInfo : NSObject
{
    NSString *_uid;
    NSString *_name;
    NSString *_address;
    NSString *_tags;
    double _distance;
    NSString *_direction;
    struct CLLocationCoordinate2D _pt;
}

@property(retain, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) struct CLLocationCoordinate2D pt; // @synthesize pt=_pt;
@property(retain, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

