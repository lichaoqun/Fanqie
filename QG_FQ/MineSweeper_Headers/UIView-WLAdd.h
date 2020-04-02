//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIViewController;

@interface UIView (WLAdd)
+ (double)getHeightWithMaxWidth:(double)arg1 In4ScreWidth:(double)arg2 In4ScreeHeight:(double)arg3;
- (void)addMotionEffectWithMax:(double)arg1 Min:(double)arg2;
- (struct CGRect)wl_convertRect:(struct CGRect)arg1 fromViewOrWindow:(id)arg2;
- (struct CGRect)wl_convertRect:(struct CGRect)arg1 toViewOrWindow:(id)arg2;
- (struct CGPoint)wl_convertPoint:(struct CGPoint)arg1 fromViewOrWindow:(id)arg2;
- (struct CGPoint)wl_convertPoint:(struct CGPoint)arg1 toViewOrWindow:(id)arg2;
- (id)wl_snapshotPDF;
- (id)wl_snapshotImageAfterScreenUpdates:(_Bool)arg1;
- (id)wl_snapshotImage;
- (id)wl_screenshotWithRect:(struct CGRect)arg1;
- (id)wl_screenshot;
- (void)wl_removeAllSubviews;
- (void)wl_setLayerShadow:(id)arg1 offset:(struct CGSize)arg2 radius:(double)arg3;
- (void)wl_setBorderWidth:(double)arg1 color:(id)arg2;
- (void)wl_setRoundedCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)wl_setCornerRadius:(double)arg1;
- (id)wl_findFirstResponder;
- (void)wl_setDebug:(_Bool)arg1;
@property(readonly, nonatomic) UIViewController *wl_superViewController;
@property(readonly, nonatomic) UIViewController *wl_viewController;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) double centery;
@property(nonatomic) double centerx;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double left;
@end

