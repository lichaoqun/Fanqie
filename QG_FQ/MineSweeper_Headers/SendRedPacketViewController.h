//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDCommonViewController.h"

#import "QMUIModalPresentationViewControllerDelegate-Protocol.h"

@class LWLoginTextFieldView, NSString, QMUIFillButton, QMUIModalPresentationViewController, QMUITextField;

@interface SendRedPacketViewController : QDCommonViewController <QMUIModalPresentationViewControllerDelegate>
{
    NSString *_groupId;
    CDUnknownBlockType _sendRedPacketBlock;
    LWLoginTextFieldView *_moenyTxtView;
    LWLoginTextFieldView *_packetNountTxtView;
    LWLoginTextFieldView *_mineCountTxtView;
    QMUIFillButton *_sendBtn;
    QMUITextField *_pwdTextField;
    QMUIModalPresentationViewController *_payModalViewController;
}

@property(retain, nonatomic) QMUIModalPresentationViewController *payModalViewController; // @synthesize payModalViewController=_payModalViewController;
@property(retain, nonatomic) QMUITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(retain, nonatomic) QMUIFillButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) LWLoginTextFieldView *mineCountTxtView; // @synthesize mineCountTxtView=_mineCountTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *packetNountTxtView; // @synthesize packetNountTxtView=_packetNountTxtView;
@property(retain, nonatomic) LWLoginTextFieldView *moenyTxtView; // @synthesize moenyTxtView=_moenyTxtView;
@property(copy, nonatomic) CDUnknownBlockType sendRedPacketBlock; // @synthesize sendRedPacketBlock=_sendRedPacketBlock;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)sendImMessage:(id)arg1;
- (void)cancelBtnClicked:(id)arg1;
- (void)payBtnClicked:(id)arg1;
- (void)handelPayPassword;
- (void)inputPayPwd:(id)arg1;
- (void)setFreeChip:(id)arg1;
- (void)sendPacket;
- (void)sendBtnClicked:(id)arg1;
- (void)addViewConstraints;
- (void)addViews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldHideKeyboardWhenTouchInView:(id)arg1;
- (void)initSubviews;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
