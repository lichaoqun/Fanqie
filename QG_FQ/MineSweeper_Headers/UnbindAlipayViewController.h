//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDCommonViewController.h"

@class LWLoginTextFieldView, NSString, QMUIFillButton;

@interface UnbindAlipayViewController : QDCommonViewController
{
    NSString *_accountId;
    LWLoginTextFieldView *_phoneTxtView;
    LWLoginTextFieldView *_vcodeTxtView;
    QMUIFillButton *_loginBtn;
}

@property(retain, nonatomic) QMUIFillButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) LWLoginTextFieldView *vcodeTxtView; // @synthesize vcodeTxtView=_vcodeTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *phoneTxtView; // @synthesize phoneTxtView=_phoneTxtView;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
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

