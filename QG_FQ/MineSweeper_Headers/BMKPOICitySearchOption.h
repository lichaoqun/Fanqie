//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMKPOISearchFilter, NSArray, NSString;

@interface BMKPOICitySearchOption : NSObject
{
    _Bool _isCityLimit;
    NSString *_keyword;
    NSArray *_tags;
    NSString *_city;
    unsigned long long _scope;
    BMKPOISearchFilter *_filter;
    long long _pageIndex;
    long long _pageSize;
}

@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) BMKPOISearchFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(nonatomic) _Bool isCityLimit; // @synthesize isCityLimit=_isCityLimit;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)init;

@end

