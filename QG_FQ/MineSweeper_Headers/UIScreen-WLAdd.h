//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScreen.h>

@interface UIScreen (WLAdd)
+ (double)wl_screenScale;
+ (struct CGSize)wl_DPISize;
+ (double)wl_orientationHeight;
+ (double)wl_orientationWidth;
+ (struct CGSize)wl_orientationSize;
+ (double)wl_height;
+ (double)wl_width;
+ (struct CGSize)wl_size;
@property(readonly, nonatomic) double wl_pixelsPerInch;
@property(readonly, nonatomic) struct CGSize wl_sizeInPixel;
- (struct CGRect)wl_boundsForOrientation:(long long)arg1;
- (struct CGRect)wl_currentBounds;
@end

