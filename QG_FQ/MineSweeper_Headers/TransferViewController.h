//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDCommonViewController.h"

@class IFriendModel, LWLoginTextFieldView, QMUIButton, QMUIFillButton, QMUILabel, QMUIModalPresentationViewController, QMUITextField, RETableViewManager, UIImageView, UIView;

@interface TransferViewController : QDCommonViewController
{
    IFriendModel *_friendModel;
    UIView *_userView;
    RETableViewManager *_manager;
    UIImageView *_logoImageView;
    QMUIButton *_nameBtn;
    QMUILabel *_idLabel;
    LWLoginTextFieldView *_moenyTxtView;
    QMUILabel *_momeyLabel;
    QMUIFillButton *_transferBtn;
    QMUITextField *_pwdTextField;
    QMUIModalPresentationViewController *_payModalViewController;
    LWLoginTextFieldView *_vcodeTxtView;
}

@property(retain, nonatomic) LWLoginTextFieldView *vcodeTxtView; // @synthesize vcodeTxtView=_vcodeTxtView;
@property(retain, nonatomic) QMUIModalPresentationViewController *payModalViewController; // @synthesize payModalViewController=_payModalViewController;
@property(retain, nonatomic) QMUITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(retain, nonatomic) QMUIFillButton *transferBtn; // @synthesize transferBtn=_transferBtn;
@property(retain, nonatomic) QMUILabel *momeyLabel; // @synthesize momeyLabel=_momeyLabel;
@property(retain, nonatomic) LWLoginTextFieldView *moenyTxtView; // @synthesize moenyTxtView=_moenyTxtView;
@property(retain, nonatomic) QMUILabel *idLabel; // @synthesize idLabel=_idLabel;
@property(retain, nonatomic) QMUIButton *nameBtn; // @synthesize nameBtn=_nameBtn;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) RETableViewManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) UIView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) IFriendModel *friendModel; // @synthesize friendModel=_friendModel;
- (void).cxx_destruct;
- (void)sendTransfer;
- (void)payBtnClicked:(id)arg1;
- (void)cancelBtnClicked:(id)arg1;
- (void)handelPayPassword;
- (void)inputPayPwd:(id)arg1;
- (void)transferAlert;
- (void)transferBtnClicked:(id)arg1;
- (void)getVcode;
- (void)addViewConstraints;
- (void)addViews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldHideKeyboardWhenTouchInView:(id)arg1;
- (void)initSubviews;
- (id)title;

@end

