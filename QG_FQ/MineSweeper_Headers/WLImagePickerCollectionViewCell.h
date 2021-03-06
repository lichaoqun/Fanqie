//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UIImage, UIImageView;

@interface WLImagePickerCollectionViewCell : UICollectionViewCell
{
    _Bool _editing;
    _Bool _checked;
    UIImage *_checkboxImage;
    UIImage *_checkboxCheckedImage;
    UIImageView *_contentImageView;
    UIButton *_checkboxButton;
    long long _downloadStatus;
    CDUnknownBlockType _chooseImageDidSelectBlock;
}

@property(copy, nonatomic) CDUnknownBlockType chooseImageDidSelectBlock; // @synthesize chooseImageDidSelectBlock=_chooseImageDidSelectBlock;
@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIImage *checkboxCheckedImage; // @synthesize checkboxCheckedImage=_checkboxCheckedImage;
@property(retain, nonatomic) UIImage *checkboxImage; // @synthesize checkboxImage=_checkboxImage;
- (void).cxx_destruct;
- (void)chooseButtonDidTap:(id)arg1;
- (void)layoutSubviews;
- (void)initImagePickerCollectionViewCellUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

