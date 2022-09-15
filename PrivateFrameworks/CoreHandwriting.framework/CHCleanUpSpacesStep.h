/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHCleanUpSpacesStep : CHPostprocessingStepModifyingOriginalTokens {
    NSLocale * _locale;
}

@property (nonatomic, retain) NSLocale *locale;

- (void).cxx_destruct;
- (id)cleanUpSpacesInToken:(id)arg1 leftContext:(id)arg2 inString:(id)arg3 withQuoteCount:(id)arg4;
- (id)initWithLocale:(id)arg1;
- (id)locale;
- (id)prepareQuoteCountFromLeftContext:(id)arg1;
- (id)process:(id)arg1 options:(id)arg2;
- (void)setLocale:(id)arg1;

@end