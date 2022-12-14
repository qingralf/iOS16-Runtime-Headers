/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMockCPLStatusProvider : PXObservable <PXCPLStatusProvider, PXSettingsKeyObserver> {
    PXCPLStatus * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXCPLStatus *status;
@property (readonly) Class superclass;

+ (id)_currentMockedStatus;
+ (bool)shouldUseMockService;

- (void).cxx_destruct;
- (void)_updateStatus;
- (void)dealloc;
- (id)init;
- (double)nextOverrideResumeTimeInterval;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setStatus:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)status;

@end
