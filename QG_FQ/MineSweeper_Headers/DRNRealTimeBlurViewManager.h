//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DRNRealTimeBlurViewManager : NSObject
{
    NSMutableArray *_views;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
- (void).cxx_destruct;
- (void)refresh;
- (void)deregisterView:(id)arg1;
- (void)registerView:(id)arg1;
- (id)init;

@end

