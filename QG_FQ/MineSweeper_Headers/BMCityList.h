//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMKCityInfo, NSArray;

@interface BMCityList : NSObject
{
    long long _resultType;
    long long _cityCount;
    _Bool _currentNull;
    BMKCityInfo *_currentCityInfo;
    NSArray *_cities;
}

@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) BMKCityInfo *currentCityInfo; // @synthesize currentCityInfo=_currentCityInfo;
@property(nonatomic) _Bool currentNull; // @synthesize currentNull=_currentNull;
@property(nonatomic) long long cityCount; // @synthesize cityCount=_cityCount;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
