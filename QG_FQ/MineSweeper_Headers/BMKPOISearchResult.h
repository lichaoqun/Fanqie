//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface BMKPOISearchResult : NSObject
{
    long long _totalPOINum;
    long long _totalPageNum;
    long long _curPOINum;
    long long _curPageIndex;
    NSArray *_poiInfoList;
}

@property(copy, nonatomic) NSArray *poiInfoList; // @synthesize poiInfoList=_poiInfoList;
@property(nonatomic) long long curPageIndex; // @synthesize curPageIndex=_curPageIndex;
@property(nonatomic) long long curPOINum; // @synthesize curPOINum=_curPOINum;
@property(nonatomic) long long totalPageNum; // @synthesize totalPageNum=_totalPageNum;
@property(nonatomic) long long totalPOINum; // @synthesize totalPOINum=_totalPOINum;
- (void).cxx_destruct;

@end

