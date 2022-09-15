/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKThrowAnimationManager : NSObject <CKSendAnimationManager> {
    CKChatControllerDummyAnimator * _animator;
    CKSendAnimationContext * _currentContext;
    CKTranscriptNotifyAnywayButtonCell * _fakeNotifyAnywayButtonCell;
    CKTranscriptTypingIndicatorCell * _fakeTypingIndicatorCell;
    CKTranscriptUnavailabilityIndicatorCell * _fakeUnavailabilityIndicatorCell;
    <CKSendAnimationBalloonProvider> * _sendAnimationBalloonProvider;
    <CKSendAnimationManagerDelegate> * _sendAnimationManagerDelegate;
    UIView * _sendAnimationWindow;
    <CKThrowAnimationManagerDelegate> * _throwManagerDelegate;
}

@property (nonatomic, retain) CKChatControllerDummyAnimator *animator;
@property (nonatomic, retain) CKSendAnimationContext *currentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKTranscriptNotifyAnywayButtonCell *fakeNotifyAnywayButtonCell;
@property (nonatomic, retain) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell;
@property (nonatomic, retain) CKTranscriptUnavailabilityIndicatorCell *fakeUnavailabilityIndicatorCell;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CKSendAnimationBalloonProvider> *sendAnimationBalloonProvider;
@property (nonatomic) <CKSendAnimationManagerDelegate> *sendAnimationManagerDelegate;
@property (nonatomic, retain) UIView *sendAnimationWindow;
@property (readonly) Class superclass;
@property (nonatomic) <CKThrowAnimationManagerDelegate> *throwManagerDelegate;

- (void).cxx_destruct;
- (double)_changeInEntryViewHeight;
- (id)_collectionViewController;
- (id)_entryView;
- (void)_hideAddedChatItems;
- (long long)_lastMessageBubbleIndexInChatItems:(id)arg1;
- (void)_removeAllAnimations;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_sendMessageAndPinTranscript;
- (void)_setupFakeTypingAndUnavailabilityIndicatorsIfNecessary;
- (void)_setupThrowBalloonViews;
- (void)_setupThrowFrames;
- (void)_shiftFakeTypingIndicator;
- (void)_snapshotLiveBubbleIfNecessary;
- (bool)_transcriptWillShiftDueToThrowAnimation;
- (void)animateMessages:(id)arg1;
- (void)animationDidFinishWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animator;
- (struct CGPoint { double x1; double x2; })bestVisibleOffsetForBubbleAtIndex:(long long)arg1;
- (id)currentContext;
- (id)fakeNotifyAnywayButtonCell;
- (id)fakeTypingIndicatorCell;
- (id)fakeUnavailabilityIndicatorCell;
- (id)init;
- (id)lastVisibleCellOfType:(Class)arg1 inCollectionView:(id)arg2;
- (void)playSoundForPopAnimation;
- (void)popAnimationDidBegin;
- (id)sendAnimationBalloonProvider;
- (id)sendAnimationManagerDelegate;
- (id)sendAnimationWindow;
- (void)setAnimator:(id)arg1;
- (void)setCurrentContext:(id)arg1;
- (void)setFakeNotifyAnywayButtonCell:(id)arg1;
- (void)setFakeTypingIndicatorCell:(id)arg1;
- (void)setFakeUnavailabilityIndicatorCell:(id)arg1;
- (void)setSendAnimationBalloonProvider:(id)arg1;
- (void)setSendAnimationManagerDelegate:(id)arg1;
- (void)setSendAnimationWindow:(id)arg1;
- (void)setThrowManagerDelegate:(id)arg1;
- (id)throwManagerDelegate;

@end