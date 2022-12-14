/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRScreenMirroringUIControllingObserver : MRScreenMirroringObserver {
    MRScreenMirroringObserver * _internalObserver;
    <MRScreenMirroringQuickControlsUIControllable> * _uiController;
}

@property (nonatomic, readonly) MRScreenMirroringObserver *internalObserver;
@property (nonatomic, retain) <MRScreenMirroringQuickControlsUIControllable> *uiController;

- (void).cxx_destruct;
- (void)_mirrorStateChanged:(bool)arg1 screenType:(unsigned int)arg2;
- (id)init;
- (id)internalObserver;
- (void)setUiController:(id)arg1;
- (id)uiController;

@end
