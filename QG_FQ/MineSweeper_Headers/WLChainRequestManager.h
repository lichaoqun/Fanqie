//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WLChainRequestManager : NSObject
{
    NSMutableArray *_requestArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
- (void).cxx_destruct;
- (void)removeChainRequest:(id)arg1;
- (void)addChainRequest:(id)arg1;

@end

