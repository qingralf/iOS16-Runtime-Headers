/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly> {
    struct WeakPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { 
            void *m_ptr; 
        } m_impl; 
    }  _fullscreenInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property void*fullscreenInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)fullscreenInterface;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
- (bool)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)setFullscreenInterface:(void*)arg1;

@end
