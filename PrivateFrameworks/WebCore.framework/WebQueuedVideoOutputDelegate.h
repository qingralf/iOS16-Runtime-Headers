/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebQueuedVideoOutputDelegate : NSObject <AVPlayerItemOutputPullDelegate> {
    struct WeakPtr<WebCore::QueuedVideoOutput, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { 
            void *m_ptr; 
        } m_impl; 
    }  _parent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithParent:(void*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;

@end
