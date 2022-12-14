/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCollaborationUtilities : NSObject

+ (bool)CKShareItemProviderContainsCopyItem:(id)arg1;
+ (void)_addParticipantsAllowedForShare:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_addParticipantsAllowedForURL:(id)arg1 share:(id)arg2 collaborationService:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)_copyRepresentationTypeIdentifier;
+ (id)_dataForFilepath:(id)arg1;
+ (void)_findOriginatingSharedItemInParentItems:(id)arg1 forSubitem:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_loadCKShareWithMetadataForItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_loadShareOptionsForCKShareItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_loadShareOptionsForSWYItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)addParticipantsAllowedForCollaborationItem:(id)arg1 collaborationService:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)addParticipantsAllowedForURL:(id)arg1 share:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)canDeleteShareForCollaborationItem:(id)arg1 existingShare:(bool)arg2;
+ (void)canShowShareOptionsForCollaborationItem:(id)arg1 service:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)createItemProviderForFileURL:(id)arg1;
+ (id)createLinkMetadataWithCKShareItemProvider:(id)arg1;
+ (void)createMailContentForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)createSharingURLForCollaborationRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)defaultCKOptionsSummary;
+ (void)deleteSharingURL:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)fileCollaborationItemFromActivityItems:(id)arg1;
+ (void)findOriginatingSharedItemForSubitemURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getCKSharingOptionsFromOptions:(id)arg1 accessType:(id*)arg2 permissionType:(id*)arg3 allowOthersToInvite:(id*)arg4;
+ (void)getFailureTitle:(id*)arg1 message:(id*)arg2 error:(id)arg3;
+ (bool)hasSendCopyRepresentationForItemProvider:(id)arg1;
+ (bool)isCKShareItemProvider:(id)arg1;
+ (bool)isCollaborationItemPrivateShare:(id)arg1;
+ (bool)isHeroCollaborationActivityType:(id)arg1;
+ (bool)isPostCKShareItemProvider:(id)arg1;
+ (bool)isPreCKShareItemProvider:(id)arg1;
+ (bool)isSWYActivityItemProvider:(id)arg1;
+ (bool)isServiceManateeCKShareItemProvider:(id)arg1;
+ (void)isShareOwnerForFileURL:(id)arg1 share:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)isSharedFileURL:(id)arg1 isLocalStorageFileURL:(bool*)arg2 isiCloudDriveFileURL:(bool*)arg3;
+ (bool)isThirdPartyFileProviderBackedURL:(id)arg1;
+ (void)loadCKContainerForItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadCKShareItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadCopyRepresentationURLForItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadMetadataForFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadMetadataForItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadPendingCollaborationForItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadShareOptionsForItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestSharedURLForCollaborationItem:(id)arg1 collaborationService:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)requestSharedURLForURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)shareStatusForURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)urlFromActivityItem:(id)arg1;
+ (id)urlRequestsForCollaborationItems:(id)arg1;

@end
