//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBFDataModel.h"

#import "IMOBFSocialUser-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, SSDKCredential;

@interface SSDKUser : MOBFDataModel <NSCoding, IMOBFSocialUser>
{
    long long _platformType;
    SSDKCredential *_credential;
    NSString *_uid;
    NSString *_nickname;
    NSString *_icon;
    long long _gender;
    NSString *_url;
    NSString *_aboutMe;
    long long _verifyType;
    NSString *_verifyReason;
    NSDate *_birthday;
    long long _followerCount;
    long long _friendCount;
    long long _shareCount;
    double _regAt;
    long long _level;
    NSArray *_educations;
    NSArray *_works;
    NSDictionary *_rawData;
}

+ (id)jsonObjectWithUser:(id)arg1;
+ (id)userWithJsonObject:(id)arg1;
@property(retain, nonatomic) NSDictionary *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSArray *works; // @synthesize works=_works;
@property(retain, nonatomic) NSArray *educations; // @synthesize educations=_educations;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) double regAt; // @synthesize regAt=_regAt;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) long long friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) long long followerCount; // @synthesize followerCount=_followerCount;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *verifyReason; // @synthesize verifyReason=_verifyReason;
@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(copy, nonatomic) NSString *aboutMe; // @synthesize aboutMe=_aboutMe;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) SSDKCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithJsonObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

