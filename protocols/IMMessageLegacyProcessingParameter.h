/* Generated by RuntimeBrowser.
 */

@protocol IMMessageLegacyProcessingParameter <IMPipelineParameter>

@required

- (NSArray *)attributionInfoArray;
- (NSString *)availabilityVerificationRecipientChannelIDPrefix;
- (NSString *)availabilityVerificationRecipientEncryptionValidationToken;
- (IMDChat *)chat;
- (NSString *)currentGroupName;
- (NSString *)encryptionType;
- (NSString *)fromIdentifier;
- (NSString *)groupID;
- (NSNumber *)groupPhotoCreationTime;
- (NSDictionary *)inlineAttachmentsDictionary;
- (bool)isFromMe;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (NSArray *)messageItems;
- (NSDictionary *)nicknameDictionary;
- (NSArray *)participantIdentifiers;
- (NSString *)toIdentifier;
- (bool)wantsCheckpointing;
- (bool)wantsDeliveryReceipt;

@end
