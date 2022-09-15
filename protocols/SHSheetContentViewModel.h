/* Generated by RuntimeBrowser.
 */

@protocol SHSheetContentViewModel <NSObject>

@required

- (NSArray *)actionProxies;
- (NSDictionary *)activitiesByUUID;
- (SLCollaborationFooterViewModel *)collaborationFooterViewModel;
- (UIColor *)customHeaderButtonColor;
- (NSAttributedString *)customHeaderButtonTitle;
- (NSString *)customOptionsTitle;
- (UIViewController *)customViewController;
- (NSNumber *)customViewControllerVerticalInsetWrapper;
- (bool)isCollaborative;
- (bool)isSharingExpanded;
- (NSArray *)metadataValues;
- (NSNumber *)nearbyCountSlotID;
- (NSArray *)peopleSuggestionProxies;
- (bool)reloadData;
- (NSArray *)shareProxies;
- (bool)showCustomHeaderButton;
- (bool)showOptions;
- (bool)supportsCollaboration;
- (bool)supportsSendCopy;
- (bool)updateProxiesWithAnimation;
- (NSArray *)urlRequests;

@end