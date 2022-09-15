/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRTextDecodingUtils : NSObject

+ (id)characterRangesForTokens:(id)arg1 fromActivation:(id)arg2 falsePositiveFiltering:(bool)arg3 usingCharacterTokens:(bool)arg4;
+ (void)getBoundariesForRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 scale:(float)arg5 featureImageSize:(struct CGSize { double x1; double x2; })arg6 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 rotatedRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 radians:(float)arg9 model:(id)arg10 configuration:(id)arg11 paddingLeft:(int)arg12 paddingRight:(int)arg13 rangeOffset:(long long)arg14;
+ (void)getCharacterBoundariesForActivationRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 scale:(float)arg5 featureImageSize:(struct CGSize { double x1; double x2; })arg6 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 rotatedRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 radians:(float)arg9 model:(id)arg10 configuration:(id)arg11;
+ (void)getWordBoundariesForWhiteSpaceRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 scale:(float)arg5 featureImageSize:(struct CGSize { double x1; double x2; })arg6 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 rotatedRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 radians:(float)arg9 model:(id)arg10 configuration:(id)arg11 rangeOffset:(long long)arg12;
+ (id)tokenDelimiterRangesForTokens:(id)arg1 falsePositiveFiltering:(bool)arg2 usingCharacterTokens:(bool)arg3;
+ (id)tokenFilterPredicateFalsePositiveFiltering:(bool)arg1 keepWhitespaceToken:(bool)arg2;
+ (id)tokenSequenceStringForTokens:(id)arg1 falsePositiveFiltering:(bool)arg2 usingCharacterTokens:(bool)arg3;
+ (bool)validateProbability:(id)arg1 precisionThreshold:(double)arg2 withLM:(bool)arg3;
+ (id)wordTokensFromCharacterTokens:(id)arg1;

@end