//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BMKBaseIndoorMapInfo : NSObject
{
    NSString *_strID;
    NSString *_strFloor;
    NSMutableArray *_arrStrFloors;
}

@property(retain, nonatomic) NSMutableArray *arrStrFloors; // @synthesize arrStrFloors=_arrStrFloors;
@property(retain, nonatomic) NSString *strFloor; // @synthesize strFloor=_strFloor;
@property(retain, nonatomic) NSString *strID; // @synthesize strID=_strID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

