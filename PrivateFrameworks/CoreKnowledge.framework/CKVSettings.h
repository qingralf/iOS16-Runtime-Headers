/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVSettings : NSObject <NSSecureCoding> {
    _Atomic unsigned char  _enablementOptions;
    CKVLocalization * _localization;
    CKVSearchContext * _searchContext;
}

@property (readonly) CKVLocalization *localization;
@property (nonatomic, readonly) CKVSearchContext *searchContext;
@property (retain) NSDictionary *simulatedPriors;

+ (unsigned char)defaultEnablementOptions;
+ (id)defaultSandboxSettings;
+ (id)defaultSettings;
+ (bool)isDonationEnabled:(unsigned char)arg1;
+ (bool)isSkitEnabled:(unsigned char)arg1;
+ (id)sandboxSettingsWithLocale:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)enablementOptions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalization:(id)arg1 enablementOptions:(unsigned char)arg2;
- (bool)isDonationEnabled;
- (bool)isSandboxEnabled;
- (bool)isSkitEnabled;
- (bool)isSpeechProfileEnabled;
- (bool)isSpeechProfileEnabledForAssistant;
- (bool)isSpeechProfileEnabledForDictation;
- (bool)isTaskEnabled:(unsigned short)arg1;
- (bool)isXPCDonationEnabled:(long long)arg1;
- (id)localization;
- (void)refreshEnablementOptions;
- (void)refreshLocalization;
- (id)searchContext;
- (void)setSimulatedPriors:(id)arg1;
- (bool)shouldOverrideSpeechProfileDeferral;
- (id)simulatedPriors;

@end
