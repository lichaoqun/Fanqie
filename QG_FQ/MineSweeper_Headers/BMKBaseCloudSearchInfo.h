//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMKBaseCloudSearchInfo : NSObject
{
    NSString *_ak;
    NSString *_sn;
    int _geoTableId;
}

@property(nonatomic) int geoTableId; // @synthesize geoTableId=_geoTableId;
@property(retain, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(retain, nonatomic) NSString *ak; // @synthesize ak=_ak;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)getUrlString;

@end

