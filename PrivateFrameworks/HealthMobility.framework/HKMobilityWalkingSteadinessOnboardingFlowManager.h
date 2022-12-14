/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMobility.framework/HealthMobility
 */

@interface HKMobilityWalkingSteadinessOnboardingFlowManager : NSObject {
    <HKFeatureStatusProviding> * _classificationsFeatureStatusProvider;
    NSString * _countryCode;
    HKMobilityWalkingSteadinessFeatureStatusManager * _featureStatusManager;
    HKHealthStore * _healthStore;
    HKMobileCountryCodeManager * _mobileCountryCodeManager;
    <HKFeatureAvailabilityProviding> * _notificationsFeatureAvailabilityStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <HKFeatureStatusProviding> *classificationsFeatureStatusProvider;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, retain) HKMobilityWalkingSteadinessFeatureStatusManager *featureStatusManager;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property (nonatomic, retain) <HKFeatureAvailabilityProviding> *notificationsFeatureAvailabilityStore;

- (void).cxx_destruct;
- (id)_findAnyOnboardedCountryCodeWithError:(id*)arg1;
- (id)classificationsFeatureStatusProvider;
- (id)countryCode;
- (id)featureStatusManager;
- (void)fetchUserCanContinueOnboardingForCountryCode:(id)arg1 completion:(id /* block */)arg2;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 classificationsFeatureStatusProvider:(id)arg2 notificationsFeatureAvailabilityStore:(id)arg3 featureStatusManager:(id)arg4;
- (void)markOnboardingCompleteForCountryCode:(id)arg1 shouldTurnOnNotifications:(bool)arg2 completion:(id /* block */)arg3;
- (id)mobileCountryCodeManager;
- (id)notificationsFeatureAvailabilityStore;
- (void)setClassificationsFeatureStatusProvider:(id)arg1;
- (void)setFeatureStatusManager:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMobileCountryCodeManager:(id)arg1;
- (void)setNotificationsFeatureAvailabilityStore:(id)arg1;
- (bool)userCanContinueOnboardingWithDateOfBirthComponents:(id)arg1;

@end
