//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (WLAdd)
+ (id)wl_horiCombineImages:(id)arg1 distance:(double)arg2;
+ (id)imageWithText:(id)arg1;
+ (id)imageNamedForAdaptation:(id)arg1;
+ (id)wl_imageWithSize:(struct CGSize)arg1 drawBlock:(CDUnknownBlockType)arg2;
+ (id)wl_imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)wl_imageWithColor:(id)arg1;
+ (id)wl_imageWithEmoji:(id)arg1 size:(double)arg2;
+ (id)wl_imageWithPDF:(id)arg1 size:(struct CGSize)arg2;
+ (id)wl_imageWithPDF:(id)arg1;
+ (_Bool)wl_isAnimatedGIFFile:(id)arg1;
+ (_Bool)wl_isAnimatedGIFData:(id)arg1;
+ (id)wl_imageWithSmallGIFData:(id)arg1 scale:(double)arg2;
+ (id)wl_imageNameAlwaysOriginal:(id)arg1;
+ (id)wl_blurredSnapshot:(id)arg1;
+ (id)wl_resizedImage:(id)arg1 leftScale:(double)arg2 topScale:(double)arg3;
+ (id)wl_resizedImage:(id)arg1;
+ (id)createQRForString:(id)arg1;
+ (id)createNonInterpolatedUIImageFormCIImage:(id)arg1 sizeSquareWidth:(double)arg2;
+ (id)wl_createQRImageFormString:(id)arg1 sizeSquareWidth:(double)arg2;
- (id)wl_drawRectWithRoundedCorner:(double)arg1;
- (id)decodeQRImage;
- (id)wl_imageByBlurRadius:(double)arg1 tintColor:(id)arg2 tintMode:(int)arg3 saturation:(double)arg4 maskImage:(id)arg5;
- (id)wl_imageByBlurWithTint:(id)arg1;
- (id)wl_imageByBlurDark;
- (id)wl_imageByBlurExtraLight;
- (id)wl_imageByBlurLight;
- (id)wl_imageByBlurSoft;
- (id)wl_imageByGrayscale;
- (id)wl_imageByTintColor:(id)arg1;
- (id)wl_imageByFlipHorizontal;
- (id)wl_imageByFlipVertical;
- (id)wl_imageByRotate180;
- (id)wl_imageByRotateRight90;
- (id)wl_imageByRotateLeft90;
- (id)wl_imageByRotate:(double)arg1 fitSize:(_Bool)arg2;
- (id)wl_imageByRoundCornerRadius:(double)arg1 corners:(unsigned long long)arg2 borderWidth:(double)arg3 borderColor:(id)arg4 borderLineJoin:(int)arg5;
- (id)wl_imageByRoundCornerRadius:(double)arg1 borderWidth:(double)arg2 borderColor:(id)arg3;
- (id)wl_imageByRoundCornerRadius:(double)arg1;
- (id)wl_imageByInsetEdge:(struct UIEdgeInsets)arg1 withColor:(id)arg2;
- (id)wl_imageByCropToRect:(struct CGRect)arg1;
- (id)wl_imageByResizeToSize:(struct CGSize)arg1 contentMode:(long long)arg2;
- (id)wl_imageByResizeToSize:(struct CGSize)arg1;
- (void)wl_drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2 clipsToBounds:(_Bool)arg3;
- (_Bool)wl_hasAlphaChannel;
- (id)wl_alwaysOriginal;
- (id)wl_scaleFromImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (id)wl_applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)wl_applyTintEffectWithColor:(id)arg1;
- (id)wl_applyDarkEffect;
- (id)wl_applyExtraLightEffect;
- (id)wl_applyLightEffect;
- (id)normalizedImage;
- (id)fixOrientation;
@end

