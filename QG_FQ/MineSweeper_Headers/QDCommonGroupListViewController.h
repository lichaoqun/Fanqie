//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDCommonTableViewController.h"

@class QMUIOrderedDictionary;

@interface QDCommonGroupListViewController : QDCommonTableViewController
{
    QMUIOrderedDictionary *_dataSource;
}

@property(retain, nonatomic) QMUIOrderedDictionary *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)keyNameAtIndexPath:(id)arg1;
- (id)orderedDictionaryInSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didInitializeWithStyle:(long long)arg1;
- (id)init;
- (void)didSelectCellWithTitle:(id)arg1;
- (void)initDataSource;

@end
