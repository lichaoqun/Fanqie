//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAssetCollection, PHFetchOptions, PHFetchResult;

@interface WLAssetsGroup : NSObject
{
    PHAssetCollection *_phAssetCollection;
    PHFetchOptions *_pHFetchOptions;
    PHFetchResult *_phFetchResult;
}

@property(retain, nonatomic) PHFetchResult *phFetchResult; // @synthesize phFetchResult=_phFetchResult;
@property(retain, nonatomic) PHFetchOptions *pHFetchOptions; // @synthesize pHFetchOptions=_pHFetchOptions;
@property(retain, nonatomic) PHAssetCollection *phAssetCollection; // @synthesize phAssetCollection=_phAssetCollection;
- (void).cxx_destruct;
- (void)enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAssetsWithOptions:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)refreshData;
- (id)posterImageWithSize:(struct CGSize)arg1;
- (id)name;
- (long long)numberOfAllAssets;
- (long long)countOfAssetsWithMediaType:(long long)arg1;
- (id)initWithPHCollection:(id)arg1;
- (id)initWithPHCollection:(id)arg1 fetchAssetsOptions:(id)arg2;

@end

