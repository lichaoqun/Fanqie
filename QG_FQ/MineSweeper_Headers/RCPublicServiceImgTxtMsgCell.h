//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageBaseCell.h"

@class RCloudImageView, UIImageView, UILabel, UIView;
@protocol RCPublicServiceMessageCellDelegate;

@interface RCPublicServiceImgTxtMsgCell : RCMessageBaseCell
{
    id <RCPublicServiceMessageCellDelegate> _publicServiceDelegate;
    UILabel *_titleLabel;
    RCloudImageView *_imageView;
    UILabel *_contentLabel;
    UILabel *_readallLabel;
    UIView *_container;
    UIView *_line;
    UIImageView *_arrow;
}

+ (struct CGRect)getReadAllFrame:(id)arg1 withWidth:(double)arg2;
+ (struct CGRect)getContentFrame:(id)arg1 withWidth:(double)arg2;
+ (struct CGRect)getImageFrameWithWidth:(double)arg1;
+ (id)getDateFormatter;
+ (struct CGRect)getDateFrame:(id)arg1 withWidth:(double)arg2;
+ (struct CGRect)getTitleFrame:(id)arg1 withWidth:(double)arg2;
+ (struct CGSize)sizeForMessageModel:(id)arg1 withCollectionViewWidth:(double)arg2 referenceExtraHeight:(double)arg3;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UILabel *readallLabel; // @synthesize readallLabel=_readallLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) RCloudImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <RCPublicServiceMessageCellDelegate> publicServiceDelegate; // @synthesize publicServiceDelegate=_publicServiceDelegate;
- (void).cxx_destruct;
- (void)onLongPressed:(id)arg1;
- (void)onTaped:(id)arg1;
- (void)setDataModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

