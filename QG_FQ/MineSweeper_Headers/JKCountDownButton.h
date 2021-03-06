//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDate, NSTimer;

@interface JKCountDownButton : UIButton
{
    int _second;
    int _totalSecond;
    NSTimer *_timer;
    NSDate *_startDate;
    CDUnknownBlockType _didChangeBlock;
    CDUnknownBlockType _didFinishedBlock;
    CDUnknownBlockType _touchedDownBlock;
}

- (void).cxx_destruct;
- (void)didFinished:(CDUnknownBlockType)arg1;
- (void)didChange:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)timerStart:(id)arg1;
- (void)startWithSecond:(int)arg1;
- (void)touched:(id)arg1;
- (void)addToucheHandler:(CDUnknownBlockType)arg1;

@end

