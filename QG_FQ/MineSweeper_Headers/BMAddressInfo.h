//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMAddressInfo : NSObject
{
    NSString *_address;
    NSString *_name;
    long long _precise;
    struct BMKPoint _GEO;
}

@property(nonatomic) struct BMKPoint GEO; // @synthesize GEO=_GEO;
@property(nonatomic) long long precise; // @synthesize precise=_precise;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

