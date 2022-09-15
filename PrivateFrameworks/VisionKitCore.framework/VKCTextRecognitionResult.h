/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKCTextRecognitionResult : NSObject <NSSecureCoding> {
    NSAttributedString * _attributedText;
    NSDictionary * _attributedTextRangeMapping;
    NSString * _buildString;
    CROutputRegion * _crTitleOutput;
    NSDate * _creationDate;
    NSArray * _dataDetectors;
    NSArray * _filteredNormalizedRectangleQuads;
    NSArray * _filteredTextDataDetectors;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    unsigned long long  _imageSource;
    NSArray * _inspectableElements;
    NSArray * _mrcDataDetectors;
    NSArray * _rectangleObservations;
    NSArray * _requestBarcodeSymbologies;
    NSArray * _requestLocales;
    NSIndexSet * _richPasteBoardIndexes;
    CRDocumentOutputRegion * _sourceDocument;
    VNDocumentObservation * _sourceVNDocument;
    NSString * _text;
    <VKCTextRecognitionResultTextDelegate> * _textDelegate;
    NSArray * _textElements;
    NSString * _title;
    VNRecognizedTextBlockObservation * _titleObservation;
    NSArray * _unfilteredDataDetectors;
    NSArray * _unfilteredTextDataDetectors;
}

@property (nonatomic, readonly) NSArray *allLineQuads;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, retain) NSDictionary *attributedTextRangeMapping;
@property (nonatomic, retain) NSString *buildString;
@property (nonatomic, retain) CROutputRegion *crTitleOutput;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSArray *dataDetectors;
@property (nonatomic, retain) NSArray *filteredNormalizedRectangleQuads;
@property (nonatomic, copy) NSArray *filteredTextDataDetectors;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) unsigned long long imageSource;
@property (nonatomic, copy) NSArray *inspectableElements;
@property (nonatomic, copy) NSArray *mrcDataDetectors;
@property (nonatomic, retain) NSArray *rectangleObservations;
@property (nonatomic, retain) NSArray *requestBarcodeSymbologies;
@property (nonatomic, retain) NSArray *requestLocales;
@property (nonatomic, retain) NSIndexSet *richPasteBoardIndexes;
@property (nonatomic, retain) CRDocumentOutputRegion *sourceDocument;
@property (nonatomic, retain) VNDocumentObservation *sourceVNDocument;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) <VKCTextRecognitionResultTextDelegate> *textDelegate;
@property (nonatomic, copy) NSArray *textElements;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) VNRecognizedTextBlockObservation *titleObservation;
@property (nonatomic, readonly) NSArray *unfilteredDataDetectors;
@property (nonatomic, copy) NSArray *unfilteredTextDataDetectors;
@property (nonatomic, readonly) VKTextRange *vk_documentRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustTextRangeToSelectableRange:(id)arg1;
- (id)allLineQuads;
- (id)attributedText;
- (id)attributedTextRangeMapping;
- (id)buildString;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestBlockOfType:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2 maxDistance:(long long)arg3;
- (bool)containsRichPasteboardElementsForRange:(id)arg1;
- (id)convertPlainTextRangeToAttributedRange:(id)arg1;
- (unsigned long long)countOfDataDetectorsWithTypes:(unsigned long long)arg1;
- (id)crTitleOutput;
- (id)creationDate;
- (id)dataDetectors;
- (id)documentElements;
- (id)elementMatchingOutputRegion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filterTextRectanglesFromRectangleObservations:(id)arg1;
- (id)filteredNormalizedRectangleQuads;
- (id)filteredTextDataDetectors;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })imageSize;
- (unsigned long long)imageSource;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentObservation:(id)arg1 mrcDataDetectors:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (id)inspectableElements;
- (id)markerFormatForListItem:(id)arg1;
- (id)mrcDataDetectors;
- (id)normalizedSelectionQuadsForRange:(id)arg1;
- (id)rangeOfLineForPosition:(id)arg1;
- (id)rangeOfWordForPosition:(id)arg1;
- (id)rectangleObservations;
- (id)requestBarcodeSymbologies;
- (id)requestLocales;
- (id)richPasteBoardIndexes;
- (id)selectionRectsForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)selectionRectsForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 addTranscript:(bool)arg4;
- (void)setAttributedText:(id)arg1;
- (void)setAttributedTextRangeMapping:(id)arg1;
- (void)setBuildString:(id)arg1;
- (void)setCrTitleOutput:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDataDetectors:(id)arg1;
- (void)setFilteredNormalizedRectangleQuads:(id)arg1;
- (void)setFilteredTextDataDetectors:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageSource:(unsigned long long)arg1;
- (void)setInspectableElements:(id)arg1;
- (void)setMrcDataDetectors:(id)arg1;
- (void)setRectangleObservations:(id)arg1;
- (void)setRequestBarcodeSymbologies:(id)arg1;
- (void)setRequestLocales:(id)arg1;
- (void)setRichPasteBoardIndexes:(id)arg1;
- (void)setSourceDocument:(id)arg1;
- (void)setSourceVNDocument:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextDelegate:(id)arg1;
- (void)setTextElements:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleObservation:(id)arg1;
- (void)setUnfilteredTextDataDetectors:(id)arg1;
- (bool)shouldShowTextMarkerForMarkerType:(long long)arg1;
- (id)smallestSelectableRangeForPosition:(id)arg1;
- (id)sourceDocument;
- (id)sourceVNDocument;
- (id)text;
- (id)textDelegate;
- (id)textElements;
- (id)title;
- (id)titleObservation;
- (id)unfilteredDataDetectors;
- (id)unfilteredTextDataDetectors;
- (void)updateAttributedText;
- (void)updateInspectableElements;
- (void)updateMRCDataDetectors:(id)arg1;
- (void)updateTextDataDetectors;
- (void)updateVNDocumentObservation:(id)arg1;
- (id)vk_documentRange;
- (id)zeroWidthStringOfLength:(unsigned long long)arg1;

@end