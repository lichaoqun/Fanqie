//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMKOLUpdateElement : NSObject
{
    NSString *_cityName;
    int _cityID;
    long long _size;
    long long _serversize;
    _Bool _update;
    int _ratio;
    int _status;
    struct CLLocationCoordinate2D _pt;
}

@property(nonatomic) long long serversize; // @synthesize serversize=_serversize;
@property(nonatomic) struct CLLocationCoordinate2D pt; // @synthesize pt=_pt;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int ratio; // @synthesize ratio=_ratio;
@property(nonatomic) _Bool update; // @synthesize update=_update;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
