//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, RCProgressHUD, UILabel;
@protocol RCAlbumListViewControllerDelegate;

@interface RCAlumListTableViewController : UITableViewController
{
    NSArray *_libraryList;
    id <RCAlbumListViewControllerDelegate> _delegate;
    UILabel *_tipsLabel;
    RCProgressHUD *_progressHUD;
}

@property(retain, nonatomic) RCProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak id <RCAlbumListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *libraryList; // @synthesize libraryList=_libraryList;
- (void).cxx_destruct;
- (void)setAuthorizationStatusAuthorized;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pushImagePickerController:(id)arg1 animated:(_Bool)arg2;
- (void)handlePhotos:(id)arg1 result:(id)arg2 full:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)dismissCurrentModelViewController;
- (void)viewDidLoad;
- (id)init;

@end

