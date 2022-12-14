/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NanoUniverse.PreferencePane : NSObject <NanoUniverse.PreferencePaneDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _name;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _panes;
    void defaultPickersSelections;
    void defaultSliders;
    void defaultToggles;
    void delegate;
    void pickerOptions;
    void pickersSelections;
    void sliders;
    void toggles;
    void userDefaults;
}

@property (nonatomic, copy) NSDictionary *defaultPickersSelections;
@property (nonatomic, copy) NSDictionary *defaultSliders;
@property (nonatomic, copy) NSDictionary *defaultToggles;
@property (nonatomic) <_TtP12NanoUniverse22PreferencePaneDelegate_> *delegate;
@property (nonatomic, readonly) double lightBloom;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *panes;
@property (nonatomic, copy) NSDictionary *pickerOptions;
@property (nonatomic, copy) NSArray *pickersSelections;
@property (nonatomic, copy) NSArray *sliders;
@property (nonatomic, copy) NSArray *toggles;

+ (id)aegirRenderingPreferencePane;

- (void).cxx_destruct;
- (id)defaultPickersSelections;
- (id)defaultSliders;
- (id)defaultToggles;
- (id)delegate;
- (id)fractionValueForOption:(id)arg1;
- (id)getValueForKey:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 panes:(id)arg2;
- (id)initWithName:(id)arg1 userDefaults:(id)arg2 sliders:(id)arg3 toggles:(id)arg4 pickerOptions:(id)arg5 pickerSelections:(id)arg6;
- (double)lightBloom;
- (id)name;
- (id)panes;
- (id)pickerOptions;
- (id)pickersSelections;
- (void)preferencePaneDidChangeWithPreference:(id)arg1;
- (void)reset;
- (void)set:(id)arg1 forKey:(id)arg2;
- (void)setDefaultPickersSelections:(id)arg1;
- (void)setDefaultSliders:(id)arg1;
- (void)setDefaultToggles:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPanes:(id)arg1;
- (void)setPickerOptions:(id)arg1;
- (void)setPickersSelections:(id)arg1;
- (void)setSliders:(id)arg1;
- (void)setToggles:(id)arg1;
- (id)sliders;
- (id)toggles;

@end
