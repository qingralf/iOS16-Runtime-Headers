/* Generated by RuntimeBrowser.
 */

@protocol ICNoteCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>

@required

- (void)alignAccountSaltAndICWithPassphrase:(NSString *)arg1;
- (void)applyAccountSaltAndICWithPassphrase:(NSString *)arg1;
- (void)decrypt;
- (NSData *)decryptNotePrimitiveData;
- (NSData *)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(CKRecord *)arg1;
- (void)fixDivergedAttachmentsUsingPassphrase:(NSString *)arg1;
- (void)mergeEncryptedData:(NSData *)arg1 mergeConflict:(NSMergeConflict *)arg2;
- (void)writeEncryptedNoteData:(NSData *)arg1;

@end
