/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface HealthRecordsUI.UDCRecordsTableViewController : WDMedicalRecordTimelineViewController {
    void $__lazy_storage_$_modePicker;
    void additionalPredicate;
    void preferredSegment;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1 category:(id)arg2 factory:(id)arg3;
- (id)initWithProfile:(id)arg1 factory:(id)arg2 account:(id)arg3 showInitialSearchBar:(bool)arg4;
- (id)initWithProfile:(id)arg1 factory:(id)arg2 accountId:(id)arg3 showInitialSearchBar:(bool)arg4;
- (id)initWithProfile:(id)arg1 factory:(id)arg2 category:(id)arg3 showInitialSearchBar:(bool)arg4;
- (id)initWithProfile:(id)arg1 factory:(id)arg2 category:(id)arg3 showInitialSearchBar:(bool)arg4 predicatePerSampleType:(id)arg5;
- (id)initWithProfile:(id)arg1 factory:(id)arg2 conceptIdentifier:(id)arg3 category:(id)arg4 highlightedRecordId:(id)arg5;
- (id)initWithProfile:(id)arg1 factory:(id)arg2 preloadedRecords:(id)arg3;
- (id)initWithProfile:(id)arg1 factory:(id)arg2 showInitialSearchBar:(bool)arg3;
- (id)initWithProfile:(id)arg1 factory:(id)arg2 userDomainConcept:(id)arg3 category:(id)arg4 highlightedRecordId:(id)arg5;
- (void)modePickerDidChange:(id)arg1;

@end