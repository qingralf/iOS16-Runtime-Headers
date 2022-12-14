/* Generated by RuntimeBrowser.
 */

@protocol SGSuggestionsServiceContactsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol, _SGSuggestionsServiceContactsObserverProtocol>

@required

- (void)allContactsLimitedTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)allContactsWithSnippets:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)cnContactMatchesForRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)cnContactMatchesForRecordIds:(NSArray *)arg1 error:(id*)arg2;
- (void)cnContactMatchesForRecordIds:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (SGContact *)contactFromRecordID:(SGRecordId *)arg1 error:(id*)arg2;
- (void)contactFromRecordID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGContact *, NSError *, void*
- (NSArray *)contactMatchesByEmailAddress:(NSString *)arg1 error:(id*)arg2;
- (void)contactMatchesByEmailAddress:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)contactMatchesByPhoneNumber:(NSString *)arg1 error:(id*)arg2;
- (void)contactMatchesByPhoneNumber:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactMatchesBySocialProfile:(void *)arg1 bundleIdentifier:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)contactMatchesBySocialProfile:(SGSocialProfile *)arg1 error:(id*)arg2;
- (void)contactMatchesBySocialProfile:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGSocialProfile *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactMatchesWithContact:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: CNContact *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContactIdentifier:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)contactMatchesWithContactIdentifiers:(NSArray *)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContactIdentifiers:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 error:(id*)arg4;
- (NSArray *)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 onlySignificant:(bool)arg4 error:(id*)arg5;
- (void)namesForDetail:(void *)arg1 limitTo:(void *)arg2 prependMaybe:(void *)arg3 onlySignificant:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSString *, unsigned long long, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)namesForDetail:(void *)arg1 limitTo:(void *)arg2 prependMaybe:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)namesForDetailCaches;
- (SGOrigin *)originFromRecordId:(SGRecordId *)arg1 error:(id*)arg2;
- (void)originFromRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGOrigin *, NSError *, void*
- (NSArray *)suggestContactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)suggestContactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithMessagingPrefix:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
