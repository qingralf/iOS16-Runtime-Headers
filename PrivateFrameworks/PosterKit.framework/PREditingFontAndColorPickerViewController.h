/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PREditingFontAndColorPickerViewController : UIViewController <PREditingColorPickerComponentViewControllerDelegate, PREditingFontPickerComponentViewControllerDelegate, PREditorNumberingSystemPickerControllerDelegate, PREditorNumberingSystemViewControllerDelegate, UISheetPresentationControllerDelegate> {
    NSArray * _additionalFonts;
    id /* block */  _changeHandler;
    PREditorColorPickerConfiguration * _colorPickerConfiguration;
    PREditingColorPickerComponentViewController * _colorPickerController;
    PREditingColorVariationStore * _colorVariationStore;
    PREditingColorWell * _colorWell;
    PREditingColorWellView * _colorWellView;
    unsigned long long  _components;
    double  _contentsLuminance;
    <PREditingFontAndColorPickerViewControllerDelegate> * _delegate;
    NSURL * _extensionBundleURL;
    PREditingFontPickerComponentViewController * _fontPickerController;
    bool  _hasLoadedComponentViewControllers;
    UIBarButtonItem * _numberSystemBarItem;
    PREditorNumberingSystemPickerController * _numberingSystemController;
    PREditorNumberingSystemViewController * _numberingSystemViewController;
    UIStackView * _rootStackView;
    PRPosterTitleStyleConfiguration * _titleStyleConfiguration;
}

@property (nonatomic, copy) NSArray *additionalFonts;
@property (nonatomic, copy) id /* block */ changeHandler;
@property (nonatomic, retain) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (nonatomic, retain) PREditingColorPickerComponentViewController *colorPickerController;
@property (nonatomic, retain) PREditingColorVariationStore *colorVariationStore;
@property (nonatomic, retain) PREditingColorWell *colorWell;
@property (nonatomic, retain) PREditingColorWellView *colorWellView;
@property (nonatomic, readonly) unsigned long long components;
@property (nonatomic) double contentsLuminance;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PREditingFontAndColorPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *extensionBundleURL;
@property (nonatomic, retain) PREditingFontPickerComponentViewController *fontPickerController;
@property (nonatomic) bool hasLoadedComponentViewControllers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *numberSystemBarItem;
@property (nonatomic, retain) PREditorNumberingSystemPickerController *numberingSystemController;
@property (nonatomic, retain) PREditorNumberingSystemViewController *numberingSystemViewController;
@property (nonatomic, retain) UIStackView *rootStackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) PRPosterTitleStyleConfiguration *titleStyleConfiguration;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (void).cxx_destruct;
- (void)_closeButtonTapped:(id)arg1;
- (void)_signalDelegateDidFinish;
- (id)additionalFonts;
- (id /* block */)changeHandler;
- (void)colorPickerComponentViewController:(id)arg1 didSelectColorItem:(id)arg2 userSelected:(bool)arg3;
- (void)colorPickerComponentViewControllerDidChangeHeight:(id)arg1;
- (id)colorPickerConfiguration;
- (id)colorPickerController;
- (id)colorVariationStore;
- (id)colorWell;
- (void)colorWellDidUpdateColor:(id)arg1;
- (id)colorWellView;
- (unsigned long long)components;
- (double)contentsLuminance;
- (id)delegate;
- (double)desiredDetent;
- (id)extensionBundleURL;
- (void)fontPickerComponentViewController:(id)arg1 didSelectFont:(id)arg2;
- (id)fontPickerController;
- (bool)hasLoadedComponentViewControllers;
- (id)initWithComponents:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadComponentViewControllersIfNeeded;
- (void)loadView;
- (id)localeWithNumberingSystem:(id)arg1;
- (id)numberSystemBarItem;
- (id)numberingSystemController;
- (void)numberingSystemPickerController:(id)arg1 didSelectNumberingSystem:(id)arg2;
- (id)numberingSystemViewController;
- (void)numberingSystemViewController:(id)arg1 didSelectNumberingSystem:(id)arg2;
- (void)numberingSystemWasChanged:(id)arg1 locale:(id)arg2;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)rootStackView;
- (void)setAdditionalFonts:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setColorPickerConfiguration:(id)arg1;
- (void)setColorPickerController:(id)arg1;
- (void)setColorVariationStore:(id)arg1;
- (void)setColorWell:(id)arg1;
- (void)setColorWellView:(id)arg1;
- (void)setContentsLuminance:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionBundleURL:(id)arg1;
- (void)setFontPickerController:(id)arg1;
- (void)setHasLoadedComponentViewControllers:(bool)arg1;
- (void)setNumberSystemBarItem:(id)arg1;
- (void)setNumberingSystemController:(id)arg1;
- (void)setNumberingSystemViewController:(id)arg1;
- (void)setRootStackView:(id)arg1;
- (void)setTitleStyleConfiguration:(id)arg1;
- (id)titleStyleConfiguration;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/AccessibilityBundles/PosterKit.axbundle/PosterKit

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)viewDidAppear:(bool)arg1;

@end