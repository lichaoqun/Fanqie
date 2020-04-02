//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DSectionIndexItemView, DSectionIndexView, NSString, UIView;

@protocol DSectionIndexViewDataSource <NSObject>
- (long long)numberOfItemViewForSectionIndexView:(DSectionIndexView *)arg1;
- (DSectionIndexItemView *)sectionIndexView:(DSectionIndexView *)arg1 itemViewForSection:(long long)arg2;

@optional
- (NSString *)sectionIndexView:(DSectionIndexView *)arg1 titleForSection:(long long)arg2;
- (UIView *)sectionIndexView:(DSectionIndexView *)arg1 calloutViewForSection:(long long)arg2;
@end
