//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BMKOpenPanoramaDelegate;

@interface BMKOpenPanorama : NSObject
{
    id <BMKOpenPanoramaDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <BMKOpenPanoramaDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)noticeOpenStatus:(int)arg1;
- (id)parseUidToPidResult:(id)arg1;
- (_Bool)handleForwardError:(id)arg1;
- (void)openBaiduMapPanorama:(id)arg1;

@end

