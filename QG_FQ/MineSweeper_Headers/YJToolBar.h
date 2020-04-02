//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor, UIFont, UILabel;

@interface YJToolBar : UIView
{
    NSString *_title;
    UIFont *_font;
    UIColor *_titleColor;
    UIButton *_cancleButton;
    UILabel *_titleLabel;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancleButton; // @synthesize cancleButton=_cancleButton;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setupUI;
- (id)init;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 confirmButtonTitle:(id)arg3 addTarget:(id)arg4 cancelAction:(SEL)arg5 confirmAction:(SEL)arg6;

@end

