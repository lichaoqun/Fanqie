//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class JKCountDownButton, NSString, QMUILabel, UIButton, UIColor, UIImageView, UITextField;

@interface LWLoginTextFieldView : UIView <UITextFieldDelegate>
{
    _Bool _isChangeBorder;
    _Bool _isHaveDian;
    int _maxTextLength;
    UITextField *_textField;
    QMUILabel *_titleLabel;
    QMUILabel *_subTitleLabel;
    UIImageView *_vcodeImageView;
    JKCountDownButton *_rightButton;
    UIColor *_defaultBorderColor;
    double _defaultBorderWidth;
    UIColor *_selectBorderColor;
    UIColor *_placeholderColor;
    long long _textFieldType;
    UIButton *_leftButton;
    UIView *_leftView;
}

@property(nonatomic) _Bool isHaveDian; // @synthesize isHaveDian=_isHaveDian;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) long long textFieldType; // @synthesize textFieldType=_textFieldType;
@property(nonatomic) int maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(copy, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) UIColor *selectBorderColor; // @synthesize selectBorderColor=_selectBorderColor;
@property(nonatomic) double defaultBorderWidth; // @synthesize defaultBorderWidth=_defaultBorderWidth;
@property(copy, nonatomic) UIColor *defaultBorderColor; // @synthesize defaultBorderColor=_defaultBorderColor;
@property(retain, nonatomic) JKCountDownButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIImageView *vcodeImageView; // @synthesize vcodeImageView=_vcodeImageView;
@property(nonatomic) _Bool isChangeBorder; // @synthesize isChangeBorder=_isChangeBorder;
@property(retain, nonatomic) QMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) QMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setPlaceholder:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
@property(readonly, copy, nonatomic) NSString *phone;
- (void)passwordTextFieldPlaintext;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTextFieldType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

