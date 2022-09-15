/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit
 */

@interface PaperKit.TextBoxView : _TtGC8PaperKit17CanvasElementViewVS_7TextBox_ <UIFontPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate, UITextViewDelegate> {
    void cancellables;
    void containerView;
    void currentUndoAction;
    void didScribble;
    void layoutManager;
    void liveUneditedModelCoordinateSpace;
    void scribbleDebugView;
    void styleController;
    void textContainer;
    void textStorage;
    void textView;
}

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (void)breakUndoCoalescing:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)didMoveToWindow;
- (void)firstResponderDidChange:(id)arg1;
- (void)fontPickerViewControllerDidCancel:(id)arg1;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)layoutSubviews;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)resignFirstResponder;
- (void)setNeedsDisplay;
- (void)textFormat:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end