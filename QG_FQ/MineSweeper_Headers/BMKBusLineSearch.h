//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMKSearchBase.h"

#import "SearcherDelegate-Protocol.h"

@class NSString, Searcher;
@protocol BMKBusLineSearchDelegate;

@interface BMKBusLineSearch : BMKSearchBase <SearcherDelegate>
{
    int searchType;
    Searcher *_searcher;
    id <BMKBusLineSearchDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)onGetBusLineDetail:(id)arg1;
- (void)onGetExceptionInfo:(long long)arg1;
- (_Bool)busLineSearch:(id)arg1;
@property(nonatomic) __weak id <BMKBusLineSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

