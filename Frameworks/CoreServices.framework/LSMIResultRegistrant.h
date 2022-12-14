/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSMIResultRegistrant : NSObject {
    NSDictionary * _miDict;
    <LSMIResultRegistrantStrategy> * _strategy;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (void)_replyWithError:(id)arg1 onQueue:(id)arg2 block:(id /* block */)arg3;
- (id)initWithContext:(id)arg1 operationUUID:(id)arg2 itemInfoDict:(id)arg3;
- (void)runPostProcessingForBundleID:(id)arg1 success:(bool)arg2 isSystemApp:(bool)arg3 isPlaceholder:(bool)arg4 notificationJournaller:(id)arg5;
- (void)runWithCompletion:(id /* block */)arg1;

@end
