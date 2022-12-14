/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationController : NSObject <UIAdaptivePresentationControllerDelegate, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, VTUIDictationDataSharingOptInPresentationDelegate, _UIDictationPrivacySheetControllerDelegate, _UITextInputUserInteractionDelegate, _UITouchPhaseChangeDelegate> {
    NSString * __inputDelegateClassName;
    bool  __shouldUseDictationSearchFieldBehavior;
    NSString * _activationIdentifier;
    bool  _canUndoOrRedo;
    UIDictationSerializableResults * _candidateDictationSerializableResults;
    bool  _connectionWasAlreadyAliveForStatisticsLogging;
    UIKeyboardInputMode * _currentInputModeForDictation;
    AFAnalyticsTurnBasedInstrumentationContext * _currentInstrumentationContext;
    NSString * _currentKeyboardPrimaryLanguage;
    long long  _currentShortcutType;
    bool  _deferredCancellationRequested;
    NSString * _detectedLanguage;
    bool  _detectingUtterances;
    UIDictationConnection * _dictationConnection;
    int  _dictationInputModeNotifierToken;
    bool  _dictationInputModeSwitchStarted;
    NSArray * _dictationLanguages;
    UIWindow * _dictationPresenterWindow;
    _UIDictationPrivacySheetController * _dictationPrivacySheetController;
    unsigned long long  _dictationSourceType;
    UIDictationTipController * _dictationTipController;
    bool  _didToggleSoftwareKeyboardVisibleForDictation;
    bool  _didUseOfflineDictation;
    bool  _discardNextHypothesis;
    NSString * _fallbackDictationLanguage;
    id /* block */  _finalResultsOperation;
    bool  _finalizingRecognizedUtterance;
    _UITapTapHoldGestureRecognizer * _hardwareShortcutRecognizer;
    _UIVoiceCommandButtonTapGestureRecognizer * _hardwareVoiceCommandKeyRecognizer;
    bool  _hasCheckedForLeadingSpaceOnce;
    bool  _hasDictated;
    bool  _hasInsertedAtLeastOneSerializedDictationResult;
    bool  _hasPreheated;
    NSTimer * _idleTimerResetTimer;
    bool  _ignoreFinalizePhrases;
    bool  _ignoreIdleDetectionCallback;
    long long  _ignoreRTIChanges;
    unsigned short  _initialCharacterAfterSelectionForAsyncDelegate;
    NSString * _initialDictationLanguage;
    unsigned short  _initialPreviousCharacterForAsyncDelegate;
    UIDictationInputModeOptions * _inputModeOptions;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _insertionRange;
    NSString * _interactionIdentifier;
    bool  _isOfflineMetricsSessionActive;
    UIKeyboardInputMode * _keyboardInputModeToReturn;
    NSString * _language;
    double  _lastAnimationUpdateTimeStamp;
    id  _lastCorrectionIdentifier;
    NSString * _lastHypothesis;
    long long  _lastKeyboardMetricEvent;
    NSString * _lastMessageKeyboardLanguage;
    long long  _lastOfflineDictationMetricEvent;
    NSString * _lastRecognitionText;
    bool  _localSpeechRecognitionForced;
    bool  _logAppEnterBackground;
    NSString * _modelInfo;
    bool  _modelessUsedAtLeastOnce;
    _UIDictationTelephonyMonitor * _monitor;
    NSMutableArray * _pendingEdits;
    bool  _performingStreamingEditingOperation;
    NSString * _postfixTextForStart;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _preCommandExecutionPositionRange;
    UIDictationConnectionPreferences * _preferences;
    NSString * _prefixTextForStart;
    bool  _prevForceDisplayOverridePlaceholder;
    unsigned short  _previousCharacter;
    NSString * _previousHypothesis;
    id /* block */  _privacySheetDismissalHandler;
    unsigned long long  _reasonType;
    bool  _recievingResults;
    NSTimer * _recordingLimitTimer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _relativeRangeBefore;
    bool  _secureOfflineOnlySpeechRecognition;
    NSDictionary * _selectedAttributesForDictation;
    bool  _selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
    bool  _selectionStartIsStartOfParagraph;
    bool  _selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
    NSString * _selectionTextForStart;
    bool  _sendButtonPressedDuringDictation;
    bool  _shouldResumeDictation;
    bool  _shouldStayInDictationInputMode;
    bool  _shouldSuppressSoftwareKeyboard;
    NSString * _smartLanguageSelectionOverrideLanguage;
    unsigned long long  _stateHandler;
    bool  _streamingAnimationActive;
    CADisplayLink * _streamingAnimationDisplayLink;
    UIDictationStreamingOperations * _streamingOperations;
    bool  _suppressDelegateTextInputDidChangeNotifications;
    NSString * _targetHypothesis;
    long long  _updatingDocument;
    bool  _wantsAvailabilityMonitoringWhenAppActive;
    bool  cancelledByWaitingForLocalResults;
}

@property (nonatomic, copy) NSString *_inputDelegateClassName;
@property (nonatomic) bool _shouldUseDictationSearchFieldBehavior;
@property (nonatomic, copy) NSString *activationIdentifier;
@property (nonatomic) bool canUndoOrRedo;
@property (nonatomic, retain) UIDictationSerializableResults *candidateDictationSerializableResults;
@property (nonatomic, retain) UIKeyboardInputMode *currentInputModeForDictation;
@property (nonatomic, retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationContext;
@property (nonatomic, copy) NSString *currentKeyboardPrimaryLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detectedLanguage;
@property (getter=isDetectingUtterances, nonatomic) bool detectingUtterances;
@property (nonatomic, retain) NSArray *dictationLanguages;
@property (nonatomic, retain) UIWindow *dictationPresenterWindow;
@property (nonatomic, retain) _UIDictationPrivacySheetController *dictationPrivacySheetController;
@property (nonatomic, readonly, retain) NSNumber *dictationRequestOrigin;
@property (nonatomic) unsigned long long dictationSourceType;
@property (nonatomic, retain) UIDictationTipController *dictationTipController;
@property (nonatomic) bool didToggleSoftwareKeyboardVisibleForDictation;
@property (nonatomic) bool discardNextHypothesis;
@property (nonatomic, copy) NSString *fallbackDictationLanguage;
@property (getter=isFinalizingRecognizedUtterance, nonatomic) bool finalizingRecognizedUtterance;
@property (nonatomic) bool hasCheckedForLeadingSpaceOnce;
@property (nonatomic) bool hasInsertedAtLeastOneSerializedDictationResult;
@property (nonatomic) bool hasPreheated;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *idleTimerResetTimer;
@property (nonatomic) bool ignoreFinalizePhrases;
@property (nonatomic) bool ignoreIdleDetectionCallback;
@property (nonatomic) unsigned short initialCharacterAfterSelectionForAsyncDelegate;
@property (nonatomic, copy) NSString *initialDictationLanguage;
@property (nonatomic) unsigned short initialPreviousCharacterForAsyncDelegate;
@property (nonatomic, retain) UIDictationInputModeOptions *inputModeOptions;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } insertionRange;
@property (nonatomic, copy) NSString *interactionIdentifier;
@property (nonatomic, retain) UIKeyboardInputMode *keyboardInputModeToReturn;
@property (nonatomic, copy) id lastCorrectionIdentifier;
@property (nonatomic, copy) NSString *lastHypothesis;
@property (nonatomic, copy) NSString *lastMessageKeyboardLanguage;
@property (nonatomic, copy) NSString *lastRecognitionText;
@property (nonatomic) bool localSpeechRecognitionForced;
@property (nonatomic) bool logAppEnterBackground;
@property (nonatomic, copy) NSString *modelInfo;
@property (nonatomic) bool modelessUsedAtLeastOnce;
@property (nonatomic, retain) NSMutableArray *pendingEdits;
@property (nonatomic) bool performingStreamingEditingOperation;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } preCommandExecutionPositionRange;
@property (nonatomic) unsigned short previousCharacter;
@property (nonatomic, copy) NSString *previousHypothesis;
@property (nonatomic) unsigned long long reasonType;
@property (nonatomic) bool secureOfflineOnlySpeechRecognition;
@property (nonatomic) bool selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
@property (nonatomic) bool selectionStartIsStartOfParagraph;
@property (nonatomic) bool selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
@property (getter=isSendButtonPressedDuringDictation, nonatomic) bool sendButtonPressedDuringDictation;
@property (nonatomic) bool shouldResumeDictation;
@property (nonatomic) bool shouldStayInDictationInputMode;
@property (nonatomic) bool shouldSuppressSoftwareKeyboard;
@property (copy) NSString *smartLanguageSelectionOverrideLanguage;
@property (nonatomic) unsigned long long stateHandler;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressDelegateTextInputDidChangeNotifications;
@property (nonatomic, copy) NSString *targetHypothesis;
@property (nonatomic) bool wantsAvailabilityMonitoringWhenAppActive;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)UIDictationInstrumentaionLocalIdentifierWithLocalString:(id)arg1;
+ (id)UIDictationLanguageSourceType:(unsigned long long)arg1;
+ (int)UIDictationStartStopReasonToInstrumentationDictationEndPointType:(unsigned long long)arg1;
+ (int)UIDictationStartStopReasonToInstrumentationInvocationSourceType:(unsigned long long)arg1;
+ (id)UIDictationStartStopReasonTypeDescription:(unsigned long long)arg1;
+ (bool)_applicationIsActive;
+ (bool)_checkTraitsSupportDictation:(id)arg1;
+ (id)_dictationLog;
+ (id)activeConnection;
+ (id)activeInstance;
+ (id)activeSLSDictationLanguages;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (id)arrayWithTextEntriesRemoved:(id)arg1;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (bool)canPerformDictation;
+ (bool)canShareDictationData;
+ (bool)canUndoOrRedo;
+ (bool)checkTraitsSupportDictation:(id)arg1;
+ (unsigned long long)commandIdentifierWithStringIdentifier:(id)arg1;
+ (id)convertEditValuesToHashByPosition:(id)arg1 dictationResultEditType:(id)arg2;
+ (bool)dictationInfoIsOnScreen;
+ (bool)dictationIsFunctional;
+ (id)dictionaryWithTextEntriesRemoved:(id)arg1;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (bool)fetchCurrentInputModeSupportsDictation;
+ (id)firstParameterTextWithParameters:(id)arg1;
+ (void)instrumentationDictationAlternativeSelectedWithInstrumentationContext:(id)arg1 originalText:(id)arg2 replacementText:(id)arg3 replacementIndex:(unsigned long long)arg4 alternativesAvailableCount:(unsigned long long)arg5 dictationLanguage:(id)arg6;
+ (void)instrumentationDictationAlternativesViewedWithInstrumentationContext:(id)arg1 alternatives:(id)arg2 dictationLanguage:(id)arg3;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(bool)arg3 autocapitalizationType:(long long)arg4 useServerCapitalization:(bool)arg5;
+ (bool)isDictationSearchBarButtonVisible;
+ (bool)isEventFromMessagesSendButton:(id)arg1 inspectResponderChain:(bool)arg2;
+ (bool)isInputDelegateSafariAddressBar;
+ (bool)isListening;
+ (bool)isRunning;
+ (bool)isRunningInTypeAndTalkMode;
+ (bool)isTextViewOnStarkScreen:(id)arg1;
+ (void)keyboardDidShow;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 shouldPause:(bool)arg3;
+ (id)logAutoPunctuationEdit:(id)arg1 deletionValues:(id)arg2 substitutionValues:(id)arg3 withContext:(id)arg4;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1 reason:(unsigned long long)arg2;
+ (void)logDictationString:(id)arg1;
+ (id)mergePunctuationInsertAndDeleteIntoSubstituteTypeForSameStartEnd:(id)arg1 deleteEditValues:(id)arg2;
+ (void)onDidBecomeActive;
+ (void)onWillResignActive;
+ (void)performOperations:(id /* block */)arg1 keyboardShifted:(bool)arg2;
+ (void)poppedLastStreamingOperation;
+ (bool)remoteCanDictateCurrentInputMode;
+ (void)remoteMicrophoneCapabilityChanged;
+ (id)removeTextIfNeeded:(id)arg1;
+ (id)removeTextIfNeeded:(id)arg1 metadata:(id)arg2;
+ (id)secondParameterTextWithParameters:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 autocapitalization:(long long)arg3 capitalization:(unsigned long long)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 capitalization:(unsigned long long)arg3;
+ (double)serverManualEndpointingThreshold;
+ (id)sharedInstance;
+ (bool)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (bool)shouldForwardEventsToInputSystemUI;
+ (bool)shouldForwardInInputSystemUI;
+ (bool)shouldHideCursorForTextView:(id)arg1;
+ (bool)shouldHideSelectionUIForTextView:(id)arg1;
+ (bool)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (bool)shouldPreferOnDeviceRecognition;
+ (bool)shouldPreferOnlineRecognition;
+ (bool)shouldRemoveTextEntries;
+ (bool)shouldRemoveTextEntries:(id)arg1;
+ (void)siriPreferencesChanged;
+ (id)slsDictationLanguages;
+ (unsigned long long)specificReasonTypeMicButtonOnKeyboard;
+ (unsigned long long)specificReasonTypeMicButtonOnKeyboardWithInputSwitcher;
+ (bool)starkSceneExists;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (id)stringForState:(int)arg1;
+ (id)stringForViewMode:(int)arg1;
+ (id)stripNonPunctuationEditValues:(id)arg1;
+ (bool)takesPressesBegan:(id)arg1 forTextView:(id)arg2;
+ (bool)takesPressesChanged:(id)arg1 forTextView:(id)arg2;
+ (bool)takesPressesEnded:(id)arg1 forTextView:(id)arg2;
+ (id)textRelatedMetadataKeys;
+ (void)updateLandingView;
+ (bool)usingServerManualEndpointingThreshold;
+ (int)viewMode;
+ (void)viewServiceDidBecomeActive;
+ (void)viewServiceWillResignActive;
+ (id)whitelistedDictationDictionariesFromMetadataDictionaries:(id)arg1;
+ (id)whitelistedDictationDictionaryFromMetadata:(id)arg1;
+ (id)whitelistedDictationMetadataKeys;

- (void).cxx_destruct;
- (bool)_allowsMicsInSearchFieldForLanguageIdentifiers:(id)arg1;
- (id)_assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (void)_beginEnableDictationPrompt;
- (void)_beginOfflineMetricsSession;
- (void)_clearExistingText;
- (void)_completeStartDictationWithContinuation:(id /* block */)arg1;
- (id)_containingSearchBarForView:(id)arg1;
- (id)_currentLanguageForOfflineDictationMetrics;
- (void)_deleteBackwardIntoText;
- (void)_displayLinkFired:(id)arg1;
- (void)_displaySecureContentsAsPlainText:(bool)arg1 afterDelay:(double)arg2;
- (void)_endEnableDictationPromptAnimated:(bool)arg1;
- (void)_endOfflineMetricsSession;
- (id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 documentTextInRange:(id*)arg4 forHypothesis:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_getRangeOfString:(id)arg1 inDocumentText:(id)arg2;
- (void)_handleDataSharingSheetDecision;
- (void)_handlePrivacySheetDismissal;
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2 forHypothesis:(id)arg3;
- (id)_inputDelegateClassName;
- (void)_insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)_markOfflineDictationInputMetricEvent;
- (void)_presentAlertForDictationInputModeOfType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentDataSharingOptInAlertWithCompletion:(id /* block */)arg1;
- (void)_presentOptInAlertWithCompletion:(id /* block */)arg1;
- (void)_presentPrivacySheetForType:(long long)arg1 completion:(id /* block */)arg2;
- (id)_rangeByExtendingRange:(id)arg1 backward:(long long)arg2 forward:(long long)arg3 inputDelegate:(id)arg4;
- (void)_requestDocumentContextWithAsyncDelegate:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_resolvedIsDictationPossible;
- (void)_restartDictation;
- (void)_restoreInsertionPointPositionWithKeyboard:(id)arg1 originalPositionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 targetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 payloadRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 contextBefore:(bool)arg5;
- (void)_runFinalizeOperation;
- (void)_runFinalizeOperation:(bool)arg1;
- (void)_setFinalResultHandler:(id /* block */)arg1;
- (void)_setupHypothesisAsFinalResults;
- (bool)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (bool)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (bool)_shouldUseDictationSearchFieldBehavior;
- (void)_startDictationWithContinuation:(id /* block */)arg1;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)_touchPhaseChangedForTouch:(id)arg1;
- (void)_updateLastHypothesis:(id)arg1 WithNewHypothesis:(id)arg2;
- (id)activationIdentifier;
- (float)audioLevel;
- (void)beginUserInteraction:(long long)arg1;
- (bool)canHandleCommandIdentifier:(unsigned long long)arg1;
- (bool)canUndoOrRedo;
- (void)cancelDictationForResponderIfNeeded:(id)arg1 wantsKeyboard:(bool)arg2 isPencil:(bool)arg3;
- (void)cancelDictationForTextStoreChangesInResponder:(id)arg1;
- (void)cancelRecordingLimitTimer;
- (id)candidateDictationSerializableResults;
- (void)clearKeyboardTrackpadModeIfNeeded;
- (void)clearSelectedTextAndLastDictationResult;
- (void)clearTextFieldPlaceholder;
- (id)commandTargetStringWithDictationCommandIdentifier:(unsigned long long)arg1 parameters:(id)arg2;
- (void)completeStartConnection;
- (void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)connectionForStatisticsLogging;
- (long long)consecutiveKeyboardDeleteEventCount;
- (id)currentInputModeForDictation;
- (id)currentInstrumentationContext;
- (id)currentKeyboardPrimaryLanguage;
- (bool)currentViewModeSupportsDictationMics;
- (bool)dataSharingDecided;
- (void)dealloc;
- (id)detectedLanguage;
- (id /* block */)dictationBlockForToken:(id)arg1;
- (id)dictationConnection;
- (void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;
- (void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2;
- (void)dictationConnection:(id)arg1 didFailRecognitionWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didFailRecordingWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(bool)arg3;
- (void)dictationConnection:(id)arg1 didReceiveCandidateDictationSerializableResults:(id)arg2;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(bool)arg4 final:(bool)arg5;
- (void)dictationConnection:(id)arg1 didStartRecordingWithOptions:(id)arg2;
- (void)dictationConnection:(id)arg1 filterState:(id)arg2 processFilteredToken:(id)arg3 forFinalize:(bool)arg4;
- (bool)dictationConnection:(id)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(id)arg3;
- (void)dictationConnection:(id)arg1 finalizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 secureInput:(bool)arg5;
- (void)dictationConnection:(id)arg1 receivedInterpretation:(id)arg2 languageModel:(id)arg3 secureInput:(bool)arg4;
- (void)dictationConnection:(id)arg1 updateOptions:(id)arg2;
- (id)dictationConnection:(id)arg1 willFilterTokensWithLanguageModel:(id)arg2 forFinalize:(bool)arg3;
- (void)dictationConnectionDidCancel:(id)arg1;
- (void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)arg1;
- (void)dictationConnectionDidCancelRecording:(id)arg1;
- (void)dictationConnectionDidEndRecording:(id)arg1;
- (void)dictationConnectionDidFinish:(id)arg1;
- (void)dictationConnectionDidStartRecording:(id)arg1;
- (void)dictationConnectionWillStartRecording:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (bool)dictationDisabledDueToTelephonyActivity;
- (bool)dictationEnabled;
- (bool)dictationIsModifyingText;
- (id)dictationLanguages;
- (id)dictationPresenterWindow;
- (id)dictationPrivacySheetController;
- (void)dictationPrivacySheetControllerDidFinish:(id)arg1;
- (id)dictationRequestOrigin;
- (bool)dictationSearchFieldUIEnabled;
- (bool)dictationSearchFieldUISupportsTraitCollection:(id)arg1;
- (void)dictationShortCutKey:(id)arg1;
- (unsigned long long)dictationSourceType;
- (id)dictationTipController;
- (id)dictationUIState;
- (bool)didRecognizeCommandWithIdentifier:(id)arg1 strings:(id)arg2 parameters:(id)arg3;
- (void)didShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 instrumentationContext:(id)arg4 dictationLanguage:(id)arg5;
- (bool)didToggleSoftwareKeyboardVisibleForDictation;
- (bool)discardNextHypothesis;
- (void)dismissDictationView:(id)arg1;
- (void)dismissSoftwareKeyboardIfNeeded;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)endSmartLanguageSelectionOverride;
- (void)endUserInteraction;
- (void)errorAnimationDidFinish;
- (id)fallbackDictationLanguage;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (void)finalizeDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(bool)arg4 finalResult:(bool)arg5;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(bool)arg4;
- (void)forceDictationReturnToKeyboardInputMode;
- (bool)handleASRVoiceCommandRecognizedWithUtterance:(id)arg1 commandIdentifier:(id)arg2 parameters:(id)arg3;
- (bool)handleCommandRecognizedWithPhrases:(id)arg1 locale:(id)arg2;
- (void)handleHardwareKeyboardGesture;
- (bool)hasCheckedForLeadingSpaceOnce;
- (bool)hasInsertedAtLeastOneSerializedDictationResult;
- (bool)hasPreheated;
- (id)idleTimerResetTimer;
- (bool)ignoreFinalizePhrases;
- (bool)ignoreIdleDetectionCallback;
- (id)init;
- (unsigned short)initialCharacterAfterSelectionForAsyncDelegate;
- (id)initialDictationLanguage;
- (unsigned short)initialPreviousCharacterForAsyncDelegate;
- (id)inputModeOptions;
- (void)insertLastHypothesisAsFinalResultLocally;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertionRange;
- (void)instrumentationDictationContextEmitInstrumentation;
- (void)instrumentationDictationTranscriptionMetadataEmitInstrumentationWithDictationResult:(id)arg1;
- (id)interactionIdentifier;
- (bool)isDetectingUtterances;
- (bool)isDictationPaused;
- (bool)isFallingBackToMonolingualDictation;
- (bool)isFinalizingRecognizedUtterance;
- (bool)isIgnoringDocumentChanges;
- (bool)isIgnoringRTIChanges;
- (bool)isRecievingResults;
- (bool)isSendButtonPressedDuringDictation;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardInputModeChanged:(id)arg1;
- (id)keyboardInputModeToReturn;
- (void)keyboardWillHide:(id)arg1;
- (id)language;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (id)lastCorrectionIdentifier;
- (id)lastHypothesis;
- (id)lastMessageKeyboardLanguage;
- (id)lastRecognitionText;
- (bool)localSpeechRecognitionForced;
- (void)logAlternativeSelected:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;
- (bool)logAppEnterBackground;
- (void)logDidAcceptDictationResult:(id)arg1 reasonType:(unsigned long long)arg2;
- (void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5;
- (void)markDictationTipDeletionEvent:(id)arg1 deletedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)markDictationTipInputEvent;
- (void)markDictationTipKeyboardEventReset;
- (void)markKeyboardDeleteMetricEvent;
- (void)markKeyboardDidReset;
- (void)markKeyboardInputMetricEvent;
- (float)maxRecordingLength;
- (id)modelInfo;
- (bool)modelessUsedAtLeastOnce;
- (void)notifyDocumentStateChangedOrResumeDictation:(id)arg1;
- (void)optInButtonPressedForPresenter:(id)arg1;
- (void)optOutButtonPressedForPresenter:(id)arg1;
- (void)overrideSmartLanguageSelection:(id)arg1;
- (void)pauseDictation;
- (id)pendingEdits;
- (void)performIgnoringDocumentChanges:(id /* block */)arg1;
- (void)performIgnoringRTIChanges:(id /* block */)arg1;
- (bool)performingStreamingEditingOperation;
- (void)postUIDictationControllerDictationDidFinish;
- (void)postUIKeyboardDictationAvailabilityDidChangeNotification;
- (id)postfixTextForInputDelegate:(id)arg1 wordCount:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preCommandExecutionPositionRange;
- (void)preferencesChanged:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1 wordCount:(unsigned long long)arg2;
- (void)preheatIfNecessary;
- (void)prepareDoubleTapShortcutGesture:(id)arg1;
- (void)prepareStartDictationKeyboardGestures;
- (void)prepareStartDictationKeyboardGesturesForDelegate:(id)arg1;
- (void)prepareVoiceCommandSingleTapGesture:(id)arg1;
- (void)presentAlertOfType:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (unsigned short)previousCharacter;
- (id)previousHypothesis;
- (unsigned long long)reasonType;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (bool)remoteHasMicrophone;
- (void)removeSelectedText;
- (void)removeStartDictationKeyboardGestures;
- (void)resetDictation;
- (void)resetIdleTimer;
- (void)resetSpeechRecognition;
- (void)resignFirstResponderWhenIdleIfNeeded;
- (void)restoreTextFieldPlaceholder;
- (struct __CFString { }*)resultTransformForLanguageModel:(id)arg1;
- (id)resultWithTrailingSpace:(id)arg1;
- (void)resumeDictation;
- (void)resumeSpeechRecognitionWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3;
- (void)searchString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)searchString:(id)arg1 contextBefore:(id)arg2 contextAfter:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)secureOfflineOnlySpeechRecognition;
- (id)selectedTextForInputDelegate:(id)arg1;
- (bool)selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
- (bool)selectionStartIsStartOfParagraph;
- (bool)selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
- (void)sendButtonPressedInMessages:(id)arg1;
- (void)setActivationIdentifier:(id)arg1;
- (void)setCanUndoOrRedo:(bool)arg1;
- (void)setCandidateDictationSerializableResults:(id)arg1;
- (void)setCurrentInputModeForDictation:(id)arg1;
- (void)setCurrentInstrumentationContext:(id)arg1;
- (void)setCurrentKeyboardPrimaryLanguage:(id)arg1;
- (void)setDetectedLanguage:(id)arg1;
- (void)setDetectingUtterances:(bool)arg1;
- (void)setDictationInfoOnScreenNotifyKey:(bool)arg1;
- (void)setDictationInputMode:(id)arg1;
- (void)setDictationLanguages:(id)arg1;
- (void)setDictationPresenterWindow:(id)arg1;
- (void)setDictationPrivacySheetController:(id)arg1;
- (void)setDictationSourceType:(unsigned long long)arg1;
- (void)setDictationTipController:(id)arg1;
- (void)setDidToggleSoftwareKeyboardVisibleForDictation:(bool)arg1;
- (void)setDiscardNextHypothesis:(bool)arg1;
- (void)setFallbackDictationLanguage:(id)arg1;
- (void)setFinalizingRecognizedUtterance:(bool)arg1;
- (void)setHasCheckedForLeadingSpaceOnce:(bool)arg1;
- (void)setHasInsertedAtLeastOneSerializedDictationResult:(bool)arg1;
- (void)setHasPreheated:(bool)arg1;
- (void)setIdleTimerDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setIdleTimerResetTimer:(id)arg1;
- (void)setIgnoreFinalizePhrases:(bool)arg1;
- (void)setIgnoreIdleDetectionCallback:(bool)arg1;
- (void)setInitialCharacterAfterSelectionForAsyncDelegate:(unsigned short)arg1;
- (void)setInitialDictationLanguage:(id)arg1;
- (void)setInitialPreviousCharacterForAsyncDelegate:(unsigned short)arg1;
- (void)setInputModeOptions:(id)arg1;
- (void)setInsertionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setKeyboardInputModeToReturn:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLastCorrectionIdentifier:(id)arg1;
- (void)setLastHypothesis:(id)arg1;
- (void)setLastMessageKeyboardLanguage:(id)arg1;
- (void)setLastRecognitionText:(id)arg1;
- (void)setLocalSpeechRecognitionForced:(bool)arg1;
- (void)setLogAppEnterBackground:(bool)arg1;
- (void)setModelInfo:(id)arg1;
- (void)setModelessUsedAtLeastOnce:(bool)arg1;
- (void)setPendingEdits:(id)arg1;
- (void)setPerformingStreamingEditingOperation:(bool)arg1;
- (void)setPreCommandExecutionPositionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPreviousCharacter:(unsigned short)arg1;
- (void)setPreviousHypothesis:(id)arg1;
- (void)setReasonType:(unsigned long long)arg1;
- (void)setSecureOfflineOnlySpeechRecognition:(bool)arg1;
- (void)setSelectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate:(bool)arg1;
- (void)setSelectionStartIsStartOfParagraph:(bool)arg1;
- (void)setSelectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate:(bool)arg1;
- (void)setSendButtonPressedDuringDictation:(bool)arg1;
- (void)setShadowState:(int)arg1;
- (void)setShouldResumeDictation:(bool)arg1;
- (void)setShouldStayInDictationInputMode:(bool)arg1;
- (void)setShouldSuppressSoftwareKeyboard:(bool)arg1;
- (void)setSmartLanguageSelectionOverrideLanguage:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStateHandler:(unsigned long long)arg1;
- (void)setSuppressDelegateTextInputDidChangeNotifications:(bool)arg1;
- (void)setTargetHypothesis:(id)arg1;
- (void)setWantsAvailabilityMonitoringWhenAppActive:(bool)arg1;
- (void)set_inputDelegateClassName:(id)arg1;
- (void)set_shouldUseDictationSearchFieldBehavior:(bool)arg1;
- (void)setupForAsyncDelegate;
- (void)setupForDictationStart;
- (void)setupForStreamingDictationStart;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (bool)shouldOverrideManualEndpointing;
- (bool)shouldPresentOptInAlert;
- (bool)shouldResumeDictation;
- (bool)shouldStayInDictationInputMode;
- (bool)shouldSuppressSoftwareKeyboard;
- (bool)shouldUseDictationSearchFieldBehavior;
- (void)showSoftwareKeyboardIfNeeded;
- (bool)smartLanguageSelectionOverridden;
- (id)smartLanguageSelectionOverrideLanguage;
- (unsigned long long)specificReasonTypeFromApplicationDuringDictation;
- (void)startConnectionWithContinuation:(id /* block */)arg1;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationWithContinuation:(id /* block */)arg1;
- (void)startHelpMessageDisplay;
- (void)startRecordingLimitTimer;
- (int)state;
- (unsigned long long)stateHandler;
- (void)stopAndCancelDictationIfNeededWithReasonType:(unsigned long long)arg1;
- (void)stopAndCancelDictationWithReasonType:(unsigned long long)arg1;
- (void)stopDictation:(bool)arg1;
- (void)stopDictationAndResignFirstResponder;
- (void)stopDictationByTimer;
- (void)stopDictationIgnoreFinalizePhrases;
- (void)stopHelpMessageDisplay;
- (void)stopIdleTimerResetTimer;
- (id)streamingOperations;
- (bool)supportsDictationLanguage:(id)arg1 error:(id*)arg2;
- (bool)supportsInputMode:(id)arg1 error:(id*)arg2;
- (bool)supportsSendVoiceCommand;
- (bool)suppressDelegateTextInputDidChangeNotifications;
- (void)switchToDictationInputMode;
- (void)switchToDictationInputModeWithOptions:(id)arg1;
- (void)switchToDictationInputModeWithTouch:(id)arg1;
- (void)switchToDictationInputModeWithTouch:(id)arg1 options:(id)arg2;
- (void)switchToDictationInputModeWithTouch:(id)arg1 withKeyboardInputMode:(id)arg2 options:(id)arg3;
- (void)switchToDictationLanguage:(id)arg1;
- (void)switchToKeyboardInputModeIfNeeded;
- (id)targetHypothesis;
- (void)updateDoubleTapShortcutWithPreference:(long long)arg1;
- (bool)useAutomaticEndpointing;
- (void)voiceCommandSingleTapKey:(id)arg1;
- (bool)wantsAvailabilityMonitoringWhenAppActive;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (void)_createDictationPresenterWindowIfNecessary;
- (void)cancelDictation;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)startDictation;
- (void)stopDictation;
- (void)updateLastHypothesis:(id)arg1 WithNewHypothesis:(id)arg2;

@end
