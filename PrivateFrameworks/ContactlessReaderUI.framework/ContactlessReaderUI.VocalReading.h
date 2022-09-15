/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactlessReaderUI.framework/ContactlessReaderUI
 */

@interface ContactlessReaderUI.VocalReading : NSObject <AVSpeechSynthesizerDelegate> {
    void handler;
    void inDelay;
    void stoppedInDelay;
    void voiceSynthesizer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;

@end