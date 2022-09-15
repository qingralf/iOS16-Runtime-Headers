/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptTapbackSupplementaryView : CKTranscriptCollectionSupplementaryView {
    CKAcknowledgmentBalloonView * _balloonView;
}

@property (nonatomic, retain) CKAcknowledgmentBalloonView *balloonView;

+ (id)supplementaryViewKindPrefix;

- (void).cxx_destruct;
- (id)balloonView;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBalloonView:(id)arg1;

@end