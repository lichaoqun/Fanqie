//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BMKProperty, NSArray, NSDictionary, NSString;

@protocol BMKKeyValue <NSObject>

@optional
+ (NSDictionary *)bmk_objectClassInArray;
+ (id)bmk_replacedKeyFromPropertyName121:(NSString *)arg1;
+ (NSDictionary *)bmk_replacedKeyFromPropertyName;
+ (NSArray *)bmk_ignoredPropertyNames;
+ (NSArray *)bmk_allowedPropertyNames;
- (void)bmk_objectDidFinishConvertingToKeyValues;
- (void)bmk_keyValuesDidFinishConvertingToObject;
- (id)bmk_newValueFromOldValue:(id)arg1 property:(BMKProperty *)arg2;
@end

