/* Generated by RuntimeBrowser.
 */

@protocol TITransientLexiconManaging <TIKeyboardActivityObserving>

@required

- (id /* block */)addContactObserver:(void *)arg1; // needs 1 arg types, found 11: id /* block */, NSDictionary *, void*, id, SEL, id /* block */, void*, void, id /* block */, NSDictionary *, void*
- (void)debugLogEntities;
- (TISupplementalLexiconController *)ensureSupplementalLexicons;
- (void)getOnce:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (bool)isSupplementalLexiconSearchEnabled;
- (void)loadLexicons;
- (const struct _LXLexicon { }*)namedEntityLexicon;
- (const struct _LXLexicon { }*)namedEntityPhraseLexicon;
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)removeContactObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (bool)searchForWord:(NSString *)arg1;
- (bool)searchForWordCaseInsensitive:(NSString *)arg1;
- (void)setSupplementalLexiconSearchEnabled:(bool)arg1;
- (TISupplementalLexiconController *)supplementalLexicons;

@end
