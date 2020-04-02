//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, WLPersistanceHelper;

@interface WLPersistanceQueryCommand : NSObject
{
    WLPersistanceHelper *_helper;
    NSMutableString *_sqlString;
}

@property(retain, nonatomic) NSMutableString *sqlString; // @synthesize sqlString=_sqlString;
@property(retain, nonatomic) WLPersistanceHelper *helper; // @synthesize helper=_helper;
- (void).cxx_destruct;
- (id)resetQueryCommand;
- (id)initWithHelper:(id)arg1;
- (id)initWithDatabaseNameName:(id)arg1;
- (id)deleteTable:(id)arg1 withCondition:(id)arg2 conditionParams:(id)arg3;
- (id)updateTable:(id)arg1 withData:(id)arg2 condition:(id)arg3 conditionParams:(id)arg4;
- (id)insertTable:(id)arg1 withDataList:(id)arg2;
- (id)addColumn:(id)arg1 columnInfo:(id)arg2 tableName:(id)arg3;
- (id)dropTable:(id)arg1;
- (id)createTable:(id)arg1 columnInfo:(id)arg2;
- (id)countAll;
- (id)limit:(long long)arg1 offset:(long long)arg2;
- (id)offset:(long long)arg1;
- (id)limit:(long long)arg1;
- (id)orderBy:(id)arg1 isDESC:(_Bool)arg2;
- (id)where:(id)arg1 params:(id)arg2;
- (id)from:(id)arg1;
- (id)select:(id)arg1 isDistinct:(_Bool)arg2;

@end

