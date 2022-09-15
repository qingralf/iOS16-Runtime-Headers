/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

@interface AXSettingsPrimaryResourceDownloadController : AXSettingsResourceDownloadController {
    id /* block */  _getSpeakingRateCallback;
    bool  _hideLanguageInDialect;
    bool  _isDownloading;
    NSString * _language;
    NSString * _languageBeingDownloaded;
    AXLangMap * _languageMap;
    NSObject<OS_dispatch_queue> * _loadVoiceFootprintsQueue;
    UIView * _loadingView;
    bool  _loadingVoiceFootprints;
    UIActivityIndicatorView * _progressIndicator;
    bool  _receivedCompactAnswer;
    bool  _receivedIsDownloading;
    id /* block */  _setSpeakingRateCallback;
    bool  _showDialectInTitle;
    bool  _showDialectPicker;
    bool  _showNeural;
    bool  _showSpeakingRate;
    float  _speakingRate;
    Class  _speakingRateSliderCell;
    UISlider * _speechRateSlider;
    long long  _storageSize;
    NSLock * _voiceFootprintLock;
    NSMutableArray * _voiceFootprints;
    bool  _wantsDelete;
    bool  _wantsDownload;
}

@property (nonatomic, copy) id /* block */ getSpeakingRateCallback;
@property (nonatomic) bool hideLanguageInDialect;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) AXLangMap *languageMap;
@property (nonatomic, retain) UIView *loadingView;
@property (nonatomic, retain) UIActivityIndicatorView *progressIndicator;
@property (nonatomic, copy) id /* block */ setSpeakingRateCallback;
@property (nonatomic) bool showDialectInTitle;
@property (nonatomic) bool showDialectPicker;
@property (nonatomic) bool showNeural;
@property (nonatomic) bool showSpeakingRate;
@property (nonatomic) float speakingRate;
@property (nonatomic, retain) Class speakingRateSliderCell;
@property (nonatomic, retain) NSMutableArray *voiceFootprints;

- (void).cxx_destruct;
- (id)_getSelectedVariation:(id)arg1;
- (id)_internalSpecifiers;
- (void)_prepareVoiceFootprints;
- (void)_setSpeakingRate:(id)arg1 specifier:(id)arg2;
- (id)_speakingRate:(id)arg1;
- (void)_updateSpeakingRate;
- (void)addVoiceFootprintsToArray:(id)arg1 forDialect:(id)arg2;
- (void)createVoiceFootprints;
- (id /* block */)getSpeakingRateCallback;
- (bool)hideLanguageInDialect;
- (id)init;
- (id)language;
- (id)languageMap;
- (id)loadingView;
- (id)progressIndicator;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setGetSpeakingRateCallback:(id /* block */)arg1;
- (void)setHideLanguageInDialect:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLanguageMap:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setSetSpeakingRateCallback:(id /* block */)arg1;
- (void)setShowDialectInTitle:(bool)arg1;
- (void)setShowDialectPicker:(bool)arg1;
- (void)setShowNeural:(bool)arg1;
- (void)setShowSpeakingRate:(bool)arg1;
- (void)setSpeakingRate:(float)arg1;
- (id /* block */)setSpeakingRateCallback;
- (void)setSpeakingRateCallbackBlock:(id /* block */)arg1;
- (void)setSpeakingRateSliderCell:(Class)arg1;
- (void)setVoiceFootprints:(id)arg1;
- (bool)showDialectInTitle;
- (bool)showDialectPicker;
- (bool)showNeural;
- (bool)showSpeakingRate;
- (float)speakingRate;
- (Class)speakingRateSliderCell;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)voiceFootprints;

@end