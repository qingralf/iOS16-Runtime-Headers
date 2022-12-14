/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeContextItem : NSObject {
    NSString * _analyticsIdentifier;
    NSAttributedString * _attributedValue;
    NSString * _dateString;
    bool  _infoHidden;
    HKUIMetricColors * _metricColors;
    HKUIMetricColors * _selectedMetricColors;
    HKDisplayTypeContextItemTitleAccessory * _selectedTitleAccessory;
    NSString * _title;
    HKDisplayTypeContextItemTitleAccessory * _titleAccessory;
    NSString * _unit;
    bool  _useTightSpacingBetweenValueAndUnit;
    bool  _userInteractive;
    NSString * _value;
    NSString * _valueContext;
}

@property (nonatomic, copy) NSString *analyticsIdentifier;
@property (nonatomic, copy) NSAttributedString *attributedValue;
@property (nonatomic, copy) NSString *dateString;
@property (nonatomic, readonly) bool hasTitleAccessory;
@property (nonatomic) bool infoHidden;
@property (nonatomic, retain) HKUIMetricColors *metricColors;
@property (nonatomic, retain) HKUIMetricColors *selectedMetricColors;
@property (nonatomic, copy) HKDisplayTypeContextItemTitleAccessory *selectedTitleAccessory;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) HKDisplayTypeContextItemTitleAccessory *titleAccessory;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic) bool useTightSpacingBetweenValueAndUnit;
@property (nonatomic) bool userInteractive;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *valueContext;

- (void).cxx_destruct;
- (id)analyticsIdentifier;
- (id)attributedValue;
- (id)dateString;
- (id)debugDescription;
- (bool)hasTitleAccessory;
- (unsigned long long)hash;
- (bool)infoHidden;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContextItem:(id)arg1;
- (id)metricColors;
- (id)selectedMetricColors;
- (id)selectedTitleAccessory;
- (void)setAnalyticsIdentifier:(id)arg1;
- (void)setAttributedValue:(id)arg1;
- (void)setDateString:(id)arg1;
- (void)setInfoHidden:(bool)arg1;
- (void)setMetricColors:(id)arg1;
- (void)setSelectedMetricColors:(id)arg1;
- (void)setSelectedTitleAccessory:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAccessory:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setUseTightSpacingBetweenValueAndUnit:(bool)arg1;
- (void)setUserInteractive:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValueContext:(id)arg1;
- (id)title;
- (id)titleAccessory;
- (id)unit;
- (bool)useTightSpacingBetweenValueAndUnit;
- (bool)userInteractive;
- (id)value;
- (id)valueContext;

@end
