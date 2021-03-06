//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLCommonGroupListViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class ChannelView, IPayChannelModel, IPayTypeModel, IRechargeInfoModel, LWLoginTextFieldView, NSString, QMUIFillButton, QMUIFloatLayoutView, QMUILabel, QMUILinkButton, RETableViewItem, RETableViewManager, UIView, UIWebView;

@interface RechargeViewController : SLCommonGroupListViewController <UITextFieldDelegate>
{
    float _payMoney;
    RETableViewManager *_manager;
    LWLoginTextFieldView *_moenyTxtView;
    QMUILabel *_momeyLabel;
    UIView *_moenyTypeView;
    QMUILabel *_payLabel;
    QMUILabel *_payMomeyLabel;
    QMUILabel *_payMomeyUnitLabel;
    QMUIFillButton *_payBtn;
    QMUIFloatLayoutView *_moneyLayoutView;
    IRechargeInfoModel *_rechargeInfoModel;
    QMUIFillButton *_selectMoneyBtn;
    RETableViewItem *_balancePayItem;
    RETableViewItem *_aliPayItem;
    long long _selectPayType;
    long long _selectPayChannel;
    IPayTypeModel *_alipayTypeModel;
    IPayTypeModel *_yinlianPayTypeModel;
    UIWebView *_webView;
    LWLoginTextFieldView *_aliPayTxtView;
    LWLoginTextFieldView *_yinlianTxtView;
    QMUILabel *_offlineTitleLabel;
    QMUILabel *_onlineTitleLabel;
    ChannelView *_channelView;
    IPayChannelModel *_currentPayChannel;
    QMUILinkButton *_playVideoBtn;
}

@property(retain, nonatomic) QMUILinkButton *playVideoBtn; // @synthesize playVideoBtn=_playVideoBtn;
@property(retain, nonatomic) IPayChannelModel *currentPayChannel; // @synthesize currentPayChannel=_currentPayChannel;
@property(retain, nonatomic) ChannelView *channelView; // @synthesize channelView=_channelView;
@property(retain, nonatomic) QMUILabel *onlineTitleLabel; // @synthesize onlineTitleLabel=_onlineTitleLabel;
@property(retain, nonatomic) QMUILabel *offlineTitleLabel; // @synthesize offlineTitleLabel=_offlineTitleLabel;
@property(retain, nonatomic) LWLoginTextFieldView *yinlianTxtView; // @synthesize yinlianTxtView=_yinlianTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *aliPayTxtView; // @synthesize aliPayTxtView=_aliPayTxtView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) IPayTypeModel *yinlianPayTypeModel; // @synthesize yinlianPayTypeModel=_yinlianPayTypeModel;
@property(retain, nonatomic) IPayTypeModel *alipayTypeModel; // @synthesize alipayTypeModel=_alipayTypeModel;
@property(nonatomic) long long selectPayChannel; // @synthesize selectPayChannel=_selectPayChannel;
@property(nonatomic) long long selectPayType; // @synthesize selectPayType=_selectPayType;
@property(retain, nonatomic) RETableViewItem *aliPayItem; // @synthesize aliPayItem=_aliPayItem;
@property(retain, nonatomic) RETableViewItem *balancePayItem; // @synthesize balancePayItem=_balancePayItem;
@property(nonatomic) float payMoney; // @synthesize payMoney=_payMoney;
@property(retain, nonatomic) QMUIFillButton *selectMoneyBtn; // @synthesize selectMoneyBtn=_selectMoneyBtn;
@property(retain, nonatomic) IRechargeInfoModel *rechargeInfoModel; // @synthesize rechargeInfoModel=_rechargeInfoModel;
@property(retain, nonatomic) QMUIFloatLayoutView *moneyLayoutView; // @synthesize moneyLayoutView=_moneyLayoutView;
@property(retain, nonatomic) QMUIFillButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) QMUILabel *payMomeyUnitLabel; // @synthesize payMomeyUnitLabel=_payMomeyUnitLabel;
@property(retain, nonatomic) QMUILabel *payMomeyLabel; // @synthesize payMomeyLabel=_payMomeyLabel;
@property(retain, nonatomic) QMUILabel *payLabel; // @synthesize payLabel=_payLabel;
@property(retain, nonatomic) UIView *moenyTypeView; // @synthesize moenyTypeView=_moenyTypeView;
@property(retain, nonatomic) QMUILabel *momeyLabel; // @synthesize momeyLabel=_momeyLabel;
@property(retain, nonatomic) LWLoginTextFieldView *moenyTxtView; // @synthesize moenyTxtView=_moenyTxtView;
@property(retain, nonatomic) RETableViewManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)confirmPayBtnClicked:(id)arg1;
- (void)momeyBtnSelected:(id)arg1;
- (void)playVideoAction;
- (void)payBtnClicked:(id)arg1;
- (void)loadWithUrlStr:(id)arg1;
- (void)showSuccess:(long long)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)addViewConstraints;
- (void)addViews;
- (void)selectOfflineType:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldHideKeyboardWhenTouchInView:(id)arg1;
- (void)reSetPayMoneyView;
- (void)loadUi;
- (void)initData;
- (void)initSubviews;
- (id)title;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

