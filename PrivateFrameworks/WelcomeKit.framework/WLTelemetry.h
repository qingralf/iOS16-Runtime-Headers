/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

@interface WLTelemetry : NSObject

+ (id)sharedInstance;

- (id)_telemetryDictionaryForContentTypeDidComplete:(id)arg1 statistics:(id)arg2 metadata:(id)arg3;
- (id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4;
- (void)contentTypeDidComplete:(id)arg1 statistics:(id)arg2 metadata:(id)arg3;
- (void)daemonDidGetInterrupted;
- (void)deviceDidFailWithAuthenticationError;
- (void)deviceDidFailWithTimeout;
- (void)didLoadAndroidStore:(id)arg1 selected:(bool)arg2 canceled:(bool)arg3 inAttempts:(unsigned long long)arg4;
- (void)didLoadQRCode:(bool)arg1;
- (void)didLookupAppsWithMatchedApps:(unsigned long long)arg1 mismatchedApps:(unsigned long long)arg2;
- (void)didResolveTimeEstimate:(unsigned long long)arg1 forDownloadTask:(id)arg2 threshold:(unsigned long long)arg3 actualTime:(unsigned long long)arg4;
- (void)importDidFailSilentlyForContentType:(id)arg1;
- (void)migratorDidFinish:(id)arg1;
- (void)photoLibraryDidFailWithExtension:(id)arg1;
- (void)preparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4;
- (void)send:(id)arg1 payload:(id)arg2;
- (void)userDidChooseToInstallMigratableApps:(bool)arg1;
- (void)wifiDidFail;

@end