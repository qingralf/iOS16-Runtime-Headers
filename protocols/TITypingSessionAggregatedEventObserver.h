/* Generated by RuntimeBrowser.
 */

@protocol TITypingSessionAggregatedEventObserver <NSObject>

@required

- (void)sessionDidEnd:(TITypingSession *)arg1 aligned:(TITypingSessionAligned *)arg2;

@optional

- (void)candidateEntered:(TIKeyboardCandidate *)arg1 sessionID:(NSUUID *)arg2 timeStamp:(double)arg3 action:(unsigned long long)arg4;
- (void)candidateRevised:(TIKeyboardCandidate *)arg1 newCandidate:(TIKeyboardCandidate *)arg2 sessionID:(NSUUID *)arg3 timeStamp:(double)arg4 revisionAction:(unsigned long long)arg5;
- (void)tearDown;

@end