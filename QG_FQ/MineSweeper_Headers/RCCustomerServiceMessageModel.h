//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCMessageModel.h"

@class NSString;

@interface RCCustomerServiceMessageModel : RCMessageModel
{
    _Bool _alreadyEvaluated;
    _Bool _ignoreEvaluate;
    NSString *_evaluateId;
}

@property(nonatomic) _Bool ignoreEvaluate; // @synthesize ignoreEvaluate=_ignoreEvaluate;
@property(nonatomic) _Bool alreadyEvaluated; // @synthesize alreadyEvaluated=_alreadyEvaluated;
@property(retain, nonatomic) NSString *evaluateId; // @synthesize evaluateId=_evaluateId;
- (void).cxx_destruct;
- (void)disableEvaluate;
@property(readonly, nonatomic, getter=isNeedEvaluateArea) _Bool needEvaluateArea;
- (id)initWithMessage:(id)arg1;

@end

