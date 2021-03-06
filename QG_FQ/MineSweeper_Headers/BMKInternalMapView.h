//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BMKTapDetectingViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class BMKTapDetectingView, BaiduMapEAGLView, EAGLContext, MapController, NSMutableArray, NSString;
@protocol MapViewDelegate;

@interface BMKInternalMapView : UIView <BMKTapDetectingViewDelegate, UIScrollViewDelegate>
{
    BaiduMapEAGLView *_eaglmapview;
    EAGLContext *_context;
    _Bool _animating;
    long long _animationFrameInterval;
    BMKTapDetectingView *_tapDectectView;
    UIView *_viewContener;
    MapController *_controller;
    NSMutableArray *_overLayList;
    int screenWidth;
    int screenHeight;
    unsigned long long m_groundlayerID;
    long long _retinaScreenScale;
    _Bool _isMapLoadFinish;
    _Bool _isCurrentMapChange;
    int _minZoomLevel;
    int _maxZoomLevel;
    id <MapViewDelegate> _delegate;
}

@property(nonatomic) int maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) int minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(nonatomic) _Bool isCurrentMapChange; // @synthesize isCurrentMapChange=_isCurrentMapChange;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool isMapLoadFinish; // @synthesize isMapLoadFinish=_isMapLoadFinish;
@property(retain, nonatomic) UIView *viewContener; // @synthesize viewContener=_viewContener;
@property(retain, nonatomic) BMKTapDetectingView *tapDectectView; // @synthesize tapDectectView=_tapDectectView;
@property(nonatomic) __weak id <MapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) long long animationFrameInterval; // @synthesize animationFrameInterval=_animationFrameInterval;
@property(retain, nonatomic) MapController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) BaiduMapEAGLView *eaglmapview; // @synthesize eaglmapview=_eaglmapview;
- (void).cxx_destruct;
- (void)setDrawFlag:(_Bool)arg1;
- (void)mouseEvent:(struct CGPoint)arg1 withType:(int)arg2;
- (struct CGPoint)geoPointToScrpt:(struct BMKPoint)arg1;
- (struct BMKPoint)scrPtToGeoPoint:(struct CGPoint)arg1;
- (_Bool)cleanTileDataCache:(id)arg1;
- (_Bool)removeTileLayer:(id)arg1;
- (_Bool)updateTileLayerPara:(id)arg1;
- (_Bool)addTileLayer:(id)arg1;
- (_Bool)removeGroundlayer;
- (_Bool)addGroundData:(id)arg1 isAdd:(_Bool)arg2;
- (_Bool)updateGroundData:(id)arg1;
- (_Bool)removeGroundData:(int)arg1;
- (_Bool)addGroundlayer;
- (void)handleClickBlankEvent:(struct CGPoint)arg1;
- (void)handleClickEvent:(struct CGPoint)arg1;
- (_Bool)postOverlayMessage:(Class)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (_Bool)sendOverlayMessage:(Class)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (_Bool)removeOverLay:(id)arg1;
- (_Bool)addOverLay:(id)arg1;
- (_Bool)showSatellite:(_Bool)arg1;
- (_Bool)showPreTraffic:(_Bool)arg1 withWeek:(int)arg2 withHour:(int)arg3;
- (_Bool)getStreetCityInfo;
- (_Bool)getSSDThumbImage:(struct BMKPoint)arg1;
- (_Bool)getStreepScapeModeStatus;
- (_Bool)showStreet:(_Bool)arg1;
- (_Bool)showHotMap:(_Bool)arg1;
- (_Bool)showTraffic:(_Bool)arg1;
- (_Bool)showMapLayer:(_Bool)arg1;
- (_Bool)isSurpoortHeatMap;
- (_Bool)showMapPoi:(_Bool)arg1;
- (_Bool)enableBuildings:(_Bool)arg1;
- (id)getFocusedBaseIndoorMapInfo;
- (_Bool)switchBaseIndoorMapFloor:(id)arg1 withID:(id)arg2;
- (void)showBaseIndoorMapPoi:(_Bool)arg1;
- (void)showBaseIndoorMap:(_Bool)arg1;
- (double)getZoomLevelToBound:(struct BMKRect)arg1;
- (_Bool)fitVisibleMapRect:(struct BMKRect)arg1 width:(double)arg2 height:(double)arg3 centerXOffset:(double)arg4 centerYOffset:(double)arg5 withAnimation:(_Bool)arg6;
- (_Bool)zoomToBound:(struct BMKRect)arg1 withAnimation:(_Bool)arg2;
- (_Bool)zoomOut;
- (_Bool)zoomIn;
- (_Bool)limitMapRegion:(struct BMKRect)arg1;
- (_Bool)setMapTo2D;
- (_Bool)animationIsRunning;
- (double)getZoomUnits;
- (struct BMKRect)getMapBound;
- (struct BMMapStatus)getMapStatus;
- (void)setMapStatus:(struct BMMapStatus)arg1 withAnimation:(_Bool)arg2 withAnimationTime:(int)arg3;
- (void)setMapStatus:(struct BMMapStatus)arg1 withAnimation:(_Bool)arg2;
- (void)setMapStatus:(struct BMMapStatus)arg1;
- (void)onEngineMessage:(id)arg1;
- (void)tapDetectingView:(id)arg1 endTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 flying:(struct CGPoint)arg2 withSpeed:(int)arg3;
- (void)tapDetectingView:(id)arg1 moveTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 beginTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 scale:(int)arg2;
- (void)tapDetectingView:(id)arg1 roate:(int)arg2;
- (void)tapDetectingView:(id)arg1 overlook:(int)arg2;
- (void)tapDetectingView:(id)arg1 doubleEndTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 doubleMoveTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 doubleBeginTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 gotLongPress:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 gotTwoFingerTapAtPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 gotDoubleTapAtPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 gotSingleTapAtPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 forceTouch:(id)arg2;
- (_Bool)isCurrentMapMinLevel;
- (_Bool)isCurrentMapMaxLevel;
- (void)drawFrame;
- (void)initOpengl;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)startRender;
- (void)stopRender;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)deleteMapView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

