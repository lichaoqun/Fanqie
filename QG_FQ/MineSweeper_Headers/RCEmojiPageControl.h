//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageControl.h>

@class UIImage;

@interface RCEmojiPageControl : UIPageControl
{
    UIImage *activeImage;
    UIImage *inactiveImage;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)setCurrentPage:(long long)arg1;
- (void)updateDots;
- (id)initWithFrame:(struct CGRect)arg1;

@end

