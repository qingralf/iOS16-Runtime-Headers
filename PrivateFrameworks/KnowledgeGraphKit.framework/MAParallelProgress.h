/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAParallelProgress : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    MAProgressReporter * _progressReporter;
    MAMutableFloatVector * _progressValues;
}

- (void).cxx_destruct;
- (id)initWithProgressReporter:(id)arg1 parallelOperationCount:(unsigned long long)arg2;
- (bool)isCancelled;
- (bool)isCancelledWithProgress:(double)arg1 index:(unsigned long long)arg2;

@end