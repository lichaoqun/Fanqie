//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMKTileLayer.h"

@class NSString;

@interface BMKURLTileLayer : BMKTileLayer
{
    NSString *_URLTemplate;
}

@property(readonly) NSString *URLTemplate; // @synthesize URLTemplate=_URLTemplate;
- (void).cxx_destruct;
- (_Bool)checkDataValid;
- (_Bool)checkURLTemplateValid:(id)arg1;
- (_Bool)cleanTileDataCache;
- (id)initWithURLTemplate:(id)arg1;

@end
