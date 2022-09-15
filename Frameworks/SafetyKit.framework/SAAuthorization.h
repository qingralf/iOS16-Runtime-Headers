/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafetyKit.framework/SafetyKit
 */

@interface SAAuthorization : NSObject

+ (id)approvedBundleId;
+ (bool)auditTokenAuthorizedForAnyEmergency:(struct { unsigned int x1[8]; })arg1;
+ (bool)auditTokenAuthorizedForCrashDetection:(struct { unsigned int x1[8]; })arg1;
+ (long long)authorizationStatusForCurrentConnection;
+ (long long)authorizationStatusWithTCCPreflightResult:(int)arg1;
+ (bool)connectionAuthorizedForAnyEmergency:(id)arg1;
+ (bool)connectionAuthorizedForCrashDetection:(id)arg1;
+ (bool)currentConnectionAuthorizedForAnyEmergency;
+ (bool)currentConnectionAuthorizedForCrashDetection;
+ (bool)isInFlight;
+ (void)showAuthorizationPrompt;
+ (bool)startAuthorizationForBundleURL:(id)arg1 preflightAuthorizationStatus:(long long)arg2 completionHandler:(id /* block */)arg3;

@end