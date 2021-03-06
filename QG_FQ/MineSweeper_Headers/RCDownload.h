//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString, NSURLConnection;

@interface RCDownload : NSObject
{
    NSMutableData *_receivedData;
    long long _responseCode;
    long long _contentLength;
    NSString *_requestUrl;
    NSString *_localPath;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _pauseBlock;
    NSURLConnection *_urlConnection;
}

@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(copy, nonatomic) CDUnknownBlockType pauseBlock; // @synthesize pauseBlock=_pauseBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(nonatomic) long long contentLength; // @synthesize contentLength=_contentLength;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
- (void).cxx_destruct;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)start;
- (id)initWithRequestUrl:(id)arg1 localPath:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 cancel:(CDUnknownBlockType)arg6 pause:(CDUnknownBlockType)arg7;

@end

