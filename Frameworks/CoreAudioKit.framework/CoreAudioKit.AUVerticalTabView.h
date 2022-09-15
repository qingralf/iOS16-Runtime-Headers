/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CoreAudioKit.AUVerticalTabView : UIControl {
    void accessibleElements;
    void horizontal;
    void maxTabDimension;
    void numActiveTabs;
    void selectedTabIndex;
    void tabDimension;
    void tabs;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) double maxTabDimension;
@property (nonatomic) long long numActiveTabs;
@property (nonatomic) long long selectedTabIndex;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 data:(id)arg2 horizontal:(bool)arg3;
- (void)layoutSubviews;
- (double)maxTabDimension;
- (long long)numActiveTabs;
- (long long)selectedTabIndex;
- (void)setAccessibilityElements:(id)arg1;
- (void)setMaxTabDimension:(double)arg1;
- (void)setNumActiveTabs:(long long)arg1;
- (void)setSelectedTabIndex:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end