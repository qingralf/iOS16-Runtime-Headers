/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SocialLayer.framework/SocialLayer
 */

@interface SLDCollaborationAttributionViewRenderer : NSObject {
    bool  _RTL;
    SLCollaborationAttributionViewMetricsProvider * _metricsProvider;
    UISSlotStyle * _slotStyle;
    SLDCollaborationAttributionViewSlotTag * _slotTag;
}

@property (getter=isRTL, nonatomic) bool RTL;
@property (nonatomic, retain) SLCollaborationAttributionViewMetricsProvider *metricsProvider;
@property (nonatomic, retain) UISSlotStyle *slotStyle;
@property (nonatomic, retain) SLDCollaborationAttributionViewSlotTag *slotTag;

- (void).cxx_destruct;
- (id)collaboratorsString;
- (id)collaboratorsStringPrefixingWith:(bool)arg1;
- (struct CGImage { }*)createAvatarImage;
- (struct CGImage { }*)createAvatarImageForConversationDrawingMetadata:(id)arg1 allowSnowglobe:(bool)arg2 allowMonogram:(bool)arg3;
- (struct CGImage { }*)createAvatarImageForRecipientDrawingMetadata:(id)arg1 allowMonogram:(bool)arg2;
- (struct CGImage { }*)createGroupPhotoImageFromFileURL:(id)arg1;
- (struct CGImage { }*)createGroupPhotoImageWithData:(id)arg1;
- (struct CGImage { }*)createGroupPhotoImageWithGroupID:(id)arg1;
- (struct CGImage { }*)createImageFromData:(id)arg1;
- (struct CGImage { }*)createMonogramImageForContact:(id)arg1;
- (struct CGImage { }*)createSnowglobeImageWithCGImages:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawAvatarWithImageRef:(struct CGImage { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawGenericGlyphInContext:(struct CGContext { }*)arg1;
- (void)drawLine:(struct __CTLine { }*)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3;
- (double)heightForLine:(struct __CTLine { }*)arg1 withOptions:(unsigned long long)arg2;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;
- (bool)isRTL;
- (id)metricsProvider;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setMetricsProvider:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSlotStyle:(id)arg1;
- (void)setSlotTag:(id)arg1;
- (bool)shouldShowGenericIconIfApplicableForVariant:(long long)arg1;
- (bool)shouldShowLabels;
- (bool)shouldShowMonogramIfApplicableForVariant:(long long)arg1;
- (bool)shouldShowSnowglobeIfApplicableForVariant:(long long)arg1;
- (bool)shouldShowSubtitle;
- (id)slotStyle;
- (id)slotTag;
- (id)withCollaboratorsString;

@end
