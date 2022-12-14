/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCreateSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate> {
    bool  _sendInvitationInMessages;
    <PXSharedLibrary> * _sharedLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sendInvitationInMessages;
@property (nonatomic, retain) <PXSharedLibrary> *sharedLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assistantController:(id)arg1 completedWithError:(id)arg2;
- (id)init;
- (void)performUserInteractionTask;
- (bool)sendInvitationInMessages;
- (void)setSendInvitationInMessages:(bool)arg1;
- (void)setSharedLibrary:(id)arg1;
- (id)sharedLibrary;

@end
