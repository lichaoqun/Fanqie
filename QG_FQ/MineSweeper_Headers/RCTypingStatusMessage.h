//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCStatusMessage.h"

@class NSString;

@interface RCTypingStatusMessage : RCStatusMessage
{
    NSString *_data;
    NSString *_typingContentType;
}

+ (id)getObjectName;
@property(copy, nonatomic) NSString *typingContentType; // @synthesize typingContentType=_typingContentType;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)encode;
- (void)decodeWithData:(id)arg1;

@end

