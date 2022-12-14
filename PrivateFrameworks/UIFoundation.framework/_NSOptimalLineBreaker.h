/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _NSOptimalLineBreaker : NSObject {
    long long  _alignment;
    bool  _allowsHyphenation;
    NSAttributedString * _attributedString;
    bool  _avoidsRivers;
    UIFont * _cachedHyphenFont;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _cachedHyphenFontRange;
    double  _cachedHyphenWidth;
    unsigned long long  _chosenLineBreakCount;
    struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; unsigned short x7; double x8; } * _chosenLineBreaks;
    bool  _compressesLeftAlignedText;
    NSMutableSet * _consumedNBSPRanges;
    bool  _expandsGlyphs;
    double  _expansionPower;
    double  _expansionWeight;
    double  _firstLineMaxWidth;
    double  _hyphenationFactor;
    double  _hyphenationFactorHyphenPenalty;
    double  _justifiedHyphenPenalty;
    NSString * _lineBreakAlgorithm;
    unsigned long long  _lineBreakCapacity;
    unsigned long long  _lineBreakCount;
    unsigned long long  _lineBreakStrategy;
    struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; unsigned short x7; double x8; } * _lineBreaks;
    bool  _lineBreaksValid;
    long long  _lineCountAdjustment;
    struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; double x3; double x4; } * _lineInfos;
    _NSLineMetrics * _lineMetrics;
    bool  _lineMetricsValid;
    struct __CFArray { } * _lines;
    bool  _linesValid;
    struct __CFLocale { } * _locale;
    double  _maxContract;
    double  _maxExpand;
    double  _maxGlyphContract;
    double  _maxGlyphExpand;
    unsigned long long  _minNonRuntLength;
    unsigned long long  _minPostHyphenLength;
    unsigned long long  _minPreHyphenLength;
    double  _minimumLastLineLength;
    _NSLineBreakerNodePool * _nodePool;
    double  _nonFirstLineMaxWidth;
    double  _nonJustifiedHyphenPenalty;
    double  _nonJustifiedStretchFactor;
    const struct __CTLine { } * _paragraphLine;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _paragraphRange;
    NSParagraphStyle * _paragraphStyle;
    double  _riverPenalty;
    double  _runtPenalty;
    bool  _shouldFillLastLine;
    double  _stretchClassMismatchPenalty;
    double  _textContainerWidth;
    double  _tolerance;
    double  _twoHyphenPenalty;
    bool  _usesHangingPunctuation;
    bool  _usesStretchClasses;
    struct __CFStringTokenizer { } * _wordBoundaryTokenizer;
    struct __CFStringTokenizer { } * _wordTokenizer;
    bool  _wrappingValid;
}

@property (nonatomic) bool allowsHyphenation;
@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic) bool avoidsRivers;
@property (nonatomic) bool compressesLeftAlignedText;
@property (nonatomic, readonly) NSString *debugString;
@property (nonatomic) bool expandsGlyphs;
@property (nonatomic) double hyphenationFactor;
@property (nonatomic, copy) NSString *lineBreakAlgorithm;
@property (nonatomic) unsigned long long lineBreakStrategy;
@property (nonatomic) long long lineCountAdjustment;
@property (nonatomic) const struct __CFLocale { }*locale;
@property (nonatomic) double minimumLastLineLength;
@property (nonatomic) const struct __CTLine { }*paragraphLine;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } paragraphRange;
@property (nonatomic) bool shouldFillLastLine;
@property (nonatomic) double textContainerWidth;
@property (nonatomic) bool usesHangingPunctuation;
@property (nonatomic) bool usesStretchClasses;

- (void).cxx_destruct;
- (bool)allowsHyphenation;
- (id)attributedString;
- (bool)avoidsRivers;
- (bool)compressesLeftAlignedText;
- (void)dealloc;
- (id)debugString;
- (void)enumerateLineBreaksInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBlock:(id /* block */)arg2;
- (bool)expandsGlyphs;
- (double)hyphenationFactor;
- (id)init;
- (void)invalidateWrapping;
- (void)layout;
- (const struct __CTLine { }*)lineAtIndex:(unsigned long long)arg1 lineInfo:(out struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; double x3; double x4; }*)arg2;
- (id)lineBreakAlgorithm;
- (struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; unsigned short x7; double x8; })lineBreakAtIndex:(unsigned long long)arg1;
- (unsigned long long)lineBreakStrategy;
- (unsigned long long)lineCount;
- (long long)lineCountAdjustment;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; double x3; double x4; })lineInfoAtIndex:(unsigned long long)arg1;
- (const struct __CFLocale { }*)locale;
- (double)minimumLastLineLength;
- (const struct __CTLine { }*)paragraphLine;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRange;
- (void)setAllowsHyphenation:(bool)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setAttributedString:(id)arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAvoidsRivers:(bool)arg1;
- (void)setCompressesLeftAlignedText:(bool)arg1;
- (void)setExpandsGlyphs:(bool)arg1;
- (void)setHyphenationFactor:(double)arg1;
- (void)setLineBreakAlgorithm:(id)arg1;
- (void)setLineBreakStrategy:(unsigned long long)arg1;
- (void)setLineCountAdjustment:(long long)arg1;
- (void)setLocale:(struct __CFLocale { }*)arg1;
- (void)setMinimumLastLineLength:(double)arg1;
- (void)setOptions:(id)arg1;
- (void)setParagraphLine:(struct __CTLine { }*)arg1;
- (void)setParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setShouldFillLastLine:(bool)arg1;
- (void)setTextContainerWidth:(double)arg1;
- (void)setUsesHangingPunctuation:(bool)arg1;
- (void)setUsesStretchClasses:(bool)arg1;
- (bool)shouldFillLastLine;
- (double)textContainerWidth;
- (bool)usesHangingPunctuation;
- (bool)usesStretchClasses;

@end
