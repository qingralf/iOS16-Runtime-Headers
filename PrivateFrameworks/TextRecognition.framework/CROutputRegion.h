/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CROutputRegion : NSObject <CRCodable, NSCopying, NSSecureCoding> {
    double  _baselineAngle;
    CRNormalizedQuad * _boundingQuad;
    NSArray * _candidates;
    NSArray * _children;
    int  _confidence;
    NSArray * _dataDetectorRegions;
    NSArray * _listRegions;
    NSArray * _paragraphRegions;
    CRNormalizedPolyline * _polygon;
    float  _rawConfidence;
    NSString * _recognizedLocale;
    bool  _shouldComputeBoundsFromChildren;
    bool  _shouldComputeTranscriptFromChildren;
    NSString * _text;
    CRTextFeature * _textFeature;
    NSArray * _transcriptComponents;
    unsigned long long  _type;
    NSUUID * _uuid;
}

@property (nonatomic) double baselineAngle;
@property (nonatomic, retain) CRNormalizedQuad *boundingQuad;
@property (nonatomic, retain) NSArray *candidates;
@property (nonatomic, retain) NSArray *children;
@property (nonatomic, readonly) bool computesBoundsFromChildren;
@property (nonatomic, readonly) bool computesTranscriptFromChildren;
@property (nonatomic) int confidence;
@property (readonly) NSArray *contentBaselines;
@property (nonatomic, retain) NSArray *dataDetectorRegions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *listRegions;
@property (nonatomic, retain) NSArray *paragraphRegions;
@property (nonatomic, retain) CRNormalizedPolyline *polygon;
@property (nonatomic) float rawConfidence;
@property (nonatomic, retain) NSString *recognizedLocale;
@property (nonatomic, readonly) NSArray *regionsSuitableForDataDetectorOutput;
@property (nonatomic) bool shouldComputeBoundsFromChildren;
@property (nonatomic) bool shouldComputeTranscriptFromChildren;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) CRTextFeature *textFeature;
@property (nonatomic, retain) NSArray *transcriptComponents;
@property (readonly) unsigned long long type;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, readonly) long long wordCount;

+ (Class)decodableClassFromClassName:(id)arg1;
+ (id)decodableClasses;
+ (id)decodableSubClasses;
+ (id)outputRegionWithCRCodableDataRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_computeTranscript;
- (id)_copyChildrenInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_enumerateRegions:(id)arg1 withTypes:(unsigned long long)arg2 recursively:(bool)arg3 usingBlock:(id /* block */)arg4;
- (unsigned long long)_indexOfNearestChildToPoint:(struct CGPoint { double x1; double x2; })arg1 returnFirstMatch:(bool)arg2;
- (unsigned long long)_indexOfNearestRegionToPoint:(struct CGPoint { double x1; double x2; })arg1 regions:(id)arg2 returnFirstMatch:(bool)arg3 distance:(double*)arg4;
- (void)_invalidateTranscript;
- (void)_invalidateTranscriptRecursivelyThrough:(Class)arg1;
- (void)_overrideSetBoundingQuad:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForChild:(id)arg1;
- (double)baselineAngle;
- (id)boundingQuad;
- (id)candidates;
- (id)children;
- (id)closestContentRegionOfType:(unsigned long long)arg1 toNormalizedPoint:(struct CGPoint { double x1; double x2; })arg2 maxPixelDistance:(long long)arg3;
- (id)computeDataDetectorRegions;
- (bool)computesBoundsFromChildren;
- (bool)computesTranscriptFromChildren;
- (int)confidence;
- (id)contentBaselines;
- (id)contentRegionOfType:(unsigned long long)arg1 containingTextAtIndex:(long long)arg2;
- (id)contentsWithTypes:(unsigned long long)arg1;
- (id)copyIncludingChildren:(bool)arg1 includingCandidates:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3;
- (id)crCodableDataRepresentation;
- (id)dataDetectorRegions;
- (id)decodeOutputsArrayFromData:(id)arg1 offset:(unsigned long long*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateContentsWithTypes:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(int)arg1 baselineAngle:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)joiningDelimiter;
- (id)listRegions;
- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)outputRegionWithContentsEndingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)outputRegionWithContentsOfQuad:(id)arg1;
- (id)outputRegionWithContentsStartingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)paragraphRegions;
- (id)polygon;
- (id)quadForTextInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfContentRegion:(id)arg1;
- (float)rawConfidence;
- (id)recognizedLocale;
- (id)regionsSuitableForDataDetectorOutput;
- (id)scriptCategoryResults;
- (id)selectedLocale;
- (id)sequenceScriptOutputResult;
- (void)setBaselineAngle:(double)arg1;
- (void)setBoundingQuad:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setConfidence:(int)arg1;
- (void)setDataDetectorRegions:(id)arg1;
- (void)setListRegions:(id)arg1;
- (void)setParagraphRegions:(id)arg1;
- (void)setPolygon:(id)arg1;
- (void)setRawConfidence:(float)arg1;
- (void)setRecognizedLocale:(id)arg1;
- (void)setShouldComputeBoundsFromChildren:(bool)arg1;
- (void)setShouldComputeTranscriptFromChildren:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextFeature:(id)arg1;
- (void)setTranscriptComponents:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldComputeBoundsFromChildren;
- (bool)shouldComputeTranscriptFromChildren;
- (id)text;
- (id)textFeature;
- (id)transcriptComponents;
- (unsigned long long)type;
- (id)uuid;
- (long long)wordCount;
- (long long)wordCountInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
