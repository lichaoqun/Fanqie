//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class _TtC11FSPagerView11FSPagerView, _TtC11FSPagerView15FSPagerViewCell;

@protocol _TtP11FSPagerView19FSPagerViewDelegate_ <NSObject>

@optional
- (void)pagerViewDidEndDecelerating:(_TtC11FSPagerView11FSPagerView *)arg1;
- (void)pagerViewDidEndScrollAnimation:(_TtC11FSPagerView11FSPagerView *)arg1;
- (void)pagerViewDidScroll:(_TtC11FSPagerView11FSPagerView *)arg1;
- (void)pagerViewWillEndDragging:(_TtC11FSPagerView11FSPagerView *)arg1 targetIndex:(long long)arg2;
- (void)pagerViewWillBeginDragging:(_TtC11FSPagerView11FSPagerView *)arg1;
- (void)pagerView:(_TtC11FSPagerView11FSPagerView *)arg1 didEndDisplayingCell:(_TtC11FSPagerView15FSPagerViewCell *)arg2 forItemAtIndex:(long long)arg3;
- (void)pagerView:(_TtC11FSPagerView11FSPagerView *)arg1 willDisplayCell:(_TtC11FSPagerView15FSPagerViewCell *)arg2 forItemAtIndex:(long long)arg3;
- (void)pagerView:(_TtC11FSPagerView11FSPagerView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)pagerView:(_TtC11FSPagerView11FSPagerView *)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)pagerView:(_TtC11FSPagerView11FSPagerView *)arg1 didHighlightItemAtIndex:(long long)arg2;
- (_Bool)pagerView:(_TtC11FSPagerView11FSPagerView *)arg1 shouldHighlightItemAtIndex:(long long)arg2;
@end

