//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMKBaseVehicleInfo.h"

@class NSString;

@interface BMKCoachVehicleInfo : BMKBaseVehicleInfo
{
    double _price;
    NSString *_bookingUrl;
    NSString *_providerName;
    NSString *_providerUrl;
}

@property(retain, nonatomic) NSString *providerUrl; // @synthesize providerUrl=_providerUrl;
@property(retain, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(retain, nonatomic) NSString *bookingUrl; // @synthesize bookingUrl=_bookingUrl;
@property(nonatomic) double price; // @synthesize price=_price;
- (void).cxx_destruct;

@end
