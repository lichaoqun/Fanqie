//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol WLPersistanceRecordProtocol;

@protocol WLPersistanceTableProtocol <NSObject>
- (NSString *)primaryKeyName;
- (Class)recordClass;
- (NSDictionary *)columnInfo;
- (NSString *)tableName;
- (NSString *)databaseName;

@optional
- (_Bool)isCorrectToUpdateRecord:(NSObject<WLPersistanceRecordProtocol> *)arg1;
- (_Bool)isCorrectToInsertRecord:(NSObject<WLPersistanceRecordProtocol> *)arg1;
@end

