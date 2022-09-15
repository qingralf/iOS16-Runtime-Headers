/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAccountPickerConfiguration : NSObject {
    NSString * _addPasswordSuggestedDomain;
    struct { 
        unsigned int val[8]; 
    }  _connectedAppAuditToken;
    WBSGlobalFrameIdentifier * _currentWebFrameIdentifierForAutoFillPasskeys;
    NSArray * _domainHintStrings;
    bool  _forUserNamesOnly;
    bool  _hasAuditToken;
    unsigned long long  _minimumNumberOfCredentialsToShowLikelyMatchesSection;
    NSString * _prompt;
    NSString * _promptWhenPasskeysAreAvailable;
    NSArray * _serviceNameHintStrings;
    bool  _shouldEnableAddingNewPasswordsIfPossible;
    bool  _shouldShowAutoFillPasskeys;
    bool  _shouldShowIcons;
}

@property (nonatomic, copy) NSString *addPasswordSuggestedDomain;
@property (nonatomic) struct { unsigned int x1[8]; } connectedAppAuditToken;
@property (nonatomic, copy) WBSGlobalFrameIdentifier *currentWebFrameIdentifierForAutoFillPasskeys;
@property (nonatomic, copy) NSArray *domainHintStrings;
@property (nonatomic) bool forUserNamesOnly;
@property (nonatomic, readonly) bool hasAuditToken;
@property (nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, copy) NSString *promptWhenPasskeysAreAvailable;
@property (nonatomic, copy) NSArray *serviceNameHintStrings;
@property (nonatomic, readonly) bool shouldAllowAddingNewPasswords;
@property (nonatomic) bool shouldEnableAddingNewPasswordsIfPossible;
@property (nonatomic) bool shouldShowAutoFillPasskeys;
@property (nonatomic) bool shouldShowIcons;

- (void).cxx_destruct;
- (id)addPasswordSuggestedDomain;
- (struct { unsigned int x1[8]; })connectedAppAuditToken;
- (id)currentWebFrameIdentifierForAutoFillPasskeys;
- (id)domainHintStrings;
- (bool)forUserNamesOnly;
- (bool)hasAuditToken;
- (unsigned long long)minimumNumberOfCredentialsToShowLikelyMatchesSection;
- (id)prompt;
- (id)promptWhenPasskeysAreAvailable;
- (id)serviceNameHintStrings;
- (void)setAddPasswordSuggestedDomain:(id)arg1;
- (void)setConnectedAppAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setCurrentWebFrameIdentifierForAutoFillPasskeys:(id)arg1;
- (void)setDomainHintStrings:(id)arg1;
- (void)setForUserNamesOnly:(bool)arg1;
- (void)setMinimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)arg1;
- (void)setPrompt:(id)arg1;
- (void)setPromptWhenPasskeysAreAvailable:(id)arg1;
- (void)setServiceNameHintStrings:(id)arg1;
- (void)setShouldEnableAddingNewPasswordsIfPossible:(bool)arg1;
- (void)setShouldShowAutoFillPasskeys:(bool)arg1;
- (void)setShouldShowIcons:(bool)arg1;
- (bool)shouldAllowAddingNewPasswords;
- (bool)shouldEnableAddingNewPasswordsIfPossible;
- (bool)shouldShowAutoFillPasskeys;
- (bool)shouldShowIcons;

@end