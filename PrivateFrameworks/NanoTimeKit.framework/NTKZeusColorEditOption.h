/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKZeusColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (nonatomic, readonly) unsigned long long color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (unsigned long long)colorCodeForColorName:(id)arg1;
+ (id)colorNameForColorValue:(unsigned long long)arg1;
+ (id)domain;
+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)color;
- (id)localizedName;
- (bool)optionExistsInDevice:(id)arg1;
- (id)pigmentEditOption;
- (long long)swatchStyle;

@end
