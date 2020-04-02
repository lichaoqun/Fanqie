//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BMKActionPaopaoView, BMKAnnotationViewInternal, NSString, UIImage;
@protocol BMKAnnotation;

@interface BMKAnnotationView : UIView
{
    BMKAnnotationViewInternal *_internal;
    _Bool _enabled3D;
    struct CGPoint _originPt;
    struct CGPoint startPoint;
    unsigned long long _oldDragState;
}

@property(nonatomic) unsigned long long oldDragState; // @synthesize oldDragState=_oldDragState;
- (void).cxx_destruct;
- (void)handleSingleTap;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleSingleDrag:(id)arg1;
- (void)handleLongpressGesture:(id)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long dragState;
@property(nonatomic, getter=isDraggable) _Bool draggable;
@property(nonatomic) _Bool enabled3D;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView;
@property(nonatomic) _Bool canShowCallout;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) struct CGPoint calloutOffset;
@property(nonatomic) struct CGPoint centerOffset;
@property(retain, nonatomic) UIImage *image;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) id <BMKAnnotation> annotation;
- (void)setReuseIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *reuseIdentifier;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) BMKActionPaopaoView *paopaoView;
- (void)update3DView:(float)arg1 overlook:(float)arg2;
@property(readonly, nonatomic) BMKAnnotationViewInternal *internal;

@end
