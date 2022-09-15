/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSMutableConfiguredWidgetDescriptor : CHSConfiguredWidgetDescriptor

@property (nonatomic) bool showsComplicationLabel;
@property (nonatomic) bool showsWidgetLabel;
@property (getter=isSuggestion, nonatomic) bool suggestion;
@property (nonatomic) bool supportsLowLuminance;
@property (nonatomic) bool supportsTinting;
@property (getter=isSystemConfigured, nonatomic) bool systemConfigured;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setShowsComplicationLabel:(bool)arg1;
- (void)setShowsWidgetLabel:(bool)arg1;
- (void)setSuggestion:(bool)arg1;
- (void)setSupportsLowLuminance:(bool)arg1;
- (void)setSupportsTinting:(bool)arg1;
- (void)setSystemConfigured:(bool)arg1;
- (bool)showsComplicationLabel;

@end