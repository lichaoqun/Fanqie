//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMKBaseRoutePlanOption.h"

@class NSString;

@interface BMKTransitRoutePlanOption : BMKBaseRoutePlanOption
{
    NSString *_city;
    int _transitPolicy;
}

@property(nonatomic) int transitPolicy; // @synthesize transitPolicy=_transitPolicy;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

