//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYJceObjectV2.h"

@class BLYRqdSecurity, NSDictionary, NSString;

@interface BLYRqdStrategy : BLYJceObjectV2
{
    _Bool jcev2_p_0_r_enable;
    _Bool jcev2_p_1_r_enableUserInfo;
    _Bool jcev2_p_2_r_enableQuery;
    int jcev2_p_10_o_eventRecordCount;
    int jcev2_p_11_o_eventTimeInterval;
    NSString *jcev2_p_3_o_url;
    NSString *jcev2_p_4_o_expUrl;
    BLYRqdSecurity *jcev2_p_5_o_security;
    NSDictionary *jcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString;
    long long jcev2_p_7_o_strategylastUpdateTime;
    NSString *jcev2_p_8_o_httpsUrl;
    NSString *jcev2_p_9_o_httpsExpUrl;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_eventTimeInterval, setter=setJce_eventTimeInterval:) int jcev2_p_11_o_eventTimeInterval; // @synthesize jcev2_p_11_o_eventTimeInterval;
@property(nonatomic, getter=jce_eventRecordCount, setter=setJce_eventRecordCount:) int jcev2_p_10_o_eventRecordCount; // @synthesize jcev2_p_10_o_eventRecordCount;
@property(retain, nonatomic, getter=jce_httpsExpUrl, setter=setJce_httpsExpUrl:) NSString *jcev2_p_9_o_httpsExpUrl; // @synthesize jcev2_p_9_o_httpsExpUrl;
@property(retain, nonatomic, getter=jce_httpsUrl, setter=setJce_httpsUrl:) NSString *jcev2_p_8_o_httpsUrl; // @synthesize jcev2_p_8_o_httpsUrl;
@property(nonatomic, getter=jce_strategylastUpdateTime, setter=setJce_strategylastUpdateTime:) long long jcev2_p_7_o_strategylastUpdateTime; // @synthesize jcev2_p_7_o_strategylastUpdateTime;
@property(retain, nonatomic, getter=jce_valueMap, setter=setJce_valueMap:) NSDictionary *jcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=jce_security, setter=setJce_security:) BLYRqdSecurity *jcev2_p_5_o_security; // @synthesize jcev2_p_5_o_security;
@property(retain, nonatomic, getter=jce_expUrl, setter=setJce_expUrl:) NSString *jcev2_p_4_o_expUrl; // @synthesize jcev2_p_4_o_expUrl;
@property(retain, nonatomic, getter=jce_url, setter=setJce_url:) NSString *jcev2_p_3_o_url; // @synthesize jcev2_p_3_o_url;
@property(nonatomic, getter=jce_enableQuery, setter=setJce_enableQuery:) _Bool jcev2_p_2_r_enableQuery; // @synthesize jcev2_p_2_r_enableQuery;
@property(nonatomic, getter=jce_enableUserInfo, setter=setJce_enableUserInfo:) _Bool jcev2_p_1_r_enableUserInfo; // @synthesize jcev2_p_1_r_enableUserInfo;
@property(nonatomic, getter=jce_enable, setter=setJce_enable:) _Bool jcev2_p_0_r_enable; // @synthesize jcev2_p_0_r_enable;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

