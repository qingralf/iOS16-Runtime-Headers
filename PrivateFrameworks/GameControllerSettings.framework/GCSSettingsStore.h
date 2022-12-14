/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings
 */

@interface GCSSettingsStore : NSObject <GCSSettingsStoreService> {
    <GCSControllers> * _controllers;
    <GCSCopilotFusedControllers> * _copilotFusedControllers;
    <GCUserDefaults> * _defaults;
    <GCSGames> * _games;
    <GCSProfiles> * _profiles;
    NSString * _settingsVersion;
    bool  _showGCPreferencesPane;
}

@property (nonatomic, readonly) <GCSControllers> *controllers;
@property (nonatomic, readonly) <GCSCopilotFusedControllers> *copilotFusedControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GCSGames> *games;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GCSProfiles> *profiles;
@property (nonatomic, retain) NSString *settingsVersion;
@property bool showGCPreferencesPane;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controllers;
- (id)copilotFusedControllers;
- (void)dealloc;
- (id)games;
- (id)initWithUserDefaults:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)profileForPersistentControllerIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (id)profiles;
- (bool)savedDataMeetsRequiredVersion:(id)arg1;
- (void)setSettingsVersion:(id)arg1;
- (void)setShowGCPreferencesPane:(bool)arg1;
- (id)settingsVersion;
- (bool)showGCPreferencesPane;

@end
