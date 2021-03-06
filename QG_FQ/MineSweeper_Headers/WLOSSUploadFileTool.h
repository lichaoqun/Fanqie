//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OSSClient, OSSResumableUploadRequest;

@interface WLOSSUploadFileTool : NSObject
{
    OSSClient *_ossClient;
    OSSResumableUploadRequest *_resumableUpload;
}

+ (id)sharedInstance;
@property(retain, nonatomic) OSSResumableUploadRequest *resumableUpload; // @synthesize resumableUpload=_resumableUpload;
@property(retain, nonatomic) OSSClient *ossClient; // @synthesize ossClient=_ossClient;
- (void).cxx_destruct;
- (void)uploadImageToOSSService:(id)arg1 Success:(CDUnknownBlockType)arg2 Failed:(CDUnknownBlockType)arg3;
- (void)uploadImagesTOOSSService:(id)arg1 Success:(CDUnknownBlockType)arg2 Failed:(CDUnknownBlockType)arg3;
- (void)downLoadFileFromOSServiceWithFilePath:(id)arg1 ToFolder:(id)arg2 Success:(CDUnknownBlockType)arg3 Failed:(CDUnknownBlockType)arg4;
- (void)uploadFileInfoOSService:(id)arg1 pid:(id)arg2 updateProgress:(CDUnknownBlockType)arg3 Success:(CDUnknownBlockType)arg4 Failed:(CDUnknownBlockType)arg5;
- (void)uploadData:(id)arg1 dataName:(id)arg2 Success:(CDUnknownBlockType)arg3 Failed:(CDUnknownBlockType)arg4;
- (void)cancelUploadFile;

@end

