//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WLPersistanceQueryCommand;
@protocol WLPersistanceTableProtocol;

@interface WLPersistanceTable : NSObject
{
    _Bool _isFromMigration;
    id <WLPersistanceTableProtocol> _child;
    WLPersistanceQueryCommand *_queryCommand;
    NSArray *_columnInfos;
}

@property(readonly, nonatomic) NSArray *columnInfos; // @synthesize columnInfos=_columnInfos;
@property(retain, nonatomic) WLPersistanceQueryCommand *queryCommand; // @synthesize queryCommand=_queryCommand;
@property(readonly, nonatomic) _Bool isFromMigration; // @synthesize isFromMigration=_isFromMigration;
@property(nonatomic) __weak id <WLPersistanceTableProtocol> child; // @synthesize child=_child;
- (void).cxx_destruct;
- (_Bool)executeSQL:(id)arg1;
- (_Bool)isCorrectToUpdateRecord:(id)arg1;
- (_Bool)isCorrectToInsertRecord:(id)arg1;
- (id)init;
- (id)findAllWithWhereCondition:(id)arg1 whereConditionParams:(id)arg2 keyName:(id)arg3 notInList:(id)arg4;
- (id)findAllWithKeyName:(id)arg1 notInList:(id)arg2;
- (id)findAllWithKeyName:(id)arg1 value:(id)arg2;
- (id)findAllWithPrimaryKey:(id)arg1;
- (id)findWithPrimaryKey:(id)arg1;
- (id)countWithSQL:(id)arg1 params:(id)arg2;
- (id)countWithWhereCondition:(id)arg1 conditionParams:(id)arg2;
- (id)countTotalRecord;
- (id)findFirstRowWithCriteria:(id)arg1;
- (id)findFirstRowWithSQL:(id)arg1 params:(id)arg2;
- (id)findFirstRowWithWhereCondition:(id)arg1 conditionParams:(id)arg2 isDistinct:(_Bool)arg3;
- (id)findAllWithCriteria:(id)arg1;
- (id)findAllWithSQL:(id)arg1 params:(id)arg2;
- (id)findAllWithWhereCondition:(id)arg1 conditionParams:(id)arg2 isDistinct:(_Bool)arg3 orderby:(id)arg4 isDESC:(_Bool)arg5;
- (id)findAllWithWhereCondition:(id)arg1 conditionParams:(id)arg2 isDistinct:(_Bool)arg3;
- (id)findAllRecords;
- (id)findLatestRecord;
- (void)updateKeyValueList:(id)arg1 primaryKeyValueList:(id)arg2;
- (void)updateValue:(id)arg1 forKey:(id)arg2 primaryKeyValueList:(id)arg3;
- (void)updateValue:(id)arg1 forKey:(id)arg2 whereKey:(id)arg3 inList:(id)arg4;
- (void)updateValue:(id)arg1 forKey:(id)arg2 whereKey:(id)arg3 notInList:(id)arg4;
- (void)updateValue:(id)arg1 forKey:(id)arg2 primaryKeyValue:(id)arg3;
- (_Bool)updateKeyValueList:(id)arg1 primaryKeyValue:(id)arg2;
- (_Bool)updateKeyValueList:(id)arg1 whereCondition:(id)arg2 whereConditionParams:(id)arg3;
- (void)updateRecordList:(id)arg1;
- (_Bool)updateRecord:(id)arg1;
- (void)deleteWithPrimaryKeyList:(id)arg1;
- (void)deleteWithPrimaryKey:(id)arg1;
- (void)deleteWithSql:(id)arg1 params:(id)arg2;
- (void)deleteWithCriteria:(id)arg1;
- (void)deleteWithWhereCondition:(id)arg1 conditionParams:(id)arg2;
- (void)deleteRecordList:(id)arg1;
- (void)deleteRecord:(id)arg1;
- (void)deleteTableAllRecord;
- (void)insertRecordAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)insertRecordListAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)insertRecord:(id)arg1;
- (_Bool)insertRecordList:(id)arg1;
- (_Bool)insertRecordListWithSql:(id)arg1;
- (id)convertRecordListToSqlStringWithList:(id)arg1;

@end

