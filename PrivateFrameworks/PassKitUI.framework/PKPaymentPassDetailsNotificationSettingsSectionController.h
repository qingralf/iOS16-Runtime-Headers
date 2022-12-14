/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassDetailsNotificationSettingsSectionController : NSObject <PKPaymentPassDetailTableViewSectionController> {
    PKAccount * _account;
    NSArray * _allSectionIdentifiers;
    <PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> * _delegate;
    long long  _detailViewStyle;
    long long  _notificationAuthorizationStatus;
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    NSArray * _sectionIdentifiers;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, readonly) NSArray *allSectionIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long notificationAuthorizationStatus;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (readonly) Class superclass;

+ (long long)_countOfRowsForPass:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3;
+ (bool)_showsTransactionHistorySwitchForPass:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3;
+ (id)_updatedPeerPaymentAccountForPeerPaymentAccount:(id)arg1 pass:(id)arg2;
+ (bool)canShowSectionforPass:(id)arg1 dataProvider:(id)arg2 peerPaymentAccount:(id)arg3 account:(id)arg4 transactionSourceCollection:(id)arg5;
+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_accountFeature;
- (id)_accountServiceNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (id)_cellForType:(long long)arg1;
- (long long)_countOfRows;
- (void)_dailyCashSwitchChanged:(id)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (id)_indexPathForRowType:(long long)arg1;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (void)_notificationSwitchChanged:(id)arg1;
- (void)_passSettingsChanged:(id)arg1;
- (id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_reportPassDetailsAnalyticsForToggleTag:(id)arg1 toggleResult:(bool)arg2 additionalAnalytics:(id)arg3;
- (id)_settingsTableCellWithTitle:(id)arg1 action:(SEL)arg2 setOn:(bool)arg3 enabled:(bool)arg4;
- (bool)_shouldMapSection;
- (id)_transactionsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_transactionsSwitchChanged:(id)arg1;
- (id)allSectionIdentifiers;
- (void)dealloc;
- (id)delegate;
- (long long)editingStyleForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (void)fetchAuthorizationStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithPass:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3 paymentDataProvider:(id)arg4 transactionSourceCollection:(id)arg5 detailViewStyle:(long long)arg6 delegate:(id)arg7;
- (long long)notificationAuthorizationStatus;
- (id)sectionIdentifiers;
- (void)setTransactionsEnabled:(bool)arg1;
- (bool)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg1;
- (bool)shouldDrawTopSeparatorForSectionIdentifier:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (id)titleForFooterInSectionIdentifier:(id)arg1;
- (id)titleForHeaderInSectionIdentifier:(id)arg1;

@end
