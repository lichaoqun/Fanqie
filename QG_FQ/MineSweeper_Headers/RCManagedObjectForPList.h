//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, RCManagedObjectContextForPList;

@interface RCManagedObjectForPList : NSObject
{
    NSMutableArray *_objectList;
    RCManagedObjectContextForPList *_context;
    NSMutableDictionary *_dict;
}

@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) RCManagedObjectContextForPList *context; // @synthesize context=_context;
@property(nonatomic) __weak NSMutableArray *objectList; // @synthesize objectList=_objectList;
- (void).cxx_destruct;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
