//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSArray, NSLock, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BMKLOCURLSessionManager : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSMutableDictionary *_mutableTaskDelegatesKeyedByTaskIdentifier;
    NSString *_taskDescriptionForSessionTasks;
    NSLock *_lock;
}

+ (id)shareManager;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, copy, nonatomic) NSString *taskDescriptionForSessionTasks; // @synthesize taskDescriptionForSessionTasks=_taskDescriptionForSessionTasks;
@property(retain, nonatomic) NSMutableDictionary *mutableTaskDelegatesKeyedByTaskIdentifier; // @synthesize mutableTaskDelegatesKeyedByTaskIdentifier=_mutableTaskDelegatesKeyedByTaskIdentifier;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
@property(readonly, copy) NSString *description;
- (id)downloadProgressForTask:(id)arg1;
- (id)uploadProgressForTask:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 uploadProgress:(CDUnknownBlockType)arg2 downloadProgress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateSessionCancelingTasks:(_Bool)arg1;
- (id)downloadTasks;
- (id)uploadTasks;
@property(readonly, nonatomic) NSArray *dataTasks;
@property(readonly, nonatomic) NSArray *tasks;
- (id)tasksForKeyPath:(id)arg1;
- (void)removeDelegateForTask:(id)arg1;
- (void)addDelegateForDataTask:(id)arg1 uploadProgress:(CDUnknownBlockType)arg2 downloadProgress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setDelegate:(id)arg1 forTask:(id)arg2;
- (id)delegateForTask:(id)arg1;
- (void)dealloc;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

