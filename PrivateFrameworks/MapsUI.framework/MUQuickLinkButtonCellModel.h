/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUQuickLinkButtonCellModel : NSObject <MUDynamicButtonCellModel> {
    id /* block */  _actionBlock;
    NSString * _cachedSubtitle;
    <MUDynamicButtonCellModelChangeDelegate> * _changeDelegate;
    bool  _didLoad;
    UIMenu * _menu;
    GEOQuickLink * _quickLink;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) long long actionStyle;
@property (nonatomic) <MUDynamicButtonCellModelChangeDelegate> *changeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIMenu *menu;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *titleString;

- (void).cxx_destruct;
- (void)_completeWithSubtitle:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadAppClipWithCompletion:(id /* block */)arg1;
- (void)_loadQuickLinkWithCompletion:(id /* block */)arg1;
- (id)accessibilityIdentifierForAction;
- (id /* block */)actionBlock;
- (long long)actionStyle;
- (int)analyticAction;
- (id)changeDelegate;
- (id)initWithQuickLink:(id)arg1;
- (bool)isEnabled;
- (void)loadSubtitleWithCompletion:(id /* block */)arg1;
- (id)menu;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setChangeDelegate:(id)arg1;
- (void)setMenu:(id)arg1;
- (id)symbolName;
- (id)titleString;

@end
