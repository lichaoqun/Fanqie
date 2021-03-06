//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDCommonViewController.h"

@class LWLoginTextFieldView, UIButton, UIImageView;

@interface SmsLoginViewController : QDCommonViewController
{
    long long _useType;
    LWLoginTextFieldView *_phoneTxtView;
    LWLoginTextFieldView *_imageVcodeTxtView;
    LWLoginTextFieldView *_vcodeTxtView;
    LWLoginTextFieldView *_pwdTxtView;
    UIButton *_loginBtn;
    UIButton *_pwdLoginBtn;
    UIImageView *_logoImageView;
}

@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIButton *pwdLoginBtn; // @synthesize pwdLoginBtn=_pwdLoginBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) LWLoginTextFieldView *pwdTxtView; // @synthesize pwdTxtView=_pwdTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *vcodeTxtView; // @synthesize vcodeTxtView=_vcodeTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *imageVcodeTxtView; // @synthesize imageVcodeTxtView=_imageVcodeTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *phoneTxtView; // @synthesize phoneTxtView=_phoneTxtView;
@property(nonatomic) long long useType; // @synthesize useType=_useType;
- (void).cxx_destruct;
- (void)rightBarButtonItemClicked;
- (void)didPwdLoginBtn:(id)arg1;
- (void)userRegist;
- (void)smsLogin;
- (void)resetPassword;
- (void)didClickLoginBtn:(id)arg1;
- (void)getVcode;
- (void)loadVcodeImage:(id)arg1;
- (void)reloadVcodeImage:(id)arg1;
- (void)addConstrainsForSubviews;
- (_Bool)shouldHideKeyboardWhenTouchInView:(id)arg1;
- (void)addSubviews;
- (void)initSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUseType:(long long)arg1;
- (id)title;

@end

