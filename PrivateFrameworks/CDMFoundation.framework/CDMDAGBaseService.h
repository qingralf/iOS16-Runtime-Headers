/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMDAGBaseService : CDMBaseService {
    CDMDynamicConfig * _currentConfig;
    NSString * _setupLanguageCode;
    CDMAssetConfig * assetConfig;
}

+ (id)assetFolderNames;
+ (id)trialFactorName;

- (void).cxx_destruct;
- (void)_handleSetupRequest:(id)arg1 withCallback:(id /* block */)arg2;
- (id)getAssetConfig;
- (id)handle:(id)arg1;
- (void)handleCommand:(id)arg1 withCallback:(id /* block */)arg2;
- (id)handleRequestCommandTypeNames;
- (id)initWithConfig:(id)arg1;
- (bool)isAssetRequired;
- (bool)isEnabled;
- (bool)isSetupRerunNeededForRequest:(id)arg1;
- (id)setup:(id)arg1;
- (id)supportedCommands;

@end