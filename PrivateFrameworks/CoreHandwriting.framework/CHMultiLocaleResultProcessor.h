/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHMultiLocaleResultProcessor : NSObject

+ (id)combineMultiLocaleResults:(id)arg1 locales:(id)arg2 topLocaleIndex:(long long)arg3 mergedResultPostprocessingBlock:(id /* block */)arg4 changeableColumnCountBlock:(id /* block */)arg5;
+ (id)swapMultiLocaleResults:(id)arg1 locales:(id)arg2 topLocaleIndex:(long long)arg3 resultHasSwap:(bool*)arg4 resultTopLocale:(id*)arg5;
+ (void)updateMultiLocaleResultDictionary:(id)arg1 locales:(id)arg2;

@end