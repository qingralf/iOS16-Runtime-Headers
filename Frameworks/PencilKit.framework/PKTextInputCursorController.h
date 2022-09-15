/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKTextInputCursorController : NSObject <PKTextInputDebugStateReporting> {
    UIResponder<UITextInput> * __lastKnownTextInputResponder;
    double  __lastSwitchToIdleWritingStateTime;
    PKTextInputSettings * __textInputSettings;
    bool  __trackedLastKnownTextInputResponderWindowIsKey;
    bool  _cursorShouldFlash;
    long long  _cursorStyle;
    <PKTextInputCursorControllerDelegate> * _delegate;
    bool  _forceStrong;
    bool  _forceVisible;
    <UITextCursorAssertion> * _ghostAssertion;
    UITextCursorAssertionController * _implicitAssertionController;
    bool  _isCursorTemporarilyStrong;
    double  _lastElementTapToFocusTimestamp;
    bool  _lastKnownTextInputResponderWasKey;
    long long  _mode;
    <UITextCursorAssertion> * _nonBlinkingAssertion;
    <UITextCursorAssertion> * _nonVisibleAssertion;
    id /* block */  _restoreAfterFlashCursorBlock;
    PKTextInputSettings * _settings;
}

@property (setter=_setLastKnownTextInputResponder:, nonatomic) UIResponder<UITextInput> *_lastKnownTextInputResponder;
@property (nonatomic) double _lastSwitchToIdleWritingStateTime;
@property (nonatomic, retain) PKTextInputSettings *_textInputSettings;
@property (setter=_setTrackedLastKnownTextInputResponderWindowIsKey:, nonatomic) bool _trackedLastKnownTextInputResponderWindowIsKey;
@property (setter=_setCursorStyle:, nonatomic) long long cursorStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKTextInputCursorControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceStrong;
@property (nonatomic) bool forceVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextCursorAssertionController *implicitAssertionController;
@property (nonatomic, readonly) bool isCursorTemporarilyStrong;
@property (nonatomic, readonly) bool isCursorWeak;
@property (nonatomic) double lastElementTapToFocusTimestamp;
@property (setter=_setMode:, nonatomic) long long mode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentAssertionController;
- (void)_delayedRevokeTemporaryStrongMode;
- (void)_handleDidPerformReturn:(id)arg1;
- (void)_handleUndoRedo:(id)arg1;
- (id)_implicitAssertionControllerIfPossible;
- (id)_lastKnownTextInputResponder;
- (double)_lastSwitchToIdleWritingStateTime;
- (void)_setCursorStyle:(long long)arg1;
- (void)_setLastKnownTextInputResponder:(id)arg1;
- (void)_setMode:(long long)arg1;
- (void)_setTrackedLastKnownTextInputResponderWindowIsKey:(bool)arg1;
- (id)_textInputSettings;
- (void)_textInputSourceDidChange:(id)arg1;
- (bool)_trackedLastKnownTextInputResponderWindowIsKey;
- (void)_updateAssertionsForCurrentState;
- (void)_updateCursorStyle;
- (id)_windowForResponder:(id)arg1;
- (void)_writingStateEvaluationTimerExpired;
- (bool)canMakeCursorWeakForResponder:(id)arg1;
- (long long)cursorStyle;
- (void)customHighlightFeedbackVisibilityDidChange;
- (id)delegate;
- (void)firstResponderDidChange:(id)arg1;
- (void)flashCursor;
- (bool)forceStrong;
- (bool)forceVisible;
- (id)implicitAssertionController;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)invalidateGhostAssertion;
- (void)invalidateNonBlinkingAssertion;
- (void)invalidateNonVisibleAssertion;
- (bool)isCursorTemporarilyStrong;
- (bool)isCursorWeak;
- (void)keyWindowDidChange:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)lastElementTapToFocusTimestamp;
- (bool)lastKnownTextInputResponderWindowIsKey;
- (void)makeCursorStrong;
- (void)makeCursorTemporarilyStrongWhileWriting;
- (void)makeCursorTemporarilyStrongWithTimeout:(double)arg1;
- (void)makeCursorWeak;
- (long long)mode;
- (void)removeAllAssertions;
- (void)reportDebugStateDescription:(id /* block */)arg1;
- (void)resetCursorTemporarilyStrongState;
- (void)resetState;
- (bool)scribbleEnabled;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceStrong:(bool)arg1;
- (void)setForceVisible:(bool)arg1;
- (void)setImplicitAssertionController:(id)arg1;
- (void)setLastElementTapToFocusTimestamp:(double)arg1;
- (void)set_lastSwitchToIdleWritingStateTime:(double)arg1;
- (void)set_textInputSettings:(id)arg1;
- (void)simulateFirstResponderChangeForTesting:(id)arg1;
- (void)simulateResetCursorTimeout;
- (void)textInputSourceDidChange:(id)arg1;
- (void)writingStateDidChange;

@end