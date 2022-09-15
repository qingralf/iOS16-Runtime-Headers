/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSharedUI.framework/SiriSharedUI
 */

@interface SiriSharedUICompactView : SiriSharedUIStandardView <SiriSharedUIAccessibilityFocusing, SiriSharedUICompactConversationViewDelegate, SiriSharedUICompactResultViewDelegate, SiriSharedUIStackableContentActionHandling> {
    double  _bottomContentInset;
    NSLayoutConstraint * _conversationExpansionConstraint;
    NSArray * _conversationSnippetViews;
    <SiriSharedUICompactConversationViewHosting> * _conversationView;
    <SiriSharedUICompactViewDelegate> * _delegate;
    UIView * _fullScreenEffectContainerView;
    bool  _hidesTextRequestView;
    <SiriSharedUICompactResultViewHosting> * _resultView;
    NSArray * _serverUtterances;
    UIView * _textRequestView;
    NSLayoutConstraint * _textRequestViewBottomConstraint;
    SiriSharedUIRectSet * _transitionalContentViewFrames;
    <SiriSharedUIViewStackContainerHosting> * _viewStackContainer;
}

@property (nonatomic) double bottomContentInset;
@property (nonatomic, copy) NSArray *conversationSnippetViews;
@property (nonatomic, readonly) <SiriSharedUICompactConversationViewHosting> *conversationView;
@property (nonatomic) <SiriSharedUICompactViewDelegate> *delegate;
@property (nonatomic, readonly) double effectiveBottomContentInset;
@property (nonatomic) bool hidesTextRequestView;
@property (nonatomic, readonly) <SiriSharedUICompactResultViewHosting> *resultView;
@property (nonatomic, copy) NSArray *serverUtterances;
@property (nonatomic, readonly) SiriSharedUIContentPlatterView *snippetView;
@property (getter=_transitionalContentViewFrames, setter=_setTransitionalContentViewFrames:, nonatomic, copy) SiriSharedUIRectSet *transitionalContentViewFrames;
@property (nonatomic, readonly) <SiriSharedUIViewStackContainerHosting> *viewStackContainer;

- (void).cxx_destruct;
- (id)_analytics;
- (void)_clearTransitionalContentViewFrameSnapshots;
- (id)_instrumentationManager;
- (void)_setTransitionalContentViewFrames:(id)arg1;
- (void)_snapshotContentViewFramesForTransition;
- (void)_textRequestViewVisibilityDidChange;
- (id)_transitionalContentViewFrames;
- (void)_updateBottomPadding;
- (void)_updateBottomPaddingAnimatedWithContext:(id)arg1;
- (void)_updateBottomPaddingAnimatedWithContext:(id)arg1 alongsideAnimations:(id /* block */)arg2;
- (void)_updateExpansionConstraints:(bool)arg1;
- (bool)alwaysShowRecognizedSpeech;
- (double)bottomContentInset;
- (void)contentDidUpdate:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForResultView:(id)arg1;
- (id)conversationSnippetViews;
- (id)conversationView;
- (void)conversationView:(id)arg1 didUpdateHeightDuringExpansionTransition:(double)arg2 didCompleteGesture:(bool)arg3;
- (void)conversationView:(id)arg1 viewDidAppearForAceObject:(id)arg2;
- (void)conversationView:(id)arg1 viewDidDisappearForAceObject:(id)arg2;
- (void)conversationViewContentScrolled:(id)arg1 toContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })conversationViewContentSize;
- (void)conversationViewDidBeginExpandTransition:(id)arg1;
- (void)conversationViewDidResetExpandedState:(id)arg1;
- (void)conversationViewDidTransitionToCollapsedState:(id)arg1;
- (void)conversationViewDidTransitionToExpandedState:(id)arg1;
- (void)conversationViewDidUpdatePresentedContentHeight:(id)arg1;
- (bool)conversationViewShouldAlwaysShowSpeechFeedback:(id)arg1;
- (id)delegate;
- (void)didMoveToWindow;
- (double)effectiveBottomContentInset;
- (double)expectedExpandedHeightForConversationView:(id)arg1;
- (bool)hasContentAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hidesTextRequestView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundBlurView:(id)arg2 navigationView:(id)arg3 resultView:(id)arg4 conversationView:(id)arg5 textRequestView:(id)arg6 viewStackContainer:(id)arg7;
- (void)layoutSubviews;
- (double)maximumHeightForConversationView:(id)arg1;
- (double)maximumHeightForResultView:(id)arg1;
- (id)parserSpeakableObjectProviderForConversationView:(id)arg1;
- (void)prepareForUpdatesWithDiff:(unsigned long long)arg1 updateBlock:(id /* block */)arg2;
- (id)resultView;
- (void)resultViewContentDidLoad:(id)arg1;
- (void)resultViewContentDidScroll:(id)arg1;
- (void)resultViewContentScrolled:(id)arg1 toContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })resultViewContentSize;
- (void)resultViewDarkenedContentWasTapped:(id)arg1;
- (id)serverUtterances;
- (void)setBottomContentInset:(double)arg1;
- (void)setBottomContentInset:(double)arg1 animatedWithContext:(id)arg2;
- (void)setConversationSnippetViews:(id)arg1;
- (void)setConversationView:(id)arg1;
- (void)setConversationViewHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidesTextRequestView:(bool)arg1;
- (void)setResultView:(id)arg1;
- (void)setResultViewAlpha:(double)arg1;
- (void)setServerUtterances:(id)arg1;
- (void)setShowSnippetView:(bool)arg1 animated:(bool)arg2;
- (void)setSnippetView:(id)arg1 completion:(id /* block */)arg2;
- (void)setSpeechRecognitionHypothesis:(id)arg1;
- (void)showFullScreenEffect:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)snippetLayoutDidUpdateForView:(id)arg1;
- (id)snippetView;
- (void)tapToEditRequestedFromView:(id)arg1;
- (id)viewStackContainer;

@end