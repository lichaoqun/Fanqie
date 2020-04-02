//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIButton, UIColor, UIFont;
@protocol CMPopTipViewDelegate;

@interface CMPopTipView : UIView
{
    struct CGSize _bubbleSize;
    double _cornerRadius;
    _Bool _highlight;
    long long _pointDirection;
    double _pointerSize;
    struct CGPoint _targetPoint;
    double _bubblePaddingX;
    double _bubblePaddingY;
    _Bool _disableTapToDismiss;
    _Bool _dismissTapAnywhere;
    _Bool _has3DStyle;
    _Bool _hasShadow;
    _Bool _hasGradientBackground;
    _Bool _showFromCenter;
    _Bool _dismissAlongWithUserInteraction;
    _Bool _shouldEnforceCustomViewPadding;
    _Bool _shouldMaskCustomView;
    UIColor *_backgroundColor;
    id <CMPopTipViewDelegate> _delegate;
    NSString *_title;
    NSString *_message;
    UIView *_customView;
    id _targetObject;
    UIColor *_titleColor;
    UIFont *_titleFont;
    UIColor *_textColor;
    UIFont *_textFont;
    long long _titleAlignment;
    long long _textAlignment;
    UIColor *_borderColor;
    double _borderWidth;
    long long _animation;
    double _maxWidth;
    long long _preferredPointDirection;
    double _sidePadding;
    double _topMargin;
    NSTimer *_autoDismissTimer;
    UIButton *_dismissTarget;
}

@property(retain, nonatomic) UIButton *dismissTarget; // @synthesize dismissTarget=_dismissTarget;
@property(retain, nonatomic) NSTimer *autoDismissTimer; // @synthesize autoDismissTimer=_autoDismissTimer;
@property(nonatomic) _Bool shouldMaskCustomView; // @synthesize shouldMaskCustomView=_shouldMaskCustomView;
@property(nonatomic) _Bool shouldEnforceCustomViewPadding; // @synthesize shouldEnforceCustomViewPadding=_shouldEnforceCustomViewPadding;
@property(nonatomic) _Bool dismissAlongWithUserInteraction; // @synthesize dismissAlongWithUserInteraction=_dismissAlongWithUserInteraction;
@property(nonatomic) double bubblePaddingY; // @synthesize bubblePaddingY=_bubblePaddingY;
@property(nonatomic) double bubblePaddingX; // @synthesize bubblePaddingX=_bubblePaddingX;
@property(nonatomic) double pointerSize; // @synthesize pointerSize=_pointerSize;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double sidePadding; // @synthesize sidePadding=_sidePadding;
@property(nonatomic) _Bool showFromCenter; // @synthesize showFromCenter=_showFromCenter;
@property(nonatomic) _Bool hasGradientBackground; // @synthesize hasGradientBackground=_hasGradientBackground;
@property(nonatomic) long long preferredPointDirection; // @synthesize preferredPointDirection=_preferredPointDirection;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) long long animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool has3DStyle; // @synthesize has3DStyle=_has3DStyle;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) id targetObject; // @synthesize targetObject=_targetObject;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool dismissTapAnywhere; // @synthesize dismissTapAnywhere=_dismissTapAnywhere;
@property(nonatomic) _Bool disableTapToDismiss; // @synthesize disableTapToDismiss=_disableTapToDismiss;
@property(nonatomic) __weak id <CMPopTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)initWithCustomView:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (_Bool)isBeingShown;
- (long long)getPointDirection;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)popAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)dismissByUser;
- (void)dismissTapAnywhereFired:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)notifyDelegatePopTipViewWasDismissedByUser;
- (void)autoDismissAnimated:(_Bool)arg1 atTimeInterval:(double)arg2;
- (void)autoDismissAnimatedDidFire:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)finaliseDismiss;
- (void)presentPointingAtBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)presentPointingAtView:(id)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)contentFrame;
- (struct CGRect)bubbleFrame;

@end

