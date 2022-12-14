/* Generated by RuntimeBrowser.
 */

@protocol HKAttachmentStoreServerInterface <NSObject>

@required

- (void)remote_addAttachmentWithName:(void *)arg1 contentTypeIdentifier:(void *)arg2 fileHandle:(void *)arg3 toObjectWithIdentifier:(void *)arg4 attachmentMetadata:(void *)arg5 referenceMetadata:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: NSString *, NSString *, NSFileHandle *, NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKAttachmentReference *, NSError *, void*
- (void)remote_addReferenceWithAttachment:(void *)arg1 toObjectWithIdentifier:(void *)arg2 metadata:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HKAttachment *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKAttachmentReference *, NSError *, void*
- (void)remote_attachmentReferencesForObjectIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_getDataChunkForAttachment:(void *)arg1 chunkSize:(void *)arg2 offset:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HKAttachment *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)remote_removeAllReferencesWithAttachmentIdentifier:(void *)arg1 objectIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_streamDataForAttachment:(HKAttachment *)arg1;

@end
