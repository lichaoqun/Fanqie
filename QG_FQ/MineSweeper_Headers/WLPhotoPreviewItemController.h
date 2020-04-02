//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WLZoomImageViewDelegate-Protocol.h"

@class NSString, WLAsset, WLZoomImageView;
@protocol WLPhotoPreviewItemControllerDelegate;

@interface WLPhotoPreviewItemController : UIViewController <WLZoomImageViewDelegate>
{
    id <WLPhotoPreviewItemControllerDelegate> _delegate;
    long long _pageIndex;
    WLZoomImageView *_zoomImageView;
    WLAsset *_imageAsset;
}

+ (id)photoItemControllerForPageIndex:(long long)arg1 imageAsset:(id)arg2;
@property(retain, nonatomic) WLAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(retain, nonatomic) WLZoomImageView *zoomImageView; // @synthesize zoomImageView=_zoomImageView;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) __weak id <WLPhotoPreviewItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)singleTouchInZoomingImageView:(id)arg1 location:(struct CGPoint)arg2;
- (void)requestImageForZoomImageView;
- (void)viewDidLoad;
- (id)initWithPageIndex:(long long)arg1 imageAsset:(id)arg2;
- (_Bool)prefersHomeIndicatorAutoHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
