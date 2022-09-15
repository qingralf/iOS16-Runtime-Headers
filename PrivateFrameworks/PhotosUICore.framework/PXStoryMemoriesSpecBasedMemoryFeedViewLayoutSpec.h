/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStoryMemoriesSpecBasedMemoryFeedViewLayoutSpec : NSObject <PXFeedViewLayoutSpec> {
    bool  _isFullScreen;
    double  _itemCornerRadius;
    NSShadow * _itemShadow;
    PXMemoriesSpec * _memoriesSpec;
    long long  _numberOfColumns;
    double  _overlayFeedPeekDistance;
    long long  _rootLayoutOrientation;
    struct { 
        long long axis; 
        long long decelerationRate; 
        bool pagingEnabled; 
        double pagingOrigin; 
        double pageOffset; 
        double intrinsicContentOffset; 
        bool allowingFlickAcrossMultiplePages; 
    }  _scrollBehavior;
    UIColor * _subtitleColor;
    UIFont * _subtitleFont;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _subtitleInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _viewOutsets;
}

@property (nonatomic) bool isFullScreen;
@property (nonatomic, readonly) double itemCornerRadius;
@property (nonatomic, readonly) NSShadow *itemShadow;
@property (nonatomic, readonly) PXMemoriesSpec *memoriesSpec;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) double overlayFeedPeekDistance;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } placeholderMargins;
@property (nonatomic, readonly) long long rootLayoutOrientation;
@property (nonatomic, readonly) struct { long long x1; long long x2; bool x3; double x4; double x5; double x6; bool x7; } scrollBehavior;
@property (nonatomic, readonly) UIColor *subtitleColor;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } subtitleInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } viewOutsets;
@property (nonatomic, readonly) bool wantsFirstItemFullscreen;
@property (nonatomic, readonly) bool wantsItemHoverEvents;
@property (nonatomic, readonly) bool wantsSafeAreaInsets;
@property (nonatomic, readonly) bool wantsScrollIndicators;

- (void).cxx_destruct;
- (id)_fullscreenLayoutGeneratorWithReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })gadgetSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithMemoriesSpec:(id)arg1;
- (bool)isFullScreen;
- (double)itemCornerRadius;
- (id)itemShadow;
- (id)layoutGeneratorWithReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (id)memoriesSpec;
- (long long)numberOfColumns;
- (double)overlayFeedPeekDistance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })placeholderMargins;
- (long long)rootLayoutOrientation;
- (struct { long long x1; long long x2; bool x3; double x4; double x5; double x6; bool x7; })scrollBehavior;
- (void)setIsFullScreen:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleColor;
- (id)subtitleFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })subtitleInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })viewOutsets;
- (bool)wantsFirstItemFullscreen;
- (bool)wantsItemHoverEvents;
- (bool)wantsSafeAreaInsets;
- (bool)wantsScrollIndicators;

@end