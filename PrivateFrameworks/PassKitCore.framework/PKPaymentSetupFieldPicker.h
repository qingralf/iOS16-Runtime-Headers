/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField {
    NSArray * _pickerItems;
    unsigned long long  _pickerType;
}

@property (nonatomic, copy) PKPaymentSetupFieldPickerItem *currentValue;
@property (nonatomic, copy) NSArray *pickerItems;
@property (nonatomic) unsigned long long pickerType;

- (void).cxx_destruct;
- (void)_commonUpdate;
- (id)_submissionStringForValue:(id)arg1;
- (id)currentValue;
- (id)displayString;
- (unsigned long long)fieldType;
- (id)pickerItems;
- (unsigned long long)pickerType;
- (void)setCurrentValue:(id)arg1;
- (void)setPickerItems:(id)arg1;
- (void)setPickerType:(unsigned long long)arg1;
- (bool)submissionStringMeetsAllRequirements;
- (void)updateWithAttribute:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end