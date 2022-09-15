/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

@interface TIKeyboardInputManagerChinesePhonetic : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    bool  _acceptingCandidate;
    CIMCandidateData * _candidateData;
    NSString * _composedTextBeforeFirstSyllableLocked;
    TIConversionHistory * _conversionHistory;
    bool  _filterCandidatesUsingInputIndex;
    bool  _isCandidateSelected;
    bool  _isInAmbiguousMode;
    bool  _lockingPinyinSyllableSelection;
    TIMecabraIMLogger * _logger;
    TIKeyboardCandidateResultSet * _mostRecentCandidateResultSetPendingDisplay;
    NSOperationQueue * _operationQueue;
    NSArray * _pinyinSyllableCandidates;
    NSString * _remainingInput;
    NSMutableArray * _replacedAmbiguousPinyinSyllables;
    NSMutableArray * _replacementUnambiguousPinyinSyllables;
    unsigned long long  _selectedPinyinSyllableCandidateIndex;
    bool  _shouldAdvanceSyllableSelection;
    bool  _shouldClearBeforeContinuousPath;
    bool  _skipSetMarkedTextDuringInput;
    bool  _usesCandidateSelection;
}

@property (nonatomic, readonly) TIKeyboardCandidate *candidateForInlineTextSegmentation;
@property (nonatomic, copy) NSString *composedTextBeforeFirstSyllableLocked;
@property (nonatomic, retain) TIConversionHistory *conversionHistory;
@property (nonatomic, readonly) NSString *convertedInput;
@property (nonatomic) bool filterCandidatesUsingInputIndex;
@property (nonatomic, readonly) NSString *inputStringForSearch;
@property (nonatomic, readonly, copy) NSString *internalInputString;
@property (nonatomic, retain) TIMecabraIMLogger *logger;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *mostRecentCandidateResultSetPendingDisplay;
@property (getter=isPhraseBoundarySet, nonatomic, readonly) bool phraseBoundarySet;
@property (nonatomic, retain) NSArray *pinyinSyllableCandidates;
@property (nonatomic, copy) NSString *remainingInput;
@property (nonatomic, retain) NSMutableArray *replacedAmbiguousPinyinSyllables;
@property (nonatomic, retain) NSMutableArray *replacementUnambiguousPinyinSyllables;
@property (nonatomic) unsigned long long selectedPinyinSyllableCandidateIndex;
@property (nonatomic) bool shouldAdvanceSyllableSelection;
@property (nonatomic) bool shouldClearBeforeContinuousPath;
@property (nonatomic) bool skipSetMarkedTextDuringInput;
@property (nonatomic, readonly) NSString *unconvertedInput;
@property (nonatomic, readonly) bool usesGeometryModelData;

+ (id)ambiguousAndPinyinCharacterSet;
+ (id)ambiguousDefaults;
+ (id)ambiguousPinyinSet;
+ (id)directlyCommittedCharacterSetForEmptyInline;
+ (id)stringByRemovingSyllableSeparatorsFromString:(id)arg1;
+ (id)stringFallBackForTenKeyInput:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (void)_nop;
- (bool)_shouldCommitInputDirectly:(id)arg1;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(struct CGPoint { double x1; double x2; })arg3 firstDelete:(unsigned long long*)arg4;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)addInputToInternal:(id)arg1;
- (long long)addTouch:(id)arg1 shouldHitTest:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })analysisStringRange;
- (bool)canStartSentenceAfterString:(id)arg1;
- (id)candidateForInlineTextSegmentation;
- (id)candidateResultSet;
- (id)candidateResultSetByWaitingForResults:(bool)arg1;
- (void)checkAutocorrectionDictionaries;
- (void)clearDynamicDictionary;
- (void)clearInput;
- (void)clearPinyinSyllableSelection;
- (bool)commitsAcceptedCandidate;
- (id)composedTextBeforeFirstSyllableLocked;
- (id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2;
- (id)conversionHistory;
- (id)convertInputsToSyntheticInputUptoCount:(int)arg1;
- (id)convertedInput;
- (void)dealloc;
- (id)defaultCandidate;
- (id)deleteFromInput:(unsigned long long*)arg1;
- (id)didAcceptCandidate:(id)arg1;
- (void)didDeleteCandidates:(id)arg1;
- (bool)doesComposeText;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1 shouldBoundToInputCount:(bool)arg2;
- (id)externalStringToInternal:(id)arg1;
- (bool)filterCandidatesUsingInputIndex;
- (bool)generateReanalysisCandidatesIfAppropriate;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (void)handleAcceptedPinyinDisambiguationCandidate:(id)arg1 keyboardState:(id)arg2;
- (bool)handleDirectlyCommitForInput:(id)arg1 withContext:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (bool)hasExtensionEmojiCandidates;
- (bool)hasLockedSyllable;
- (bool)ignoresDeadKeys;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (bool)inputContinuesGB18030OrUnicodeLookupKey:(id)arg1;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)inputLocationChanged;
- (int)inputMethodType;
- (id)inputString;
- (id)inputStringForSearch;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (unsigned long long)internalInputCount;
- (unsigned long long)internalInputIndex;
- (id)internalInputString;
- (id)internalStringToExternal:(id)arg1;
- (bool)isPhraseBoundarySet;
- (bool)isSpecialInput:(id)arg1;
- (id)keyboardBehaviors;
- (id)keyboardConfigurationLayoutTag;
- (void)lastAcceptedCandidateCorrected;
- (void)loadAddressBook;
- (id)locale;
- (id)logger;
- (id)mostRecentCandidateResultSetPendingDisplay;
- (id)newInputManagerState;
- (id)phoneticSortingMethod;
- (unsigned long long)phraseBoundary;
- (id)pinyinSyllableCandidates;
- (unsigned long long)predictionOptions;
- (void)processDeleteInputs;
- (id)rawInputString;
- (id)remainingInput;
- (id)remapInput:(id)arg1 isFacemarkInput:(bool*)arg2;
- (id)replacedAmbiguousPinyinSyllables;
- (id)replacementUnambiguousPinyinSyllables;
- (void)resume;
- (void)revertLastDisambiguation;
- (id)searchStringForMarkedText;
- (id)segmentedPinyinStringFromString:(id)arg1;
- (unsigned long long)selectedPinyinSyllableCandidateIndex;
- (id)sentenceDelimitingCharacters;
- (void)setAutoCorrects:(bool)arg1;
- (void)setComposedTextBeforeFirstSyllableLocked:(id)arg1;
- (void)setConversionHistory:(id)arg1;
- (void)setFilterCandidatesUsingInputIndex:(bool)arg1;
- (void)setInHardwareKeyboardMode:(bool)arg1;
- (void)setInput:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setMostRecentCandidateResultSetPendingDisplay:(id)arg1;
- (void)setPhraseBoundary:(unsigned long long)arg1;
- (void)setPinyinSyllableCandidates:(id)arg1;
- (void)setRemainingInput:(id)arg1;
- (void)setReplacedAmbiguousPinyinSyllables:(id)arg1;
- (void)setReplacementUnambiguousPinyinSyllables:(id)arg1;
- (void)setSelectedPinyinSyllableCandidateIndex:(unsigned long long)arg1;
- (void)setShouldAdvanceSyllableSelection:(bool)arg1;
- (void)setShouldClearBeforeContinuousPath:(bool)arg1;
- (void)setSkipSetMarkedTextDuringInput:(bool)arg1;
- (void)shiftPinyinSyllableSelection;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (bool)shouldAdvanceSyllableSelection;
- (bool)shouldClearBeforeContinuousPath;
- (bool)shouldDelayUpdateComposedText;
- (bool)shouldExtendPriorWord;
- (bool)shouldLookForCompletionCandidates;
- (bool)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1;
- (bool)skipSetMarkedTextDuringInput;
- (id)sortingMethods;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (id)stringByPrependingConvertedCandidateTextToString:(id)arg1;
- (id)stringByStrippingConvertedCandidateTextFromString:(id)arg1;
- (bool)suppliesCompletions;
- (bool)supportsLearning;
- (bool)supportsNumberKeySelection;
- (bool)supportsPerRecipientLearning;
- (bool)supportsSetPhraseBoundary;
- (bool)suppressCompletionsForFieldEditor;
- (void)suspend;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(bool)arg3;
- (void)syncToLayoutState:(id)arg1;
- (id)unconvertedInput;
- (bool)updateCandidatesByWaitingForResults:(bool)arg1;
- (void)updateComposedText;
- (bool)usesAutoDeleteWord;
- (bool)usesCandidateSelection;
- (bool)usesGeometryModelData;
- (void)wordSearchEngineDidFindCandidates:(id)arg1 forOperation:(id)arg2;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)arg1;

@end