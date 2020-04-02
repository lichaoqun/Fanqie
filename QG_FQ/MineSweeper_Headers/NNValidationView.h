//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableString;

@interface NNValidationView : UIView
{
    NSArray *_charArray;
    NSMutableString *_charString;
    CDUnknownBlockType _changeValidationCodeBlock;
    long long _charCount;
    long long _lineCount;
}

@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(nonatomic) long long charCount; // @synthesize charCount=_charCount;
@property(copy, nonatomic) CDUnknownBlockType changeValidationCodeBlock; // @synthesize changeValidationCodeBlock=_changeValidationCodeBlock;
@property(retain, nonatomic) NSMutableString *charString; // @synthesize charString=_charString;
@property(copy, nonatomic) NSArray *charArray; // @synthesize charArray=_charArray;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)changeValidationCode;
- (void)tapGesture;
- (id)initWithFrame:(struct CGRect)arg1 andCharCount:(long long)arg2 andLineCount:(long long)arg3;

@end

