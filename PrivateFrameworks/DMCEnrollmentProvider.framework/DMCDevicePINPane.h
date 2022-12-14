/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider
 */

@interface DMCDevicePINPane : DevicePINPane {
    unsigned long long  _style;
    NSString * _titleText;
}

@property (nonatomic, readonly) UIView *descriptionLabel;
@property (nonatomic, readonly) UIView *passcodeField;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)_textFont;
- (id)descriptionLabel;
- (void)layoutSubviews;
- (id)passcodeField;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleText:(id)arg1;
- (unsigned long long)style;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;

@end
