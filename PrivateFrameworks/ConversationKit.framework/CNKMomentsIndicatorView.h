/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKMomentsIndicatorView : UIView <CNKMomentsIndicatorBubbleDelegate> {
    NSMutableDictionary * _bubblesByType;
    long long  _displayStyle;
}

@property (nonatomic, retain) NSMutableDictionary *bubblesByType;
@property (nonatomic) long long displayStyle;

- (void).cxx_destruct;
- (id)bottomConstraintForBubble:(id)arg1 inBubbles:(id)arg2;
- (id)bottomConstraintForBubble:(id)arg1 style:(long long)arg2;
- (id)bubblesByType;
- (id)commonConstraintsForBubble:(id)arg1;
- (void)didTimeOutForMomentsIndicatorBubble:(id)arg1;
- (long long)displayStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)presentCaptureIndicatorWithType:(long long)arg1 forRemoteParticipantNamed:(id)arg2;
- (void)refreshLayout;
- (void)setBubblesByType:(id)arg1;
- (void)setDisplayStyle:(long long)arg1;

@end
