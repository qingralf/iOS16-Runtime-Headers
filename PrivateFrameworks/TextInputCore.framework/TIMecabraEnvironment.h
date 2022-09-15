/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMecabraEnvironment : NSObject {
    NSMutableArray * _candidatesLeftOfCaret;
    NSMutableArray * _candidatesRightOfCaret;
    NSMutableArray * _candidatesToDelete;
    NSString * _leftDocumentContext;
    NSString * _leftDocumentContextCorrespondingToCandidates;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _leftDocumentContextCorrespondingToCandidatesRange;
    TIMecabraEnvironmentContextWrapper * _mecabraContextWrapper;
    NSString * _rightDocumentContext;
    NSString * _rightDocumentContextCorrespondingToCandidates;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rightDocumentContextCorrespondingToCandidatesRange;
    bool  _shouldAdjustOnAnalyze;
}

@property (nonatomic, retain) NSMutableArray *candidatesLeftOfCaret;
@property (nonatomic, retain) NSMutableArray *candidatesRightOfCaret;
@property (nonatomic, retain) NSMutableArray *candidatesToDelete;
@property (nonatomic, readonly) NSArray *contextCandidateSurfaces;
@property (nonatomic, readonly) NSDictionary *environmentDebuggingInformation;
@property (nonatomic, readonly) NSArray *inlineCandidateSurfaces;
@property (nonatomic, copy) NSString *leftDocumentContext;
@property (nonatomic, copy) NSString *leftDocumentContextCorrespondingToCandidates;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } leftDocumentContextCorrespondingToCandidatesRange;
@property (nonatomic, readonly) struct __Mecabra { }*mecabra;
@property (nonatomic, retain) TIMecabraEnvironmentContextWrapper *mecabraContextWrapper;
@property (nonatomic, readonly) NSArray *rightCandidateSurfaces;
@property (nonatomic, copy) NSString *rightDocumentContext;
@property (nonatomic, copy) NSString *rightDocumentContextCorrespondingToCandidates;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rightDocumentContextCorrespondingToCandidatesRange;
@property (nonatomic) bool shouldAdjustOnAnalyze;
@property (nonatomic) int textContentType;

+ (id)baseLayout;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 assetContentTypes:(id)arg2 inMecabra:(struct __Mecabra { }*)arg3 onQueue:(id)arg4;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 assetContentTypes:(id)arg2 onQueue:(id)arg3 withCompletionBlock:(id /* block */)arg4;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 inMecabra:(struct __Mecabra { }*)arg2 onQueue:(id)arg3;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 onQueue:(id)arg2 withCompletionBlock:(id /* block */)arg3;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForCHRecognizer:(id)arg1 inputModes:(id)arg2 onQueue:(id)arg3 oldMobileAssetChangeListener:(id)arg4;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForMecabra:(struct __Mecabra { }*)arg1 inputModes:(id)arg2 onQueue:(id)arg3 oldMobileAssetChangeListener:(id)arg4;
+ (int)maxNumberOfDrawSamples;
+ (void)removeMobileAssetListener:(id)arg1;

- (void).cxx_destruct;
- (id)_longestWubiCodeForCharacter:(id)arg1;
- (id)_wubiCodeForWord:(id)arg1;
- (void)acceptInlineCandidates;
- (void)addCandidateWithString:(id)arg1 toArray:(id)arg2;
- (bool)addNewCandidatesIfNecessary:(long long)arg1;
- (void)addPunctuationCandidateToContext:(id)arg1;
- (void)addStringCandidateToContext:(id)arg1;
- (void)addStringCandidateToContextInternal:(id)arg1;
- (void)adjustEnvironment:(long long)arg1;
- (void)adjustEnvironmentDirectly:(long long)arg1;
- (void)adjustEnvironmentOnAction:(long long)arg1;
- (void)analyzeCandidateContextWithSplit:(bool)arg1;
- (bool)analyzeInput:(id)arg1 options:(unsigned long long)arg2;
- (bool)analyzeString:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)candidateIndex;
- (id)candidatesLeftOfCaret;
- (id)candidatesRightOfCaret;
- (id)candidatesToDelete;
- (void)commitPredictionCandidate:(void*)arg1;
- (void)compareDocumentAndEnvironmentCandidates;
- (void)completelyCommitInlineCandidate:(void*)arg1;
- (id)contactNameWubiCodePairsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)contextCandidateSurfaces;
- (void)createNewCandidatesFromDocumentContext;
- (void)declareEndOfSentence;
- (bool)documentContextIsEmpty;
- (id)environmentDebuggingInformation;
- (id)findSupplementalLexiconCandidatesSurroundingCursor;
- (id)initWithMecabraEngine:(struct __Mecabra { }*)arg1 language:(int)arg2;
- (id)inlineCandidateSurfaces;
- (void)insertCandidateWithString:(id)arg1 intoArray:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)leftDocumentContext;
- (id)leftDocumentContextCorrespondingToCandidates;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })leftDocumentContextCorrespondingToCandidatesRange;
- (struct __Mecabra { }*)mecabra;
- (id)mecabraContextWrapper;
- (void)partiallyCommitInlineCandidate:(void*)arg1;
- (bool)predictionAnalyzeWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2;
- (id)readingForWubiWord:(id)arg1;
- (void)reset;
- (void)revertInlineCandidate;
- (void)revertLearningOfCandidateIfNecessary;
- (id)rightCandidateSurfaces;
- (id)rightDocumentContext;
- (id)rightDocumentContextCorrespondingToCandidates;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rightDocumentContextCorrespondingToCandidatesRange;
- (void)setAppContext:(id)arg1;
- (void)setCandidateIndex:(long long)arg1;
- (void)setCandidatesLeftOfCaret:(id)arg1;
- (void)setCandidatesRightOfCaret:(id)arg1;
- (void)setCandidatesToDelete:(id)arg1;
- (void)setGeometryModel:(void*)arg1 modelData:(struct __CFArray { }*)arg2;
- (void)setKeyboardLayout:(id)arg1;
- (void)setLeftDocumentContext:(id)arg1;
- (void)setLeftDocumentContextCorrespondingToCandidates:(id)arg1;
- (void)setLeftDocumentContextCorrespondingToCandidatesRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLeftDocumentContextInternal:(id)arg1;
- (void)setMecabraContextWrapper:(id)arg1;
- (void)setPrivateMode:(bool)arg1;
- (void)setRightDocumentContext:(id)arg1;
- (void)setRightDocumentContextCorrespondingToCandidates:(id)arg1;
- (void)setRightDocumentContextCorrespondingToCandidatesRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setShouldAdjustOnAnalyze:(bool)arg1;
- (void)setShuangpinType:(int)arg1;
- (void)setTextContentType:(int)arg1;
- (bool)shouldAdjustOnAnalyze;
- (int)textContentType;
- (void)updateCursorPosition;
- (id)wubiAnnotationForCandidate:(id)arg1;

@end