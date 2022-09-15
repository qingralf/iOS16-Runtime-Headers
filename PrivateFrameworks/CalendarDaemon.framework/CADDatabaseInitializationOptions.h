/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding> {
    bool  _allowDelegateSources;
    NSArray * _allowedSourceIdentifiers;
    <CalCalendarDataContainerProvider> * _calendarDataContainerProvider;
    CADChangeTrackingClientId * _changeTrackingClientId;
    NSURL * _databaseDirectory;
    int  _databaseInitOptions;
    bool  _enablePropertyModificationLogging;
    int  _management;
    NSString * _managementBundleIdentifier;
    NSObject<OS_tcc_identity> * _privacyClientIdentity;
    bool  _spotlightTesting;
    bool  _unitTesting;
}

@property (nonatomic) bool allowDelegateSources;
@property (nonatomic, retain) NSArray *allowedSourceIdentifiers;
@property (nonatomic, retain) <CalCalendarDataContainerProvider> *calendarDataContainerProvider;
@property (nonatomic, retain) CADChangeTrackingClientId *changeTrackingClientId;
@property (nonatomic, retain) NSURL *databaseDirectory;
@property (nonatomic) int databaseInitOptions;
@property (nonatomic) bool enablePropertyModificationLogging;
@property (nonatomic) int management;
@property (nonatomic, retain) NSString *managementBundleIdentifier;
@property (nonatomic, retain) NSObject<OS_tcc_identity> *privacyClientIdentity;
@property (nonatomic) bool spotlightTesting;
@property (nonatomic) bool unitTesting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowDelegateSources;
- (id)allowedSourceIdentifiers;
- (id)calendarDataContainerProvider;
- (id)changeTrackingClientId;
- (id)databaseDirectory;
- (int)databaseInitOptions;
- (id)description;
- (bool)enablePropertyModificationLogging;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;
- (int)management;
- (id)managementBundleIdentifier;
- (id)privacyClientIdentity;
- (void)purifyOptions;
- (void)setAllowDelegateSources:(bool)arg1;
- (void)setAllowedSourceIdentifiers:(id)arg1;
- (void)setCalendarDataContainerProvider:(id)arg1;
- (void)setChangeTrackingClientId:(id)arg1;
- (void)setDatabaseDirectory:(id)arg1;
- (void)setDatabaseInitOptions:(int)arg1;
- (void)setEnablePropertyModificationLogging:(bool)arg1;
- (void)setManagement:(int)arg1;
- (void)setManagementBundleIdentifier:(id)arg1;
- (void)setPrivacyClientIdentity:(id)arg1;
- (void)setSpotlightTesting:(bool)arg1;
- (void)setUnitTesting:(bool)arg1;
- (bool)spotlightTesting;
- (bool)unitTesting;
- (id)validOptionsForConnection:(id)arg1;

@end