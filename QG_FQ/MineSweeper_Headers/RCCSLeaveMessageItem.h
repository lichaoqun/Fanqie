//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RCCSLeaveMessageItem : NSObject
{
    _Bool _required;
    int _max;
    NSString *_title;
    NSString *_name;
    NSString *_type;
    NSString *_defaultText;
    NSString *_verification;
    NSArray *_message;
}

+ (id)modelWithDic:(id)arg1;
@property(nonatomic) int max; // @synthesize max=_max;
@property(retain, nonatomic) NSArray *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *verification; // @synthesize verification=_verification;
@property(nonatomic) _Bool required; // @synthesize required=_required;
@property(copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

