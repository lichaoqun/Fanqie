//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMKRouteStep.h"

@class BMKRouteNode, NSArray, NSString;

@interface BMKIndoorRouteStep : BMKRouteStep
{
    BMKRouteNode *_entrace;
    BMKRouteNode *_exit;
    NSString *_instructions;
    NSString *_buildingid;
    NSString *_floorid;
    NSArray *_indoorStepNodes;
}

@property(retain, nonatomic) NSArray *indoorStepNodes; // @synthesize indoorStepNodes=_indoorStepNodes;
@property(retain, nonatomic) NSString *floorid; // @synthesize floorid=_floorid;
@property(retain, nonatomic) NSString *buildingid; // @synthesize buildingid=_buildingid;
@property(retain, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) BMKRouteNode *exit; // @synthesize exit=_exit;
@property(retain, nonatomic) BMKRouteNode *entrace; // @synthesize entrace=_entrace;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

