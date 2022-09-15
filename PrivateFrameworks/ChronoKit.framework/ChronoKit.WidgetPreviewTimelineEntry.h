/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoKit.framework/ChronoKit
 */

@interface ChronoKit.WidgetPreviewTimelineEntry : TLTimelineBlobEntry <TLPreviewTimelineEntry> {
    void backgroundColor;
    void renderEffectIDs;
    void tl_errors;
    void tl_selectableRegions;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSArray *tl_errors;
@property (nonatomic, copy) NSArray *tl_selectableRegions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)initWithBlob:(id)arg1 atDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTl_errors:(id)arg1;
- (void)setTl_selectableRegions:(id)arg1;
- (id)tl_errors;
- (id)tl_selectableRegions;

@end