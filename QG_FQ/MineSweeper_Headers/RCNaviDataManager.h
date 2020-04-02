//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, RCNaviDataInfo;

@interface RCNaviDataManager : NSObject
{
    _Bool _isFetching;
    _Bool _connectionStrategy;
    NSArray *_totalCmpServerList;
    RCNaviDataInfo *_naviData;
    NSMutableArray *_observerArray;
    long long _currentConnectIndex;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool connectionStrategy; // @synthesize connectionStrategy=_connectionStrategy;
@property(nonatomic) long long currentConnectIndex; // @synthesize currentConnectIndex=_currentConnectIndex;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) RCNaviDataInfo *naviData; // @synthesize naviData=_naviData;
@property(retain, nonatomic) NSArray *totalCmpServerList; // @synthesize totalCmpServerList=_totalCmpServerList;
@property _Bool isFetching; // @synthesize isFetching=_isFetching;
- (void).cxx_destruct;
- (void)setMainCMP:(id)arg1;
- (void)resetRetryServerInfoList;
- (id)getCurrentConnectServerInfo;
- (_Bool)isConnectAvailable;
- (_Bool)needRequestNavi:(id)arg1 token:(id)arg2;
- (long long)getNaviTimestamp;
- (id)getNaviToken;
- (id)getNaviKey;
- (void)updateCmpServerList:(id)arg1;
- (void)clearNaviData;
- (void)setNaviDataOverTime;
- (_Bool)saveNavi:(id)arg1 navi:(id)arg2 key:(id)arg3 token:(id)arg4;

@end

