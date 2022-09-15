/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {
    union { 
        long long integerValue; 
        struct { 
            unsigned int displayed : 1; 
            unsigned int autoDisplayMode : 1; 
        } fields; 
    }  _autocorrectionListUIState;
    NSDictionary * _autofillContext;
    unsigned long long  _autofillMode;
    unsigned long long  _autofillSubMode;
    NSArray * _auxiliaryInputModeLanguages;
    NSString * _clientIdentifier;
    TIKeyboardCandidate * _currentCandidate;
    NSUUID * _documentIdentifier;
    TIDocumentState * _documentState;
    BKSHIDEventAuthenticationMessage * _eventAuthenticationMessage;
    TIInputContextHistory * _inputContextHistory;
    NSString * _inputForMarkedText;
    NSString * _inputMode;
    TIKeyboardLayout * _keyLayout;
    TIKeyboardLayoutState * _layoutState;
    union { 
        long long integerValue; 
        struct { 
            unsigned int userSelectedCurrentCandidate : 1; 
            unsigned int shouldSkipCandidateSelection : 1; 
            unsigned int suppressingCandidateSelection : 1; 
            unsigned int needsCandidateMetadata : 1; 
            unsigned int keyboardEventsLagging : 1; 
            unsigned int hardwareKeyboardMode : 1; 
            unsigned int splitKeyboardMode : 1; 
            unsigned int floatingKeyboardMode : 1; 
            unsigned int wordLearningEnabled : 1; 
            unsigned int autocorrectionEnabled : 1; 
            unsigned int shortcutConversionEnabled : 1; 
            unsigned int candidateSelectionPredictionEnabled : 1; 
            unsigned int autocapitalizationEnabled : 1; 
            unsigned int canSendCurrentLocation : 1; 
            unsigned int isScreenLocked : 1; 
            unsigned int longPredictionListEnabled : 1; 
            unsigned int needAutofill : 1; 
            unsigned int needOneTimeCodeAutofill : 1; 
            unsigned int landscapeOrientation : 1; 
            unsigned int omitEmojiCandidates : 1; 
            unsigned int emojiSearchMode : 1; 
            unsigned int emojiPopoverMode : 1; 
            unsigned int canSuggestSupplementalItemsForCurrentSelection : 1; 
        } fields; 
    }  _mask;
    NSString * _recipientIdentifier;
    NSString * _responseContext;
    NSString * _searchStringForMarkedText;
    TIKeyboardSecureCandidateRenderTraits * _secureCandidateRenderTraits;
    int  _shiftState;
    NSArray * _statisticChanges;
    unsigned long long  _supplementalLexiconIdentifier;
    NSArray * _supportedPayloadIds;
    TITextInputTraits * _textInputTraits;
}

@property (nonatomic) bool autocapitalizationEnabled;
@property (nonatomic) unsigned long long autocapitalizationType;
@property (nonatomic) bool autocorrectionEnabled;
@property (nonatomic) bool autocorrectionListUIAutoDisplayMode;
@property (nonatomic) bool autocorrectionListUIDisplayed;
@property (nonatomic, retain) NSDictionary *autofillContext;
@property (nonatomic) unsigned long long autofillMode;
@property (nonatomic) unsigned long long autofillSubMode;
@property (nonatomic, copy) NSArray *auxiliaryInputModeLanguages;
@property (nonatomic) bool canSendCurrentLocation;
@property (nonatomic) bool canSuggestSupplementalItemsForCurrentSelection;
@property (nonatomic) bool candidateSelectionPredictionEnabled;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) TIKeyboardCandidate *currentCandidate;
@property (nonatomic, retain) NSUUID *documentIdentifier;
@property (nonatomic, retain) TIDocumentState *documentState;
@property (nonatomic) bool emojiPopoverMode;
@property (nonatomic) bool emojiSearchMode;
@property (nonatomic, copy) BKSHIDEventAuthenticationMessage *eventAuthenticationMessage;
@property (nonatomic) bool floatingKeyboardMode;
@property (nonatomic) bool hardwareKeyboardMode;
@property (nonatomic, retain) TIInputContextHistory *inputContextHistory;
@property (nonatomic, copy) NSString *inputForMarkedText;
@property (nonatomic, copy) NSString *inputMode;
@property (nonatomic) bool isScreenLocked;
@property (nonatomic, retain) TIKeyboardLayout *keyLayout;
@property (nonatomic) bool keyboardEventsLagging;
@property (nonatomic) unsigned long long keyboardType;
@property (nonatomic) bool landscapeOrientation;
@property (nonatomic, copy) TIKeyboardLayoutState *layoutState;
@property (nonatomic) bool longPredictionListEnabled;
@property (nonatomic) bool needAutofill;
@property (nonatomic, readonly) bool needContactAutofill;
@property (nonatomic) bool needOneTimeCodeAutofill;
@property (nonatomic) bool needsCandidateMetadata;
@property (nonatomic) bool omitEmojiCandidates;
@property (nonatomic, copy) NSString *recipientIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic, copy) NSString *searchStringForMarkedText;
@property (nonatomic, copy) TIKeyboardSecureCandidateRenderTraits *secureCandidateRenderTraits;
@property (nonatomic) bool secureTextEntry;
@property (nonatomic) int shiftState;
@property (nonatomic) bool shortcutConversionEnabled;
@property (nonatomic, readonly) bool shouldOutputFullwidthSpace;
@property (nonatomic) bool shouldSkipCandidateSelection;
@property (nonatomic) bool splitKeyboardMode;
@property (nonatomic, copy) NSArray *statisticChanges;
@property (nonatomic) unsigned long long supplementalLexiconIdentifier;
@property (nonatomic, copy) NSArray *supportedPayloadIds;
@property (nonatomic) bool suppressingCandidateSelection;
@property (nonatomic, retain) TITextInputTraits *textInputTraits;
@property (nonatomic) bool userSelectedCurrentCandidate;
@property (nonatomic) bool wordLearningEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createTextInputTraitsIfNecessary;
- (bool)autocapitalizationEnabled;
- (unsigned long long)autocapitalizationType;
- (bool)autocorrectionEnabled;
- (bool)autocorrectionListUIAutoDisplayMode;
- (bool)autocorrectionListUIDisplayed;
- (id)autofillContext;
- (unsigned long long)autofillMode;
- (unsigned long long)autofillSubMode;
- (id)auxiliaryInputModeLanguages;
- (bool)canSendCurrentLocation;
- (bool)canSuggestSupplementalItemsForCurrentSelection;
- (bool)candidateSelectionPredictionEnabled;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCandidate;
- (id)description;
- (id)documentIdentifier;
- (id)documentState;
- (bool)emojiPopoverMode;
- (bool)emojiSearchMode;
- (void)encodeWithCoder:(id)arg1;
- (id)eventAuthenticationMessage;
- (bool)floatingKeyboardMode;
- (bool)hardwareKeyboardMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inputContextHistory;
- (id)inputForMarkedText;
- (id)inputMode;
- (bool)isEqual:(id)arg1;
- (bool)isScreenLocked;
- (id)keyLayout;
- (bool)keyboardEventsLagging;
- (unsigned long long)keyboardType;
- (bool)landscapeOrientation;
- (id)layoutState;
- (bool)longPredictionListEnabled;
- (bool)needAutofill;
- (bool)needContactAutofill;
- (bool)needOneTimeCodeAutofill;
- (bool)needsCandidateMetadata;
- (bool)omitEmojiCandidates;
- (id)recipientIdentifier;
- (id)responseContext;
- (id)searchStringForMarkedText;
- (id)secureCandidateRenderTraits;
- (bool)secureTextEntry;
- (void)setAutocapitalizationEnabled:(bool)arg1;
- (void)setAutocapitalizationType:(unsigned long long)arg1;
- (void)setAutocorrectionEnabled:(bool)arg1;
- (void)setAutocorrectionListUIAutoDisplayMode:(bool)arg1;
- (void)setAutocorrectionListUIDisplayed:(bool)arg1;
- (void)setAutofillContext:(id)arg1;
- (void)setAutofillMode:(unsigned long long)arg1;
- (void)setAutofillSubMode:(unsigned long long)arg1;
- (void)setAuxiliaryInputModeLanguages:(id)arg1;
- (void)setCanSendCurrentLocation:(bool)arg1;
- (void)setCanSuggestSupplementalItemsForCurrentSelection:(bool)arg1;
- (void)setCandidateSelectionPredictionEnabled:(bool)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setCurrentCandidate:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setEmojiPopoverMode:(bool)arg1;
- (void)setEmojiSearchMode:(bool)arg1;
- (void)setEventAuthenticationMessage:(id)arg1;
- (void)setFloatingKeyboardMode:(bool)arg1;
- (void)setHardwareKeyboardMode:(bool)arg1;
- (void)setInputContextHistory:(id)arg1;
- (void)setInputForMarkedText:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setIsScreenLocked:(bool)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setKeyboardEventsLagging:(bool)arg1;
- (void)setKeyboardType:(unsigned long long)arg1;
- (void)setLandscapeOrientation:(bool)arg1;
- (void)setLayoutState:(id)arg1;
- (void)setLongPredictionListEnabled:(bool)arg1;
- (void)setNeedAutofill:(bool)arg1;
- (void)setNeedOneTimeCodeAutofill:(bool)arg1;
- (void)setNeedsCandidateMetadata:(bool)arg1;
- (void)setOmitEmojiCandidates:(bool)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setSearchStringForMarkedText:(id)arg1;
- (void)setSecureCandidateRenderTraits:(id)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setShiftState:(int)arg1;
- (void)setShortcutConversionEnabled:(bool)arg1;
- (void)setShouldSkipCandidateSelection:(bool)arg1;
- (void)setSplitKeyboardMode:(bool)arg1;
- (void)setStatisticChanges:(id)arg1;
- (void)setSupplementalLexiconIdentifier:(unsigned long long)arg1;
- (void)setSupportedPayloadIds:(id)arg1;
- (void)setSuppressingCandidateSelection:(bool)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setUserSelectedCurrentCandidate:(bool)arg1;
- (void)setWordLearningEnabled:(bool)arg1;
- (int)shiftState;
- (bool)shortcutConversionEnabled;
- (bool)shouldOutputFullwidthSpace;
- (bool)shouldSkipCandidateSelection;
- (bool)splitKeyboardMode;
- (id)statisticChanges;
- (unsigned long long)supplementalLexiconIdentifier;
- (id)supportedPayloadIds;
- (bool)suppressingCandidateSelection;
- (id)textInputTraits;
- (bool)userSelectedCurrentCandidate;
- (bool)wordLearningEnabled;

@end