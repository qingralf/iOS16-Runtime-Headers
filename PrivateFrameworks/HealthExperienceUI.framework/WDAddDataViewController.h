/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
 */

@interface WDAddDataViewController : HKTableViewController {
    HKDateCache * _dateCache;
    HKDisplayType * _displayType;
    HKHealthStore * _healthStore;
    NSDate * _initialStartDate;
    NSDictionary * _manualEntryItems;
    NSArray * _tableViewCellsBySection;
    HKUnitPreferenceController * _unitController;
    HKManualEntryValidationController * _validationController;
}

@property (nonatomic, copy) NSDate *initialStartDate;
@property (nonatomic) bool savingEnabled;

- (void).cxx_destruct;
- (void)_dataValidated;
- (void)_loadTableViewCellsBySectionIfNecessary;
- (void)_showValidationConfirmAlertWithErrorString:(id)arg1;
- (void)_showValidationErrorAlertWithErrorString:(id)arg1;
- (void)addButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id)defaultEditingItem;
- (id)defaultMetadata;
- (id)generateHKObjects;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initialStartDate;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadManualEntryItems;
- (void)reloadManualEntryItemsAndReloadTableView:(bool)arg1;
- (void)saveHKObjectWithCompletion:(id /* block */)arg1;
- (bool)savingEnabled;
- (void)setInitialStartDate:(id)arg1;
- (void)setSavingEnabled:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)validateDataWithCompletion:(id /* block */)arg1;
- (void)validateMaximumAllowedDurationFor:(id)arg1 endDate:(id)arg2 competion:(id /* block */)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
