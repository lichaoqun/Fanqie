//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ITokenModel : NSObject
{
    NSString *_refresh_token;
    NSString *_access_token;
    NSString *_token_type;
    NSString *_expires_time;
}

@property(copy, nonatomic) NSString *expires_time; // @synthesize expires_time=_expires_time;
@property(copy, nonatomic) NSString *token_type; // @synthesize token_type=_token_type;
@property(copy, nonatomic) NSString *access_token; // @synthesize access_token=_access_token;
@property(copy, nonatomic) NSString *refresh_token; // @synthesize refresh_token=_refresh_token;
- (void).cxx_destruct;

@end

