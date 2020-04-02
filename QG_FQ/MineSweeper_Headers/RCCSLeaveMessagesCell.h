//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, RCCSLeaveMessageItem, UILabel, UITextField, UITextView;

@interface RCCSLeaveMessagesCell : UITableViewCell <UITextFieldDelegate, UITextViewDelegate>
{
    int _max;
    UILabel *_titleLabel;
    UITextField *_infoTextField;
    UITextView *_infoTextView;
    CDUnknownBlockType _leaveMessageInfomation;
    UILabel *_textNum;
    NSString *_alertText;
    UITextView *_placeHolderText;
    RCCSLeaveMessageItem *_leaveMessageItem;
}

@property(retain, nonatomic) RCCSLeaveMessageItem *leaveMessageItem; // @synthesize leaveMessageItem=_leaveMessageItem;
@property(retain, nonatomic) UITextView *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
@property(copy, nonatomic) NSString *alertText; // @synthesize alertText=_alertText;
@property(nonatomic) int max; // @synthesize max=_max;
@property(retain, nonatomic) UILabel *textNum; // @synthesize textNum=_textNum;
@property(copy, nonatomic) CDUnknownBlockType leaveMessageInfomation; // @synthesize leaveMessageInfomation=_leaveMessageInfomation;
@property(retain, nonatomic) UITextView *infoTextView; // @synthesize infoTextView=_infoTextView;
@property(retain, nonatomic) UITextField *infoTextField; // @synthesize infoTextField=_infoTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setLayoutConstraint:(_Bool)arg1;
- (void)setDataWithModel:(id)arg1 indexPath:(id)arg2;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

