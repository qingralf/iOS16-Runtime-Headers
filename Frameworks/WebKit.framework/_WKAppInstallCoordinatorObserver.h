/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKAppInstallCoordinatorObserver : NSObject <IXAppInstallCoordinatorObserver> {
    struct WeakPtr<WebPushD::ICAppBundle, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { 
            void *m_ptr; 
        } m_impl; 
    }  _bundle;
}

@property /* Warning: unhandled struct encoding: '{WeakPtr<WebPushD::ICAppBundle' */ struct  bundle; /* unknown property attribute:  WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>>=^v}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WeakPtr<WebPushD::ICAppBundle, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *x_1_1_1; } x1; })bundle;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forApplicationRecord:(id)arg2;
- (id)initWithICAppBundle:(void*)arg1;
- (void)setBundle:(struct WeakPtr<WebPushD::ICAppBundle, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *x_1_1_1; } x1; })arg1;

@end
