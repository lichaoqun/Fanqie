//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RCMessageModel, RCRichContentMessage, RCloudImageView, UILabel, UIView;
@protocol RCPublicServiceMessageCellDelegate, RCPublicServiceMultiImgTxtCellHeaderCellDelegate;

@interface RCPublicServiceMultiImgTxtCellHeaderCell : UITableViewCell
{
    id <RCPublicServiceMessageCellDelegate> _publicServiceDelegate;
    id <RCPublicServiceMultiImgTxtCellHeaderCellDelegate> _delegate;
    RCMessageModel *_model;
    RCRichContentMessage *_richContent;
    RCloudImageView *_headerImageView;
    UIView *_headerGradientView;
    UILabel *_headerLabel;
}

+ (double)getHeaderCellHeightWithWidth:(double)arg1;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *headerGradientView; // @synthesize headerGradientView=_headerGradientView;
@property(retain, nonatomic) RCloudImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) RCRichContentMessage *richContent; // @synthesize richContent=_richContent;
@property(retain, nonatomic) RCMessageModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <RCPublicServiceMultiImgTxtCellHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <RCPublicServiceMessageCellDelegate> publicServiceDelegate; // @synthesize publicServiceDelegate=_publicServiceDelegate;
- (void).cxx_destruct;
- (void)onLongPressed:(id)arg1;
- (void)onTaped:(id)arg1;
- (id)getGradientLayerWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end

