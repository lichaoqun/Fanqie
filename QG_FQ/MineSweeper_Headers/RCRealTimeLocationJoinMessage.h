//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCStatusMessage.h"

@class NSString;

@interface RCRealTimeLocationJoinMessage : RCStatusMessage
{
    NSString *_extra;
}

+ (id)getObjectName;
+ (id)messageWithExtra:(id)arg1;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
- (void).cxx_destruct;
- (void)decodeWithData:(id)arg1;
- (id)encode;

@end
