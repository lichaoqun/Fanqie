//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface BMKSearchPOINearbyModel : NSObject
{
    long long _total;
    NSArray *_results;
    long long _status;
}

+ (id)objectClassInArray;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) long long total; // @synthesize total=_total;
- (void).cxx_destruct;

@end

