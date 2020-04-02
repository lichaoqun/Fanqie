//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, RCAssetModel, UIImageView, UIScrollView;

@interface RCPhotoPreviewCollectCell : UICollectionViewCell <UIScrollViewDelegate>
{
    int _imageRequestID;
    CDUnknownBlockType _singleTap;
    UIScrollView *_scrollView;
    UIImageView *_previewImageView;
    RCAssetModel *_model;
    NSString *_representedAssetIdentifier;
}

@property(copy, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(retain, nonatomic) RCAssetModel *model; // @synthesize model=_model;
@property(nonatomic) int imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType singleTap; // @synthesize singleTap=_singleTap;
- (void).cxx_destruct;
- (void)resetSubviews;
- (void)setImageCenter:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)resizeSubviews;
- (void)doubleTap:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)creatPreviewCollectionCell;
- (void)configPreviewCellWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

