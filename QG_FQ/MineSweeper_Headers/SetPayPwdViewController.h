//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDCommonViewController.h"

@class LWLoginTextFieldView, QMUIFillButton;

@interface SetPayPwdViewController : QDCommonViewController
{
    LWLoginTextFieldView *_pwdTxtView;
    QMUIFillButton *_confirmBtn;
}

@property(retain, nonatomic) QMUIFillButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) LWLoginTextFieldView *pwdTxtView; // @synthesize pwdTxtView=_pwdTxtView;
- (void).cxx_destruct;
- (void)loadData;
- (void)confirmBtnClicked:(id)arg1;
- (void)addViews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldHideKeyboardWhenTouchInView:(id)arg1;
- (void)initSubviews;
- (id)title;

@end

