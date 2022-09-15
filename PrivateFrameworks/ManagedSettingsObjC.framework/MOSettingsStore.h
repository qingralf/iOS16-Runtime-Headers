/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedSettingsObjC.framework/ManagedSettingsObjC
 */

@interface MOSettingsStore : NSObject {
    MOAccountSettingsGroup * _account;
    MOAllowedClientSettingsGroup * _allowedClient;
    MOAppStoreSettingsGroup * _appStore;
    MOApplicationSettingsGroup * _application;
    MOCellularSettingsGroup * _cellular;
    MODateAndTimeSettingsGroup * _dateAndTime;
    MODeviceActivitySettingsGroup * _deviceActivity;
    MOGameCenterSettingsGroup * _gameCenter;
    MOManagedSettingsSettingsGroup * _managedSettings;
    MOMediaSettingsGroup * _media;
    MOPasscodeSettingsGroup * _passcode;
    MOSafariSettingsGroup * _safari;
    MOShieldSettingsGroup * _shield;
    MOSiriSettingsGroup * _siri;
    MOUserSettingsGroup * _user;
    MOWebContentSettingsGroup * _webContent;
}

@property (nonatomic, readonly, retain) MOAccountSettingsGroup *account;
@property (nonatomic, readonly, retain) MOAllowedClientSettingsGroup *allowedClient;
@property (nonatomic, readonly, retain) MOAppStoreSettingsGroup *appStore;
@property (nonatomic, readonly, retain) MOApplicationSettingsGroup *application;
@property (nonatomic, readonly, retain) MOCellularSettingsGroup *cellular;
@property (nonatomic, readonly, retain) MODateAndTimeSettingsGroup *dateAndTime;
@property (nonatomic, readonly, retain) MODeviceActivitySettingsGroup *deviceActivity;
@property (nonatomic, readonly, retain) MOGameCenterSettingsGroup *gameCenter;
@property (nonatomic, readonly, retain) MOManagedSettingsSettingsGroup *managedSettings;
@property (nonatomic, readonly, retain) MOMediaSettingsGroup *media;
@property (nonatomic, readonly, retain) MOPasscodeSettingsGroup *passcode;
@property (readonly) <MOSettingsReader> *reader;
@property (nonatomic, readonly, retain) MOSafariSettingsGroup *safari;
@property (nonatomic, readonly, retain) MOShieldSettingsGroup *shield;
@property (nonatomic, readonly, retain) MOSiriSettingsGroup *siri;
@property (nonatomic, readonly, retain) MOUserSettingsGroup *user;
@property (nonatomic, readonly, retain) MOWebContentSettingsGroup *webContent;
@property (readonly) <MOSettingsWriter> *writer;

+ (void)createSettingsDirectoryAtURL:(id)arg1;
+ (id)directoryAttributes;
+ (id)fileAttributes;
+ (id)loadDataAtURL:(id)arg1 outError:(id*)arg2;
+ (id)loadSettingsAtURL:(id)arg1;
+ (void)migrateSettingsIfNecessary:(id)arg1;
+ (bool)saveSettings:(id)arg1 toURL:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)allowedClient;
- (id)appStore;
- (id)application;
- (id)cellular;
- (id)dateAndTime;
- (id)deviceActivity;
- (id)gameCenter;
- (id)initStore;
- (id)managedSettings;
- (id)media;
- (id)passcode;
- (id)reader;
- (id)safari;
- (id)settingKeyFromSetting:(id)arg1 group:(id)arg2;
- (id)shield;
- (id)siri;
- (id)user;
- (id)webContent;
- (id)writer;

@end