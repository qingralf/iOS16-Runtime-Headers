/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMPlumServiceUtils : NSObject

+ (id)CDMTokenChainToUPPLTokenization:(id)arg1;
+ (id)CDMTokenToUPPLToken:(id)arg1;
+ (id)NLv4EmbeddingTensorToUPPLEmbeddingTensor:(id)arg1 withNumTokens:(unsigned long long)arg2 withNumLayers:(unsigned long long)arg3 withEmbeddingDim:(unsigned long long)arg4;
+ (id)buildPLUMRequestWithTokens:(id)arg1 embedding:(id)arg2 spans:(id)arg3 numTokensOfEmbedding:(unsigned long long)arg4 numLayersOfEmbedding:(unsigned long long)arg5 embeddingDimOfEmbedding:(unsigned long long)arg6;
+ (id)buildSetupPLUMRequest:(id)arg1;
+ (id)nluMatchingSpanToUPPLMatchedSpan:(id)arg1;

@end
