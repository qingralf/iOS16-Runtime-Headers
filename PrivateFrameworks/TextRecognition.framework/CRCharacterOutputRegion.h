/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRCharacterOutputRegion : CROutputRegion {
    CRNormalizedPolyline * _baseline;
}

@property (retain) CRNormalizedPolyline *baseline;

+ (id)characterWithText:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)characterWithTextFeature:(id)arg1 candidateIdx:(long long)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 confidenceThresholdProvider:(id)arg4;
+ (id)characterWithTextFeature:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 confidenceThresholdProvider:(id)arg3;

- (void).cxx_destruct;
- (id)baseline;
- (bool)computesBoundsFromChildren;
- (bool)computesTranscriptFromChildren;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3;
- (id)crCodableDataRepresentation;
- (id)init;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (bool)isEqual:(id)arg1;
- (id)joiningDelimiter;
- (void)setBaseline:(id)arg1;
- (unsigned long long)type;

@end