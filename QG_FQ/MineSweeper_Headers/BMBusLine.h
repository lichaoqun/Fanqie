//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMKCityInfo, NSMutableArray;

@interface BMBusLine : NSObject
{
    BMKCityInfo *_cityInfo;
    int _total;
    int _count;
    NSMutableArray *_content;
}

@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) int total; // @synthesize total=_total;
@property(retain, nonatomic) NSMutableArray *content; // @synthesize content=_content;
@property(retain, nonatomic) BMKCityInfo *cityInfo; // @synthesize cityInfo=_cityInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
