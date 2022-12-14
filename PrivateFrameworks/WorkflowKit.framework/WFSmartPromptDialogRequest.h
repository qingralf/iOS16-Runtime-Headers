/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFSmartPromptDialogRequest : WFDialogRequest <NSSecureCoding> {
    WFDialogButton * _allowAlwaysButton;
    WFDialogButton * _allowOnceButton;
    NSData * _archivedSourceContentCollection;
    WFContentCollection * _cachedSourceContentCollection;
    WFSmartPromptConfiguration * _configuration;
    WFDialogButton * _denyButton;
    WFDialogButton * _previewButton;
    NSString * _secondaryText;
}

@property (nonatomic, readonly, copy) WFDialogButton *allowAlwaysButton;
@property (nonatomic, readonly, copy) WFDialogButton *allowOnceButton;
@property (nonatomic, copy) NSData *archivedSourceContentCollection;
@property (nonatomic, retain) WFContentCollection *cachedSourceContentCollection;
@property (nonatomic, readonly, copy) WFSmartPromptConfiguration *configuration;
@property (nonatomic, readonly, copy) WFDialogButton *denyButton;
@property (nonatomic, readonly, copy) WFDialogButton *previewButton;
@property (nonatomic, readonly, copy) NSString *secondaryText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowAlwaysButton;
- (id)allowOnceButton;
- (id)archivedSourceContentCollection;
- (id)cachedSourceContentCollection;
- (id)configuration;
- (id)denyButton;
- (void)encodeWithCoder:(id)arg1;
- (void)getContentCollectionWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 attribution:(id)arg2;
- (id)previewButton;
- (id)secondaryText;
- (void)setArchivedSourceContentCollection:(id)arg1;
- (void)setCachedSourceContentCollection:(id)arg1;
- (bool)shouldCenterPrompt;

@end
