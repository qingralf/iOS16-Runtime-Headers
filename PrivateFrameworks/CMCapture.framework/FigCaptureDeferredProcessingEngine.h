/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {
    NSSet * _allSensorIDStrings;
    bool  _currentDemosaicedRawEnabled;
    BWDeferredPipelineParameters * _currentPipelineParameters;
    NSString * _currentPortType;
    BWStillImageSettings * _currentSettings;
    NSDictionary * _defaultSensorIDsByPortType;
    BWGraph * _graph;
    long long  _graphPrepareDurationNS;
    bool  _graphRunning;
    NSObject<OS_os_transaction> * _graphTransaction;
    bool  _interactiveQoS;
    FigCaptureDeferredProcessingJob * _job;
    BWDeferredProcessingSourceNode * _sourceNode;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedProcessingEngine;

- (void)dealloc;
- (void)executeJob:(id)arg1;
- (void)graph:(id)arg1 didFinishStartingWithError:(int)arg2;
- (void)graphDidPrepareNodes:(id)arg1;
- (id)init;
- (void)releaseResources;

@end