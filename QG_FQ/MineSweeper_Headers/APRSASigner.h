//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APRSASigner : NSObject
{
    NSString *_privateKey;
}

@property(copy, nonatomic) NSString *privateKey; // @synthesize privateKey=_privateKey;
- (void).cxx_destruct;
- (id)urlEncodedString:(id)arg1;
- (id)formatPrivateKey:(id)arg1;
- (id)signString:(id)arg1 withRSA2:(_Bool)arg2;
- (id)initWithPrivateKey:(id)arg1;

@end

