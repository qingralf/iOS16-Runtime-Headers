/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGHighlightTailorContext : NSObject {
    CLSCurationContext * _curationContext;
    NSObject<OS_os_log> * _loggingConnection;
    PGNeighborScoreComputer * _neighborScoreComputer;
    PHPhotoLibrary * _photoLibrary;
    PGTitleGenerationContext * _titleGenerationContext;
}

@property (readonly) CLSCurationContext *curationContext;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) PGNeighborScoreComputer *neighborScoreComputer;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGTitleGenerationContext *titleGenerationContext;

- (void).cxx_destruct;
- (id)curationContext;
- (id)initForTesting;
- (id)initWithPhotoLibrary:(id)arg1 graph:(id)arg2 loggingConnection:(id)arg3;
- (id)loggingConnection;
- (id)neighborScoreComputer;
- (id)photoLibrary;
- (id)titleGenerationContext;

@end