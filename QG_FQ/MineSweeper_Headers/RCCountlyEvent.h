//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RCCountlyEvent : NSObject
{
    int _count;
    NSString *_key;
    NSDictionary *_segmentation;
    double _sum;
    double _timestamp;
}

+ (id)objectWithManagedObject:(id)arg1;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double sum; // @synthesize sum=_sum;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSDictionary *segmentation; // @synthesize segmentation=_segmentation;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)serializedData;
- (void)dealloc;

@end

