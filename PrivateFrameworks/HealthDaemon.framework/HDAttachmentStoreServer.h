/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAttachmentStoreServer : HDStandardTaskServer <HKAttachmentStoreServerInterface> {
    HKAttachmentStoreTaskConfiguration * _configuration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _openReadersByAttachment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_addAttachmentWithName:(id)arg1 contentTypeIdentifier:(id)arg2 fileHandle:(id)arg3 toObjectWithIdentifier:(id)arg4 attachmentMetadata:(id)arg5 referenceMetadata:(id)arg6 completion:(id /* block */)arg7;
- (void)remote_addReferenceWithAttachment:(id)arg1 toObjectWithIdentifier:(id)arg2 metadata:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_attachmentReferencesForObjectIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_getDataChunkForAttachment:(id)arg1 chunkSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)remote_removeAllReferencesWithAttachmentIdentifier:(id)arg1 objectIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_streamDataForAttachment:(id)arg1;

@end
