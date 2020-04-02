//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, RCCSSolveView, UIButton, UILabel, UITextView;

@interface RCCSEvaluateView : UIView <UITextViewDelegate>
{
    int _source;
    int _solveStatus;
    CDUnknownBlockType _evaluateResult;
    UIView *_backgroundView;
    UIView *_starView;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UILabel *_satisfyLabel;
    RCCSSolveView *_solveView;
    UITextView *_suggestText;
    UIButton *_submitButton;
    UITextView *_placeHolderText;
}

@property(nonatomic) int solveStatus; // @synthesize solveStatus=_solveStatus;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) UITextView *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UITextView *suggestText; // @synthesize suggestText=_suggestText;
@property(retain, nonatomic) RCCSSolveView *solveView; // @synthesize solveView=_solveView;
@property(retain, nonatomic) UILabel *satisfyLabel; // @synthesize satisfyLabel=_satisfyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType evaluateResult; // @synthesize evaluateResult=_evaluateResult;
- (void).cxx_destruct;
- (void)dealloc;
- (void)submitSuggest;
- (void)keyboardDidHidden;
- (void)keyboardDidShow:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)showAtWindow:(_Bool)arg1;
- (void)hide;
- (void)cancellEva;
- (void)show;
- (void)setupSubviews:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showSolveView:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
