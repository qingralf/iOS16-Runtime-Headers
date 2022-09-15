/* Generated by RuntimeBrowser.
 */

@protocol _MSMessageComposeExtensionImplProtocol <_MSMessageComposeExtensionProtocol>

@required

- (void)_remoteViewDidBecomeReadyForDisplay;
- (MSConversation *)activeConversation;
- (<_MSMessageComposeExtensionImplProtocol> *)containingContext;
- (void)contentDidLoad;
- (void)dismiss;
- (void)dismissAndPresentPhotosApp;
- (void)dragMediaItemCanceled;
- (void)dragMediaItemMoved:(void *)arg1 frameInRemoteView:(void *)arg2 rotation:(void *)arg3 scale:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: _MSMessageMediaPayload *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (<_MSMessageComposeHostImplProtocol> *)hostContext;
- (void)presentAlertWithTitle:(void *)arg1 message:(void *)arg2 buttonTitle:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentAlertWithTitle:(void *)arg1 message:(void *)arg2 buttonTitle:(void *)arg3 destructiveButtonTitle:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (unsigned long long)presentationContext;
- (unsigned long long)presentationStyle;
- (void)removeAssetArchiveWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestHostSceneIdentifierWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)requestResize;
- (void)setContainingContext:(id <_MSMessageComposeExtensionImplProtocol>)arg1;
- (void)setHostContext:(id <_MSMessageComposeHostImplProtocol>)arg1;
- (void)setPresentationContext:(unsigned long long)arg1;
- (void)setPresentationStyle:(unsigned long long)arg1;
- (void)stageAppItem:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MSMessage *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stageAssetArchive:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stageMediaItem:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: _MSMessageMediaPayload *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stageRichLink:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MSRichLink *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startDragMediaItem:(void *)arg1 frameInRemoteView:(void *)arg2 fence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: _MSMessageMediaPayload *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (UIViewController *)stickerViewController;
- (UIViewController *)viewController;

@optional

- (void)presentAlertSheetWith:(void *)arg1 styles:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end