/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTransliterateConfusableCharactersStep : CHPostprocessingStep {
    NSArray * _characterTransliterations;
    const struct _LXLexicon { } * _customLexicon;
    NSLocale * _locale;
    const struct _LXLexicon { } * _staticLexicon;
}

@property (nonatomic) NSArray *characterTransliterations;
@property (nonatomic) const struct _LXLexicon { }*customLexicon;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) const struct _LXLexicon { }*staticLexicon;

+ (id)characterTransliterations;

- (void).cxx_destruct;
- (id)characterTransliterations;
- (const struct _LXLexicon { }*)customLexicon;
- (id)handleConfusableCharactersInToken:(id)arg1 previousContext:(id)arg2;
- (id)initWithStaticLexicon:(struct _LXLexicon { }*)arg1 customLexicon:(struct _LXLexicon { }*)arg2 locale:(id)arg3;
- (bool)isMatchingStringInLexicon:(id)arg1 withLexicon:(struct _LXLexicon { }*)arg2;
- (bool)isStringInLexicon:(id)arg1;
- (id)locale;
- (id)process:(id)arg1 options:(id)arg2;
- (void)setCharacterTransliterations:(id)arg1;
- (void)setCustomLexicon:(const struct _LXLexicon { }*)arg1;
- (void)setLocale:(id)arg1;
- (void)setStaticLexicon:(const struct _LXLexicon { }*)arg1;
- (const struct _LXLexicon { }*)staticLexicon;
- (unsigned int)wordIDForCandidateString:(id)arg1;

@end