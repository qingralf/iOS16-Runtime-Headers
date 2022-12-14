/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAssistantBarButtonItemProvider : NSObject

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_isDictationButtonVisible;
+ (bool)_isDismissButtonVisible;
+ (bool)_isEmojiButtonVisible;
+ (bool)_isInputModeVisible:(id)arg1;
+ (bool)_isKeyboardGroupVisible;
+ (bool)_isKeyboardItemEnabled;
+ (bool)_isMinimizeAssistantBarButtonVisible;
+ (bool)_isScribbleButtonsVisible;
+ (bool)_isShowKeyboardButtonVisible;
+ (id)barButtonItemForAssistantItemStyle:(long long)arg1 target:(id)arg2;
+ (id)barButtonItemForAssistantItemStyle:(long long)arg1 target:(id)arg2 forcePlainButton:(bool)arg3;
+ (id)compactSystemAssistantItem;
+ (id)configuredSymbolImageWithName:(id)arg1 size:(double)arg2;
+ (id)defaultSystemLeadingBarButtonGroupsForItem:(id)arg1;
+ (id)defaultSystemTrailingBarButtonGroupsForItem:(id)arg1;
+ (id)dictationActionForInputMode:(id)arg1 inCurrentInputMode:(id)arg2;
+ (id)dictationMenu;
+ (void)dismissFloatingKeyboardFromPencilKitIfNeeded;
+ (id)imageSymbolConfigurationForAssistantBarWithPointSize:(double)arg1;
+ (id)inputWindowController;
+ (id)languageIndicatorImage;
+ (id)languageIndicatorItem:(bool)arg1;
+ (id)languageIndicatorMenu:(bool)arg1;
+ (void)setAssistantBarCompact:(bool)arg1;
+ (void)setScribbleLanguageIdentifier:(id)arg1;
+ (id)systemDefaultAssistantItem;
+ (id)unmodifiableSystemAssistantItem:(long long)arg1;
+ (void)updateFloatingAssistantBarIfNeeded;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (id)actionForInputMode:(id)arg1;
+ (Class)safeCategoryBaseClass;

@end
