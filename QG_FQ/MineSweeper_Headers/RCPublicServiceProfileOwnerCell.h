//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;
@protocol RCPublicServiceProfileViewUrlDelegate;

@interface RCPublicServiceProfileOwnerCell : UITableViewCell
{
    UILabel *_title;
    UILabel *_content;
    NSString *_urlString;
    id <RCPublicServiceProfileViewUrlDelegate> _delegate;
}

@property(nonatomic) __weak id <RCPublicServiceProfileViewUrlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateFrame;
- (void)onTaped:(id)arg1;
- (void)setTitle:(id)arg1 Content:(id)arg2 url:(id)arg3 delegate:(id)arg4;
- (void)setup;
- (id)init;

@end

