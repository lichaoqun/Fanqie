//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSMutableArray, NSString;
@protocol JPUSHGeofenceDelegate;

@interface JPUSHGeofenceManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _pausesLocationUpdatesAutomatically;
    _Bool _allowsBackgroundLocationUpdates;
    _Bool _isSetup;
    id <JPUSHGeofenceDelegate> _delegate;
    long long _monitorCount;
    CLLocationManager *_locationManager;
    NSMutableArray *_regionArray;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedGeoFence;
@property(nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
@property(retain, nonatomic) NSMutableArray *regionArray; // @synthesize regionArray=_regionArray;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) long long monitorCount; // @synthesize monitorCount=_monitorCount;
@property(nonatomic) __weak id <JPUSHGeofenceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates; // @synthesize allowsBackgroundLocationUpdates=_allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically; // @synthesize pausesLocationUpdatesAutomatically=_pausesLocationUpdatesAutomatically;
- (void).cxx_destruct;
- (void)localNotification:(id)arg1;
- (id)geofenceLocationError:(id)arg1;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (id)geofenceDictFrom:(id)arg1;
- (id)getGeofenceCacheFromLocalPath;
- (void)saveOrUpdateGeofencMessage;
- (id)geofenceCachePath;
- (id)creatRegionWith:(id)arg1;
- (id)findJPushRegion:(id)arg1;
- (id)getAllRegions;
- (void)removeRegionWithIdentifer:(id)arg1;
- (void)removeRegion:(id)arg1;
- (void)startMonitor;
- (id)updateSameIdentifierRegion:(id)arg1;
- (_Bool)checkAndDeleteExpirationRegion:(id)arg1;
- (void)handlePushGeofenceMessage:(id)arg1;
- (void)handleCustomPushMessage:(id)arg1;
- (void)handleSilentPushGeofenceMessage:(id)arg1;
- (void)addRegion:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

