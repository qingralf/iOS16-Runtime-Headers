/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKODIAssessment : NSObject {
    NSString * _assessment;
    NSMutableOrderedSet * _assessmentComputedBlocks;
    bool  _computingAssessment;
    bool  _currentAssessmentDidTimeout;
    bool  _isAssessing;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    ODISession * _odiSession;
    unsigned long long  _outcomeType;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) ODISession *odiSession;
@property (nonatomic) unsigned long long outcomeType;

- (void).cxx_destruct;
- (void)_callAssessmentComputedBlocksAndDidTimeout:(bool)arg1;
- (void)computeAssessment;
- (void)createODISession;
- (id)currentAssessment;
- (bool)currentAssessmentDidTimeout;
- (void)dealloc;
- (void)getAssessmentWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isAssessing;
- (id)odiSession;
- (unsigned long long)outcomeType;
- (void)provideSessionFeedback:(unsigned long long)arg1;
- (void)setOdiSession:(id)arg1;
- (void)setOutcomeType:(unsigned long long)arg1;
- (void)startAssessment;
- (void)startAssessmentWithHostBundleIdentifier:(id)arg1;
- (void)updateAssessment:(id)arg1;
- (void)updateAssessmentWithHostBundleIdentifier:(id)arg1;
- (void)updateAssessmentWithModel:(id)arg1;
- (void)waitForAssessmentWithContinueBlock:(id /* block */)arg1;

@end
