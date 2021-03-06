//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CloudSearcherDelegate-Protocol.h"

@class NSString;
@protocol BMKCloudSearchDelegate;

@interface BMKCloudSearch : NSObject <CloudSearcherDelegate>
{
    int searchType;
    id <BMKCloudSearchDelegate> _delegate;
}

+ (long long)getPageNum:(long long)arg1 withCount:(long long)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D)convertLocationDicToCoor:(id)arg1;
- (_Bool)parseCloudRGCResult:(id)arg1 rgcResult:(id)arg2;
- (void)onCloudSearchRGCResult:(id)arg1;
- (void)onCloudSearchDetailResult:(id)arg1;
- (void)onCloudSearchResult:(id)arg1;
- (void)onGetExceptionInfo:(long long)arg1;
- (_Bool)cloudReverseGeoCodeSearch:(id)arg1;
- (_Bool)detailSearchWithSearchInfo:(id)arg1;
- (_Bool)boundSearchWithSearchInfo:(id)arg1;
- (_Bool)nearbySearchWithSearchInfo:(id)arg1;
- (_Bool)localSearchWithSearchInfo:(id)arg1;
@property(nonatomic) __weak id <BMKCloudSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

