/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassSelectionFieldDetectorCoordinator : NSObject <NPKPassSelectionFieldDetectorManagerDelegate> {
    NPKPassSelectionFieldDetectorListener * _localFieldDetectorListener;
    NPKPassSelectionFieldDetectorManager * _passSelectionFieldDetectorManager;
    <NPKRemotePassSelectionFieldDetectorListenerCoordinator> * _remoteFieldDetectListenerCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NPKPassSelectionFieldDetectorListener> *localFieldDetectorListener;
@property (nonatomic, readonly) NPKPassSelectionFieldDetectorManager *passSelectionFieldDetectorManager;
@property (nonatomic, readonly) <NPKRemotePassSelectionFieldDetectorListenerCoordinator> *remoteFieldDetectListenerCoordinator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithNPKPassSelectionFieldDetectorManager:(id)arg1 remoteFieldDetectListenerCoordinator:(id)arg2;
- (id)localFieldDetectorListener;
- (void)passSelectionFieldDetectManager:(id)arg1 didEnterFieldForPassWithUniqueID:(id)arg2;
- (id)passSelectionFieldDetectorManager;
- (id)remoteFieldDetectListenerCoordinator;

@end