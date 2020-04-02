//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSArray, UIColor, WLEmptyView;

@interface UIView (QMUI_Border)
+ (void)load;
@property(nonatomic) __weak WLEmptyView *emptyView;
@property(readonly, nonatomic) CAShapeLayer *qmui_borderLayer;
- (void)setQmui_borderLayer:(id)arg1;
@property(copy, nonatomic) NSArray *qmui_dashPattern;
@property(nonatomic) double qmui_dashPhase;
@property(retain, nonatomic) UIColor *qmui_borderColor;
@property(nonatomic) double qmui_borderWidth;
@property(nonatomic) unsigned long long qmui_borderPosition;
- (void)setDefaultStyle;
- (void)qmui_layoutSublayersOfLayer:(id)arg1;
- (id)qmui_initWithCoder:(id)arg1;
- (id)qmui_initWithFrame:(struct CGRect)arg1;
@end

