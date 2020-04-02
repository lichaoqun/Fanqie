//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLCommonTableViewController.h"

@class NSArray, NSMutableArray, NSString, QMUISearchController;

@interface ChatHistoryMessageSearchViewController : SLCommonTableViewController
{
    int _size;
    NSString *_uid;
    long long _chatHistoryType;
    NSString *_targetId;
    NSArray *_keywords;
    NSMutableArray *_searchResultsKeywords;
    QMUISearchController *_mySearchController;
    NSMutableArray *_datasource;
    NSArray *_filterDatasource;
}

@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *filterDatasource; // @synthesize filterDatasource=_filterDatasource;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) QMUISearchController *mySearchController; // @synthesize mySearchController=_mySearchController;
@property(retain, nonatomic) NSMutableArray *searchResultsKeywords; // @synthesize searchResultsKeywords=_searchResultsKeywords;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(nonatomic) long long chatHistoryType; // @synthesize chatHistoryType=_chatHistoryType;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)beginPullUpRefreshingNew;
- (void)beginPullDownRefreshingNew;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 ChatHistoryType:(long long)arg2;
- (id)title;

@end
