/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFVariableAttachmentCell : NSObject <NSTextAttachmentCell> {
    WFVariableAttachment * _attachment;
    unsigned long long  _cachedImageControlState;
    UIFont * _cachedImageFont;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedImageSize;
    NSString * _cachedImageVariableName;
}

@property (nonatomic) WFVariableAttachment *attachment;
@property (nonatomic) unsigned long long cachedImageControlState;
@property (nonatomic, retain) UIFont *cachedImageFont;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedImageSize;
@property (nonatomic, copy) NSString *cachedImageVariableName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (id)attachment;
- (unsigned long long)cachedImageControlState;
- (id)cachedImageFont;
- (struct CGSize { double x1; double x2; })cachedImageSize;
- (id)cachedImageVariableName;
- (struct CGPoint { double x1; double x2; })cellBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (struct CGSize { double x1; double x2; })cellSize;
- (void)clearCachedImage;
- (unsigned long long)currentControlState;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)setAttachment:(id)arg1;
- (void)setCachedImageControlState:(unsigned long long)arg1;
- (void)setCachedImageFont:(id)arg1;
- (void)setCachedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedImageVariableName:(id)arg1;

@end