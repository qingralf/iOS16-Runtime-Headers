/* Generated by RuntimeBrowser.
 */

@protocol _SGSuggestionsServiceContactsConfirmRejectProtocol

@required

- (void)confirmContact:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)confirmContactDetailRecord:(SGRecordId *)arg1 confirmationUI:(int)arg2 error:(id*)arg3;
- (void)confirmContactDetailRecord:(void *)arg1 confirmationUI:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)confirmContactDetailRecord:(SGRecordId *)arg1 error:(id*)arg2;
- (void)confirmContactDetailRecord:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)confirmRecord:(SGRecordId *)arg1 error:(id*)arg2;
- (void)confirmRecord:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)identifyComposeWarningsFromSubject:(NSString *)arg1 content:(NSString *)arg2 attributes:(NSDictionary *)arg3 toRecipients:(NSArray *)arg4 ccRecipients:(NSArray *)arg5 bccRecipients:(NSArray *)arg6 originalToRecipients:(NSArray *)arg7 originalCcRecipients:(NSArray *)arg8 attachments:(NSArray *)arg9 error:(id*)arg10;
- (NSArray *)identifyComposeWarningsFromSubject:(NSString *)arg1 content:(NSAttributedString *)arg2 toRecipients:(NSArray *)arg3 ccRecipients:(NSArray *)arg4 bccRecipients:(NSArray *)arg5 originalToRecipients:(NSArray *)arg6 originalCcRecipients:(NSArray *)arg7 attachments:(NSArray *)arg8 error:(id*)arg9;
- (SGMailIntelligenceFollowUpWarning *)identifyFollowUpWarningFromSubject:(NSString *)arg1 body:(NSString *)arg2 date:(NSDate *)arg3 error:(id*)arg4;
- (SGMailIntelligenceFollowUpWarning *)identifyFollowUpWarningFromSubject:(NSString *)arg1 content:(NSAttributedString *)arg2 error:(id*)arg3;
- (NSArray *)identifyWarningsFromSubject:(NSString *)arg1 content:(NSAttributedString *)arg2 toRecipients:(NSArray *)arg3 ccRecipients:(NSArray *)arg4 bccRecipients:(NSArray *)arg5 attachments:(NSArray *)arg6 error:(id*)arg7;
- (NSArray *)identifyWarningsFromSubject:(NSString *)arg1 content:(NSAttributedString *)arg2 toRecipients:(NSArray *)arg3 ccRecipients:(NSArray *)arg4 bccRecipients:(NSArray *)arg5 originalToRecipients:(NSArray *)arg6 originalCcRecipients:(NSArray *)arg7 attachments:(NSArray *)arg8 error:(id*)arg9;
- (NSArray *)lastFollowUpWarningResultsWithLimit:(unsigned long long)arg1 includingResultsFromPreviousCall:(bool)arg2 error:(id*)arg3;
- (bool)preventUnsubscriptionOpportunitiesSuggestionsForField:(long long)arg1 toValues:(NSArray *)arg2 error:(id*)arg3;
- (void)preventUnsubscriptionOpportunitiesSuggestionsForField:(void *)arg1 toValues:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: long long, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectContact:(void *)arg1 rejectionUI:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: SGRealtimeContact *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectContact:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)rejectContactDetailRecord:(SGRecordId *)arg1 error:(id*)arg2;
- (bool)rejectContactDetailRecord:(SGRecordId *)arg1 rejectionUI:(int)arg2 error:(id*)arg3;
- (void)rejectContactDetailRecord:(void *)arg1 rejectionUI:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectContactDetailRecord:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)rejectRecord:(SGRecordId *)arg1 error:(id*)arg2;
- (bool)rejectRecord:(SGRecordId *)arg1 rejectionUI:(int)arg2 error:(id*)arg3;
- (void)rejectRecord:(void *)arg1 rejectionUI:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: SGRecordId *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectRecord:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSNumber *)reportMailIntelligenceFollowUpUserEngagement:(long long)arg1 forNSDataFromFollowUpWarning:(NSData *)arg2 error:(id*)arg3;
- (NSNumber *)reportMailIntelligenceFollowUpUserEngagement:(long long)arg1 forStringFromFollowUpWarning:(NSString *)arg2 error:(id*)arg3;
- (NSNumber *)reportUserEngagement:(bool)arg1 forWarning:(SGMailIntelligenceWarning *)arg2 error:(id*)arg3;
- (NSNumber *)reportValue:(bool)arg1 forFeatureSetting:(long long)arg2 error:(id*)arg3;
- (SGMailIntelligenceSaliency *)saliencyFromEmailHeaders:(SGMailHeaders *)arg1 error:(id*)arg2;
- (void)saliencyFromEmailHeaders:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGMailHeaders *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGMailIntelligenceSaliency *, NSError *, void*
- (SGMailIntelligenceSaliency *)saliencyFromRFC822Data:(NSData *)arg1 error:(id*)arg2;
- (void)saliencyFromRFC822Data:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGMailIntelligenceSaliency *, NSError *, void*
- (NSArray *)sortedSaliencyResultsRestrictedToMailboxTypes:(NSArray *)arg1 mailboxIds:(NSArray *)arg2 receivedOnOrAfter:(NSDate *)arg3 ascending:(bool)arg4 limit:(unsigned long long)arg5 error:(id*)arg6;
- (NSArray *)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
- (NSArray *)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 minCount:(unsigned long long)arg2 minScore:(double)arg3 limit:(unsigned long long)arg4 error:(id*)arg5;
- (NSArray *)topSalienciesForMailboxId:(NSString *)arg1 limit:(long long)arg2 error:(id*)arg3;

@end
