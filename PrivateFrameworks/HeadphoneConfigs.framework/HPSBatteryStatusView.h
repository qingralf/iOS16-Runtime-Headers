/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadphoneConfigs.framework/HeadphoneConfigs
 */

@interface HPSBatteryStatusView : UIView {
    UIImageView * caseImageView;
    BTSDevice * currentDevice;
    bool  darkMode;
    unsigned char  deviceColor;
    UIImageView * deviceImageView;
    UIImageView * leftImageView;
    NSString * productIdString;
    UIImageView * rightImageView;
    struct { 
        unsigned char battLevelSingle; 
        unsigned char battLevelRight; 
        unsigned char battLevelLeft; 
        unsigned char battLevelCase; 
        unsigned char battLevelCombined; 
    }  status;
    bool  untethered;
}

// Image: /System/Library/PrivateFrameworks/HeadphoneConfigs.framework/HeadphoneConfigs

- (void).cxx_destruct;
- (void)applyFilters:(id)arg1 imageView:(id)arg2;
- (void)applyFiltersForMode:(bool)arg1;
- (unsigned char)bestDeviceColor:(unsigned int)arg1 productID:(unsigned int)arg2;
- (id)getAssetsDictionary:(unsigned int)arg1;
- (void)getBatteryStatus;
- (id)getDeviceCaseIcon:(unsigned int)arg1;
- (id)getProductIDString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2 darkMode:(bool)arg3;
- (bool)isProductOfDifferentColors;

// Image: /System/Library/AccessibilityBundles/HeadphoneConfigs.axbundle/HeadphoneConfigs

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)setupViews;

@end