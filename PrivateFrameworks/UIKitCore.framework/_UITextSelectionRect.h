/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextSelectionRect : UITextSelectionRect {
    bool  __drawsOwnHighlight;
    bool  _containsEnd;
    bool  _containsStart;
    bool  _isVertical;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    long long  _writingDirection;
}

@property (setter=_setDrawsOwnHighlight:, nonatomic) bool _drawsOwnHighlight;
@property (nonatomic) bool containsEnd;
@property (nonatomic) bool containsStart;
@property (nonatomic) bool isVertical;
@property (nonatomic) long long writingDirection;

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;

- (bool)_drawsOwnHighlight;
- (void)_setDrawsOwnHighlight:(bool)arg1;
- (bool)containsEnd;
- (bool)containsStart;
- (id)description;
- (bool)isVertical;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setContainsEnd:(bool)arg1;
- (void)setContainsStart:(bool)arg1;
- (void)setIsVertical:(bool)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (void)setWritingDirection:(long long)arg1;
- (long long)writingDirection;

@end
