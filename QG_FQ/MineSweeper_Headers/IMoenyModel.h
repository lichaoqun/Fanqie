//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface IMoenyModel : NSObject
{
    NSNumber *_moneyId;
    NSString *_money;
}

@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(copy, nonatomic) NSNumber *moneyId; // @synthesize moneyId=_moneyId;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

