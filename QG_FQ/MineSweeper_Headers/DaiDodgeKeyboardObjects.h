//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIWindow;

@interface DaiDodgeKeyboardObjects : NSObject
{
    _Bool _isKeyboardShow;
    UIView *_observerView;
    UIWindow *_textEffectsWindow;
    UIView *_firstResponderView;
    double _shiftHeight;
    double _keyboardAnimationDutation;
    struct CGRect _originalViewFrame;
    struct CGRect _keyboardFrame;
}

@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(nonatomic) double keyboardAnimationDutation; // @synthesize keyboardAnimationDutation=_keyboardAnimationDutation;
@property(nonatomic) double shiftHeight; // @synthesize shiftHeight=_shiftHeight;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) struct CGRect originalViewFrame; // @synthesize originalViewFrame=_originalViewFrame;
@property(retain, nonatomic) UIView *firstResponderView; // @synthesize firstResponderView=_firstResponderView;
@property(retain, nonatomic) UIWindow *textEffectsWindow; // @synthesize textEffectsWindow=_textEffectsWindow;
@property(retain, nonatomic) UIView *observerView; // @synthesize observerView=_observerView;
- (void).cxx_destruct;

@end
