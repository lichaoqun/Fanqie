//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, RCState;
@protocol OS_dispatch_queue;

@interface RCStateMachine : NSObject
{
    id _object;
    RCState *_currentState;
    NSMutableDictionary *_states;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_name;
    NSMutableArray *_deferedEvents;
}

@property(retain, nonatomic) NSMutableArray *deferedEvents; // @synthesize deferedEvents=_deferedEvents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *states; // @synthesize states=_states;
@property(retain, nonatomic) RCState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (_Bool)popSubstate:(long long)arg1;
- (_Bool)popSubstate;
- (_Bool)pushToSubstate:(id)arg1;
- (void)switchTo:(id)arg1;
- (void)setInitialState:(id)arg1;
- (void)start;
- (void)onEvent:(long long)arg1 object:(id)arg2 extra:(id)arg3;
- (void)deferEvent:(long long)arg1 object:(id)arg2 extra:(id)arg3;
- (_Bool)registerState:(id)arg1;
- (id)initWithObject:(id)arg1 name:(id)arg2;

@end
