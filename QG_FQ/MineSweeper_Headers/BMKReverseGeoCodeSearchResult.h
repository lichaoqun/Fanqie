//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMKAddressComponent, NSArray, NSString;

@interface BMKReverseGeoCodeSearchResult : NSObject
{
    NSString *_address;
    NSString *_businessCircle;
    BMKAddressComponent *_addressDetail;
    NSArray *_poiList;
    NSString *_sematicDescription;
    NSString *_cityCode;
    struct CLLocationCoordinate2D _location;
}

@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *sematicDescription; // @synthesize sematicDescription=_sematicDescription;
@property(copy, nonatomic) NSArray *poiList; // @synthesize poiList=_poiList;
@property(retain, nonatomic) BMKAddressComponent *addressDetail; // @synthesize addressDetail=_addressDetail;
@property(copy, nonatomic) NSString *businessCircle; // @synthesize businessCircle=_businessCircle;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
- (void).cxx_destruct;

@end

