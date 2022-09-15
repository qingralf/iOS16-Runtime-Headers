/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleFormatter : NSObject <BRLTBrailleStateManagerDelegate, BRLTBrailleTranslationDelegateProtocol, NSCopying> {
    bool  _anyUnread;
    id  _appToken;
    bool  _currentUnread;
    int  _displayMode;
    BRLTScriptString * _emptyEditingScriptString;
    long long  _firstToken;
    unsigned long long  _generationID;
    int  _inputContractionMode;
    bool  _inputShowEightDot;
    long long  _lastToken;
    int  _lineFocus;
    long long  _lineOffset;
    int  _outputContractionMode;
    <BRLTBrailleStateManagerDelegate> * _outputDelegate;
    bool  _outputShowEightDot;
    bool  _showDotsSevenAndEight;
    BRLTBrailleStateManager * _stateManager;
    NSAttributedString * _statusText;
}

@property (nonatomic) bool anyUnread;
@property (nonatomic, retain) id appToken;
@property (nonatomic) bool currentUnread;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int displayMode;
@property (nonatomic, retain) BRLTScriptString *emptyEditingScriptString;
@property (nonatomic, readonly) long long firstToken;
@property (nonatomic, readonly) unsigned long long generationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int inputContractionMode;
@property (nonatomic, readonly) bool inputShowEightDot;
@property (nonatomic, readonly) long long lastToken;
@property (nonatomic) int lineFocus;
@property (nonatomic) long long lineOffset;
@property (nonatomic, readonly) int outputContractionMode;
@property (nonatomic) <BRLTBrailleStateManagerDelegate> *outputDelegate;
@property (nonatomic, readonly) bool outputShowEightDot;
@property (nonatomic, readonly) bool showDotsSevenAndEight;
@property (nonatomic, readonly) BRLTBrailleStateManager *stateManager;
@property (nonatomic, retain) NSAttributedString *statusText;
@property (readonly) Class superclass;

+ (void)resetEditingManager;

- (void).cxx_destruct;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 isEditableText:(bool)arg6;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 technical:(bool)arg6 isEditableText:(bool)arg7;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 token:(long long)arg5 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6 technical:(bool)arg7 isEditableText:(bool)arg8;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 token:(long long)arg5 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6 technical:(bool)arg7 isEditableText:(bool)arg8 paddingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg9 editingString:(id)arg10;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 token:(long long)arg3 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 isEditableText:(bool)arg5;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 token:(long long)arg3 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 technical:(bool)arg5 isEditableText:(bool)arg6;
- (bool)anyUnread;
- (id)appToken;
- (void)brailleDisplayDeletedCharacter:(id)arg1;
- (void)brailleDisplayInsertedCharacter:(id)arg1;
- (void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)clearPlaceholderForEditing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentUnread;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (void)didInsertScriptString:(id)arg1;
- (int)displayMode;
- (id)emptyEditingScriptString;
- (long long)firstToken;
- (unsigned long long)generationID;
- (bool)hasPlaceholderText;
- (id)initWithOutputContractionMode:(int)arg1 inputContractionMode:(int)arg2 outputShowEightDot:(bool)arg3 inputShowEightDot:(bool)arg4 showDotsSevenAndEight:(bool)arg5;
- (int)inputContractionMode;
- (bool)inputShowEightDot;
- (long long)lastToken;
- (int)lineFocus;
- (long long)lineOffset;
- (int)outputContractionMode;
- (id)outputDelegate;
- (bool)outputShowEightDot;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 locations:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)arg1;
- (void)replaceScriptStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3;
- (void)scriptSelectionDidChange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAnyUnread:(bool)arg1;
- (void)setAppToken:(id)arg1;
- (void)setBrailleLineOffset:(id)arg1 stringLineOffset:(long long)arg2;
- (void)setCurrentUnread:(bool)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setEmptyEditingScriptString:(id)arg1;
- (void)setLineFocus:(int)arg1;
- (void)setLineOffset:(long long)arg1;
- (void)setOutputDelegate:(id)arg1;
- (void)setStatusText:(id)arg1;
- (bool)showDotsSevenAndEight;
- (id)stateManager;
- (id)statusText;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id*)arg4;
- (void)translate;
- (void)translate:(bool)arg1;

@end