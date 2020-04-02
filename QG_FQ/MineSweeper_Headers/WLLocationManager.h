//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMKGeoCodeSearchDelegate-Protocol.h"
#import "BMKLocationAuthDelegate-Protocol.h"
#import "BMKLocationManagerDelegate-Protocol.h"

@class BMKGeoCodeSearch, BMKLocationManager, NSString;

@interface WLLocationManager : NSObject <BMKGeoCodeSearchDelegate, BMKLocationAuthDelegate, BMKLocationManagerDelegate>
{
    CDUnknownBlockType _geocodeSuccessBlock;
    CDUnknownBlockType _geocodeFailureBlock;
    CDUnknownBlockType _regeocodeSuccessBlock;
    CDUnknownBlockType _regeocodeFailureBlock;
    CDUnknownBlockType _locationSuccessBlock;
    CDUnknownBlockType _locationFaileBlock;
    BMKGeoCodeSearch *_searcher;
    BMKLocationManager *_locationManager;
}

+ (_Bool)isLocationEnabled;
+ (id)locationManager;
@property(retain, nonatomic) BMKLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) BMKGeoCodeSearch *searcher; // @synthesize searcher=_searcher;
@property(copy, nonatomic) CDUnknownBlockType locationFaileBlock; // @synthesize locationFaileBlock=_locationFaileBlock;
@property(copy, nonatomic) CDUnknownBlockType locationSuccessBlock; // @synthesize locationSuccessBlock=_locationSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType regeocodeFailureBlock; // @synthesize regeocodeFailureBlock=_regeocodeFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType regeocodeSuccessBlock; // @synthesize regeocodeSuccessBlock=_regeocodeSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType geocodeFailureBlock; // @synthesize geocodeFailureBlock=_geocodeFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType geocodeSuccessBlock; // @synthesize geocodeSuccessBlock=_geocodeSuccessBlock;
- (void).cxx_destruct;
- (void)onGetReverseGeoCodeResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (void)onGetGeoCodeResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (void)wl_regeocodeLocation:(id)arg1 andSuccess:(CDUnknownBlockType)arg2 andFailure:(CDUnknownBlockType)arg3;
- (void)wl_geocodeAddress:(id)arg1 andSuccess:(CDUnknownBlockType)arg2 andFailure:(CDUnknownBlockType)arg3;
- (void)wl_stopLocation;
- (void)wl_startUpdatingLocationWithShowAlert:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 faileBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
