//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewCell.h"

@class NSArray, QMUILabel, UIColor, UIFont;

@interface MyRecommendTableViewCell : BaseTableViewCell
{
    NSArray *_gridTitles;
    UIColor *_titleColor;
    UIFont *_titleFont;
    QMUILabel *_titleLabel1;
    QMUILabel *_titleLabel2;
    QMUILabel *_titleLabel3;
    QMUILabel *_titleLabel4;
}

@property(retain, nonatomic) QMUILabel *titleLabel4; // @synthesize titleLabel4=_titleLabel4;
@property(retain, nonatomic) QMUILabel *titleLabel3; // @synthesize titleLabel3=_titleLabel3;
@property(retain, nonatomic) QMUILabel *titleLabel2; // @synthesize titleLabel2=_titleLabel2;
@property(retain, nonatomic) QMUILabel *titleLabel1; // @synthesize titleLabel1=_titleLabel1;
@property(copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSArray *gridTitles; // @synthesize gridTitles=_gridTitles;
- (void).cxx_destruct;
- (void)addSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

