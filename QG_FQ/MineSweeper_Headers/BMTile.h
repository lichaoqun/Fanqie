//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMTile : NSObject
{
    int _height;
    int _width;
    float **_colorData;
}

- (_Bool)toBundle:(struct CVBundle *)arg1;
- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2 data:(float **)arg3;

@end
