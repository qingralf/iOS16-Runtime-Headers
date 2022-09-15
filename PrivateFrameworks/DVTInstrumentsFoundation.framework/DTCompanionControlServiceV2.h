/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DVTInstrumentsFoundation.framework/DVTInstrumentsFoundation
 */

@interface DTCompanionControlServiceV2 : DTXService <DTCompanionControlServiceV2API>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int (*)dlsymFunc;
+ (void)registerCapabilities:(id)arg1;
+ (void)setDlsymFunc:(int (*)arg1;

- (id)_launchModeTranslationsMap;
- (id)launchWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2;
- (id)terminateWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2;
- (id)willInstallWatchAppForCompanionIdentifier:(id)arg1;

@end