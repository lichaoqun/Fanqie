//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, RCThreadSafeMutableDictionary;

@interface RCloudCache : NSObject
{
    RCThreadSafeMutableDictionary *cacheDictionary;
    NSOperationQueue *diskOperationQueue;
    double defaultTimeoutInterval;
}

+ (id)currentCache;
@property(nonatomic) double defaultTimeoutInterval; // @synthesize defaultTimeoutInterval;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performDiskWriteOperation:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setPlist:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setPlist:(id)arg1 forKey:(id)arg2;
- (id)plistForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageDataForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)saveCacheDictionary;
- (void)deleteDataAtPath:(id)arg1;
- (void)writeData:(id)arg1 toPath:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)saveAfterDelay;
- (void)setData:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)copyFilePath:(id)arg1 asKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)copyFilePath:(id)arg1 asKey:(id)arg2;
- (_Bool)hasCacheForKey:(id)arg1;
- (void)removeItemFromCache:(id)arg1;
- (void)removeCacheForKey:(id)arg1;
- (void)clearCache;
- (id)init;

@end
