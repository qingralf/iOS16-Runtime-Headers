/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantCommSafetyManager : NSObject <IMAssistantCommSafetyManager> {
    IMCommSafetyRequestsManager * _commSafetyRequestsManager;
    IMCommSafetySettingsManager * _commSafetySettingsManager;
}

@property (nonatomic, readonly) bool checkSensitivePhotos;
@property (nonatomic, readonly) IMCommSafetyRequestsManager *commSafetyRequestsManager;
@property (nonatomic, readonly) IMCommSafetySettingsManager *commSafetySettingsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)checkSensitivePhotos;
- (id)commSafetyRequestsManager;
- (id)commSafetySettingsManager;
- (id)initWithCommSafetyRequestsManager:(id)arg1 commSafetySettingsManager:(id)arg2;
- (void)isSensitiveImage:(id)arg1 withChatID:(id)arg2 completionHandler:(id /* block */)arg3;

@end