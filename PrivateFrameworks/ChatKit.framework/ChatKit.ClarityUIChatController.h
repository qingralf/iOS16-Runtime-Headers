/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface ChatKit.ClarityUIChatController : CKChatController {
    void clarityUIDelegate;
    void navigationBarTopInset;
    void sendCompositionPublisher;
    void sendCompositionPublisherSubscriber;
}

@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic, readonly) bool shouldDisplayTextEntry;

+ (Class)transcriptControllerClass;

- (void).cxx_destruct;
- (id)_actionsToolbar;
- (bool)_clickyOrbEnabled;
- (id)composition;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsWithoutPalette;
- (void)setComposition:(id)arg1;
- (bool)shouldDisplayTextEntry;

@end
