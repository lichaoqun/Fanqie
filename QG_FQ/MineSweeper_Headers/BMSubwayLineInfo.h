//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMSubwayLineInfo : NSObject
{
    NSString *_color;
    NSString *_number;
    NSString *_UID;
    NSString *_firstTime;
    NSString *_lastTime;
    NSString *_name;
    NSString *_terminal;
}

@property(retain, nonatomic) NSString *terminal; // @synthesize terminal=_terminal;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSString *firstTime; // @synthesize firstTime=_firstTime;
@property(retain, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
