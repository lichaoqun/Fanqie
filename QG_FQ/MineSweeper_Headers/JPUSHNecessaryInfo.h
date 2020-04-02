//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JPUSHNecessaryInfo : NSObject
{
    _Bool _locationReportDisable;
    NSString *_uid;
    NSString *_password;
    NSString *_registrationId;
    NSString *_applicationId;
    NSString *_uploadDeviceToken;
    NSString *_deviceId;
    NSString *_advertisingIdentifier;
    NSNumber *_locationReportFrequency;
    NSNumber *_locationCollectFrequency;
}

+ (id)sharedJPUSHNecessaryInfo;
@property(retain, nonatomic) NSNumber *locationCollectFrequency; // @synthesize locationCollectFrequency=_locationCollectFrequency;
@property(retain, nonatomic) NSNumber *locationReportFrequency; // @synthesize locationReportFrequency=_locationReportFrequency;
@property(nonatomic) _Bool locationReportDisable; // @synthesize locationReportDisable=_locationReportDisable;
@property(copy, nonatomic) NSString *advertisingIdentifier; // @synthesize advertisingIdentifier=_advertisingIdentifier;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *uploadDeviceToken; // @synthesize uploadDeviceToken=_uploadDeviceToken;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(copy, nonatomic) NSString *registrationId; // @synthesize registrationId=_registrationId;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filePath;
- (void)clearAll;
- (_Bool)synchronize;
- (void)readFromData:(id)arg1;
- (id)init;

@end

