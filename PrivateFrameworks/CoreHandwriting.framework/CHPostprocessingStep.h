/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHPostprocessingStep : NSObject

@property (readonly) bool modifiesOriginalTokens;

+ (id)applyTransform:(id /* block */)arg1 toAllTokens:(id)arg2;
+ (void)expandPathsWithCorrectedTokens:(id)arg1 fromTokens:(id)arg2 correctedTokenPath:(id)arg3 originalTokenPath:(id)arg4;
+ (bool)shouldAdjustColumnsFromPostprocessingStepOptions:(id)arg1;

- (bool)modifiesOriginalTokens;
- (id)process:(id)arg1 options:(id)arg2;

@end
