//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMKGeoElement : NSObject
{
    NSString *uid;
    int index;
    NSString *text;
    struct BMKPoint pt;
}

@property(nonatomic) struct BMKPoint pt; // @synthesize pt;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(nonatomic) int index; // @synthesize index;
@property(retain, nonatomic) NSString *uid; // @synthesize uid;
- (void).cxx_destruct;
- (void)dealloc;

@end

