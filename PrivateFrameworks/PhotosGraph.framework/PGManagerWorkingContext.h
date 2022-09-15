/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGManagerWorkingContext : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    PGManager * _manager;
}

@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)curationManager;
- (id)initWithManager:(id)arg1 loggingConnection:(id)arg2;
- (id)loggingConnection;
- (id)musicCuratorContextWithCurationOptions:(id)arg1 error:(id*)arg2;
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)arg1 error:(id*)arg2;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(id /* block */)arg1;
- (id)photoLibrary;

@end