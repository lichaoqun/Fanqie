//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface IWallentModel : NSObject
{
    NSString *_balance;
    NSString *_frozen;
    NSString *_deal_password;
    NSNumber *_is_set_deal_password;
    NSArray *_list;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSNumber *is_set_deal_password; // @synthesize is_set_deal_password=_is_set_deal_password;
@property(copy, nonatomic) NSString *deal_password; // @synthesize deal_password=_deal_password;
@property(copy, nonatomic) NSString *frozen; // @synthesize frozen=_frozen;
@property(copy, nonatomic) NSString *balance; // @synthesize balance=_balance;
- (void).cxx_destruct;

@end

