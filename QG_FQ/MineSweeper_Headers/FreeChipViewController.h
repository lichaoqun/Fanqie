//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDCommonViewController.h"

@class LWLoginTextFieldView, QMUIFillButton;

@interface FreeChipViewController : QDCommonViewController
{
    LWLoginTextFieldView *_phoneTxtView;
    LWLoginTextFieldView *_vcodeTxtView;
    LWLoginTextFieldView *_pwdTxtView;
    QMUIFillButton *_loginBtn;
}

@property(retain, nonatomic) QMUIFillButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) LWLoginTextFieldView *pwdTxtView; // @synthesize pwdTxtView=_pwdTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *vcodeTxtView; // @synthesize vcodeTxtView=_vcodeTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *phoneTxtView; // @synthesize phoneTxtView=_phoneTxtView;
- (void).cxx_destruct;
- (void)setFreeChip:(_Bool)arg1;
- (void)didClickLoginBtn:(id)arg1;
- (void)getVcode;
- (void)addConstrainsForSubviews;
- (_Bool)shouldHideKeyboardWhenTouchInView:(id)arg1;
- (void)addSubviews;
- (void)initSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)title;

@end

