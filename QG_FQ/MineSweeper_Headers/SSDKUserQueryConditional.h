//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSDKUserQueryConditional : NSObject
{
    NSString *_uid;
    NSString *_userName;
    NSString *_path;
}

+ (id)userQueryConditionalByPath:(id)arg1;
+ (id)userQueryConditionalByUserName:(id)arg1;
+ (id)userQueryConditionalByUserId:(id)arg1;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

