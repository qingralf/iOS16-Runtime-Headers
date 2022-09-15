/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXSystemFontFace : NSObject <SXFontFace> {
    <SXFontAttributes> * _fontAttributes;
    NSString * _fontName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXFontAttributes> *fontAttributes;
@property (nonatomic, readonly) NSDictionary *fontDescriptorAttributes;
@property (nonatomic, readonly) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)fontAttributes;
- (id)fontAttributesForMetadata:(id)arg1;
- (id)fontDescriptorAttributes;
- (id)fontName;
- (long long)fontStyleForValue:(id)arg1;
- (long long)fontWeightForValue:(id)arg1;
- (long long)fontWidthForValue:(id)arg1;
- (id)initWithMetadata:(id)arg1;

@end