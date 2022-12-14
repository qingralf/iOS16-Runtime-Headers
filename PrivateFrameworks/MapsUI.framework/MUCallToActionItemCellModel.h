/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUCallToActionItemCellModel : NSObject <MUDynamicButtonCellModel> {
    id /* block */  _actionBlock;
    MKUGCCallToActionViewAppearance * _appearance;
    <MUDynamicButtonCellModelChangeDelegate> * _changeDelegate;
    UIMenu * _menu;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) long long actionStyle;
@property (nonatomic, retain) MKUGCCallToActionViewAppearance *appearance;
@property (nonatomic) <MUDynamicButtonCellModelChangeDelegate> *changeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIMenu *menu;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *titleString;

+ (id)passiveAddPhotosCallToActionAppearance;
+ (id)passiveRatingsCallToActionAppearance;

- (void).cxx_destruct;
- (id)accessibilityIdentifierForAction;
- (id /* block */)actionBlock;
- (long long)actionStyle;
- (id)appearance;
- (id)changeDelegate;
- (id)initWithCallToActionViewAppearance:(id)arg1;
- (bool)isEnabled;
- (void)loadSubtitleWithCompletion:(id /* block */)arg1;
- (id)menu;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setAppearance:(id)arg1;
- (void)setChangeDelegate:(id)arg1;
- (void)setMenu:(id)arg1;
- (id)symbolName;
- (id)titleString;

@end
