//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IRcToken : NSObject
{
    NSString *_token;
    NSString *_expires_time;
}

@property(copy, nonatomic) NSString *expires_time; // @synthesize expires_time=_expires_time;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

