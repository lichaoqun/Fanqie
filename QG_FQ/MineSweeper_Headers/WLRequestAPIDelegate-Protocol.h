//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WLRequestAPIDelegate <NSObject>
- (NSString *)apiMethodName;

@optional
- (_Bool)ignoreDecryptAES256Value;
- (_Bool)removesKeysWithNullValues;
- (_Bool)ignoreUnifiedErrorProcess;
- (_Bool)ignoreUnifiedResponseProcess;
- (id)responseProcess:(id)arg1;
- (double)requestTimeoutInterval;
- (long long)cacheTimeInSeconds;
- (_Bool)shouldCache;
- (NSString *)fileFolderName;
- (unsigned long long)requestCoverType;
- (long long)reponseSerializerType;
- (long long)requestSerializerType;
- (unsigned long long)requestMethodType;
- (NSDictionary *)requestParams;
@end
