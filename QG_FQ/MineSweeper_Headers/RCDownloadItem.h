//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOutputStream, NSString, NSURL, NSURLSessionDataTask;
@protocol RCDownloadItemDelegate;

@interface RCDownloadItem : NSObject
{
    _Bool _resumable;
    long long _state;
    long long _totalLength;
    long long _currentLength;
    NSURL *_URL;
    NSString *_identify;
    id <RCDownloadItemDelegate> _delegate;
    NSURLSessionDataTask *_dataTask;
    NSOutputStream *_outputStream;
    long long _messageId;
    NSString *_localPath;
    NSString *_fileName;
}

+ (id)fileName:(id)arg1 targetDirectory:(id)arg2;
+ (id)downloadPath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) __weak NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(nonatomic) __weak id <RCDownloadItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identify; // @synthesize identify=_identify;
@property(nonatomic) _Bool resumable; // @synthesize resumable=_resumable;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long currentLength; // @synthesize currentLength=_currentLength;
@property(nonatomic) long long totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)downloadedLength;
- (void)setSateWithError:(id)arg1;
- (id)downloadTask;
- (id)headTask;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)downLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageId:(long long)arg1;
- (id)initWithIdentify:(id)arg1 url:(id)arg2 fileName:(id)arg3;
- (id)init;

@end
