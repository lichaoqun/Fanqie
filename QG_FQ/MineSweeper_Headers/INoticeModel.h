//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface INoticeModel : NSObject
{
    NSString *_titleId;
    NSString *_title;
    NSString *_content;
    NSString *_add_time;
    NSString *_is_read;
}

@property(copy, nonatomic) NSString *is_read; // @synthesize is_read=_is_read;
@property(copy, nonatomic) NSString *add_time; // @synthesize add_time=_add_time;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *titleId; // @synthesize titleId=_titleId;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

