//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (WLAdd)
- (void)wl_removePreviousFadeAnimation;
- (void)wl_addFadeAnimationWithDuration:(double)arg1 curve:(long long)arg2;
- (void)wl_removeSublayerWithType:(Class)arg1;
- (void)wl_removeAllSublayers;
- (void)wl_setLayerShadow:(id)arg1 offset:(struct CGSize)arg2 radius:(double)arg3;
- (id)wl_snapshotPDF;
- (id)wl_snapshotImage;
@property(nonatomic, getter=frameSize, setter=setFrameSize:) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) struct CGPoint center;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double left;
@end

