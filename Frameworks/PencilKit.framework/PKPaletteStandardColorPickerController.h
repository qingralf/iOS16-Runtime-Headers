/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController <PKColorPickerDelegate> {
    PKColorPicker * _colorPickerViewController;
}

@property (nonatomic, retain) PKColorPicker *colorPickerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (id)colorPickerViewController;
- (long long)colorUserInterfaceStyle;
- (id)init;
- (id)selectedColor;
- (void)setColorPickerViewController:(id)arg1;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedColorForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSupportsAlpha:(bool)arg1;
- (bool)supportsAlpha;
- (id)viewController;

@end
