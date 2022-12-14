/* Generated by RuntimeBrowser.
 */

@protocol FINodeProtocol

@required

- (NSNumber *)childItemCount;
- (NSDate *)contentModificationDate;
- (UTType *)contentType;
- (NSDate *)creationDate;
- (NSString *)displayName;
- (NSNumber *)documentSize;
- (NSError *)enumeratorError;
- (NSDate *)fetchLastUsedDate:(bool)arg1;
- (NSArray *)fetchTags:(bool)arg1;
- (NSString *)fileName;
- (NSURL *)fileURL;
- (FPProviderDomain *)fpDomain;
- (FPItem *)fpItem;
- (void)inlineProgressCancel;
- (bool)isFolder;
- (bool)isPackage;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTopLevelSharedItem;
- (bool)isTrashed;
- (NSArray *)itemDecorations;
- (NSString *)itemIdentifier;
- (NSDate *)lastUsedDate;
- (unsigned long long)nodeIs:(unsigned long long)arg1;
- (unsigned int)nodePermissions:(unsigned int)arg1;
- (NSPersonNameComponents *)ownerNameComponents;
- (NSArray *)propertyAsArray:(unsigned int)arg1;
- (bool)propertyAsBool:(unsigned int)arg1;
- (NSDate *)propertyAsDate:(unsigned int)arg1;
- (NSDictionary *)propertyAsDictionary:(unsigned int)arg1;
- (NSObject *)propertyAsNSObject:(unsigned int)arg1;
- (NSNumber *)propertyAsNumber:(unsigned int)arg1;
- (NSString *)propertyAsString:(unsigned int)arg1;
- (NSArray *)tags;
- (NSString *)typeIdentifier;

@end
