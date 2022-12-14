/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUListeningModeController : NSObject <MRUSystemOutputDeviceRouteControllerObserver> {
    <MRUListeningModeControllerDelegate> * _delegate;
    MRUSystemOutputDeviceRouteController * _outputDeviceRouteController;
    MRUListeningMode * _primaryListeningMode;
    MRUListeningMode * _secondaryListeningMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUListeningModeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (nonatomic, readonly) MRUListeningMode *primaryListeningMode;
@property (nonatomic, readonly) MRUListeningMode *secondaryListeningMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithOutputDeviceRouteController:(id)arg1;
- (id)listeningModeErrorMessageForOutputDevice:(id)arg1;
- (id)outputDeviceRouteController;
- (id)primaryListeningMode;
- (id)secondaryListeningMode;
- (void)setDelegate:(id)arg1;
- (void)setListeningMode:(id)arg1 forOutputDeviceRoute:(id)arg2 previousListeningMode:(id)arg3 completion:(id /* block */)arg4;
- (void)setPrimaryListeningMode:(id)arg1 completion:(id /* block */)arg2;
- (void)setSecondaryListeningMode:(id)arg1 completion:(id /* block */)arg2;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg1;
- (void)updateListeningMode;

@end
