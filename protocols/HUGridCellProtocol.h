/* Generated by RuntimeBrowser.
 */

@protocol HUGridCellProtocol <NSObject, HUCellProtocol>

@required

+ (Class)layoutOptionsClass;

- (bool)areCellContentsHidden;
- (bool)areCellContentsHidden;
- (HUGridCellLayoutOptions *)layoutOptions;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setLayoutOptions:(HUGridCellLayoutOptions *)arg1;

@optional

- (bool)isPointerInteractionEnabled;
- (bool)isPointerInteractionEnabled;
- (bool)isRearranging;
- (bool)isRearranging;
- (double)pointerRegionMargin;
- (void)setPointerInteractionEnabled:(bool)arg1;
- (void)setPointerInteractionEnabled:(bool)arg1;
- (void)setPointerRegionMargin:(double)arg1;
- (void)setRearranging:(bool)arg1;
- (void)setRearranging:(bool)arg1;

@end
