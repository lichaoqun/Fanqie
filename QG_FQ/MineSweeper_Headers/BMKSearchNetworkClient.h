//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMKSearchNetworkClient : NSObject
{
}

+ (id)signWithUrlString:(id)arg1;
+ (id)URLencode:(id)arg1;
+ (id)transformParametersDictToUrlQuery:(id)arg1;
+ (id)getPhoneInfoWithoutToken;
+ (id)generateSearchURLByBaseURL:(id)arg1 parameters:(id)arg2;
+ (void)searchWithBaseURL:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

