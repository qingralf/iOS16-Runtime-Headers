/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor
 */

@interface ICTextViewScrollState : NSObject {
    NSDate * _date;
    bool  _fromArchive;
    bool  _loadingFromDictionaryFailed;
    ICNote * _note;
    NSString * _noteIdentifier;
    unsigned long long  _topLeftCharIndexAtCapture;
    TTMergeableStringSelection * _topLeftStringSelection;
    double  _topLeftTextAttachmentScrollHeightOffsetRatio;
}

@property (nonatomic, readonly) bool captureIsWithinTimeThreshold;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=isFromArchive, nonatomic) bool fromArchive;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) bool loadingFromDictionaryFailed;
@property (nonatomic) ICNote *note;
@property (nonatomic, copy) NSString *noteIdentifier;
@property (nonatomic, readonly) double timeIntervalSinceCapture;
@property (nonatomic) unsigned long long topLeftCharIndexAtCapture;
@property (nonatomic, retain) TTMergeableStringSelection *topLeftStringSelection;
@property (nonatomic) double topLeftTextAttachmentScrollHeightOffsetRatio;
@property (nonatomic, readonly) unsigned long long topLeftTextCharacterIndex;

+ (id)scrollStateForAttachment:(id)arg1 inNote:(id)arg2;
+ (id)scrollStateForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inNote:(id)arg2;
+ (id)scrollStateForTextView:(id)arg1;

- (void).cxx_destruct;
- (bool)applyToTextView:(id)arg1;
- (bool)captureIsWithinTimeThreshold;
- (id)date;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 note:(id)arg2;
- (bool)isFromArchive;
- (bool)isValid;
- (bool)loadingFromDictionaryFailed;
- (id)note;
- (id)noteIdentifier;
- (void)setDate:(id)arg1;
- (void)setFromArchive:(bool)arg1;
- (void)setLoadingFromDictionaryFailed:(bool)arg1;
- (void)setNote:(id)arg1;
- (void)setNoteIdentifier:(id)arg1;
- (void)setTopLeftCharIndexAtCapture:(unsigned long long)arg1;
- (void)setTopLeftStringSelection:(id)arg1;
- (void)setTopLeftTextAttachmentScrollHeightOffsetRatio:(double)arg1;
- (double)timeIntervalSinceCapture;
- (unsigned long long)topLeftCharIndexAtCapture;
- (id)topLeftStringSelection;
- (double)topLeftTextAttachmentScrollHeightOffsetRatio;
- (unsigned long long)topLeftTextCharacterIndex;

@end