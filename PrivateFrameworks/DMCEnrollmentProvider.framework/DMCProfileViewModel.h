/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider
 */

@interface DMCProfileViewModel : NSObject {
    NSArray * _accountSections;
    NSArray * _byodInfoSections;
    NSArray * _elevatedPayloadTypes;
    long long  _finalInstallationWarningStyle;
    NSArray * _managedAppSections;
    NSString * _managedAppleID;
    NSArray * _managedBookSections;
    NSArray * _moreDetailsSections;
    NSArray * _payloadInfoSectionSummaries;
    MCProfile * _profile;
    NSArray * _restrictionSections;
    bool  _showManagedPayloads;
}

@property (nonatomic, readonly) NSArray *accountSections;
@property (nonatomic, readonly) NSArray *byodInfoSections;
@property (nonatomic, readonly) NSArray *elevatedPayloadTypes;
@property (nonatomic) long long finalInstallationWarningStyle;
@property (nonatomic, readonly) NSArray *managedAppSections;
@property (nonatomic, copy) NSString *managedAppleID;
@property (nonatomic, readonly) NSArray *managedBookSections;
@property (nonatomic, readonly) NSArray *moreDetailsSections;
@property (nonatomic, readonly) NSArray *payloadInfoSectionSummaries;
@property (nonatomic, readonly) MCProfile *profile;
@property (nonatomic, readonly) NSArray *restrictionSections;
@property (nonatomic) bool showManagedPayloads;

+ (id)trustTextForProfile:(id)arg1 outIsTrusted:(bool*)arg2;

- (void).cxx_destruct;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (void)_determineAvailableElevatedPayloadInfoTypes;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (void)_managedAppsChanged:(id)arg1;
- (void)_managedBooksChanged:(id)arg1;
- (long long)_numberOfItemsInSectionsArray:(id)arg1;
- (void)_profilesUpdated:(id)arg1;
- (id)_signedByStringFromProfile:(id)arg1;
- (id)_sortedPayloads:(id)arg1;
- (id)_warningTextFromPayload:(id)arg1;
- (id)accountSections;
- (id)byodInfoSections;
- (void)dealloc;
- (id)elevatedPayloadTypes;
- (long long)finalInstallationWarningStyle;
- (id)initWithProfile:(id)arg1 managedPayloads:(bool)arg2;
- (bool)isInstalledMDMProfile;
- (bool)isMDMProfile;
- (id)managedAppSections;
- (id)managedAppleID;
- (id)managedBookSections;
- (bool)managesAppID:(id)arg1;
- (bool)managesBook:(id)arg1;
- (id)moreDetailsSections;
- (long long)numberOfAccounts;
- (long long)numberOfManagedApps;
- (long long)numberOfManagedBooks;
- (long long)numberOfRestrictions;
- (id)payloadInfoSectionSummaries;
- (id)profile;
- (void)reloadProfile:(id)arg1;
- (id)restrictionSections;
- (void)setFinalInstallationWarningStyle:(long long)arg1;
- (void)setManagedAppleID:(id)arg1;
- (void)setProfile:(id)arg1 managedPayloads:(bool)arg2;
- (void)setShowManagedPayloads:(bool)arg1;
- (bool)showManagedPayloads;

@end
