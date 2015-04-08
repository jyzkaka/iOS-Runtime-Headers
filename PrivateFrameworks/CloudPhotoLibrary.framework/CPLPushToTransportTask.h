/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class <CPLEngineTransportUploadBatchTask>, <CPLPushToTransportTaskDelegate>, CPLChangeBatch, CPLEngineChangePipe, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface CPLPushToTransportTask : CPLEngineSyncTask {
    NSString *_clientCacheIdentifier;
    unsigned int _countOfPushedBatches;
    CPLEngineChangePipe *_currentPushQueue;
    unsigned int _lastReportedProgress;
    NSObject<OS_dispatch_queue> *_lock;
    NSArray *_resourcesForBackgroundUpload;
    NSArray *_staleOrUnavailableResources;
    double _startOfIteration;
    CPLChangeBatch *_uploadBatch;
    NSArray *_uploadResourceTasks;
    <CPLEngineTransportUploadBatchTask> *_uploadTask;
}

@property(retain) <CPLPushToTransportTaskDelegate> * delegate;

- (void).cxx_destruct;
- (void)_detectUpdatesForFullRecordsWithNoChangeDataInBatch:(id)arg1;
- (BOOL)_discardResourcesToUploadFromBatch:(id)arg1 error:(id*)arg2;
- (void)_doOneIteration;
- (BOOL)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id*)arg2;
- (void)_popNextBatchAndContinue;
- (BOOL)_prepareResourcesToUploadInBatch:(id)arg1 error:(id*)arg2;
- (void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2;
- (void)_pushTaskDidFinishWithError:(id)arg1;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)pause;
- (void)resume;
- (id)taskIdentifier;

@end