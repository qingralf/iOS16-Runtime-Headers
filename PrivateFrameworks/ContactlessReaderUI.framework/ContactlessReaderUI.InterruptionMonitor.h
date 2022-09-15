/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactlessReaderUI.framework/ContactlessReaderUI
 */

@interface ContactlessReaderUI.InterruptionMonitor : NSObject <CXCallObserverDelegate, SBSHardwareButtonEventConsuming> {
    void callObserver;
    void delegate;
    void hardwareButtonConsumer;
    void layoutMonitor;
}

- (void).cxx_destruct;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (id)init;

@end