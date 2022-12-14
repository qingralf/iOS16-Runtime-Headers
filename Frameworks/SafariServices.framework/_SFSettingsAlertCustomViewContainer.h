/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSettingsAlertCustomViewContainer : UIView <SFSettingsAlertItemView> {
    _SFSettingsAlertItemBackgroundView * _backgroundView;
    UIView * _contentView;
    long long  _defaultBackgroundMode;
    <SFSettingsAlertItemViewDelegate> * _delegate;
    bool  _enabled;
    bool  _hidesSeparator;
    _SFSettingsAlertItem * _item;
}

@property (nonatomic, readonly) long long backgroundMode;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultBackgroundMode;
@property (nonatomic) <SFSettingsAlertItemViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesSeparator;
@property (nonatomic) _SFSettingsAlertItem *item;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)backgroundMode;
- (id)contentView;
- (long long)defaultBackgroundMode;
- (id)delegate;
- (bool)hidesSeparator;
- (id)initWithContentView:(id)arg1;
- (bool)isEnabled;
- (id)item;
- (void)setDefaultBackgroundMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidesSeparator:(bool)arg1;
- (void)setItem:(id)arg1;

@end
