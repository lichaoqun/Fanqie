//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface RCPublicServiceListViewController : UITableViewController
{
    _Bool _hideSectionHeader;
    NSMutableDictionary *_allFriends;
    NSArray *_allKeys;
    NSMutableArray *_tempOtherArr;
    NSMutableArray *_friends;
    NSArray *_keys;
}

@property(nonatomic) _Bool hideSectionHeader; // @synthesize hideSectionHeader=_hideSectionHeader;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) NSMutableArray *tempOtherArr; // @synthesize tempOtherArr=_tempOtherArr;
@property(retain, nonatomic) NSArray *allKeys; // @synthesize allKeys=_allKeys;
@property(retain, nonatomic) NSMutableDictionary *allFriends; // @synthesize allFriends=_allFriends;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (id)sortedArrayWithPinYinDic:(id)arg1;
- (void)getAllData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

