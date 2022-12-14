/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAppAutofillManager : NSObject <SFAppAutoFillOneTimeCodeProviderObserver> {
    NSString * _clientIdentifierForLastAutofillGeneration;
    NSString * _clientIdentifierForLastKeyboardSync;
    NSDate * _dateOfLastPasswordAutoFill;
    NSUUID * _documentIdentifierForLastAutofillGeneration;
    LAContext * _laContext;
    NSString * _lastAutofilledUsername;
    SFAppAutoFillOneTimeCodeProvider * _oneTimeCodeProvider;
    SFAppAutoFillPasskeyProvider * _passkeyProvider;
    NSDictionary * _queuedCustomInfo;
    NSDictionary * _queuedUnauthenticatedCustomInfo;
    TIKeyboardSecureCandidateRenderer * _secureCandidateRenderer;
}

@property (nonatomic, retain) NSString *clientIdentifierForLastAutofillGeneration;
@property (nonatomic, retain) NSString *clientIdentifierForLastKeyboardSync;
@property (nonatomic, retain) NSDate *dateOfLastPasswordAutoFill;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (nonatomic, readonly) bool hasOneTimeCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LAContext *laContext;
@property (nonatomic, copy) NSString *lastAutofilledUsername;
@property (nonatomic, retain) NSDictionary *queuedCustomInfo;
@property (nonatomic, retain) NSDictionary *queuedUnauthenticatedCustomInfo;
@property (nonatomic, readonly) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_autoFillPayloadForPasskey:(id)arg1 keyboardInfoType:(unsigned long long*)arg2;
- (id)_autoFillPayloadForPasswordCredential:(id)arg1 keyboardInfoType:(unsigned long long*)arg2;
- (id)_secureCandidateForPasskey:(id)arg1 fromLocalizedStringKey:(id)arg2;
- (id)_secureCandidateForPasswordCredential:(id)arg1 fromLocalizedStringKey:(id)arg2;
- (bool)_simulatesAutofillCandidates;
- (id)clientIdentifierForLastAutofillGeneration;
- (id)clientIdentifierForLastKeyboardSync;
- (id)customInfoFromCredential:(id)arg1;
- (id)dateOfLastPasswordAutoFill;
- (id)documentIdentifierForLastAutofillGeneration;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (void)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateHideMyEmailCandidateWithSlotID:(unsigned int)arg1 applicationBundleId:(id)arg2 applicationId:(id)arg3 keyboardState:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (void)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)hasAutofillContextEntitlementForConnection:(id)arg1;
- (bool)hasOneTimeCode;
- (id)initPrivate;
- (bool)isValidedString:(id)arg1;
- (id)laContext;
- (id)lastAutofilledUsername;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (id)obtainBundleIdentifierFromConnection:(id)arg1;
- (void)obtainCredential:(id)arg1;
- (void)oneTimeCodeProvider:(id)arg1 didUpdateOneTimeCode:(id)arg2;
- (void)oneTimeCodeProviderReceivedCode:(id)arg1;
- (void)presentHideMyEmailUI:(id)arg1 keyboardState:(id)arg2 completion:(id /* block */)arg3;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (id)queuedCustomInfo;
- (id)queuedUnauthenticatedCustomInfo;
- (void)reset;
- (id)secureCandidateRenderer;
- (void)setClientIdentifierForLastAutofillGeneration:(id)arg1;
- (void)setClientIdentifierForLastKeyboardSync:(id)arg1;
- (void)setDateOfLastPasswordAutoFill:(id)arg1;
- (void)setDocumentIdentifierForLastAutofillGeneration:(id)arg1;
- (void)setLaContext:(id)arg1;
- (void)setLastAutofilledUsername:(id)arg1;
- (void)setQueuedCustomInfo:(id)arg1;
- (void)setQueuedUnauthenticatedCustomInfo:(id)arg1;
- (void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(id /* block */)arg3;
- (void)shouldAcceptOneTimeCode:(id)arg1 completion:(id /* block */)arg2;
- (bool)shouldAuthenticateToAcceptAutofill;

@end
