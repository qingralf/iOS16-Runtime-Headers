/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
 */

@interface SUSSoftwareUpdateScanCell : PSTableCell {
    NSString * _currentVersion;
    int  _state;
    bool  _suPathsRestricted;
    bool  _updatesDeferred;
}

@property (nonatomic, retain) NSString *currentVersion;
@property (nonatomic) int state;
@property bool suPathsRestricted;
@property bool updatesDeferred;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (id)contentUnavailableConfigurationForState:(int)arg1;
- (id)currentVersion;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (double)preferredHeightWithTable:(id)arg1;
- (void)setCurrentVersion:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSuPathsRestricted:(bool)arg1;
- (void)setUpdatesDeferred:(bool)arg1;
- (int)state;
- (bool)suPathsRestricted;
- (id)upToDateManagedText;
- (id)upToDateText;
- (id)upToDateWithAlternate;
- (bool)updatesDeferred;

@end
