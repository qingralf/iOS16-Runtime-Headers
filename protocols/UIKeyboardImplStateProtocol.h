/* Generated by RuntimeBrowser.
 */

@protocol UIKeyboardImplStateProtocol <NSObject, UITextInputDelegate>

@required

- (void)clearInputForMarkedText;
- (void)didChangeForwardingInputDelegate:(UIResponder<UIKeyInput> *)arg1;
- (TIKeyboardState *)keyboardState;
- (void)setDocumentState:(TIDocumentState *)arg1;
- (void)setShouldIgnoreTextInputChanges:(bool)arg1;
- (void)setTextSelectionControllerFromDelegate;
- (bool)shouldIgnoreTextInputChanges;
- (void)syncDocumentStateToInputDelegate;
- (void)textSuggestionDidChange:(id <UITextInput>)arg1;
- (void)updateKeyboardStateForDeletion;
- (void)updateKeyboardStateForInsertion:(NSString *)arg1;
- (void)updateTextInputKeyboardSource;

@end
