//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WLDataBaseInfos : NSObject
{
    NSMutableArray *_dataHelperArray;
    NSMutableArray *_createdTableNames;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *createdTableNames; // @synthesize createdTableNames=_createdTableNames;
@property(retain, nonatomic) NSMutableArray *dataHelperArray; // @synthesize dataHelperArray=_dataHelperArray;
- (void).cxx_destruct;
- (id)init;

@end
