//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BLYStackFrame : NSObject
{
    unsigned char _index;
    NSString *_module;
    unsigned long long _loadAddress;
    unsigned long long _baseAddress;
    unsigned long long _offset;
    NSString *_symbol;
}

@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long baseAddress; // @synthesize baseAddress=_baseAddress;
@property(nonatomic) unsigned long long loadAddress; // @synthesize loadAddress=_loadAddress;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(nonatomic) unsigned char index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)frame;
- (id)frameSymbol;
- (id)init;

@end

