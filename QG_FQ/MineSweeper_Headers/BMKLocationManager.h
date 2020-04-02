//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class BMKLOCURLSessionManager, BMKLocationReGeocode, CLLocation, CLLocationManager, NSString, NSTimer, SqliteManager;
@protocol BMKLocationManagerDelegate;

@interface BMKLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _pausesLocationUpdatesAutomatically;
    _Bool _allowsBackgroundLocationUpdates;
    _Bool _locatingWithReGeocode;
    _Bool _isOnceLocation;
    _Bool _isOnceLocationNeedNetWorkState;
    _Bool _isLocating;
    _Bool _isRequestingLocationSemantic;
    _Bool _isRequestingNetworkState;
    _Bool _isAuthDertemained;
    _Bool _allowIPLocation;
    int _locNum;
    int _lastNetState;
    id <BMKLocationManagerDelegate> _delegate;
    double _distanceFilter;
    double _desiredAccuracy;
    long long _activityType;
    unsigned long long _coordinateType;
    long long _locationTimeout;
    long long _reGeocodeTimeout;
    NSString *_cuid;
    NSString *_idfa;
    NSString *_sidfa;
    CLLocationManager *_locationManager;
    SqliteManager *_sqliteManager;
    double _lastNetStateTime;
    NSString *_lastMACInfo;
    CLLocation *_lastLocation;
    BMKLocationReGeocode *_lastRGC;
    NSTimer *_timer;
    NSString *_locationID;
    CDUnknownBlockType _block;
    BMKLOCURLSessionManager *_localManager;
}

+ (_Bool)BMKLocationDataAvailableForCoordinate:(struct CLLocationCoordinate2D)arg1 withCoorType:(unsigned long long)arg2;
+ (struct CLLocationCoordinate2D)BMKLocationCoordinateConvert:(struct CLLocationCoordinate2D)arg1 SrcType:(unsigned long long)arg2 DesType:(unsigned long long)arg3;
+ (_Bool)headingAvailable;
+ (id)errorCode:(long long)arg1 andExtraInfo:(id)arg2;
+ (id)errorCode:(long long)arg1;
@property(nonatomic) _Bool allowIPLocation; // @synthesize allowIPLocation=_allowIPLocation;
@property(retain, nonatomic) BMKLOCURLSessionManager *localManager; // @synthesize localManager=_localManager;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) BMKLocationReGeocode *lastRGC; // @synthesize lastRGC=_lastRGC;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) NSString *lastMACInfo; // @synthesize lastMACInfo=_lastMACInfo;
@property(nonatomic) int lastNetState; // @synthesize lastNetState=_lastNetState;
@property(nonatomic) double lastNetStateTime; // @synthesize lastNetStateTime=_lastNetStateTime;
@property(nonatomic) int locNum; // @synthesize locNum=_locNum;
@property(nonatomic) _Bool isAuthDertemained; // @synthesize isAuthDertemained=_isAuthDertemained;
@property(nonatomic) _Bool isRequestingNetworkState; // @synthesize isRequestingNetworkState=_isRequestingNetworkState;
@property(nonatomic) _Bool isRequestingLocationSemantic; // @synthesize isRequestingLocationSemantic=_isRequestingLocationSemantic;
@property(nonatomic) _Bool isLocating; // @synthesize isLocating=_isLocating;
@property(nonatomic) _Bool isOnceLocationNeedNetWorkState; // @synthesize isOnceLocationNeedNetWorkState=_isOnceLocationNeedNetWorkState;
@property(nonatomic) _Bool isOnceLocation; // @synthesize isOnceLocation=_isOnceLocation;
@property(retain, nonatomic) SqliteManager *sqliteManager; // @synthesize sqliteManager=_sqliteManager;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) NSString *sidfa; // @synthesize sidfa=_sidfa;
@property(copy, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(copy, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
@property(nonatomic) _Bool locatingWithReGeocode; // @synthesize locatingWithReGeocode=_locatingWithReGeocode;
@property(nonatomic) long long reGeocodeTimeout; // @synthesize reGeocodeTimeout=_reGeocodeTimeout;
@property(nonatomic) long long locationTimeout; // @synthesize locationTimeout=_locationTimeout;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates; // @synthesize allowsBackgroundLocationUpdates=_allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically; // @synthesize pausesLocationUpdatesAutomatically=_pausesLocationUpdatesAutomatically;
@property(nonatomic) unsigned long long coordinateType; // @synthesize coordinateType=_coordinateType;
@property(nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(nonatomic) double distanceFilter; // @synthesize distanceFilter=_distanceFilter;
@property(nonatomic) __weak id <BMKLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)sendSemanticRequestWithLocation:(id)arg1;
- (id)getLocationFromLocation:(id)arg1 withcoor:(unsigned long long)arg2;
- (void)returnLastSemanticOnMainThread;
- (void)returnSemanticError:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)sendNetworkStateRequestWithLocation:(id)arg1;
- (void)requestNetworkState;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (_Bool)isLocationServiceAvalable;
- (void)tryIpLocationIsOnceLoc:(_Bool)arg1;
- (id)urlEncode:(id)arg1;
- (_Bool)requestLocationWithReGeocode:(_Bool)arg1 withNetworkState:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)getLocationID;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

